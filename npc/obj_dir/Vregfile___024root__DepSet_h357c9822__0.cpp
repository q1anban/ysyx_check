// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "verilated.h"

#include "Vregfile___024root.h"

VL_INLINE_OPT void Vregfile___024root___ico_sequent__TOP__0(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ npc__DOT____VdfgTmp_hc4cfd6ec__0;
    npc__DOT____VdfgTmp_hc4cfd6ec__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hc2c0bd06__0;
    npc__DOT____VdfgTmp_hc2c0bd06__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_ha50a0299__0;
    npc__DOT____VdfgTmp_ha50a0299__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h56cc8969__0;
    npc__DOT____VdfgTmp_h56cc8969__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h3fc695a4__0;
    npc__DOT____VdfgTmp_h3fc695a4__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h21dc6972__0;
    npc__DOT____VdfgTmp_h21dc6972__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h53f3cb74__0;
    npc__DOT____VdfgTmp_h53f3cb74__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h17f0ee5a__0;
    npc__DOT____VdfgTmp_h17f0ee5a__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_haf5ae60a__0;
    npc__DOT____VdfgTmp_haf5ae60a__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hcaeee01a__0;
    npc__DOT____VdfgTmp_hcaeee01a__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hbcfda891__0;
    npc__DOT____VdfgTmp_hbcfda891__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_he944aefe__0;
    npc__DOT____VdfgTmp_he944aefe__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hb0c1e8cc__0;
    npc__DOT____VdfgTmp_hb0c1e8cc__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h7302b949__0;
    npc__DOT____VdfgTmp_h7302b949__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h135e74e9__0;
    npc__DOT____VdfgTmp_h135e74e9__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h6d948994__0;
    npc__DOT____VdfgTmp_h6d948994__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hdbda837e__0;
    npc__DOT____VdfgTmp_hdbda837e__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hf1a60b73__0;
    npc__DOT____VdfgTmp_hf1a60b73__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_heceab2b6__0;
    npc__DOT____VdfgTmp_heceab2b6__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h12f128ed__0;
    npc__DOT____VdfgTmp_h12f128ed__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h6a255277__0;
    npc__DOT____VdfgTmp_h6a255277__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h65d9f3b3__0;
    npc__DOT____VdfgTmp_h65d9f3b3__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h69aaeabb__0;
    npc__DOT____VdfgTmp_h69aaeabb__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hc8217591__0;
    npc__DOT____VdfgTmp_hc8217591__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h6fc4c6af__0;
    npc__DOT____VdfgTmp_h6fc4c6af__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h5b6b8ed1__0;
    npc__DOT____VdfgTmp_h5b6b8ed1__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hbfc8b3b4__0;
    npc__DOT____VdfgTmp_hbfc8b3b4__0 = 0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h3bbca6f0__0;
    npc__DOT____VdfgTmp_h3bbca6f0__0 = 0;
    IData/*31:0*/ __VdfgTmp_h006b770f__0;
    __VdfgTmp_h006b770f__0 = 0;
    // Body
    vlSelf->npc__DOT__imm12 = (((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->inst 
                                            >> 0x14U));
    npc__DOT____VdfgTmp_hbfc8b3b4__0 = (IData)((0x6000U 
                                                == 
                                                (0x6000U 
                                                 & vlSelf->inst)));
    npc__DOT____VdfgTmp_h3bbca6f0__0 = (IData)((0x4000U 
                                                == 
                                                (0x6000U 
                                                 & vlSelf->inst)));
    npc__DOT____VdfgTmp_h6d948994__0 = (IData)((0x2000U 
                                                == 
                                                (0x6000U 
                                                 & vlSelf->inst)));
    __VdfgTmp_h006b770f__0 = vlSelf->npc__DOT__u_regfile__DOT__regs
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->npc__DOT__src1 = ((0U == (0x1fU & (vlSelf->inst 
                                               >> 0xfU)))
                               ? 0U : vlSelf->npc__DOT__u_regfile__DOT__regs
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))]);
    npc__DOT____VdfgTmp_h6fc4c6af__0 = (IData)((0U 
                                                == 
                                                (0x6000U 
                                                 & vlSelf->inst)));
    npc__DOT____VdfgTmp_heceab2b6__0 = (1U & ((~ (vlSelf->inst 
                                                  >> 0x1dU)) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1e000000U 
                                                             & vlSelf->inst))))));
    npc__DOT____VdfgTmp_h69aaeabb__0 = (IData)((3U 
                                                == 
                                                (3U 
                                                 & vlSelf->inst)));
    vlSelf->npc__DOT____VdfgTmp_h72adcbfc__0 = ((IData)(npc__DOT____VdfgTmp_hbfc8b3b4__0) 
                                                & (vlSelf->inst 
                                                   >> 0xcU));
    vlSelf->npc__DOT____VdfgTmp_h0b67bdd4__0 = ((~ 
                                                 (vlSelf->inst 
                                                  >> 0xcU)) 
                                                & (IData)(npc__DOT____VdfgTmp_hbfc8b3b4__0));
    vlSelf->npc__DOT____VdfgTmp_hce4ae4cb__0 = ((IData)(npc__DOT____VdfgTmp_h3bbca6f0__0) 
                                                & (vlSelf->inst 
                                                   >> 0xcU));
    vlSelf->npc__DOT____VdfgTmp_h9773a910__0 = ((~ 
                                                 (vlSelf->inst 
                                                  >> 0xcU)) 
                                                & (IData)(npc__DOT____VdfgTmp_h3bbca6f0__0));
    vlSelf->npc__DOT____VdfgTmp_h0990615e__0 = ((IData)(npc__DOT____VdfgTmp_h6d948994__0) 
                                                & (IData)(
                                                          (0U 
                                                           == 
                                                           (0x1040U 
                                                            & vlSelf->inst))));
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->npc__DOT____VdfgTmp_hb90cc610__0 = 0U;
        vlSelf->npc__DOT__src2 = 0U;
    } else {
        vlSelf->npc__DOT____VdfgTmp_hb90cc610__0 = 
            (0x1fU & __VdfgTmp_h006b770f__0);
        vlSelf->npc__DOT__src2 = __VdfgTmp_h006b770f__0;
    }
    vlSelf->waddr = (vlSelf->npc__DOT__src1 + (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 7U)))));
    vlSelf->raddr = (vlSelf->npc__DOT__src1 + vlSelf->npc__DOT__imm12);
    vlSelf->npc__DOT____VdfgTmp_h3dac9c98__0 = ((IData)(npc__DOT____VdfgTmp_h6fc4c6af__0) 
                                                & (vlSelf->inst 
                                                   >> 0xcU));
    npc__DOT____VdfgTmp_h5b6b8ed1__0 = ((~ (vlSelf->inst 
                                            >> 0xcU)) 
                                        & (IData)(npc__DOT____VdfgTmp_h6fc4c6af__0));
    npc__DOT____VdfgTmp_h53f3cb74__0 = (IData)(((0x40000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSelf->inst)) 
                                                & (IData)(npc__DOT____VdfgTmp_heceab2b6__0)));
    npc__DOT____VdfgTmp_hf1a60b73__0 = (IData)(((0U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSelf->inst)) 
                                                & (IData)(npc__DOT____VdfgTmp_heceab2b6__0)));
    npc__DOT____VdfgTmp_hc4cfd6ec__0 = ((vlSelf->inst 
                                         >> 2U) & (IData)(npc__DOT____VdfgTmp_h69aaeabb__0));
    vlSelf->npc__DOT____VdfgTmp_hf3fc77e0__0 = ((~ 
                                                 (vlSelf->inst 
                                                  >> 2U)) 
                                                & (IData)(npc__DOT____VdfgTmp_h69aaeabb__0));
    npc__DOT____VdfgTmp_hb0c1e8cc__0 = ((IData)(vlSelf->npc__DOT____VdfgTmp_h9773a910__0) 
                                        & (IData)((0U 
                                                   == 
                                                   (0x60U 
                                                    & vlSelf->inst))));
    npc__DOT____VdfgTmp_h135e74e9__0 = ((~ (vlSelf->inst 
                                            >> 5U)) 
                                        & (IData)(vlSelf->npc__DOT____VdfgTmp_h0990615e__0));
    vlSelf->npc__DOT____VdfgTmp_h6f017a27__0 = VL_LTS_III(32, vlSelf->npc__DOT__src1, vlSelf->npc__DOT__src2);
    vlSelf->npc__DOT____VdfgTmp_h6f3d7cd2__0 = (vlSelf->npc__DOT__src1 
                                                < vlSelf->npc__DOT__src2);
    vlSelf->wdata = (vlSelf->npc__DOT__src2 << (0x18U 
                                                & (vlSelf->waddr 
                                                   << 3U)));
    vlSelf->npc__DOT____VdfgTmp_h974dc604__0 = ((~ 
                                                 (vlSelf->inst 
                                                  >> 6U)) 
                                                & (IData)(vlSelf->npc__DOT____VdfgTmp_h3dac9c98__0));
    vlSelf->npc__DOT____VdfgTmp_h11045fbe__0 = ((IData)(npc__DOT____VdfgTmp_h5b6b8ed1__0) 
                                                & (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x78U 
                                                            & vlSelf->inst))));
    vlSelf->npc__DOT____VdfgTmp_hb58cf43d__0 = ((~ 
                                                 (vlSelf->inst 
                                                  >> 6U)) 
                                                & (IData)(npc__DOT____VdfgTmp_h5b6b8ed1__0));
    npc__DOT____VdfgTmp_h12f128ed__0 = ((~ (vlSelf->inst 
                                            >> 0xeU)) 
                                        & (IData)(npc__DOT____VdfgTmp_hf1a60b73__0));
    npc__DOT____VdfgTmp_hc8217591__0 = ((IData)(npc__DOT____VdfgTmp_hf1a60b73__0) 
                                        & (vlSelf->inst 
                                           >> 0xeU));
    vlSelf->npc__DOT__rv_jal = (IData)(((0x68U == (0x78U 
                                                   & vlSelf->inst)) 
                                        & (IData)(npc__DOT____VdfgTmp_hc4cfd6ec__0)));
    npc__DOT____VdfgTmp_hdbda837e__0 = (IData)(((0x10U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->inst)) 
                                                & (IData)(npc__DOT____VdfgTmp_hc4cfd6ec__0)));
    npc__DOT____VdfgTmp_h65d9f3b3__0 = ((~ (vlSelf->inst 
                                            >> 3U)) 
                                        & (IData)(vlSelf->npc__DOT____VdfgTmp_hf3fc77e0__0));
    vlSelf->npc__DOT__rv_jalr = ((IData)(vlSelf->npc__DOT____VdfgTmp_h11045fbe__0) 
                                 & (IData)(npc__DOT____VdfgTmp_hc4cfd6ec__0));
    npc__DOT____VdfgTmp_haf5ae60a__0 = ((~ (vlSelf->inst 
                                            >> 5U)) 
                                        & (IData)(vlSelf->npc__DOT____VdfgTmp_hb58cf43d__0));
    npc__DOT____VdfgTmp_hc2c0bd06__0 = ((~ (vlSelf->inst 
                                            >> 0xdU)) 
                                        & (IData)(npc__DOT____VdfgTmp_h12f128ed__0));
    npc__DOT____VdfgTmp_h21dc6972__0 = ((IData)(npc__DOT____VdfgTmp_h12f128ed__0) 
                                        & (vlSelf->inst 
                                           >> 0xdU));
    npc__DOT____VdfgTmp_h56cc8969__0 = ((IData)(npc__DOT____VdfgTmp_hc8217591__0) 
                                        & (vlSelf->inst 
                                           >> 0xdU));
    npc__DOT____VdfgTmp_h17f0ee5a__0 = ((~ (vlSelf->inst 
                                            >> 0xdU)) 
                                        & (IData)(npc__DOT____VdfgTmp_hc8217591__0));
    vlSelf->npc__DOT__rv_auipc = (IData)(((0U == (0x60U 
                                                  & vlSelf->inst)) 
                                          & (IData)(npc__DOT____VdfgTmp_hdbda837e__0)));
    vlSelf->npc__DOT__rv_lui = (IData)(((0x20U == (0x60U 
                                                   & vlSelf->inst)) 
                                        & (IData)(npc__DOT____VdfgTmp_hdbda837e__0)));
    npc__DOT____VdfgTmp_he944aefe__0 = ((~ (vlSelf->inst 
                                            >> 4U)) 
                                        & (IData)(npc__DOT____VdfgTmp_h65d9f3b3__0));
    npc__DOT____VdfgTmp_hcaeee01a__0 = ((vlSelf->inst 
                                         >> 4U) & (IData)(npc__DOT____VdfgTmp_h65d9f3b3__0));
    vlSelf->npc__DOT____VdfgTmp_h416e416b__0 = ((vlSelf->inst 
                                                 >> 5U) 
                                                & (IData)(npc__DOT____VdfgTmp_he944aefe__0));
    vlSelf->npc__DOT__rv_lb = ((IData)(npc__DOT____VdfgTmp_haf5ae60a__0) 
                               & (IData)(npc__DOT____VdfgTmp_he944aefe__0));
    vlSelf->npc__DOT__rv_lbu = ((IData)(npc__DOT____VdfgTmp_hb0c1e8cc__0) 
                                & (IData)(npc__DOT____VdfgTmp_he944aefe__0));
    vlSelf->npc__DOT__rv_lw = ((IData)(npc__DOT____VdfgTmp_h135e74e9__0) 
                               & (IData)(npc__DOT____VdfgTmp_he944aefe__0));
    npc__DOT____VdfgTmp_h7302b949__0 = ((~ (vlSelf->inst 
                                            >> 5U)) 
                                        & (IData)(npc__DOT____VdfgTmp_he944aefe__0));
    vlSelf->npc__DOT__rv_addi = ((IData)(npc__DOT____VdfgTmp_haf5ae60a__0) 
                                 & (IData)(npc__DOT____VdfgTmp_hcaeee01a__0));
    vlSelf->npc__DOT__rv_slti = ((IData)(npc__DOT____VdfgTmp_h135e74e9__0) 
                                 & (IData)(npc__DOT____VdfgTmp_hcaeee01a__0));
    vlSelf->npc__DOT__rv_xori = ((IData)(npc__DOT____VdfgTmp_hb0c1e8cc__0) 
                                 & (IData)(npc__DOT____VdfgTmp_hcaeee01a__0));
    npc__DOT____VdfgTmp_hbcfda891__0 = (IData)(((0U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->inst)) 
                                                & (IData)(npc__DOT____VdfgTmp_hcaeee01a__0)));
    npc__DOT____VdfgTmp_h6a255277__0 = (IData)(((0x20U 
                                                 == 
                                                 (0x60U 
                                                  & vlSelf->inst)) 
                                                & (IData)(npc__DOT____VdfgTmp_hcaeee01a__0)));
    vlSelf->npc__DOT____VdfgTmp_h604cd171__0 = ((vlSelf->inst 
                                                 >> 6U) 
                                                & (IData)(vlSelf->npc__DOT____VdfgTmp_h416e416b__0));
    vlSelf->we = (0xfU & ((- (IData)(((IData)(vlSelf->npc__DOT____VdfgTmp_h0990615e__0) 
                                      & (IData)(vlSelf->npc__DOT____VdfgTmp_h416e416b__0)))) 
                          | (((3U & (- (IData)(((IData)(vlSelf->npc__DOT____VdfgTmp_h974dc604__0) 
                                                & (IData)(vlSelf->npc__DOT____VdfgTmp_h416e416b__0))))) 
                              | (1U & (- (IData)(((IData)(vlSelf->npc__DOT____VdfgTmp_hb58cf43d__0) 
                                                  & (IData)(vlSelf->npc__DOT____VdfgTmp_h416e416b__0)))))) 
                             << (0x18U & (vlSelf->waddr 
                                          << 3U)))));
    vlSelf->npc__DOT__rv_lh = ((IData)(vlSelf->npc__DOT____VdfgTmp_h974dc604__0) 
                               & (IData)(npc__DOT____VdfgTmp_h7302b949__0));
    vlSelf->npc__DOT__rv_lhu = ((IData)(vlSelf->npc__DOT____VdfgTmp_hce4ae4cb__0) 
                                & ((~ (vlSelf->inst 
                                       >> 6U)) & (IData)(npc__DOT____VdfgTmp_h7302b949__0)));
    vlSelf->npc__DOT__rv_andi = ((IData)(vlSelf->npc__DOT____VdfgTmp_h72adcbfc__0) 
                                 & (IData)(npc__DOT____VdfgTmp_hbcfda891__0));
    vlSelf->npc__DOT__rv_ori = ((IData)(vlSelf->npc__DOT____VdfgTmp_h0b67bdd4__0) 
                                & (IData)(npc__DOT____VdfgTmp_hbcfda891__0));
    vlSelf->npc__DOT__rv_sltiu = ((IData)(npc__DOT____VdfgTmp_h6d948994__0) 
                                  & ((vlSelf->inst 
                                      >> 0xcU) & (IData)(npc__DOT____VdfgTmp_hbcfda891__0)));
    npc__DOT____VdfgTmp_ha50a0299__0 = ((~ (vlSelf->inst 
                                            >> 0xcU)) 
                                        & (IData)(npc__DOT____VdfgTmp_h6a255277__0));
    npc__DOT____VdfgTmp_h3fc695a4__0 = ((vlSelf->inst 
                                         >> 0xcU) & (IData)(npc__DOT____VdfgTmp_h6a255277__0));
    vlSelf->npc__DOT__rv_add = ((IData)(npc__DOT____VdfgTmp_hc2c0bd06__0) 
                                & (IData)(npc__DOT____VdfgTmp_ha50a0299__0));
    vlSelf->npc__DOT__rv_or = ((IData)(npc__DOT____VdfgTmp_h56cc8969__0) 
                               & (IData)(npc__DOT____VdfgTmp_ha50a0299__0));
    vlSelf->npc__DOT__rv_slt = ((IData)(npc__DOT____VdfgTmp_h21dc6972__0) 
                                & (IData)(npc__DOT____VdfgTmp_ha50a0299__0));
    vlSelf->npc__DOT__rv_xor = ((IData)(npc__DOT____VdfgTmp_h17f0ee5a__0) 
                                & (IData)(npc__DOT____VdfgTmp_ha50a0299__0));
    vlSelf->npc__DOT__rv_sub = ((IData)(npc__DOT____VdfgTmp_h53f3cb74__0) 
                                & (IData)(((0U == (0x6000U 
                                                   & vlSelf->inst)) 
                                           & (IData)(npc__DOT____VdfgTmp_ha50a0299__0))));
    vlSelf->npc__DOT__rv_and = ((IData)(npc__DOT____VdfgTmp_h56cc8969__0) 
                                & (IData)(npc__DOT____VdfgTmp_h3fc695a4__0));
    vlSelf->npc__DOT__rv_sll = ((IData)(npc__DOT____VdfgTmp_hc2c0bd06__0) 
                                & (IData)(npc__DOT____VdfgTmp_h3fc695a4__0));
    vlSelf->npc__DOT__rv_sltu = ((IData)(npc__DOT____VdfgTmp_h21dc6972__0) 
                                 & (IData)(npc__DOT____VdfgTmp_h3fc695a4__0));
    vlSelf->npc__DOT__rv_srl = ((IData)(npc__DOT____VdfgTmp_h17f0ee5a__0) 
                                & (IData)(npc__DOT____VdfgTmp_h3fc695a4__0));
    vlSelf->npc__DOT__rv_sra = ((IData)(npc__DOT____VdfgTmp_h53f3cb74__0) 
                                & (IData)(((0x4000U 
                                            == (0x6000U 
                                                & vlSelf->inst)) 
                                           & (IData)(npc__DOT____VdfgTmp_h3fc695a4__0))));
    vlSelf->npc__DOT__reg_data = (((- (IData)((IData)(vlSelf->npc__DOT__rv_add))) 
                                   & (vlSelf->npc__DOT__src1 
                                      + vlSelf->npc__DOT__src2)) 
                                  | (((- (IData)((IData)(vlSelf->npc__DOT__rv_and))) 
                                      & (vlSelf->npc__DOT__src1 
                                         & vlSelf->npc__DOT__src2)) 
                                     | (((- (IData)((IData)(vlSelf->npc__DOT__rv_or))) 
                                         & (vlSelf->npc__DOT__src1 
                                            | vlSelf->npc__DOT__src2)) 
                                        | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sll))) 
                                            & (vlSelf->npc__DOT__src1 
                                               << (IData)(vlSelf->npc__DOT____VdfgTmp_hb90cc610__0))) 
                                           | (((- (IData)((IData)(vlSelf->npc__DOT__rv_slt))) 
                                               & ((IData)(vlSelf->npc__DOT____VdfgTmp_h6f017a27__0)
                                                   ? 1U
                                                   : 0U)) 
                                              | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sltu))) 
                                                  & ((IData)(vlSelf->npc__DOT____VdfgTmp_h6f3d7cd2__0)
                                                      ? 1U
                                                      : 0U)) 
                                                 | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sra))) 
                                                     & VL_SHIFTRS_III(32,32,5, vlSelf->npc__DOT__src1, (IData)(vlSelf->npc__DOT____VdfgTmp_hb90cc610__0))) 
                                                    | (((- (IData)((IData)(vlSelf->npc__DOT__rv_srl))) 
                                                        & (vlSelf->npc__DOT__src1 
                                                           >> (IData)(vlSelf->npc__DOT____VdfgTmp_hb90cc610__0))) 
                                                       | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sub))) 
                                                           & (vlSelf->npc__DOT__src1 
                                                              - vlSelf->npc__DOT__src2)) 
                                                          | (((- (IData)((IData)(vlSelf->npc__DOT__rv_xor))) 
                                                              & (vlSelf->npc__DOT__src1 
                                                                 ^ vlSelf->npc__DOT__src2)) 
                                                             | (((- (IData)((IData)(vlSelf->npc__DOT__rv_addi))) 
                                                                 & vlSelf->raddr) 
                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_andi))) 
                                                                    & (vlSelf->npc__DOT__src1 
                                                                       & vlSelf->npc__DOT__imm12)) 
                                                                   | (((- (IData)((IData)(vlSelf->npc__DOT__rv_jalr))) 
                                                                       & ((IData)(4U) 
                                                                          + vlSelf->pc)) 
                                                                      | (((- (IData)((IData)(vlSelf->npc__DOT__rv_lb))) 
                                                                          & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->rdata 
                                                                                >> 7U)))) 
                                                                              << 8U) 
                                                                             | (0xffU 
                                                                                & vlSelf->rdata))) 
                                                                         | ((0xffU 
                                                                             & ((- (IData)((IData)(vlSelf->npc__DOT__rv_lbu))) 
                                                                                & vlSelf->rdata)) 
                                                                            | (((- (IData)((IData)(vlSelf->npc__DOT__rv_lh))) 
                                                                                & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->rdata 
                                                                                >> 0xfU)))) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & vlSelf->rdata))) 
                                                                               | ((0xffffU 
                                                                                & ((- (IData)((IData)(vlSelf->npc__DOT__rv_lhu))) 
                                                                                & vlSelf->rdata)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_lw))) 
                                                                                & vlSelf->rdata) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_ori))) 
                                                                                & (vlSelf->npc__DOT__src1 
                                                                                | vlSelf->npc__DOT__imm12)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_slti))) 
                                                                                & (VL_LTS_III(32, vlSelf->npc__DOT__src1, vlSelf->npc__DOT__imm12)
                                                                                 ? 1U
                                                                                 : 0U)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sltiu))) 
                                                                                & ((vlSelf->npc__DOT__src1 
                                                                                < vlSelf->npc__DOT__imm12)
                                                                                 ? 1U
                                                                                 : 0U)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_xori))) 
                                                                                & (vlSelf->npc__DOT__src1 
                                                                                ^ vlSelf->npc__DOT__imm12)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_auipc))) 
                                                                                & (vlSelf->pc 
                                                                                + 
                                                                                (0xfffff000U 
                                                                                & vlSelf->inst))) 
                                                                                | ((0xfffff000U 
                                                                                & ((- (IData)((IData)(vlSelf->npc__DOT__rv_lui))) 
                                                                                & vlSelf->inst)) 
                                                                                | ((- (IData)((IData)(vlSelf->npc__DOT__rv_jal))) 
                                                                                & ((IData)(4U) 
                                                                                + vlSelf->pc))))))))))))))))))))))))));
}

