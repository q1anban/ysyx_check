// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnpc.h"
#include "Vnpc__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vnpc::Vnpc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnpc__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , we{vlSymsp->TOP.we}
    , inst{vlSymsp->TOP.inst}
    , rdata{vlSymsp->TOP.rdata}
    , pc{vlSymsp->TOP.pc}
    , raddr{vlSymsp->TOP.raddr}
    , waddr{vlSymsp->TOP.waddr}
    , wdata{vlSymsp->TOP.wdata}
    , npc{vlSymsp->TOP.npc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vnpc::Vnpc(const char* _vcname__)
    : Vnpc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnpc::~Vnpc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnpc___024root___eval_debug_assertions(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
void Vnpc___024root___eval_static(Vnpc___024root* vlSelf);
void Vnpc___024root___eval_initial(Vnpc___024root* vlSelf);
void Vnpc___024root___eval_settle(Vnpc___024root* vlSelf);
void Vnpc___024root___eval(Vnpc___024root* vlSelf);

void Vnpc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnpc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnpc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnpc___024root___eval_static(&(vlSymsp->TOP));
        Vnpc___024root___eval_initial(&(vlSymsp->TOP));
        Vnpc___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnpc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnpc::eventsPending() { return false; }

uint64_t Vnpc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vnpc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnpc___024root___eval_final(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc::final() {
    Vnpc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnpc::hierName() const { return vlSymsp->name(); }
const char* Vnpc::modelName() const { return "Vnpc"; }
unsigned Vnpc::threads() const { return 1; }
