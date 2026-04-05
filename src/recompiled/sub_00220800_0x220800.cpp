#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220800
// Address: 0x220800 - 0x220a98
void sub_00220800_0x220800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220800_0x220800");
#endif

    ctx->pc = 0x220800u;

    // 0x220800: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x220800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x220804: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x220804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x220808: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x220808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x22080c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22080cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x220810: 0x8c64ec4c  lw          $a0, -0x13B4($v1)
    ctx->pc = 0x220810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962252)));
    // 0x220814: 0x24429878  addiu       $v0, $v0, -0x6788
    ctx->pc = 0x220814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940792));
    // 0x220818: 0x3c12002c  lui         $s2, 0x2C
    ctx->pc = 0x220818u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
    // 0x22081c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x22081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x220820: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x220820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x220824: 0x2652ead8  addiu       $s2, $s2, -0x1528
    ctx->pc = 0x220824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961880));
    // 0x220828: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x220828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22082c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22082cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x220830: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x220830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x220834: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x220834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x220838: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x220838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x22083c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x22083cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x220840: 0xc04f856  jal         func_13E158
    ctx->pc = 0x220840u;
    SET_GPR_U32(ctx, 31, 0x220848u);
    ctx->pc = 0x220844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220840u;
            // 0x220844: 0xa7a00010  sh          $zero, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220848u; }
        if (ctx->pc != 0x220848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220848u; }
        if (ctx->pc != 0x220848u) { return; }
    }
    ctx->pc = 0x220848u;
    // 0x220848: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x220848u;
    SET_GPR_U32(ctx, 31, 0x220850u);
    ctx->pc = 0x22084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220848u;
            // 0x22084c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220850u; }
        if (ctx->pc != 0x220850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220850u; }
        if (ctx->pc != 0x220850u) { return; }
    }
    ctx->pc = 0x220850u;
    // 0x220850: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x220850u;
    SET_GPR_U32(ctx, 31, 0x220858u);
    ctx->pc = 0x220854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220850u;
            // 0x220854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220858u; }
        if (ctx->pc != 0x220858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220858u; }
        if (ctx->pc != 0x220858u) { return; }
    }
    ctx->pc = 0x220858u;
    // 0x220858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22085c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22085cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x220860: 0x24a58038  addiu       $a1, $a1, -0x7FC8
    ctx->pc = 0x220860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934584));
    // 0x220864: 0xc060978  jal         func_1825E0
    ctx->pc = 0x220864u;
    SET_GPR_U32(ctx, 31, 0x22086Cu);
    ctx->pc = 0x220868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220864u;
            // 0x220868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22086Cu; }
        if (ctx->pc != 0x22086Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22086Cu; }
        if (ctx->pc != 0x22086Cu) { return; }
    }
    ctx->pc = 0x22086Cu;
    // 0x22086c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22086cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x220870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220874: 0x24429838  addiu       $v0, $v0, -0x67C8
    ctx->pc = 0x220874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940728));
    // 0x220878: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x220878u;
    SET_GPR_U32(ctx, 31, 0x220880u);
    ctx->pc = 0x22087Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220878u;
            // 0x22087c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220880u; }
        if (ctx->pc != 0x220880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220880u; }
        if (ctx->pc != 0x220880u) { return; }
    }
    ctx->pc = 0x220880u;
    // 0x220880: 0x3c053331  lui         $a1, 0x3331
    ctx->pc = 0x220880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13105 << 16));
    // 0x220884: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220888: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x220888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22088c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220890: 0x34a57a59  ori         $a1, $a1, 0x7A59
    ctx->pc = 0x220890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31321);
    // 0x220894: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x220894u;
    SET_GPR_U32(ctx, 31, 0x22089Cu);
    ctx->pc = 0x220898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220894u;
            // 0x220898: 0xae301184  sw          $s0, 0x1184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4484), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22089Cu; }
        if (ctx->pc != 0x22089Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22089Cu; }
        if (ctx->pc != 0x22089Cu) { return; }
    }
    ctx->pc = 0x22089Cu;
    // 0x22089c: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x22089cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x2208a0: 0x3c05405c  lui         $a1, 0x405C
    ctx->pc = 0x2208a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16476 << 16));
    // 0x2208a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2208a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208a8: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x2208a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2208ac: 0x34a5e7fc  ori         $a1, $a1, 0xE7FC
    ctx->pc = 0x2208acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59388);
    // 0x2208b0: 0xc06085e  jal         func_182178
    ctx->pc = 0x2208B0u;
    SET_GPR_U32(ctx, 31, 0x2208B8u);
    ctx->pc = 0x2208B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2208B0u;
            // 0x2208b4: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208B8u; }
        if (ctx->pc != 0x2208B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208B8u; }
        if (ctx->pc != 0x2208B8u) { return; }
    }
    ctx->pc = 0x2208B8u;
    // 0x2208b8: 0x27b0001c  addiu       $s0, $sp, 0x1C
    ctx->pc = 0x2208b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2208bc: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x2208bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x2208c0: 0x3c054867  lui         $a1, 0x4867
    ctx->pc = 0x2208c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18535 << 16));
    // 0x2208c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2208c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208c8: 0x34a5d77b  ori         $a1, $a1, 0xD77B
    ctx->pc = 0x2208c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55163);
    // 0x2208cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2208ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208d0: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x2208D0u;
    SET_GPR_U32(ctx, 31, 0x2208D8u);
    ctx->pc = 0x2208D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2208D0u;
            // 0x2208d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208D8u; }
        if (ctx->pc != 0x2208D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208D8u; }
        if (ctx->pc != 0x2208D8u) { return; }
    }
    ctx->pc = 0x2208D8u;
    // 0x2208d8: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x2208d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x2208dc: 0x3c051e14  lui         $a1, 0x1E14
    ctx->pc = 0x2208dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7700 << 16));
    // 0x2208e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2208e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208e4: 0x34a5d549  ori         $a1, $a1, 0xD549
    ctx->pc = 0x2208e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54601);
    // 0x2208e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2208e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208ec: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x2208ECu;
    SET_GPR_U32(ctx, 31, 0x2208F4u);
    ctx->pc = 0x2208F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2208ECu;
            // 0x2208f0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208F4u; }
        if (ctx->pc != 0x2208F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208F4u; }
        if (ctx->pc != 0x2208F4u) { return; }
    }
    ctx->pc = 0x2208F4u;
    // 0x2208f4: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x2208f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x2208f8: 0x3c05f676  lui         $a1, 0xF676
    ctx->pc = 0x2208f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63094 << 16));
    // 0x2208fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2208fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220900: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x220900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x220904: 0x34a5b63b  ori         $a1, $a1, 0xB63B
    ctx->pc = 0x220904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46651);
    // 0x220908: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x220908u;
    SET_GPR_U32(ctx, 31, 0x220910u);
    ctx->pc = 0x22090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220908u;
            // 0x22090c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220910u; }
        if (ctx->pc != 0x220910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220910u; }
        if (ctx->pc != 0x220910u) { return; }
    }
    ctx->pc = 0x220910u;
    // 0x220910: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x220910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x220914: 0x3c0523d2  lui         $a1, 0x23D2
    ctx->pc = 0x220914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9170 << 16));
    // 0x220918: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22091c: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x22091cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x220920: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x220920u;
    SET_GPR_U32(ctx, 31, 0x220928u);
    ctx->pc = 0x220924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220920u;
            // 0x220924: 0x34a51c86  ori         $a1, $a1, 0x1C86 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7302);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220928u; }
        if (ctx->pc != 0x220928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220928u; }
        if (ctx->pc != 0x220928u) { return; }
    }
    ctx->pc = 0x220928u;
    // 0x220928: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x220928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x22092c: 0x3c0525f5  lui         $a1, 0x25F5
    ctx->pc = 0x22092cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9717 << 16));
    // 0x220930: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220934: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x220934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x220938: 0x34a57a5d  ori         $a1, $a1, 0x7A5D
    ctx->pc = 0x220938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31325);
    // 0x22093c: 0xc06085e  jal         func_182178
    ctx->pc = 0x22093Cu;
    SET_GPR_U32(ctx, 31, 0x220944u);
    ctx->pc = 0x220940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22093Cu;
            // 0x220940: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220944u; }
        if (ctx->pc != 0x220944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220944u; }
        if (ctx->pc != 0x220944u) { return; }
    }
    ctx->pc = 0x220944u;
    // 0x220944: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x220944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x220948: 0x3c053515  lui         $a1, 0x3515
    ctx->pc = 0x220948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13589 << 16));
    // 0x22094c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22094cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220950: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x220950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x220954: 0x34a59154  ori         $a1, $a1, 0x9154
    ctx->pc = 0x220954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37204);
    // 0x220958: 0xc06085e  jal         func_182178
    ctx->pc = 0x220958u;
    SET_GPR_U32(ctx, 31, 0x220960u);
    ctx->pc = 0x22095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220958u;
            // 0x22095c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220960u; }
        if (ctx->pc != 0x220960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220960u; }
        if (ctx->pc != 0x220960u) { return; }
    }
    ctx->pc = 0x220960u;
    // 0x220960: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x220960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x220964: 0x3c05e54a  lui         $a1, 0xE54A
    ctx->pc = 0x220964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58698 << 16));
    // 0x220968: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22096c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x22096cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x220970: 0x34a519a6  ori         $a1, $a1, 0x19A6
    ctx->pc = 0x220970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6566);
    // 0x220974: 0xc06085e  jal         func_182178
    ctx->pc = 0x220974u;
    SET_GPR_U32(ctx, 31, 0x22097Cu);
    ctx->pc = 0x220978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220974u;
            // 0x220978: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22097Cu; }
        if (ctx->pc != 0x22097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22097Cu; }
        if (ctx->pc != 0x22097Cu) { return; }
    }
    ctx->pc = 0x22097Cu;
    // 0x22097c: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x22097cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x220980: 0x3c050f01  lui         $a1, 0xF01
    ctx->pc = 0x220980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3841 << 16));
    // 0x220984: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220988: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x220988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x22098c: 0x34a5c134  ori         $a1, $a1, 0xC134
    ctx->pc = 0x22098cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49460);
    // 0x220990: 0xc06085e  jal         func_182178
    ctx->pc = 0x220990u;
    SET_GPR_U32(ctx, 31, 0x220998u);
    ctx->pc = 0x220994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220990u;
            // 0x220994: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220998u; }
        if (ctx->pc != 0x220998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220998u; }
        if (ctx->pc != 0x220998u) { return; }
    }
    ctx->pc = 0x220998u;
    // 0x220998: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x220998u;
    SET_GPR_U32(ctx, 31, 0x2209A0u);
    ctx->pc = 0x22099Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220998u;
            // 0x22099c: 0x8e241184  lw          $a0, 0x1184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209A0u; }
        if (ctx->pc != 0x2209A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209A0u; }
        if (ctx->pc != 0x2209A0u) { return; }
    }
    ctx->pc = 0x2209A0u;
    // 0x2209a0: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x2209a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x2209a4: 0x3c05ae05  lui         $a1, 0xAE05
    ctx->pc = 0x2209a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44549 << 16));
    // 0x2209a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2209a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209ac: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2209b0: 0x34a5dea4  ori         $a1, $a1, 0xDEA4
    ctx->pc = 0x2209b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)56996);
    // 0x2209b4: 0xc06085e  jal         func_182178
    ctx->pc = 0x2209B4u;
    SET_GPR_U32(ctx, 31, 0x2209BCu);
    ctx->pc = 0x2209B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2209B4u;
            // 0x2209b8: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209BCu; }
        if (ctx->pc != 0x2209BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209BCu; }
        if (ctx->pc != 0x2209BCu) { return; }
    }
    ctx->pc = 0x2209BCu;
    // 0x2209bc: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x2209bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x2209c0: 0x3c054726  lui         $a1, 0x4726
    ctx->pc = 0x2209c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18214 << 16));
    // 0x2209c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2209c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209c8: 0x34a5f43e  ori         $a1, $a1, 0xF43E
    ctx->pc = 0x2209c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62526);
    // 0x2209cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2209ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209d0: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x2209D0u;
    SET_GPR_U32(ctx, 31, 0x2209D8u);
    ctx->pc = 0x2209D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2209D0u;
            // 0x2209d4: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209D8u; }
        if (ctx->pc != 0x2209D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209D8u; }
        if (ctx->pc != 0x2209D8u) { return; }
    }
    ctx->pc = 0x2209D8u;
    // 0x2209d8: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x2209d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x2209dc: 0x3c05d82a  lui         $a1, 0xD82A
    ctx->pc = 0x2209dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55338 << 16));
    // 0x2209e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2209e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209e4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2209e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2209e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2209e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209ec: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x2209ECu;
    SET_GPR_U32(ctx, 31, 0x2209F4u);
    ctx->pc = 0x2209F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2209ECu;
            // 0x2209f0: 0x34a54c3e  ori         $a1, $a1, 0x4C3E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19518);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209F4u; }
        if (ctx->pc != 0x2209F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209F4u; }
        if (ctx->pc != 0x2209F4u) { return; }
    }
    ctx->pc = 0x2209F4u;
    // 0x2209f4: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2209F4u;
    SET_GPR_U32(ctx, 31, 0x2209FCu);
    ctx->pc = 0x2209F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2209F4u;
            // 0x2209f8: 0x8e241184  lw          $a0, 0x1184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209FCu; }
        if (ctx->pc != 0x2209FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209FCu; }
        if (ctx->pc != 0x2209FCu) { return; }
    }
    ctx->pc = 0x2209FCu;
    // 0x2209fc: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x2209fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x220a00: 0x3c056217  lui         $a1, 0x6217
    ctx->pc = 0x220a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25111 << 16));
    // 0x220a04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a08: 0x27a70025  addiu       $a3, $sp, 0x25
    ctx->pc = 0x220a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 37));
    // 0x220a0c: 0xc0606c2  jal         func_181B08
    ctx->pc = 0x220A0Cu;
    SET_GPR_U32(ctx, 31, 0x220A14u);
    ctx->pc = 0x220A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A0Cu;
            // 0x220a10: 0x34a5302a  ori         $a1, $a1, 0x302A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12330);
        ctx->in_delay_slot = false;
    ctx->pc = 0x181B08u;
    if (runtime->hasFunction(0x181B08u)) {
        auto targetFn = runtime->lookupFunction(0x181B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A14u; }
        if (ctx->pc != 0x220A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181B08_0x181b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A14u; }
        if (ctx->pc != 0x220A14u) { return; }
    }
    ctx->pc = 0x220A14u;
    // 0x220a14: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x220a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x220a18: 0x3c05da72  lui         $a1, 0xDA72
    ctx->pc = 0x220a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55922 << 16));
    // 0x220a1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a20: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x220a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x220a24: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x220A24u;
    SET_GPR_U32(ctx, 31, 0x220A2Cu);
    ctx->pc = 0x220A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A24u;
            // 0x220a28: 0x34a59778  ori         $a1, $a1, 0x9778 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38776);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A2Cu; }
        if (ctx->pc != 0x220A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A2Cu; }
        if (ctx->pc != 0x220A2Cu) { return; }
    }
    ctx->pc = 0x220A2Cu;
    // 0x220a2c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x220A2Cu;
    SET_GPR_U32(ctx, 31, 0x220A34u);
    ctx->pc = 0x220A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A2Cu;
            // 0x220a30: 0x8e241184  lw          $a0, 0x1184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A34u; }
        if (ctx->pc != 0x220A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A34u; }
        if (ctx->pc != 0x220A34u) { return; }
    }
    ctx->pc = 0x220A34u;
    // 0x220a34: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x220a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x220a38: 0x3c059975  lui         $a1, 0x9975
    ctx->pc = 0x220a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39285 << 16));
    // 0x220a3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a40: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x220a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x220a44: 0xc060570  jal         func_1815C0
    ctx->pc = 0x220A44u;
    SET_GPR_U32(ctx, 31, 0x220A4Cu);
    ctx->pc = 0x220A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A44u;
            // 0x220a48: 0x34a55447  ori         $a1, $a1, 0x5447 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21575);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A4Cu; }
        if (ctx->pc != 0x220A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A4Cu; }
        if (ctx->pc != 0x220A4Cu) { return; }
    }
    ctx->pc = 0x220A4Cu;
    // 0x220a4c: 0x8e241184  lw          $a0, 0x1184($s1)
    ctx->pc = 0x220a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4484)));
    // 0x220a50: 0x3c059975  lui         $a1, 0x9975
    ctx->pc = 0x220a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39285 << 16));
    // 0x220a54: 0x34a55449  ori         $a1, $a1, 0x5449
    ctx->pc = 0x220a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21577);
    // 0x220a58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a5c: 0xc060570  jal         func_1815C0
    ctx->pc = 0x220A5Cu;
    SET_GPR_U32(ctx, 31, 0x220A64u);
    ctx->pc = 0x220A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A5Cu;
            // 0x220a60: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A64u; }
        if (ctx->pc != 0x220A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A64u; }
        if (ctx->pc != 0x220A64u) { return; }
    }
    ctx->pc = 0x220A64u;
    // 0x220a64: 0xc04f860  jal         func_13E180
    ctx->pc = 0x220A64u;
    SET_GPR_U32(ctx, 31, 0x220A6Cu);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A6Cu; }
        if (ctx->pc != 0x220A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A6Cu; }
        if (ctx->pc != 0x220A6Cu) { return; }
    }
    ctx->pc = 0x220A6Cu;
    // 0x220a6c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x220a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220a70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x220A70u;
    {
        const bool branch_taken_0x220a70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220A70u;
            // 0x220a74: 0xafb20014  sw          $s2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a70) {
            ctx->pc = 0x220A80u;
            goto label_220a80;
        }
    }
    ctx->pc = 0x220A78u;
    // 0x220a78: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x220A78u;
    SET_GPR_U32(ctx, 31, 0x220A80u);
    ctx->pc = 0x220A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A78u;
            // 0x220a7c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A80u; }
        if (ctx->pc != 0x220A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A80u; }
        if (ctx->pc != 0x220A80u) { return; }
    }
    ctx->pc = 0x220A80u;
label_220a80:
    // 0x220a80: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x220a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x220a84: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x220a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x220a88: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x220a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220a8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x220a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220a90: 0x3e00008  jr          $ra
    ctx->pc = 0x220A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220A90u;
            // 0x220a94: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220A80u: goto label_220a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220A98u;
}
