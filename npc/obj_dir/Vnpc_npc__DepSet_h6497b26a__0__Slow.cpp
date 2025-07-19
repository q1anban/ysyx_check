// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_npc.h"

VL_ATTR_COLD void Vnpc_npc___ctor_var_reset(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->inst = 0;
    vlSelf->rdata = 0;
    vlSelf->pc = 0;
    vlSelf->raddr = 0;
    vlSelf->waddr = 0;
    vlSelf->wdata = 0;
    vlSelf->we = 0;
    vlSelf->__PVT__reg_data = 0;
    vlSelf->__PVT__imm12 = 0;
    vlSelf->__PVT__rv_add = 0;
    vlSelf->__PVT__rv_and = 0;
    vlSelf->__PVT__rv_or = 0;
    vlSelf->__PVT__rv_sll = 0;
    vlSelf->__PVT__rv_slt = 0;
    vlSelf->__PVT__rv_sltu = 0;
    vlSelf->__PVT__rv_sra = 0;
    vlSelf->__PVT__rv_srl = 0;
    vlSelf->__PVT__rv_sub = 0;
    vlSelf->__PVT__rv_xor = 0;
    vlSelf->__PVT__rv_addi = 0;
    vlSelf->__PVT__rv_andi = 0;
    vlSelf->__PVT__rv_jalr = 0;
    vlSelf->__PVT__rv_lb = 0;
    vlSelf->__PVT__rv_lbu = 0;
    vlSelf->__PVT__rv_lh = 0;
    vlSelf->__PVT__rv_lhu = 0;
    vlSelf->__PVT__rv_lw = 0;
    vlSelf->__PVT__rv_ori = 0;
    vlSelf->__PVT__rv_slti = 0;
    vlSelf->__PVT__rv_sltiu = 0;
    vlSelf->__PVT__rv_xori = 0;
    vlSelf->__PVT__rv_auipc = 0;
    vlSelf->__PVT__rv_lui = 0;
    vlSelf->__PVT__rv_jal = 0;
    vlSelf->__PVT__rv_srai = 0;
    vlSelf->__PVT__rv_slli = 0;
    vlSelf->__PVT__rv_srli = 0;
    vlSelf->__PVT__rv_ebreak = 0;
    vlSelf->__PVT__addi_result = 0;
    vlSelf->__VdfgTmp_h6f017a27__0 = 0;
    vlSelf->__VdfgTmp_h6f3d7cd2__0 = 0;
    vlSelf->__VdfgTmp_h11045fbe__0 = 0;
    vlSelf->__VdfgTmp_hc4cfd6ec__0 = 0;
    vlSelf->__VdfgTmp_h00944613__0 = 0;
    vlSelf->__VdfgTmp_ha50a0299__0 = 0;
    vlSelf->__VdfgTmp_h01dc93f5__0 = 0;
    vlSelf->__VdfgTmp_h3fc695a4__0 = 0;
    vlSelf->__VdfgTmp_hc809844d__0 = 0;
    vlSelf->__VdfgTmp_hdf8fbc87__0 = 0;
    vlSelf->__VdfgTmp_h028271fc__0 = 0;
    vlSelf->__VdfgTmp_haf5ae60a__0 = 0;
    vlSelf->__VdfgTmp_hcaeee01a__0 = 0;
    vlSelf->__VdfgTmp_h72adcbfc__0 = 0;
    vlSelf->__VdfgTmp_hbcfda891__0 = 0;
    vlSelf->__VdfgTmp_he944aefe__0 = 0;
    vlSelf->__VdfgTmp_hb0c1e8cc__0 = 0;
    vlSelf->__VdfgTmp_h974dc604__0 = 0;
    vlSelf->__VdfgTmp_h7302b949__0 = 0;
    vlSelf->__VdfgTmp_hce4ae4cb__0 = 0;
    vlSelf->__VdfgTmp_h135e74e9__0 = 0;
    vlSelf->__VdfgTmp_h0b67bdd4__0 = 0;
    vlSelf->__VdfgTmp_h6d948994__0 = 0;
    vlSelf->__VdfgTmp_hea9ec382__0 = 0;
    vlSelf->__VdfgTmp_hdbda837e__0 = 0;
    vlSelf->__VdfgTmp_hf3fc77e0__0 = 0;
    vlSelf->__VdfgTmp_h604cd171__0 = 0;
    vlSelf->__VdfgTmp_h9773a910__0 = 0;
    vlSelf->__VdfgTmp_h3dac9c98__0 = 0;
    vlSelf->__VdfgTmp_hb58cf43d__0 = 0;
    vlSelf->__VdfgTmp_h416e416b__0 = 0;
    vlSelf->__VdfgTmp_h0990615e__0 = 0;
    vlSelf->__VdfgTmp_h402809d3__0 = 0;
    vlSelf->__VdfgTmp_h700c07fb__0 = 0;
    vlSelf->__VdfgTmp_h279c75dc__0 = 0;
    vlSelf->__VdfgTmp_h297d18ab__0 = 0;
    vlSelf->__VdfgTmp_h3013009e__0 = 0;
    vlSelf->__VdfgTmp_ha0c43087__0 = 0;
    vlSelf->__VdfgTmp_he28ff011__0 = 0;
    vlSelf->__VdfgTmp_hd1461dda__0 = 0;
    vlSelf->__VdfgTmp_h6a255277__0 = 0;
    vlSelf->__VdfgTmp_h65d9f3b3__0 = 0;
    vlSelf->__VdfgTmp_h69aaeabb__0 = 0;
    vlSelf->__VdfgTmp_hd32fec37__0 = 0;
    vlSelf->__VdfgTmp_h6fc4c6af__0 = 0;
    vlSelf->__VdfgTmp_h5b6b8ed1__0 = 0;
    vlSelf->__VdfgTmp_hbfc8b3b4__0 = 0;
    vlSelf->__VdfgTmp_h3bbca6f0__0 = 0;
}
