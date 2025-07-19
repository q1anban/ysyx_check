// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC___024ROOT_H_
#define VERILATED_VNPC___024ROOT_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_npc;


class Vnpc___024root final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_npc* npc;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(we,3,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    VL_IN(rdata,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(raddr,31,0);
    VL_OUT(waddr,31,0);
    VL_OUT(wdata,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc___024root(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc___024root();
    VL_UNCOPYABLE(Vnpc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
