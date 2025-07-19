// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_regfile.h"

VL_ATTR_COLD void Vnpc_regfile___ctor_var_reset(Vnpc_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_regfile___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__we = 0;
    vlSelf->__PVT__waddr = 0;
    vlSelf->__PVT__wdata = 0;
    vlSelf->__PVT__raddr1 = 0;
    vlSelf->__PVT__raddr2 = 0;
    vlSelf->__PVT__rdata1 = 0;
    vlSelf->__PVT__rdata2 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regs[__Vi0] = 0;
    }
}
