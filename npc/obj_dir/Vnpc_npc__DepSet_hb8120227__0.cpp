// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_npc.h"

extern "C" void sim_ebreak();

VL_INLINE_OPT void Vnpc_npc____Vdpiimwrap_sim_ebreak_TOP__npc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc____Vdpiimwrap_sim_ebreak_TOP__npc\n"); );
    // Body
    sim_ebreak();
}

extern "C" void sim_inv();

VL_INLINE_OPT void Vnpc_npc____Vdpiimwrap_sim_inv_TOP__npc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc____Vdpiimwrap_sim_inv_TOP__npc\n"); );
    // Body
    sim_inv();
}

VL_INLINE_OPT void Vnpc_npc___ico_sequent__TOP__npc__0(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___ico_sequent__TOP__npc__0\n"); );
    // Body
    vlSelf->__PVT__imm12 = (((- (IData)((vlSymsp->TOP.inst 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSymsp->TOP.inst 
                                         >> 0x14U));
    vlSelf->__VdfgTmp_hbfc8b3b4__0 = (IData)((0x6000U 
                                              == (0x6000U 
                                                  & vlSymsp->TOP.inst)));
    vlSelf->__VdfgTmp_h6d948994__0 = (IData)((0x2000U 
                                              == (0x6000U 
                                                  & vlSymsp->TOP.inst)));
    vlSelf->__VdfgTmp_h3bbca6f0__0 = (IData)((0x4000U 
                                              == (0x6000U 
                                                  & vlSymsp->TOP.inst)));
    vlSelf->__VdfgTmp_h6fc4c6af__0 = (IData)((0U == 
                                              (0x6000U 
                                               & vlSymsp->TOP.inst)));
    vlSelf->__VdfgTmp_he28ff011__0 = (1U & ((~ (vlSymsp->TOP.inst 
                                                >> 0x1dU)) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1c000000U 
                                                           & vlSymsp->TOP.inst))))));
    vlSelf->__VdfgTmp_h69aaeabb__0 = (IData)((3U == 
                                              (3U & vlSymsp->TOP.inst)));
    vlSelf->__VdfgTmp_h72adcbfc__0 = ((IData)(vlSelf->__VdfgTmp_hbfc8b3b4__0) 
                                      & (vlSymsp->TOP.inst 
                                         >> 0xcU));
    vlSelf->__VdfgTmp_h0b67bdd4__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0xcU)) 
                                      & (IData)(vlSelf->__VdfgTmp_hbfc8b3b4__0));
    vlSelf->__VdfgTmp_h0990615e__0 = ((IData)(vlSelf->__VdfgTmp_h6d948994__0) 
                                      & (IData)((0U 
                                                 == 
                                                 (0x1040U 
                                                  & vlSymsp->TOP.inst))));
    vlSelf->__VdfgTmp_hce4ae4cb__0 = ((IData)(vlSelf->__VdfgTmp_h3bbca6f0__0) 
                                      & (vlSymsp->TOP.inst 
                                         >> 0xcU));
    vlSelf->__VdfgTmp_h9773a910__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0xcU)) 
                                      & (IData)(vlSelf->__VdfgTmp_h3bbca6f0__0));
    vlSelf->__VdfgTmp_h3dac9c98__0 = ((IData)(vlSelf->__VdfgTmp_h6fc4c6af__0) 
                                      & (vlSymsp->TOP.inst 
                                         >> 0xcU));
    vlSelf->__VdfgTmp_h5b6b8ed1__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0xcU)) 
                                      & (IData)(vlSelf->__VdfgTmp_h6fc4c6af__0));
    vlSelf->__VdfgTmp_h402809d3__0 = (IData)(((0x40000000U 
                                               == (0xc0000000U 
                                                   & vlSymsp->TOP.inst)) 
                                              & (IData)(vlSelf->__VdfgTmp_he28ff011__0)));
    vlSelf->__VdfgTmp_h279c75dc__0 = (IData)(((0U == 
                                               (0xc0000000U 
                                                & vlSymsp->TOP.inst)) 
                                              & (IData)(vlSelf->__VdfgTmp_he28ff011__0)));
    vlSelf->__VdfgTmp_hc4cfd6ec__0 = ((vlSymsp->TOP.inst 
                                       >> 2U) & (IData)(vlSelf->__VdfgTmp_h69aaeabb__0));
    vlSelf->__VdfgTmp_hf3fc77e0__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 2U)) & (IData)(vlSelf->__VdfgTmp_h69aaeabb__0));
    vlSelf->__VdfgTmp_h135e74e9__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 5U)) & (IData)(vlSelf->__VdfgTmp_h0990615e__0));
    vlSelf->__VdfgTmp_hb0c1e8cc__0 = ((IData)(vlSelf->__VdfgTmp_h9773a910__0) 
                                      & (IData)((0U 
                                                 == 
                                                 (0x60U 
                                                  & vlSymsp->TOP.inst))));
    vlSelf->__VdfgTmp_h974dc604__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 6U)) & (IData)(vlSelf->__VdfgTmp_h3dac9c98__0));
    vlSelf->__VdfgTmp_h11045fbe__0 = ((IData)(vlSelf->__VdfgTmp_h5b6b8ed1__0) 
                                      & (IData)((0x60U 
                                                 == 
                                                 (0x78U 
                                                  & vlSymsp->TOP.inst))));
    vlSelf->__VdfgTmp_hb58cf43d__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 6U)) & (IData)(vlSelf->__VdfgTmp_h5b6b8ed1__0));
    vlSelf->__VdfgTmp_hdf8fbc87__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0x19U)) 
                                      & (IData)(vlSelf->__VdfgTmp_h402809d3__0));
    vlSelf->__VdfgTmp_h3013009e__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0x19U)) 
                                      & (IData)(vlSelf->__VdfgTmp_h279c75dc__0));
    vlSelf->__PVT__rv_jal = (IData)(((0x68U == (0x78U 
                                                & vlSymsp->TOP.inst)) 
                                     & (IData)(vlSelf->__VdfgTmp_hc4cfd6ec__0)));
    vlSelf->__VdfgTmp_hdbda837e__0 = (IData)(((0x10U 
                                               == (0x18U 
                                                   & vlSymsp->TOP.inst)) 
                                              & (IData)(vlSelf->__VdfgTmp_hc4cfd6ec__0)));
    vlSelf->__VdfgTmp_h65d9f3b3__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 3U)) & (IData)(vlSelf->__VdfgTmp_hf3fc77e0__0));
    vlSelf->__PVT__rv_jalr = ((IData)(vlSelf->__VdfgTmp_h11045fbe__0) 
                              & (IData)(vlSelf->__VdfgTmp_hc4cfd6ec__0));
    vlSelf->__VdfgTmp_haf5ae60a__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 5U)) & (IData)(vlSelf->__VdfgTmp_hb58cf43d__0));
    vlSelf->__VdfgTmp_hd1461dda__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0xeU)) 
                                      & (IData)(vlSelf->__VdfgTmp_h3013009e__0));
    vlSelf->__VdfgTmp_hd32fec37__0 = ((IData)(vlSelf->__VdfgTmp_h3013009e__0) 
                                      & (vlSymsp->TOP.inst 
                                         >> 0xeU));
    vlSelf->__PVT__rv_auipc = (IData)(((0U == (0x60U 
                                               & vlSymsp->TOP.inst)) 
                                       & (IData)(vlSelf->__VdfgTmp_hdbda837e__0)));
    vlSelf->__PVT__rv_lui = (IData)(((0x20U == (0x60U 
                                                & vlSymsp->TOP.inst)) 
                                     & (IData)(vlSelf->__VdfgTmp_hdbda837e__0)));
    vlSelf->__VdfgTmp_he944aefe__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 4U)) & (IData)(vlSelf->__VdfgTmp_h65d9f3b3__0));
    vlSelf->__VdfgTmp_hcaeee01a__0 = ((vlSymsp->TOP.inst 
                                       >> 4U) & (IData)(vlSelf->__VdfgTmp_h65d9f3b3__0));
    vlSelf->__VdfgTmp_h00944613__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0xdU)) 
                                      & (IData)(vlSelf->__VdfgTmp_hd1461dda__0));
    vlSelf->__VdfgTmp_hc809844d__0 = ((IData)(vlSelf->__VdfgTmp_hd1461dda__0) 
                                      & (vlSymsp->TOP.inst 
                                         >> 0xdU));
    vlSelf->__VdfgTmp_h01dc93f5__0 = ((IData)(vlSelf->__VdfgTmp_hd32fec37__0) 
                                      & (vlSymsp->TOP.inst 
                                         >> 0xdU));
    vlSelf->__VdfgTmp_h028271fc__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0xdU)) 
                                      & (IData)(vlSelf->__VdfgTmp_hd32fec37__0));
    vlSelf->__PVT__rv_lb = ((IData)(vlSelf->__VdfgTmp_haf5ae60a__0) 
                            & (IData)(vlSelf->__VdfgTmp_he944aefe__0));
    vlSelf->__PVT__rv_lbu = ((IData)(vlSelf->__VdfgTmp_hb0c1e8cc__0) 
                             & (IData)(vlSelf->__VdfgTmp_he944aefe__0));
    vlSelf->__PVT__rv_lw = ((IData)(vlSelf->__VdfgTmp_h135e74e9__0) 
                            & (IData)(vlSelf->__VdfgTmp_he944aefe__0));
    vlSelf->__VdfgTmp_h416e416b__0 = ((vlSymsp->TOP.inst 
                                       >> 5U) & (IData)(vlSelf->__VdfgTmp_he944aefe__0));
    vlSelf->__VdfgTmp_h7302b949__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 5U)) & (IData)(vlSelf->__VdfgTmp_he944aefe__0));
    vlSelf->__PVT__rv_addi = ((IData)(vlSelf->__VdfgTmp_haf5ae60a__0) 
                              & (IData)(vlSelf->__VdfgTmp_hcaeee01a__0));
    vlSelf->__PVT__rv_slti = ((IData)(vlSelf->__VdfgTmp_h135e74e9__0) 
                              & (IData)(vlSelf->__VdfgTmp_hcaeee01a__0));
    vlSelf->__PVT__rv_xori = ((IData)(vlSelf->__VdfgTmp_hb0c1e8cc__0) 
                              & (IData)(vlSelf->__VdfgTmp_hcaeee01a__0));
    vlSelf->__VdfgTmp_hbcfda891__0 = (IData)(((0U == 
                                               (0x60U 
                                                & vlSymsp->TOP.inst)) 
                                              & (IData)(vlSelf->__VdfgTmp_hcaeee01a__0)));
    vlSelf->__VdfgTmp_ha0c43087__0 = ((vlSymsp->TOP.inst 
                                       >> 5U) & (IData)(vlSelf->__VdfgTmp_hcaeee01a__0));
    vlSelf->__VdfgTmp_h604cd171__0 = ((vlSymsp->TOP.inst 
                                       >> 6U) & (IData)(vlSelf->__VdfgTmp_h416e416b__0));
    vlSelf->__PVT__rv_lh = ((IData)(vlSelf->__VdfgTmp_h974dc604__0) 
                            & (IData)(vlSelf->__VdfgTmp_h7302b949__0));
    vlSelf->__PVT__rv_lhu = ((IData)(vlSelf->__VdfgTmp_hce4ae4cb__0) 
                             & ((~ (vlSymsp->TOP.inst 
                                    >> 6U)) & (IData)(vlSelf->__VdfgTmp_h7302b949__0)));
    vlSelf->__PVT__rv_andi = ((IData)(vlSelf->__VdfgTmp_h72adcbfc__0) 
                              & (IData)(vlSelf->__VdfgTmp_hbcfda891__0));
    vlSelf->__PVT__rv_ori = ((IData)(vlSelf->__VdfgTmp_h0b67bdd4__0) 
                             & (IData)(vlSelf->__VdfgTmp_hbcfda891__0));
    vlSelf->__VdfgTmp_hea9ec382__0 = ((vlSymsp->TOP.inst 
                                       >> 0xcU) & (IData)(vlSelf->__VdfgTmp_hbcfda891__0));
    vlSelf->__PVT__rv_ebreak = ((IData)(vlSelf->__VdfgTmp_h3013009e__0) 
                                & (IData)(((0x100040U 
                                            == (0x1ffffc0U 
                                                & vlSymsp->TOP.inst)) 
                                           & (IData)(vlSelf->__VdfgTmp_ha0c43087__0))));
    vlSelf->__VdfgTmp_h6a255277__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 6U)) & (IData)(vlSelf->__VdfgTmp_ha0c43087__0));
    vlSelf->__PVT__rv_sltiu = ((IData)(vlSelf->__VdfgTmp_h6d948994__0) 
                               & (IData)(vlSelf->__VdfgTmp_hea9ec382__0));
    vlSelf->__VdfgTmp_h297d18ab__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0xdU)) 
                                      & (IData)(vlSelf->__VdfgTmp_hea9ec382__0));
    vlSelf->__VdfgTmp_ha50a0299__0 = ((~ (vlSymsp->TOP.inst 
                                          >> 0xcU)) 
                                      & (IData)(vlSelf->__VdfgTmp_h6a255277__0));
    vlSelf->__VdfgTmp_h3fc695a4__0 = ((vlSymsp->TOP.inst 
                                       >> 0xcU) & (IData)(vlSelf->__VdfgTmp_h6a255277__0));
    vlSelf->__PVT__rv_slli = ((IData)(vlSelf->__VdfgTmp_h279c75dc__0) 
                              & ((~ (vlSymsp->TOP.inst 
                                     >> 0xeU)) & (IData)(vlSelf->__VdfgTmp_h297d18ab__0)));
    vlSelf->__VdfgTmp_h700c07fb__0 = ((vlSymsp->TOP.inst 
                                       >> 0xeU) & (IData)(vlSelf->__VdfgTmp_h297d18ab__0));
    vlSelf->__PVT__rv_add = ((IData)(vlSelf->__VdfgTmp_h00944613__0) 
                             & (IData)(vlSelf->__VdfgTmp_ha50a0299__0));
    vlSelf->__PVT__rv_or = ((IData)(vlSelf->__VdfgTmp_h01dc93f5__0) 
                            & (IData)(vlSelf->__VdfgTmp_ha50a0299__0));
    vlSelf->__PVT__rv_slt = ((IData)(vlSelf->__VdfgTmp_hc809844d__0) 
                             & (IData)(vlSelf->__VdfgTmp_ha50a0299__0));
    vlSelf->__PVT__rv_xor = ((IData)(vlSelf->__VdfgTmp_h028271fc__0) 
                             & (IData)(vlSelf->__VdfgTmp_ha50a0299__0));
    vlSelf->__PVT__rv_sub = ((IData)(vlSelf->__VdfgTmp_hdf8fbc87__0) 
                             & (IData)(((0U == (0x6000U 
                                                & vlSymsp->TOP.inst)) 
                                        & (IData)(vlSelf->__VdfgTmp_ha50a0299__0))));
    vlSelf->__PVT__rv_and = ((IData)(vlSelf->__VdfgTmp_h01dc93f5__0) 
                             & (IData)(vlSelf->__VdfgTmp_h3fc695a4__0));
    vlSelf->__PVT__rv_sll = ((IData)(vlSelf->__VdfgTmp_h00944613__0) 
                             & (IData)(vlSelf->__VdfgTmp_h3fc695a4__0));
    vlSelf->__PVT__rv_sltu = ((IData)(vlSelf->__VdfgTmp_hc809844d__0) 
                              & (IData)(vlSelf->__VdfgTmp_h3fc695a4__0));
    vlSelf->__PVT__rv_srl = ((IData)(vlSelf->__VdfgTmp_h028271fc__0) 
                             & (IData)(vlSelf->__VdfgTmp_h3fc695a4__0));
    vlSelf->__PVT__rv_sra = ((IData)(vlSelf->__VdfgTmp_hdf8fbc87__0) 
                             & (IData)(((0x4000U == 
                                         (0x6000U & vlSymsp->TOP.inst)) 
                                        & (IData)(vlSelf->__VdfgTmp_h3fc695a4__0))));
    vlSelf->__PVT__rv_srai = ((IData)(vlSelf->__VdfgTmp_h402809d3__0) 
                              & (IData)(vlSelf->__VdfgTmp_h700c07fb__0));
    vlSelf->__PVT__rv_srli = ((IData)(vlSelf->__VdfgTmp_h279c75dc__0) 
                              & (IData)(vlSelf->__VdfgTmp_h700c07fb__0));
    if (vlSelf->__PVT__rv_ebreak) {
        Vnpc_npc____Vdpiimwrap_sim_ebreak_TOP__npc();
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__rv_add) 
                         | ((IData)(vlSelf->__PVT__rv_and) 
                            | ((IData)(vlSelf->__PVT__rv_or) 
                               | ((IData)(vlSelf->__PVT__rv_sll) 
                                  | ((IData)(vlSelf->__PVT__rv_slt) 
                                     | ((IData)(vlSelf->__PVT__rv_sltu) 
                                        | ((IData)(vlSelf->__PVT__rv_sra) 
                                           | ((IData)(vlSelf->__PVT__rv_srl) 
                                              | ((IData)(vlSelf->__PVT__rv_sub) 
                                                 | ((IData)(vlSelf->__PVT__rv_xor) 
                                                    | ((IData)(vlSelf->__PVT__rv_addi) 
                                                       | ((IData)(vlSelf->__PVT__rv_andi) 
                                                          | ((IData)(vlSelf->__PVT__rv_jalr) 
                                                             | ((IData)(vlSelf->__PVT__rv_lb) 
                                                                | ((IData)(vlSelf->__PVT__rv_lbu) 
                                                                   | ((IData)(vlSelf->__PVT__rv_lh) 
                                                                      | ((IData)(vlSelf->__PVT__rv_lhu) 
                                                                         | ((IData)(vlSelf->__PVT__rv_lw) 
                                                                            | ((IData)(vlSelf->__PVT__rv_ori) 
                                                                               | ((IData)(vlSelf->__PVT__rv_slti) 
                                                                                | ((IData)(vlSelf->__PVT__rv_sltiu) 
                                                                                | ((IData)(vlSelf->__PVT__rv_xori) 
                                                                                | ((IData)(vlSelf->__PVT__rv_auipc) 
                                                                                | ((IData)(vlSelf->__PVT__rv_lui) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h11045fbe__0) 
                                                                                & (IData)(vlSelf->__VdfgTmp_hf3fc77e0__0)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hce4ae4cb__0) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h72adcbfc__0) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h9773a910__0) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h0b67bdd4__0) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h3dac9c98__0) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                                                | ((IData)(vlSelf->__PVT__rv_jal) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb58cf43d__0) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h416e416b__0)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h974dc604__0) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h416e416b__0)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h0990615e__0) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h416e416b__0)) 
                                                                                | ((IData)(vlSelf->__PVT__rv_ebreak) 
                                                                                | ((IData)(vlSelf->__PVT__rv_srai) 
                                                                                | ((IData)(vlSelf->__PVT__rv_slli) 
                                                                                | (IData)(vlSelf->__PVT__rv_srli))))))))))))))))))))))))))))))))))))))))) {
        Vnpc_npc____Vdpiimwrap_sim_inv_TOP__npc();
    }
}

