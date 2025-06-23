// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*1:0*/ top__DOT__b_in_src;
    CData/*0:0*/ top__DOT__a_in_src;
    CData/*0:0*/ top__DOT__adder_a_src;
    CData/*0:0*/ top__DOT__reg_write;
    CData/*3:0*/ top__DOT__alu_op;
    CData/*0:0*/ top__DOT__pc_srcs;
    CData/*0:0*/ top__DOT__mem_read;
    CData/*0:0*/ top__DOT__mem_write;
    CData/*7:0*/ top__DOT__wmask;
    CData/*0:0*/ top__DOT__wb_src;
    CData/*2:0*/ top__DOT__rmask;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__inst;
    IData/*31:0*/ top__DOT__imm;
    IData/*31:0*/ top__DOT__rs1;
    IData/*31:0*/ top__DOT__a_in;
    IData/*31:0*/ top__DOT__b_in;
    IData/*31:0*/ top__DOT__alu_result;
    IData/*31:0*/ top__DOT__npc;
    IData/*31:0*/ top__DOT__datamem_readdata;
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__reg_file;
    VlUnpacked<IData/*31:0*/, 32> top__DOT____Vcellout__Rgefile__reg_file;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__Rgefile__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
