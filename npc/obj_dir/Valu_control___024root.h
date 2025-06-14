// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_control.h for the primary calling header

#ifndef VERILATED_VALU_CONTROL___024ROOT_H_
#define VERILATED_VALU_CONTROL___024ROOT_H_  // guard

#include "verilated.h"

class Valu_control__Syms;
class Valu_control___024unit;


class Valu_control___024root final : public VerilatedModule {
  public:
    // CELLS
    Valu_control___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*1:0*/ top__DOT__b_in_src;
    CData/*0:0*/ top__DOT__a_in_src;
    CData/*0:0*/ top__DOT__adder_a_src;
    CData/*0:0*/ top__DOT__reg_write;
    CData/*3:0*/ top__DOT__alu_op;
    CData/*0:0*/ top__DOT__pc_srcs;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    VL_IN(inst,31,0);
    VL_OUT(datamem_addr,31,0);
    VL_IN(datamem_data,31,0);
    IData/*31:0*/ top__DOT__imm;
    IData/*31:0*/ top__DOT__rs1;
    IData/*31:0*/ top__DOT__a_in;
    IData/*31:0*/ top__DOT__b_in;
    IData/*31:0*/ top__DOT__alu_result;
    IData/*31:0*/ top__DOT__npc;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__Rgefile__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu_control__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_control___024root(Valu_control__Syms* symsp, const char* v__name);
    ~Valu_control___024root();
    VL_UNCOPYABLE(Valu_control___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
