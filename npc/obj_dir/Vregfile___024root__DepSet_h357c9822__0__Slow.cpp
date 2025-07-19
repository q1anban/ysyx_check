// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "verilated.h"

#include "Vregfile___024root.h"

VL_ATTR_COLD void Vregfile___024root___eval_static(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vregfile___024root___eval_initial(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vregfile___024root___eval_final(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vregfile___024root___eval_triggers__stl(Vregfile___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__stl(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___eval_stl(Vregfile___024root* vlSelf);

VL_ATTR_COLD void Vregfile___024root___eval_settle(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vregfile___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vregfile___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/fetter/ysyx-workbench/npc/vsrc/npc.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vregfile___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__stl(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vregfile___024root___ico_sequent__TOP__0(Vregfile___024root* vlSelf);

VL_ATTR_COLD void Vregfile___024root___eval_stl(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vregfile___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__ico(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__act(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__nba(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregfile___024root___ctor_var_reset(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->raddr = VL_RAND_RESET_I(32);
    vlSelf->waddr = VL_RAND_RESET_I(32);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->we = VL_RAND_RESET_I(4);
    vlSelf->npc__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__reg_data = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__imm12 = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__rv_add = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_and = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_or = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_sll = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_slt = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_sltu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_sra = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_srl = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_sub = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_xor = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_addi = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_andi = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_jalr = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_lb = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_lbu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_lh = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_lhu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_lw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_ori = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_slti = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_sltiu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_xori = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_auipc = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_lui = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__rv_jal = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT____VdfgTmp_h6f017a27__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h6f3d7cd2__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h11045fbe__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h72adcbfc__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h974dc604__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_hce4ae4cb__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h0b67bdd4__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_hf3fc77e0__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h604cd171__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h9773a910__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h3dac9c98__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_hb58cf43d__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h416e416b__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_h0990615e__0 = 0;
    vlSelf->npc__DOT____VdfgTmp_hb90cc610__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->npc__DOT__u_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
}
