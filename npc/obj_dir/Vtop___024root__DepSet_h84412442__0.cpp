// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->rst_n)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst_n)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, CData/*7:0*/ rmask, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
    __Vfunc_pmem_read__3__Vfuncout = 0;
    // Body
    vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
    if (((IData)(vlSelf->top__DOT__LSU__DOT__MemWrite) 
         & (~ (IData)(vlSelf->top__DOT__LSU__DOT__MemRead)))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__LSU__DOT__alu_result, vlSelf->top__DOT__LSU__DOT__rs2, 
                                                               (0xffU 
                                                                & ((1U 
                                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                                                    ? 
                                                                   ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                                                    << 
                                                                    (3U 
                                                                     & vlSelf->top__DOT__LSU__DOT__alu_result))
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__wmask))
                                                                     ? 
                                                                    ((IData)(vlSelf->top__DOT__LSU__DOT__wmask) 
                                                                     << 
                                                                     (3U 
                                                                      & vlSelf->top__DOT__LSU__DOT__alu_result))
                                                                     : (IData)(vlSelf->top__DOT__LSU__DOT__wmask)))));
    }
    vlSelf->__Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 0U;
    if (((~ (IData)(vlSelf->top__DOT__LSU__DOT__MemWrite)) 
         & (IData)(vlSelf->top__DOT__LSU__DOT__MemRead))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__LSU__DOT__alu_result, (IData)(vlSelf->top__DOT__LSU__DOT__rmask), __Vfunc_pmem_read__3__Vfuncout);
        vlSelf->top__DOT__LSU__DOT__datamem_readdata 
            = __Vfunc_pmem_read__3__Vfuncout;
    } else {
        vlSelf->top__DOT__LSU__DOT__datamem_readdata = 0U;
    }
    if ((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))) {
        if ((0U != (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                          >> 0xcU)))) {
            if (((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0xcU))) | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xcU))))) {
                if (vlSelf->top__DOT__csr_write) {
                    if ((0x300U == (vlSelf->top__DOT__IDU__DOT__inst 
                                    >> 0x14U))) {
                        vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
                            = vlSelf->top__DOT__csr_wdata;
                    } else if ((0x305U != (vlSelf->top__DOT__IDU__DOT__inst 
                                           >> 0x14U))) {
                        if ((0x341U != (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))) {
                            if ((0x342U != (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U))) {
                                vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
                                    = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
                            }
                        }
                    }
                }
            } else {
                vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
                    = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
            }
        }
    } else {
        vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
            = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
    }
    if (((IData)(vlSelf->top__DOT__reg_write) & (0U 
                                                 != (IData)(vlSelf->top__DOT__waddr)))) {
        vlSelf->__Vdlyvval__top__DOT__Rgefile__DOT__rf__v0 
            = ((IData)(vlSelf->top__DOT__WBU__DOT__wb_src)
                ? vlSelf->top__DOT__WBU__DOT__mem_data
                : vlSelf->top__DOT__WBU__DOT__alu_result);
        vlSelf->__Vdlyvset__top__DOT__Rgefile__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0 
            = vlSelf->top__DOT__waddr;
    }
}

void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    // Body
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__IFU__DOT__pc, 0U, __Vfunc_pmem_read__2__Vfuncout);
    vlSelf->top__DOT__inst_from_mem = __Vfunc_pmem_read__2__Vfuncout;
    if (VL_UNLIKELY((0x100073U == vlSelf->top__DOT__inst_from_mem))) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit();
        VL_FINISH_MT("/home/yanlx/ysyx-workbench/npc/vsrc/top.v", 321, "");
    }
    vlSelf->top__DOT__IFU__DOT__pc = ((IData)(vlSelf->rst_n)
                                       ? vlSelf->top__DOT__IFU__DOT__npc
                                       : 0x80000000U);
}

void Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(IData/*31:0*/ gpr_0, IData/*31:0*/ gpr_1, IData/*31:0*/ gpr_2, IData/*31:0*/ gpr_3, IData/*31:0*/ gpr_4, IData/*31:0*/ gpr_5, IData/*31:0*/ gpr_6, IData/*31:0*/ gpr_7, IData/*31:0*/ gpr_8, IData/*31:0*/ gpr_9, IData/*31:0*/ gpr_10, IData/*31:0*/ gpr_11, IData/*31:0*/ gpr_12, IData/*31:0*/ gpr_13, IData/*31:0*/ gpr_14, IData/*31:0*/ gpr_15, IData/*31:0*/ gpr_16, IData/*31:0*/ gpr_17, IData/*31:0*/ gpr_18, IData/*31:0*/ gpr_19, IData/*31:0*/ gpr_20, IData/*31:0*/ gpr_21, IData/*31:0*/ gpr_22, IData/*31:0*/ gpr_23, IData/*31:0*/ gpr_24, IData/*31:0*/ gpr_25, IData/*31:0*/ gpr_26, IData/*31:0*/ gpr_27, IData/*31:0*/ gpr_28, IData/*31:0*/ gpr_29, IData/*31:0*/ gpr_30, IData/*31:0*/ gpr_31, IData/*31:0*/ pc, IData/*31:0*/ csr_reg_0, IData/*31:0*/ csr_reg_1, IData/*31:0*/ csr_reg_2, IData/*31:0*/ csr_reg_3);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus 
        = vlSelf->__Vdly__top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[1U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mstatus;
    if ((0x73U == (0x7fU & vlSelf->top__DOT__IDU__DOT__inst))) {
        if ((0U != (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                          >> 0xcU)))) {
            if (((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                               >> 0xcU))) | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__IDU__DOT__inst 
                                               >> 0xcU))))) {
                if (vlSelf->top__DOT__csr_write) {
                    if ((0x300U != (vlSelf->top__DOT__IDU__DOT__inst 
                                    >> 0x14U))) {
                        if ((0x305U == (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))) {
                            vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec 
                                = vlSelf->top__DOT__csr_wdata;
                        }
                    }
                }
            }
        }
        if ((0U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                          >> 0xcU)))) {
            if ((0x73U == vlSelf->top__DOT__IDU__DOT__inst)) {
                vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc 
                    = vlSelf->top__DOT__IDU__DOT__pc;
                vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause 
                    = vlSelf->top__DOT__Rgefile__DOT__rf
                    [0xfU];
            }
        } else if (((1U == (7U & (vlSelf->top__DOT__IDU__DOT__inst 
                                  >> 0xcU))) | (2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__IDU__DOT__inst 
                                                    >> 0xcU))))) {
            if (vlSelf->top__DOT__csr_write) {
                if ((0x300U != (vlSelf->top__DOT__IDU__DOT__inst 
                                >> 0x14U))) {
                    if ((0x305U != (vlSelf->top__DOT__IDU__DOT__inst 
                                    >> 0x14U))) {
                        if ((0x341U == (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))) {
                            vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc 
                                = vlSelf->top__DOT__csr_wdata;
                        }
                        if ((0x341U != (vlSelf->top__DOT__IDU__DOT__inst 
                                        >> 0x14U))) {
                            if ((0x342U == (vlSelf->top__DOT__IDU__DOT__inst 
                                            >> 0x14U))) {
                                vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause 
                                    = vlSelf->top__DOT__csr_wdata;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->__Vdlyvset__top__DOT__Rgefile__DOT__rf__v0) {
        vlSelf->top__DOT__Rgefile__DOT__rf[vlSelf->__Vdlyvdim0__top__DOT__Rgefile__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__top__DOT__Rgefile__DOT__rf__v0;
    }
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[3U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mtvec;
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[0U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mepc;
    vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg[2U] 
        = vlSelf->top__DOT__IDU__DOT__CSR__DOT__csr_mcause;
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[1U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[1U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[2U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[2U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[3U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[3U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[4U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[4U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[5U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[5U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[6U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[6U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[7U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[7U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[8U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[8U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[9U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[9U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xaU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xaU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xbU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xbU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xcU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xcU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xdU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xdU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xeU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xeU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0xfU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0xfU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x10U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x10U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x11U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x11U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x12U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x12U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x13U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x13U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x14U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x14U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x15U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x15U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x16U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x16U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x17U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x17U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x18U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x18U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x19U] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x19U];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1aU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1aU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1bU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1bU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1cU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1cU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1dU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1dU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1eU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1eU];
    vlSelf->top__DOT____Vcellout__Rgefile__reg_file[0x1fU] 
        = vlSelf->top__DOT__Rgefile__DOT__rf[0x1fU];
    vlSelf->top__DOT____Vcellout__IDU__csr_reg[3U] 
        = vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg
        [3U];
    vlSelf->top__DOT____Vcellout__IDU__csr_reg[2U] 
        = vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg
        [2U];
    vlSelf->top__DOT____Vcellout__IDU__csr_reg[1U] 
        = vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg
        [1U];
    vlSelf->top__DOT____Vcellout__IDU__csr_reg[0U] 
        = vlSelf->top__DOT__IDU__DOT____Vcellout__CSR__csr_reg
        [0U];
    vlSelf->top__DOT__reg_file[0x1fU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1fU];
    vlSelf->top__DOT__reg_file[0x1eU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1eU];
    vlSelf->top__DOT__reg_file[0x1dU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1dU];
    vlSelf->top__DOT__reg_file[0x1cU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1cU];
    vlSelf->top__DOT__reg_file[0x1bU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1bU];
    vlSelf->top__DOT__reg_file[0x1aU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x1aU];
    vlSelf->top__DOT__reg_file[0x19U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x19U];
    vlSelf->top__DOT__reg_file[0x18U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x18U];
    vlSelf->top__DOT__reg_file[0x17U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x17U];
    vlSelf->top__DOT__reg_file[0x16U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x16U];
    vlSelf->top__DOT__reg_file[0x15U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x15U];
    vlSelf->top__DOT__reg_file[0x14U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x14U];
    vlSelf->top__DOT__reg_file[0x13U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x13U];
    vlSelf->top__DOT__reg_file[0x12U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x12U];
    vlSelf->top__DOT__reg_file[0x11U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x11U];
    vlSelf->top__DOT__reg_file[0x10U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0x10U];
    vlSelf->top__DOT__reg_file[0xfU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xfU];
    vlSelf->top__DOT__reg_file[0xeU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xeU];
    vlSelf->top__DOT__reg_file[0xdU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xdU];
    vlSelf->top__DOT__reg_file[0xcU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xcU];
    vlSelf->top__DOT__reg_file[0xbU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xbU];
    vlSelf->top__DOT__reg_file[0xaU] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0xaU];
    vlSelf->top__DOT__reg_file[9U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [9U];
    vlSelf->top__DOT__reg_file[8U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [8U];
    vlSelf->top__DOT__reg_file[7U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [7U];
    vlSelf->top__DOT__reg_file[6U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [6U];
    vlSelf->top__DOT__reg_file[5U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [5U];
    vlSelf->top__DOT__reg_file[4U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [4U];
    vlSelf->top__DOT__reg_file[3U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [3U];
    vlSelf->top__DOT__reg_file[2U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [2U];
    vlSelf->top__DOT__reg_file[1U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [1U];
    vlSelf->top__DOT__reg_file[0U] = vlSelf->top__DOT____Vcellout__Rgefile__reg_file
        [0U];
    vlSelf->top__DOT__csr_reg[3U] = vlSelf->top__DOT____Vcellout__IDU__csr_reg
        [3U];
    vlSelf->top__DOT__csr_reg[2U] = vlSelf->top__DOT____Vcellout__IDU__csr_reg
        [2U];
    vlSelf->top__DOT__csr_reg[1U] = vlSelf->top__DOT____Vcellout__IDU__csr_reg
        [1U];
    vlSelf->top__DOT__csr_reg[0U] = vlSelf->top__DOT____Vcellout__IDU__csr_reg
        [0U];
    Vtop___024unit____Vdpiimwrap_reg_return_value_TOP____024unit(
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [1U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [2U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [3U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [4U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [5U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [6U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [7U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [8U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [9U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xaU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xbU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xcU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xdU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xeU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0xfU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x10U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x11U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x12U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x13U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x14U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x15U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x16U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x17U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x18U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x19U], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1aU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1bU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1cU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1dU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1eU], 
                                                                 vlSelf->top__DOT__reg_file
                                                                 [0x1fU], vlSelf->top__DOT__IFU__DOT__pc, 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [0U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [1U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [2U], 
                                                                 vlSelf->top__DOT__csr_reg
                                                                 [3U]);
}
