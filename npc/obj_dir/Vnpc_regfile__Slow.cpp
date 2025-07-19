// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_regfile.h"

void Vnpc_regfile___ctor_var_reset(Vnpc_regfile* vlSelf);

Vnpc_regfile::Vnpc_regfile(Vnpc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnpc_regfile___ctor_var_reset(this);
}

void Vnpc_regfile::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vnpc_regfile::~Vnpc_regfile() {
}
