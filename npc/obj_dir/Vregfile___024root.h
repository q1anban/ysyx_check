// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile.h for the primary calling header

#ifndef VERILATED_VREGFILE___024ROOT_H_
#define VERILATED_VREGFILE___024ROOT_H_  // guard

#include "verilated.h"

class Vregfile__Syms;

class Vregfile___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(we,3,0);
    CData/*0:0*/ npc__DOT__rv_add;
    CData/*0:0*/ npc__DOT__rv_and;
    CData/*0:0*/ npc__DOT__rv_or;
    CData/*0:0*/ npc__DOT__rv_sll;
    CData/*0:0*/ npc__DOT__rv_slt;
    CData/*0:0*/ npc__DOT__rv_sltu;
    CData/*0:0*/ npc__DOT__rv_sra;
    CData/*0:0*/ npc__DOT__rv_srl;
    CData/*0:0*/ npc__DOT__rv_sub;
    CData/*0:0*/ npc__DOT__rv_xor;
    CData/*0:0*/ npc__DOT__rv_addi;
    CData/*0:0*/ npc__DOT__rv_andi;
    CData/*0:0*/ npc__DOT__rv_jalr;
    CData/*0:0*/ npc__DOT__rv_lb;
    CData/*0:0*/ npc__DOT__rv_lbu;
    CData/*0:0*/ npc__DOT__rv_lh;
    CData/*0:0*/ npc__DOT__rv_lhu;
    CData/*0:0*/ npc__DOT__rv_lw;
    CData/*0:0*/ npc__DOT__rv_ori;
    CData/*0:0*/ npc__DOT__rv_slti;
    CData/*0:0*/ npc__DOT__rv_sltiu;
    CData/*0:0*/ npc__DOT__rv_xori;
    CData/*0:0*/ npc__DOT__rv_auipc;
    CData/*0:0*/ npc__DOT__rv_lui;
    CData/*0:0*/ npc__DOT__rv_jal;
    CData/*0:0*/ npc__DOT____VdfgTmp_h6f017a27__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h6f3d7cd2__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h11045fbe__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h72adcbfc__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h974dc604__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hce4ae4cb__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h0b67bdd4__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hf3fc77e0__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h604cd171__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h9773a910__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h3dac9c98__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_hb58cf43d__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h416e416b__0;
    CData/*0:0*/ npc__DOT____VdfgTmp_h0990615e__0;
    CData/*4:0*/ npc__DOT____VdfgTmp_hb90cc610__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    VL_IN(rdata,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(raddr,31,0);
    VL_OUT(waddr,31,0);
    VL_OUT(wdata,31,0);
    IData/*31:0*/ npc__DOT__src1;
    IData/*31:0*/ npc__DOT__src2;
    IData/*31:0*/ npc__DOT__reg_data;
    IData/*31:0*/ npc__DOT__imm12;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> npc__DOT__u_regfile__DOT__regs;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregfile__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregfile___024root(Vregfile__Syms* symsp, const char* v__name);
    ~Vregfile___024root();
    VL_UNCOPYABLE(Vregfile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