VL_INLINE_OPT void Vnpc_npc___ico_sequent__TOP__npc__1(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___ico_sequent__TOP__npc__1\n"); );
    // Body
    vlSelf->waddr = (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                     + (((- (IData)((vlSymsp->TOP.inst 
                                     >> 0x1fU))) << 0xcU) 
                        | ((0xfe0U & (vlSymsp->TOP.inst 
                                      >> 0x14U)) | 
                           (0x1fU & (vlSymsp->TOP.inst 
                                     >> 7U)))));
    vlSelf->__VdfgTmp_h6f017a27__0 = VL_LTS_III(32, vlSymsp->TOP__npc__u_regfile.__PVT__rdata1, vlSymsp->TOP__npc__u_regfile.__PVT__rdata2);
    vlSelf->__VdfgTmp_h6f3d7cd2__0 = (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                      < vlSymsp->TOP__npc__u_regfile.__PVT__rdata2);
    vlSelf->__PVT__addi_result = (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                  + vlSelf->__PVT__imm12);
    vlSelf->__PVT__reg_data = (((- (IData)((IData)(vlSelf->__PVT__rv_add))) 
                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                   + vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                               | (((- (IData)((IData)(vlSelf->__PVT__rv_and))) 
                                   & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                      & vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                  | (((- (IData)((IData)(vlSelf->__PVT__rv_or))) 
                                      & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                         | vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                     | (((- (IData)((IData)(vlSelf->__PVT__rv_sll))) 
                                         & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                            << (0x1fU 
                                                & vlSymsp->TOP__npc__u_regfile.__PVT__rdata2))) 
                                        | (((- (IData)((IData)(vlSelf->__PVT__rv_slt))) 
                                            & ((IData)(vlSelf->__VdfgTmp_h6f017a27__0)
                                                ? 1U
                                                : 0U)) 
                                           | (((- (IData)((IData)(vlSelf->__PVT__rv_sltu))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h6f3d7cd2__0)
                                                   ? 1U
                                                   : 0U)) 
                                              | (((- (IData)((IData)(vlSelf->__PVT__rv_sra))) 
                                                  & VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__npc__u_regfile.__PVT__rdata1, 
                                                                   (0x1fU 
                                                                    & vlSymsp->TOP__npc__u_regfile.__PVT__rdata2))) 
                                                 | (((- (IData)((IData)(vlSelf->__PVT__rv_srl))) 
                                                     & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSymsp->TOP__npc__u_regfile.__PVT__rdata2))) 
                                                    | (((- (IData)((IData)(vlSelf->__PVT__rv_sub))) 
                                                        & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                           - vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                                       | (((- (IData)((IData)(vlSelf->__PVT__rv_xor))) 
                                                           & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                              ^ vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                                          | (((- (IData)((IData)(vlSelf->__PVT__rv_addi))) 
                                                              & vlSelf->__PVT__addi_result) 
                                                             | (((- (IData)((IData)(vlSelf->__PVT__rv_andi))) 
                                                                 & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                    & vlSelf->__PVT__imm12)) 
                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_jalr))) 
                                                                    & ((IData)(4U) 
                                                                       + vlSelf->pc)) 
                                                                   | (((- (IData)((IData)(vlSelf->__PVT__rv_lb))) 
                                                                       & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.rdata 
                                                                                >> 7U)))) 
                                                                           << 8U) 
                                                                          | (0xffU 
                                                                             & vlSymsp->TOP.rdata))) 
                                                                      | ((0xffU 
                                                                          & ((- (IData)((IData)(vlSelf->__PVT__rv_lbu))) 
                                                                             & vlSymsp->TOP.rdata)) 
                                                                         | (((- (IData)((IData)(vlSelf->__PVT__rv_lh))) 
                                                                             & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.rdata 
                                                                                >> 0xfU)))) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & vlSymsp->TOP.rdata))) 
                                                                            | ((0xffffU 
                                                                                & ((- (IData)((IData)(vlSelf->__PVT__rv_lhu))) 
                                                                                & vlSymsp->TOP.rdata)) 
                                                                               | (((- (IData)((IData)(vlSelf->__PVT__rv_lw))) 
                                                                                & vlSymsp->TOP.rdata) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_ori))) 
                                                                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                | vlSelf->__PVT__imm12)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_slti))) 
                                                                                & (VL_LTS_III(32, vlSymsp->TOP__npc__u_regfile.__PVT__rdata1, vlSelf->__PVT__imm12)
                                                                                 ? 1U
                                                                                 : 0U)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_sltiu))) 
                                                                                & ((vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                < vlSelf->__PVT__imm12)
                                                                                 ? 1U
                                                                                 : 0U)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_xori))) 
                                                                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                ^ vlSelf->__PVT__imm12)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_auipc))) 
                                                                                & (vlSelf->pc 
                                                                                + 
                                                                                (0xfffff000U 
                                                                                & vlSymsp->TOP.inst))) 
                                                                                | ((0xfffff000U 
                                                                                & ((- (IData)((IData)(vlSelf->__PVT__rv_lui))) 
                                                                                & vlSymsp->TOP.inst)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_jal))) 
                                                                                & ((IData)(4U) 
                                                                                + vlSelf->pc)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_slli))) 
                                                                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                << 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.inst 
                                                                                >> 0x14U)))) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_srli))) 
                                                                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.inst 
                                                                                >> 0x14U)))) 
                                                                                | ((- (IData)((IData)(vlSelf->__PVT__rv_srai))) 
                                                                                & VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__npc__u_regfile.__PVT__rdata1, 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.inst 
                                                                                >> 0x14U)))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__0(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hb69b9fe0__0;
    // Body
    __Vtemp_hb69b9fe0__0 = ((IData)(vlSymsp->TOP.rst)
                             ? 0x80000000U : (((((IData)(vlSelf->__VdfgTmp_h11045fbe__0) 
                                                 & (IData)(vlSelf->__VdfgTmp_hf3fc77e0__0)) 
                                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                   == vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                               | ((((IData)(vlSelf->__VdfgTmp_h3dac9c98__0) 
                                                    & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                   & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                      != vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                                  | ((((IData)(vlSelf->__VdfgTmp_h9773a910__0) 
                                                       & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                      & (IData)(vlSelf->__VdfgTmp_h6f017a27__0)) 
                                                     | ((((IData)(vlSelf->__VdfgTmp_hce4ae4cb__0) 
                                                          & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                         & VL_GTES_III(32, vlSymsp->TOP__npc__u_regfile.__PVT__rdata1, vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                                        | ((((IData)(vlSelf->__VdfgTmp_h0b67bdd4__0) 
                                                             & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                            & (IData)(vlSelf->__VdfgTmp_h6f3d7cd2__0)) 
                                                           | (((IData)(vlSelf->__VdfgTmp_h72adcbfc__0) 
                                                               & (IData)(vlSelf->__VdfgTmp_h604cd171__0)) 
                                                              & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                 >= vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)))))))
                                               ? (vlSelf->pc 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSymsp->TOP.inst 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSymsp->TOP.inst 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP.inst 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSymsp->TOP.inst 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSymsp->TOP.inst 
                                                                  >> 7U)))))))
                                               : ((IData)(vlSelf->__PVT__rv_jalr)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                      + vlSelf->__PVT__imm12))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__rv_jal)
                                                    ? 
                                                   (vlSelf->pc 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP.inst 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & (vlSymsp->TOP.inst 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSymsp->TOP.inst) 
                                                           | ((0x800U 
                                                               & (vlSymsp->TOP.inst 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSymsp->TOP.inst 
                                                                    >> 0x14U)))))))
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)))));
    vlSelf->pc = __Vtemp_hb69b9fe0__0;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__1(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__1\n"); );
    // Body
    vlSelf->waddr = (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                     + (((- (IData)((vlSymsp->TOP.inst 
                                     >> 0x1fU))) << 0xcU) 
                        | ((0xfe0U & (vlSymsp->TOP.inst 
                                      >> 0x14U)) | 
                           (0x1fU & (vlSymsp->TOP.inst 
                                     >> 7U)))));
    vlSelf->__VdfgTmp_h6f017a27__0 = VL_LTS_III(32, vlSymsp->TOP__npc__u_regfile.__PVT__rdata1, vlSymsp->TOP__npc__u_regfile.__PVT__rdata2);
    vlSelf->__VdfgTmp_h6f3d7cd2__0 = (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                      < vlSymsp->TOP__npc__u_regfile.__PVT__rdata2);
    vlSelf->__PVT__addi_result = (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                  + vlSelf->__PVT__imm12);
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__0(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__0\n"); );
    // Body
    vlSelf->__PVT__reg_data = (((- (IData)((IData)(vlSelf->__PVT__rv_add))) 
                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                   + vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                               | (((- (IData)((IData)(vlSelf->__PVT__rv_and))) 
                                   & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                      & vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                  | (((- (IData)((IData)(vlSelf->__PVT__rv_or))) 
                                      & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                         | vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                     | (((- (IData)((IData)(vlSelf->__PVT__rv_sll))) 
                                         & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                            << (0x1fU 
                                                & vlSymsp->TOP__npc__u_regfile.__PVT__rdata2))) 
                                        | (((- (IData)((IData)(vlSelf->__PVT__rv_slt))) 
                                            & ((IData)(vlSelf->__VdfgTmp_h6f017a27__0)
                                                ? 1U
                                                : 0U)) 
                                           | (((- (IData)((IData)(vlSelf->__PVT__rv_sltu))) 
                                               & ((IData)(vlSelf->__VdfgTmp_h6f3d7cd2__0)
                                                   ? 1U
                                                   : 0U)) 
                                              | (((- (IData)((IData)(vlSelf->__PVT__rv_sra))) 
                                                  & VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__npc__u_regfile.__PVT__rdata1, 
                                                                   (0x1fU 
                                                                    & vlSymsp->TOP__npc__u_regfile.__PVT__rdata2))) 
                                                 | (((- (IData)((IData)(vlSelf->__PVT__rv_srl))) 
                                                     & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSymsp->TOP__npc__u_regfile.__PVT__rdata2))) 
                                                    | (((- (IData)((IData)(vlSelf->__PVT__rv_sub))) 
                                                        & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                           - vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                                       | (((- (IData)((IData)(vlSelf->__PVT__rv_xor))) 
                                                           & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                              ^ vlSymsp->TOP__npc__u_regfile.__PVT__rdata2)) 
                                                          | (((- (IData)((IData)(vlSelf->__PVT__rv_addi))) 
                                                              & vlSelf->__PVT__addi_result) 
                                                             | (((- (IData)((IData)(vlSelf->__PVT__rv_andi))) 
                                                                 & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                    & vlSelf->__PVT__imm12)) 
                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_jalr))) 
                                                                    & ((IData)(4U) 
                                                                       + vlSelf->pc)) 
                                                                   | (((- (IData)((IData)(vlSelf->__PVT__rv_lb))) 
                                                                       & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.rdata 
                                                                                >> 7U)))) 
                                                                           << 8U) 
                                                                          | (0xffU 
                                                                             & vlSymsp->TOP.rdata))) 
                                                                      | ((0xffU 
                                                                          & ((- (IData)((IData)(vlSelf->__PVT__rv_lbu))) 
                                                                             & vlSymsp->TOP.rdata)) 
                                                                         | (((- (IData)((IData)(vlSelf->__PVT__rv_lh))) 
                                                                             & (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.rdata 
                                                                                >> 0xfU)))) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & vlSymsp->TOP.rdata))) 
                                                                            | ((0xffffU 
                                                                                & ((- (IData)((IData)(vlSelf->__PVT__rv_lhu))) 
                                                                                & vlSymsp->TOP.rdata)) 
                                                                               | (((- (IData)((IData)(vlSelf->__PVT__rv_lw))) 
                                                                                & vlSymsp->TOP.rdata) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_ori))) 
                                                                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                | vlSelf->__PVT__imm12)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_slti))) 
                                                                                & (VL_LTS_III(32, vlSymsp->TOP__npc__u_regfile.__PVT__rdata1, vlSelf->__PVT__imm12)
                                                                                 ? 1U
                                                                                 : 0U)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_sltiu))) 
                                                                                & ((vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                < vlSelf->__PVT__imm12)
                                                                                 ? 1U
                                                                                 : 0U)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_xori))) 
                                                                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                ^ vlSelf->__PVT__imm12)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_auipc))) 
                                                                                & (vlSelf->pc 
                                                                                + 
                                                                                (0xfffff000U 
                                                                                & vlSymsp->TOP.inst))) 
                                                                                | ((0xfffff000U 
                                                                                & ((- (IData)((IData)(vlSelf->__PVT__rv_lui))) 
                                                                                & vlSymsp->TOP.inst)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_jal))) 
                                                                                & ((IData)(4U) 
                                                                                + vlSelf->pc)) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_slli))) 
                                                                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                << 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.inst 
                                                                                >> 0x14U)))) 
                                                                                | (((- (IData)((IData)(vlSelf->__PVT__rv_srli))) 
                                                                                & (vlSymsp->TOP__npc__u_regfile.__PVT__rdata1 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.inst 
                                                                                >> 0x14U)))) 
                                                                                | ((- (IData)((IData)(vlSelf->__PVT__rv_srai))) 
                                                                                & VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__npc__u_regfile.__PVT__rdata1, 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP.inst 
                                                                                >> 0x14U)))))))))))))))))))))))))))))));
}
