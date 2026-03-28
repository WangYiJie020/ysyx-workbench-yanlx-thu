// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/yanlx/ysyx-workbench/npc/vsrc/ysyx_25050137.v:1860:30
    extern void data_counter_add();
    // DPI import at /home/yanlx/ysyx-workbench/npc/vsrc/ysyx_25050137.v:1863:30
    extern void difftest_skip();
    // DPI import at /home/yanlx/ysyx-workbench/npc/vsrc/ysyx_25050137.v:2799:30
    extern void ebreak();
    // DPI import at /home/yanlx/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/yanlx/ysyx-workbench/npc/vsrc/ysyx_25050137.v:1397:30
    extern void idu_counter_return(char inst_opcode);
    // DPI import at /home/yanlx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:6723:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/yanlx/ysyx-workbench/npc/vsrc/ysyx_25050137.v:1862:30
    extern void receive_data_back();
    // DPI import at /home/yanlx/ysyx-workbench/npc/vsrc/ysyx_25050137.v:2800:30
    extern void reg_return_value(int gpr_0, int gpr_1, int gpr_2, int gpr_3, int gpr_4, int gpr_5, int gpr_6, int gpr_7, int gpr_8, int gpr_9, int gpr_10, int gpr_11, int gpr_12, int gpr_13, int gpr_14, int gpr_15, int gpr_16, int gpr_17, int gpr_18, int gpr_19, int gpr_20, int gpr_21, int gpr_22, int gpr_23, int gpr_24, int gpr_25, int gpr_26, int gpr_27, int gpr_28, int gpr_29, int gpr_30, int gpr_31, int pc, int csr_reg_0, int csr_reg_1, int csr_reg_2, int csr_reg_3);
    // DPI import at /home/yanlx/ysyx-workbench/npc/vsrc/ysyx_25050137.v:1861:30
    extern void send_data_request();

#ifdef __cplusplus
}
#endif

#endif  // guard
