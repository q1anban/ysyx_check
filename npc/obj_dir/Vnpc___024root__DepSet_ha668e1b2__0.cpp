// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__ico(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG

void Vnpc___024root___eval_triggers__ico(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnpc___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->waddr = vlSymsp->TOP__npc.waddr;
    vlSelf->wdata = (vlSymsp->TOP__npc__u_regfile.__PVT__rdata2 
                     << (3U & vlSymsp->TOP__npc.waddr));
    vlSelf->we = (0xfU & ((- (IData)(((IData)(vlSymsp->TOP__npc.__VdfgTmp_h0990615e__0) 
                                      & (IData)(vlSymsp->TOP__npc.__VdfgTmp_h416e416b__0)))) 
                          | (((3U & (- (IData)(((IData)(vlSymsp->TOP__npc.__VdfgTmp_h974dc604__0) 
                                                & (IData)(vlSymsp->TOP__npc.__VdfgTmp_h416e416b__0))))) 
                              | (1U & (- (IData)(((IData)(vlSymsp->TOP__npc.__VdfgTmp_hb58cf43d__0) 
                                                  & (IData)(vlSymsp->TOP__npc.__VdfgTmp_h416e416b__0)))))) 
                             << (3U & vlSymsp->TOP__npc.waddr))));
    vlSelf->raddr = (((IData)(vlSymsp->TOP__npc.__PVT__rv_lb) 
                      | ((IData)(vlSymsp->TOP__npc.__PVT__rv_lbu) 
                         | ((IData)(vlSymsp->TOP__npc.__PVT__rv_lh) 
                            | ((IData)(vlSymsp->TOP__npc.__PVT__rv_lhu) 
                               | (IData)(vlSymsp->TOP__npc.__PVT__rv_lw)))))
                      ? vlSymsp->TOP__npc.__PVT__addi_result
                      : 0U);
}

void Vnpc_npc___ico_sequent__TOP__npc__0(Vnpc_npc* vlSelf);
void Vnpc_regfile___ico_sequent__TOP__npc__u_regfile__0(Vnpc_regfile* vlSelf);
void Vnpc_npc___ico_sequent__TOP__npc__1(Vnpc_npc* vlSelf);

void Vnpc___024root___eval_ico(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vnpc_npc___ico_sequent__TOP__npc__0((&vlSymsp->TOP__npc));
        Vnpc_regfile___ico_sequent__TOP__npc__u_regfile__0((&vlSymsp->TOP__npc__u_regfile));
        Vnpc_npc___ico_sequent__TOP__npc__1((&vlSymsp->TOP__npc));
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__act(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG

void Vnpc___024root___eval_triggers__act(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnpc___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->pc = vlSymsp->TOP__npc.pc;
}

void Vnpc_regfile___nba_sequent__TOP__npc__u_regfile__0(Vnpc_regfile* vlSelf);
void Vnpc_npc___nba_sequent__TOP__npc__0(Vnpc_npc* vlSelf);
void Vnpc_npc___nba_sequent__TOP__npc__1(Vnpc_npc* vlSelf);
void Vnpc_npc___nba_comb__TOP__npc__0(Vnpc_npc* vlSelf);

void Vnpc___024root___eval_nba(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vnpc_regfile___nba_sequent__TOP__npc__u_regfile__0((&vlSymsp->TOP__npc__u_regfile));
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vnpc_npc___nba_sequent__TOP__npc__0((&vlSymsp->TOP__npc));
        Vnpc___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vnpc_regfile___ico_sequent__TOP__npc__u_regfile__0((&vlSymsp->TOP__npc__u_regfile));
        Vnpc_npc___nba_sequent__TOP__npc__1((&vlSymsp->TOP__npc));
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vnpc_npc___nba_comb__TOP__npc__0((&vlSymsp->TOP__npc));
    }
}
