// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VNPC__DPI_H_
#define VERILATED_VNPC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/fetter/ysyx-workbench/npc/vsrc/npc.v:12:30
    extern void sim_ebreak();
    // DPI import at /home/fetter/ysyx-workbench/npc/vsrc/npc.v:13:30
    extern void sim_inv();

#ifdef __cplusplus
}
#endif

#endif  // guard
