// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_npc.h"

void Vnpc_npc___ctor_var_reset(Vnpc_npc* vlSelf);

Vnpc_npc::Vnpc_npc(Vnpc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnpc_npc___ctor_var_reset(this);
}

void Vnpc_npc::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vnpc_npc::~Vnpc_npc() {
}
