// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "verilated.h"

#include "Vregfile__Syms.h"
#include "Vregfile___024root.h"

void Vregfile___024root___ctor_var_reset(Vregfile___024root* vlSelf);

Vregfile___024root::Vregfile___024root(Vregfile__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregfile___024root___ctor_var_reset(this);
}

void Vregfile___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vregfile___024root::~Vregfile___024root() {
}
