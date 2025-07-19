// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_NPC_H_
#define VERILATED_VNPC_NPC_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_regfile;


class Vnpc_npc final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_regfile* u_regfile;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(we,3,0);
        CData/*0:0*/ __PVT__rv_add;
        CData/*0:0*/ __PVT__rv_and;
        CData/*0:0*/ __PVT__rv_or;
        CData/*0:0*/ __PVT__rv_sll;
        CData/*0:0*/ __PVT__rv_slt;
        CData/*0:0*/ __PVT__rv_sltu;
        CData/*0:0*/ __PVT__rv_sra;
        CData/*0:0*/ __PVT__rv_srl;
        CData/*0:0*/ __PVT__rv_sub;
        CData/*0:0*/ __PVT__rv_xor;
        CData/*0:0*/ __PVT__rv_addi;
        CData/*0:0*/ __PVT__rv_andi;
        CData/*0:0*/ __PVT__rv_jalr;
        CData/*0:0*/ __PVT__rv_lb;
        CData/*0:0*/ __PVT__rv_lbu;
        CData/*0:0*/ __PVT__rv_lh;
        CData/*0:0*/ __PVT__rv_lhu;
        CData/*0:0*/ __PVT__rv_lw;
        CData/*0:0*/ __PVT__rv_ori;
        CData/*0:0*/ __PVT__rv_slti;
        CData/*0:0*/ __PVT__rv_sltiu;
        CData/*0:0*/ __PVT__rv_xori;
        CData/*0:0*/ __PVT__rv_auipc;
        CData/*0:0*/ __PVT__rv_lui;
        CData/*0:0*/ __PVT__rv_jal;
        CData/*0:0*/ __PVT__rv_srai;
        CData/*0:0*/ __PVT__rv_slli;
        CData/*0:0*/ __PVT__rv_srli;
        CData/*0:0*/ __PVT__rv_ebreak;
        CData/*0:0*/ __VdfgTmp_h6f017a27__0;
        CData/*0:0*/ __VdfgTmp_h6f3d7cd2__0;
        CData/*0:0*/ __VdfgTmp_h11045fbe__0;
        CData/*0:0*/ __VdfgTmp_hc4cfd6ec__0;
        CData/*0:0*/ __VdfgTmp_h00944613__0;
        CData/*0:0*/ __VdfgTmp_ha50a0299__0;
        CData/*0:0*/ __VdfgTmp_h01dc93f5__0;
        CData/*0:0*/ __VdfgTmp_h3fc695a4__0;
        CData/*0:0*/ __VdfgTmp_hc809844d__0;
        CData/*0:0*/ __VdfgTmp_hdf8fbc87__0;
        CData/*0:0*/ __VdfgTmp_h028271fc__0;
        CData/*0:0*/ __VdfgTmp_haf5ae60a__0;
        CData/*0:0*/ __VdfgTmp_hcaeee01a__0;
        CData/*0:0*/ __VdfgTmp_h72adcbfc__0;
        CData/*0:0*/ __VdfgTmp_hbcfda891__0;
        CData/*0:0*/ __VdfgTmp_he944aefe__0;
        CData/*0:0*/ __VdfgTmp_hb0c1e8cc__0;
        CData/*0:0*/ __VdfgTmp_h974dc604__0;
        CData/*0:0*/ __VdfgTmp_h7302b949__0;
        CData/*0:0*/ __VdfgTmp_hce4ae4cb__0;
        CData/*0:0*/ __VdfgTmp_h135e74e9__0;
        CData/*0:0*/ __VdfgTmp_h0b67bdd4__0;
        CData/*0:0*/ __VdfgTmp_h6d948994__0;
        CData/*0:0*/ __VdfgTmp_hea9ec382__0;
        CData/*0:0*/ __VdfgTmp_hdbda837e__0;
        CData/*0:0*/ __VdfgTmp_hf3fc77e0__0;
        CData/*0:0*/ __VdfgTmp_h604cd171__0;
        CData/*0:0*/ __VdfgTmp_h9773a910__0;
        CData/*0:0*/ __VdfgTmp_h3dac9c98__0;
        CData/*0:0*/ __VdfgTmp_hb58cf43d__0;
        CData/*0:0*/ __VdfgTmp_h416e416b__0;
        CData/*0:0*/ __VdfgTmp_h0990615e__0;
    };
    struct {
        CData/*0:0*/ __VdfgTmp_h402809d3__0;
        CData/*0:0*/ __VdfgTmp_h700c07fb__0;
        CData/*0:0*/ __VdfgTmp_h279c75dc__0;
        CData/*0:0*/ __VdfgTmp_h297d18ab__0;
        CData/*0:0*/ __VdfgTmp_h3013009e__0;
        CData/*0:0*/ __VdfgTmp_ha0c43087__0;
        CData/*0:0*/ __VdfgTmp_he28ff011__0;
        CData/*0:0*/ __VdfgTmp_hd1461dda__0;
        CData/*0:0*/ __VdfgTmp_h6a255277__0;
        CData/*0:0*/ __VdfgTmp_h65d9f3b3__0;
        CData/*0:0*/ __VdfgTmp_h69aaeabb__0;
        CData/*0:0*/ __VdfgTmp_hd32fec37__0;
        CData/*0:0*/ __VdfgTmp_h6fc4c6af__0;
        CData/*0:0*/ __VdfgTmp_h5b6b8ed1__0;
        CData/*0:0*/ __VdfgTmp_hbfc8b3b4__0;
        CData/*0:0*/ __VdfgTmp_h3bbca6f0__0;
        VL_IN(inst,31,0);
        VL_IN(rdata,31,0);
        VL_OUT(pc,31,0);
        VL_OUT(raddr,31,0);
        VL_OUT(waddr,31,0);
        VL_OUT(wdata,31,0);
        IData/*31:0*/ __PVT__reg_data;
        IData/*31:0*/ __PVT__imm12;
        IData/*31:0*/ __PVT__addi_result;
    };

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_npc(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_npc();
    VL_UNCOPYABLE(Vnpc_npc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
