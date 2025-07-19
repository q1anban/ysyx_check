// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__stl(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnpc___024root___eval_triggers__stl(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnpc___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vnpc___024root___nba_sequent__TOP__0(Vnpc___024root* vlSelf);
void Vnpc_npc___ico_sequent__TOP__npc__0(Vnpc_npc* vlSelf);
void Vnpc_regfile___ico_sequent__TOP__npc__u_regfile__0(Vnpc_regfile* vlSelf);
void Vnpc_npc___ico_sequent__TOP__npc__1(Vnpc_npc* vlSelf);
void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc___024root___eval_stl(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vnpc___024root___nba_sequent__TOP__0(vlSelf);
        Vnpc_npc___ico_sequent__TOP__npc__0((&vlSymsp->TOP__npc));
        Vnpc_regfile___ico_sequent__TOP__npc__u_regfile__0((&vlSymsp->TOP__npc__u_regfile));
        Vnpc_npc___ico_sequent__TOP__npc__1((&vlSymsp->TOP__npc));
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
    }
}