void Vregfile___024root___eval_ico(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vregfile___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vregfile___024root___eval_act(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vregfile___024root___nba_sequent__TOP__0(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h3009ea52__0;
    // Body
    __Vtemp_h3009ea52__0 = ((IData)(vlSelf->rst) ? 0x80000000U
                             : (((((IData)(vlSelf->npc__DOT____VdfgTmp_h11045fbe__0) 
                                   & (IData)(vlSelf->npc__DOT____VdfgTmp_hf3fc77e0__0)) 
                                  & (vlSelf->npc__DOT__src1 
                                     == vlSelf->npc__DOT__src2)) 
                                 | ((((IData)(vlSelf->npc__DOT____VdfgTmp_h3dac9c98__0) 
                                      & (IData)(vlSelf->npc__DOT____VdfgTmp_h604cd171__0)) 
                                     & (vlSelf->npc__DOT__src1 
                                        != vlSelf->npc__DOT__src2)) 
                                    | ((((IData)(vlSelf->npc__DOT____VdfgTmp_h9773a910__0) 
                                         & (IData)(vlSelf->npc__DOT____VdfgTmp_h604cd171__0)) 
                                        & (IData)(vlSelf->npc__DOT____VdfgTmp_h6f017a27__0)) 
                                       | ((((IData)(vlSelf->npc__DOT____VdfgTmp_hce4ae4cb__0) 
                                            & (IData)(vlSelf->npc__DOT____VdfgTmp_h604cd171__0)) 
                                           & VL_GTES_III(32, vlSelf->npc__DOT__src1, vlSelf->npc__DOT__src2)) 
                                          | ((((IData)(vlSelf->npc__DOT____VdfgTmp_h0b67bdd4__0) 
                                               & (IData)(vlSelf->npc__DOT____VdfgTmp_h604cd171__0)) 
                                              & (IData)(vlSelf->npc__DOT____VdfgTmp_h6f3d7cd2__0)) 
                                             | (((IData)(vlSelf->npc__DOT____VdfgTmp_h72adcbfc__0) 
                                                 & (IData)(vlSelf->npc__DOT____VdfgTmp_h604cd171__0)) 
                                                & (vlSelf->npc__DOT__src1 
                                                   >= vlSelf->npc__DOT__src2)))))))
                                 ? (vlSelf->pc + ((
                                                   (- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (vlSelf->inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->inst 
                                                                 >> 7U)))))))
                                 : ((IData)(vlSelf->npc__DOT__rv_jalr)
                                     ? (0xfffffffeU 
                                        & (vlSelf->npc__DOT__src1 
                                           + vlSelf->npc__DOT__imm12))
                                     : ((IData)(vlSelf->npc__DOT__rv_jal)
                                         ? (vlSelf->pc 
                                            + (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & (vlSelf->inst 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->inst) 
                                                     | ((0x800U 
                                                         & (vlSelf->inst 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->inst 
                                                              >> 0x14U)))))))
                                         : ((IData)(4U) 
                                            + vlSelf->pc)))));
    vlSelf->pc = __Vtemp_h3009ea52__0;
}

