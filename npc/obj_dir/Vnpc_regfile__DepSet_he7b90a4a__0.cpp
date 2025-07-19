// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_regfile.h"

VL_INLINE_OPT void Vnpc_regfile___ico_sequent__TOP__npc__u_regfile__0(Vnpc_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_regfile___ico_sequent__TOP__npc__u_regfile__0\n"); );
    // Body
    vlSelf->__PVT__rdata2 = ((0U == (0x1fU & (vlSymsp->TOP.inst 
                                              >> 0x14U)))
                              ? 0U : vlSelf->regs[(0x1fU 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0x14U))]);
    vlSelf->__PVT__rdata1 = ((0U == (0x1fU & (vlSymsp->TOP.inst 
                                              >> 0xfU)))
                              ? 0U : vlSelf->regs[(0x1fU 
                                                   & (vlSymsp->TOP.inst 
                                                      >> 0xfU))]);
}

VL_INLINE_OPT void Vnpc_regfile___nba_sequent__TOP__npc__u_regfile__0(Vnpc_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_regfile___nba_sequent__TOP__npc__u_regfile__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__regs__v0;
    __Vdlyvdim0__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__regs__v0;
    __Vdlyvval__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regs__v0;
    __Vdlyvset__regs__v0 = 0;
    // Body
    __Vdlyvset__regs__v0 = 0U;
    if ((((IData)(vlSymsp->TOP__npc.__PVT__rv_add) 
          | ((IData)(vlSymsp->TOP__npc.__PVT__rv_and) 
             | ((IData)(vlSymsp->TOP__npc.__PVT__rv_or) 
                | ((IData)(vlSymsp->TOP__npc.__PVT__rv_sll) 
                   | ((IData)(vlSymsp->TOP__npc.__PVT__rv_slt) 
                      | ((IData)(vlSymsp->TOP__npc.__PVT__rv_sltu) 
                         | ((IData)(vlSymsp->TOP__npc.__PVT__rv_sra) 
                            | ((IData)(vlSymsp->TOP__npc.__PVT__rv_srl) 
                               | ((IData)(vlSymsp->TOP__npc.__PVT__rv_sub) 
                                  | ((IData)(vlSymsp->TOP__npc.__PVT__rv_xor) 
                                     | ((IData)(vlSymsp->TOP__npc.__PVT__rv_addi) 
                                        | ((IData)(vlSymsp->TOP__npc.__PVT__rv_andi) 
                                           | ((IData)(vlSymsp->TOP__npc.__PVT__rv_jalr) 
                                              | ((IData)(vlSymsp->TOP__npc.__PVT__rv_lb) 
                                                 | ((IData)(vlSymsp->TOP__npc.__PVT__rv_lbu) 
                                                    | ((IData)(vlSymsp->TOP__npc.__PVT__rv_lh) 
                                                       | ((IData)(vlSymsp->TOP__npc.__PVT__rv_lhu) 
                                                          | ((IData)(vlSymsp->TOP__npc.__PVT__rv_lw) 
                                                             | ((IData)(vlSymsp->TOP__npc.__PVT__rv_ori) 
                                                                | ((IData)(vlSymsp->TOP__npc.__PVT__rv_slti) 
                                                                   | ((IData)(vlSymsp->TOP__npc.__PVT__rv_sltiu) 
                                                                      | ((IData)(vlSymsp->TOP__npc.__PVT__rv_xori) 
                                                                         | ((IData)(vlSymsp->TOP__npc.__PVT__rv_auipc) 
                                                                            | ((IData)(vlSymsp->TOP__npc.__PVT__rv_lui) 
                                                                               | ((IData)(vlSymsp->TOP__npc.__PVT__rv_jal) 
                                                                                | ((IData)(vlSymsp->TOP__npc.__PVT__rv_slli) 
                                                                                | ((IData)(vlSymsp->TOP__npc.__PVT__rv_srli) 
                                                                                | (IData)(vlSymsp->TOP__npc.__PVT__rv_srai)))))))))))))))))))))))))))) 
         & (0U != (0x1fU & (vlSymsp->TOP.inst >> 7U))))) {
        __Vdlyvval__regs__v0 = vlSymsp->TOP__npc.__PVT__reg_data;
        __Vdlyvset__regs__v0 = 1U;
        __Vdlyvdim0__regs__v0 = (0x1fU & (vlSymsp->TOP.inst 
                                          >> 7U));
    }
    if (__Vdlyvset__regs__v0) {
        vlSelf->regs[__Vdlyvdim0__regs__v0] = __Vdlyvval__regs__v0;
    }
}
