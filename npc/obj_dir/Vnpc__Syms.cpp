// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vnpc__Syms.h"
#include "Vnpc.h"
#include "Vnpc___024root.h"
#include "Vnpc_npc.h"
#include "Vnpc_regfile.h"

// FUNCTIONS
Vnpc__Syms::~Vnpc__Syms()
{
}

Vnpc__Syms::Vnpc__Syms(VerilatedContext* contextp, const char* namep, Vnpc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__npc{this, Verilated::catName(namep, "npc")}
    , TOP__npc__u_regfile{this, Verilated::catName(namep, "npc.u_regfile")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.npc = &TOP__npc;
    TOP__npc.u_regfile = &TOP__npc__u_regfile;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__npc.__Vconfigure(true);
    TOP__npc__u_regfile.__Vconfigure(true);
    // Setup scopes
    __Vscope_npc__u_regfile.configure(this, name(), "npc.u_regfile", "u_regfile", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_npc__u_regfile.varInsert(__Vfinal,"regs", &(TOP__npc__u_regfile.regs), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
    }
}
