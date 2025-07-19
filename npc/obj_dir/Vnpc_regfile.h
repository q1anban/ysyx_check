// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_REGFILE_H_
#define VERILATED_VNPC_REGFILE_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_regfile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__we,0,0);
    VL_IN8(__PVT__waddr,4,0);
    VL_IN8(__PVT__raddr1,4,0);
    VL_IN8(__PVT__raddr2,4,0);
    VL_IN(__PVT__wdata,31,0);
    VL_OUT(__PVT__rdata1,31,0);
    VL_OUT(__PVT__rdata2,31,0);
    VlUnpacked<IData/*31:0*/, 32> regs;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_regfile(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_regfile();
    VL_UNCOPYABLE(Vnpc_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