VL_INLINE_OPT void Vregfile___024root___nba_sequent__TOP__1(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __VdfgTmp_h006b770f__0;
    __VdfgTmp_h006b770f__0 = 0;
    CData/*4:0*/ __Vdlyvdim0__npc__DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__npc__DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__npc__DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__npc__DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__npc__DOT__u_regfile__DOT__regs__v0 = 0;
    // Body
    __Vdlyvset__npc__DOT__u_regfile__DOT__regs__v0 = 0U;
    if (((IData)(vlSelf->npc__DOT__rv_add) | ((IData)(vlSelf->npc__DOT__rv_and) 
                                              | ((IData)(vlSelf->npc__DOT__rv_or) 
                                                 | ((IData)(vlSelf->npc__DOT__rv_sll) 
                                                    | ((IData)(vlSelf->npc__DOT__rv_slt) 
                                                       | ((IData)(vlSelf->npc__DOT__rv_sltu) 
                                                          | ((IData)(vlSelf->npc__DOT__rv_sra) 
                                                             | ((IData)(vlSelf->npc__DOT__rv_srl) 
                                                                | ((IData)(vlSelf->npc__DOT__rv_sub) 
                                                                   | ((IData)(vlSelf->npc__DOT__rv_xor) 
                                                                      | ((IData)(vlSelf->npc__DOT__rv_addi) 
                                                                         | ((IData)(vlSelf->npc__DOT__rv_andi) 
                                                                            | ((IData)(vlSelf->npc__DOT__rv_jalr) 
                                                                               | ((IData)(vlSelf->npc__DOT__rv_lb) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_lbu) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_lh) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_lhu) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_lw) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_ori) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_slti) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_sltiu) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_xori) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_auipc) 
                                                                                | ((IData)(vlSelf->npc__DOT__rv_lui) 
                                                                                | (IData)(vlSelf->npc__DOT__rv_jal)))))))))))))))))))))))))) {
        __Vdlyvval__npc__DOT__u_regfile__DOT__regs__v0 
            = vlSelf->npc__DOT__reg_data;
        __Vdlyvset__npc__DOT__u_regfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__npc__DOT__u_regfile__DOT__regs__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__npc__DOT__u_regfile__DOT__regs__v0) {
        vlSelf->npc__DOT__u_regfile__DOT__regs[__Vdlyvdim0__npc__DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__npc__DOT__u_regfile__DOT__regs__v0;
    }
    __VdfgTmp_h006b770f__0 = vlSelf->npc__DOT__u_regfile__DOT__regs
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->npc__DOT__src1 = ((0U == (0x1fU & (vlSelf->inst 
                                               >> 0xfU)))
                               ? 0U : vlSelf->npc__DOT__u_regfile__DOT__regs
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))]);
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->npc__DOT____VdfgTmp_hb90cc610__0 = 0U;
        vlSelf->npc__DOT__src2 = 0U;
    } else {
        vlSelf->npc__DOT____VdfgTmp_hb90cc610__0 = 
            (0x1fU & __VdfgTmp_h006b770f__0);
        vlSelf->npc__DOT__src2 = __VdfgTmp_h006b770f__0;
    }
    vlSelf->waddr = (vlSelf->npc__DOT__src1 + (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->inst 
                                                        >> 7U)))));
    vlSelf->npc__DOT____VdfgTmp_h6f017a27__0 = VL_LTS_III(32, vlSelf->npc__DOT__src1, vlSelf->npc__DOT__src2);
    vlSelf->npc__DOT____VdfgTmp_h6f3d7cd2__0 = (vlSelf->npc__DOT__src1 
                                                < vlSelf->npc__DOT__src2);
    vlSelf->wdata = (vlSelf->npc__DOT__src2 << (0x18U 
                                                & (vlSelf->waddr 
                                                   << 3U)));
}

VL_INLINE_OPT void Vregfile___024root___nba_sequent__TOP__2(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->raddr = (vlSelf->npc__DOT__src1 + vlSelf->npc__DOT__imm12);
    vlSelf->we = (0xfU & ((- (IData)(((IData)(vlSelf->npc__DOT____VdfgTmp_h0990615e__0) 
                                      & (IData)(vlSelf->npc__DOT____VdfgTmp_h416e416b__0)))) 
                          | (((3U & (- (IData)(((IData)(vlSelf->npc__DOT____VdfgTmp_h974dc604__0) 
                                                & (IData)(vlSelf->npc__DOT____VdfgTmp_h416e416b__0))))) 
                              | (1U & (- (IData)(((IData)(vlSelf->npc__DOT____VdfgTmp_hb58cf43d__0) 
                                                  & (IData)(vlSelf->npc__DOT____VdfgTmp_h416e416b__0)))))) 
                             << (0x18U & (vlSelf->waddr 
                                          << 3U)))));
}

VL_INLINE_OPT void Vregfile___024root___nba_comb__TOP__0(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->npc__DOT__reg_data = (((- (IData)((IData)(vlSelf->npc__DOT__rv_add))) 
                                   & (vlSelf->npc__DOT__src1 
                                      + vlSelf->npc__DOT__src2)) 
                                  | (((- (IData)((IData)(vlSelf->npc__DOT__rv_and))) 
                                      & (vlSelf->npc__DOT__src1 
                                         & vlSelf->npc__DOT__src2)) 
                                     | (((- (IData)((IData)(vlSelf->npc__DOT__rv_or))) 
                                         & (vlSelf->npc__DOT__src1 
                                            | vlSelf->npc__DOT__src2)) 
                                        | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sll))) 
                                            & (vlSelf->npc__DOT__src1 
                                               << (IData)(vlSelf->npc__DOT____VdfgTmp_hb90cc610__0))) 
                                           | (((- (IData)((IData)(vlSelf->npc__DOT__rv_slt))) 
                                               & ((IData)(vlSelf->npc__DOT____VdfgTmp_h6f017a27__0)
                                                   ? 1U
                                                   : 0U)) 
                                              | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sltu))) 
                                                  & ((IData)(vlSelf->npc__DOT____VdfgTmp_h6f3d7cd2__0)
                                                      ? 1U
                                                      : 0U)) 
                                                 | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sra))) 
                                                     & VL_SHIFTRS_III(32,32,5, vlSelf->npc__DOT__src1, (IData)(vlSelf->npc__DOT____VdfgTmp_hb90cc610__0))) 
                                                    | (((- (IData)((IData)(vlSelf->npc__DOT__rv_srl))) 
                                                        & (vlSelf->npc__DOT__src1 
                                                           >> (IData)(vlSelf->npc__DOT____VdfgTmp_hb90cc610__0))) 
                                                       | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sub))) 
                                                           & (vlSelf->npc__DOT__src1 
                                                              - vlSelf->npc__DOT__src2)) 
                                                          | (((- (IData)((IData)(vlSelf->npc__DOT__rv_xor))) 
                                                              & (vlSelf->npc__DOT__src1 
                                                                 ^ vlSelf->npc__DOT__src2)) 
                                                             | (((- (IData)((IData)(vlSelf->npc__DOT__rv_addi))) 
                                                                 & vlSelf->raddr) 
                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_andi))) 
                                                                    & (vlSelf->npc__DOT__src1 
                                                                       & vlSelf->npc__DOT__imm12)) 
                                                                   | (((- (IData)((IData)(vlSelf->npc__DOT__rv_jalr))) 
                                                                       & ((IData)(4U) 
                                                                          + vlSelf->pc)) 
                                                                      | (((- (IData)((IData)(vlSelf->npc__DOT__rv_lb))) 
                                                                          & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->rdata 
                                                                                >> 7U)))) 
                                                                              << 8U) 
                                                                             | (0xffU 
                                                                                & vlSelf->rdata))) 
                                                                         | ((0xffU 
                                                                             & ((- (IData)((IData)(vlSelf->npc__DOT__rv_lbu))) 
                                                                                & vlSelf->rdata)) 
                                                                            | (((- (IData)((IData)(vlSelf->npc__DOT__rv_lh))) 
                                                                                & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->rdata 
                                                                                >> 0xfU)))) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & vlSelf->rdata))) 
                                                                               | ((0xffffU 
                                                                                & ((- (IData)((IData)(vlSelf->npc__DOT__rv_lhu))) 
                                                                                & vlSelf->rdata)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_lw))) 
                                                                                & vlSelf->rdata) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_ori))) 
                                                                                & (vlSelf->npc__DOT__src1 
                                                                                | vlSelf->npc__DOT__imm12)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_slti))) 
                                                                                & (VL_LTS_III(32, vlSelf->npc__DOT__src1, vlSelf->npc__DOT__imm12)
                                                                                 ? 1U
                                                                                 : 0U)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_sltiu))) 
                                                                                & ((vlSelf->npc__DOT__src1 
                                                                                < vlSelf->npc__DOT__imm12)
                                                                                 ? 1U
                                                                                 : 0U)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_xori))) 
                                                                                & (vlSelf->npc__DOT__src1 
                                                                                ^ vlSelf->npc__DOT__imm12)) 
                                                                                | (((- (IData)((IData)(vlSelf->npc__DOT__rv_auipc))) 
                                                                                & (vlSelf->pc 
                                                                                + 
                                                                                (0xfffff000U 
                                                                                & vlSelf->inst))) 
                                                                                | ((0xfffff000U 
                                                                                & ((- (IData)((IData)(vlSelf->npc__DOT__rv_lui))) 
                                                                                & vlSelf->inst)) 
                                                                                | ((- (IData)((IData)(vlSelf->npc__DOT__rv_jal))) 
                                                                                & ((IData)(4U) 
                                                                                + vlSelf->pc))))))))))))))))))))))))));
}

void Vregfile___024root___eval_nba(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vregfile___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vregfile___024root___nba_sequent__TOP__1(vlSelf);
        Vregfile___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vregfile___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vregfile___024root___eval_triggers__ico(Vregfile___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__ico(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
void Vregfile___024root___eval_triggers__act(Vregfile___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__act(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__nba(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile___024root___eval(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vregfile___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vregfile___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/fetter/ysyx-workbench/npc/vsrc/npc.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vregfile___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vregfile___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vregfile___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/fetter/ysyx-workbench/npc/vsrc/npc.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vregfile___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vregfile___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/fetter/ysyx-workbench/npc/vsrc/npc.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vregfile___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vregfile___024root___eval_debug_assertions(Vregfile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
