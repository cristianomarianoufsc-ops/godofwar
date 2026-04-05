#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198798
// Address: 0x198798 - 0x198908
void sub_00198798_0x198798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198798_0x198798");
#endif

    ctx->pc = 0x198798u;

    // 0x198798: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x198798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19879c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x19879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1987a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1987a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987a4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1987a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1987a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1987a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1987ac: 0xc090e08  jal         func_243820
    ctx->pc = 0x1987ACu;
    SET_GPR_U32(ctx, 31, 0x1987B4u);
    ctx->pc = 0x1987B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987ACu;
            // 0x1987b0: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243820u;
    if (runtime->hasFunction(0x243820u)) {
        auto targetFn = runtime->lookupFunction(0x243820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987B4u; }
        if (ctx->pc != 0x1987B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243820_0x243848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987B4u; }
        if (ctx->pc != 0x1987B4u) { return; }
    }
    ctx->pc = 0x1987B4u;
    // 0x1987b4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1987B4u;
    SET_GPR_U32(ctx, 31, 0x1987BCu);
    ctx->pc = 0x1987B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987B4u;
            // 0x1987b8: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987BCu; }
        if (ctx->pc != 0x1987BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987BCu; }
        if (ctx->pc != 0x1987BCu) { return; }
    }
    ctx->pc = 0x1987BCu;
    // 0x1987bc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1987BCu;
    SET_GPR_U32(ctx, 31, 0x1987C4u);
    ctx->pc = 0x1987C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987BCu;
            // 0x1987c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987C4u; }
        if (ctx->pc != 0x1987C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987C4u; }
        if (ctx->pc != 0x1987C4u) { return; }
    }
    ctx->pc = 0x1987C4u;
    // 0x1987c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1987c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1987cc: 0x24a53948  addiu       $a1, $a1, 0x3948
    ctx->pc = 0x1987ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14664));
    // 0x1987d0: 0xc060978  jal         func_1825E0
    ctx->pc = 0x1987D0u;
    SET_GPR_U32(ctx, 31, 0x1987D8u);
    ctx->pc = 0x1987D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987D0u;
            // 0x1987d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987D8u; }
        if (ctx->pc != 0x1987D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987D8u; }
        if (ctx->pc != 0x1987D8u) { return; }
    }
    ctx->pc = 0x1987D8u;
    // 0x1987d8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1987d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1987dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1987dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987e0: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x1987e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
    // 0x1987e4: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x1987E4u;
    SET_GPR_U32(ctx, 31, 0x1987ECu);
    ctx->pc = 0x1987E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987E4u;
            // 0x1987e8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987ECu; }
        if (ctx->pc != 0x1987ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987ECu; }
        if (ctx->pc != 0x1987ECu) { return; }
    }
    ctx->pc = 0x1987ECu;
    // 0x1987ec: 0x3c05d714  lui         $a1, 0xD714
    ctx->pc = 0x1987ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55060 << 16));
    // 0x1987f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1987f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987f4: 0x27a70032  addiu       $a3, $sp, 0x32
    ctx->pc = 0x1987f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x1987f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1987f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987fc: 0xae30c9a8  sw          $s0, -0x3658($s1)
    ctx->pc = 0x1987fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953384), GPR_U32(ctx, 16));
    // 0x198800: 0x34a5aebc  ori         $a1, $a1, 0xAEBC
    ctx->pc = 0x198800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44732);
    // 0x198804: 0xc06081c  jal         func_182070
    ctx->pc = 0x198804u;
    SET_GPR_U32(ctx, 31, 0x19880Cu);
    ctx->pc = 0x198808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198804u;
            // 0x198808: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19880Cu; }
        if (ctx->pc != 0x19880Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19880Cu; }
        if (ctx->pc != 0x19880Cu) { return; }
    }
    ctx->pc = 0x19880Cu;
    // 0x19880c: 0x8e24c9a8  lw          $a0, -0x3658($s1)
    ctx->pc = 0x19880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x198810: 0x3c057321  lui         $a1, 0x7321
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29473 << 16));
    // 0x198814: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x198814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198818: 0x27a7004a  addiu       $a3, $sp, 0x4A
    ctx->pc = 0x198818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 74));
    // 0x19881c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x19881cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x198820: 0xc06081c  jal         func_182070
    ctx->pc = 0x198820u;
    SET_GPR_U32(ctx, 31, 0x198828u);
    ctx->pc = 0x198824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198820u;
            // 0x198824: 0x34a55755  ori         $a1, $a1, 0x5755 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22357);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198828u; }
        if (ctx->pc != 0x198828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198828u; }
        if (ctx->pc != 0x198828u) { return; }
    }
    ctx->pc = 0x198828u;
    // 0x198828: 0x8e24c9a8  lw          $a0, -0x3658($s1)
    ctx->pc = 0x198828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x19882c: 0x3c051fc5  lui         $a1, 0x1FC5
    ctx->pc = 0x19882cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8133 << 16));
    // 0x198830: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x198830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198834: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x198834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x198838: 0xc060570  jal         func_1815C0
    ctx->pc = 0x198838u;
    SET_GPR_U32(ctx, 31, 0x198840u);
    ctx->pc = 0x19883Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198838u;
            // 0x19883c: 0x34a52bca  ori         $a1, $a1, 0x2BCA (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11210);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198840u; }
        if (ctx->pc != 0x198840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198840u; }
        if (ctx->pc != 0x198840u) { return; }
    }
    ctx->pc = 0x198840u;
    // 0x198840: 0x8e24c9a8  lw          $a0, -0x3658($s1)
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x198844: 0x3c058466  lui         $a1, 0x8466
    ctx->pc = 0x198844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33894 << 16));
    // 0x198848: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x198848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19884c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x198850: 0xc060570  jal         func_1815C0
    ctx->pc = 0x198850u;
    SET_GPR_U32(ctx, 31, 0x198858u);
    ctx->pc = 0x198854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198850u;
            // 0x198854: 0x34a53fb5  ori         $a1, $a1, 0x3FB5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16309);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198858u; }
        if (ctx->pc != 0x198858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198858u; }
        if (ctx->pc != 0x198858u) { return; }
    }
    ctx->pc = 0x198858u;
    // 0x198858: 0x8e24c9a8  lw          $a0, -0x3658($s1)
    ctx->pc = 0x198858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x19885c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x19885cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x198860: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x198860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198864: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x198864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x198868: 0xc060570  jal         func_1815C0
    ctx->pc = 0x198868u;
    SET_GPR_U32(ctx, 31, 0x198870u);
    ctx->pc = 0x19886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198868u;
            // 0x19886c: 0x34a5e4d2  ori         $a1, $a1, 0xE4D2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)58578);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198870u; }
        if (ctx->pc != 0x198870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198870u; }
        if (ctx->pc != 0x198870u) { return; }
    }
    ctx->pc = 0x198870u;
    // 0x198870: 0x8e24c9a8  lw          $a0, -0x3658($s1)
    ctx->pc = 0x198870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x198874: 0x3c053df0  lui         $a1, 0x3DF0
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15856 << 16));
    // 0x198878: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x198878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19887c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x19887cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198880: 0xc060570  jal         func_1815C0
    ctx->pc = 0x198880u;
    SET_GPR_U32(ctx, 31, 0x198888u);
    ctx->pc = 0x198884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198880u;
            // 0x198884: 0x34a5abdd  ori         $a1, $a1, 0xABDD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43997);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198888u; }
        if (ctx->pc != 0x198888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198888u; }
        if (ctx->pc != 0x198888u) { return; }
    }
    ctx->pc = 0x198888u;
    // 0x198888: 0x8e24c9a8  lw          $a0, -0x3658($s1)
    ctx->pc = 0x198888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x19888c: 0x3c05c9e1  lui         $a1, 0xC9E1
    ctx->pc = 0x19888cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51681 << 16));
    // 0x198890: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x198890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198894: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x198894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x198898: 0xc060570  jal         func_1815C0
    ctx->pc = 0x198898u;
    SET_GPR_U32(ctx, 31, 0x1988A0u);
    ctx->pc = 0x19889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198898u;
            // 0x19889c: 0x34a52c06  ori         $a1, $a1, 0x2C06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11270);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988A0u; }
        if (ctx->pc != 0x1988A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988A0u; }
        if (ctx->pc != 0x1988A0u) { return; }
    }
    ctx->pc = 0x1988A0u;
    // 0x1988a0: 0x8e24c9a8  lw          $a0, -0x3658($s1)
    ctx->pc = 0x1988a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x1988a4: 0x3c05a305  lui         $a1, 0xA305
    ctx->pc = 0x1988a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41733 << 16));
    // 0x1988a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1988a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1988acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1988b0: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x1988B0u;
    SET_GPR_U32(ctx, 31, 0x1988B8u);
    ctx->pc = 0x1988B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1988B0u;
            // 0x1988b4: 0x34a5bac6  ori         $a1, $a1, 0xBAC6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47814);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988B8u; }
        if (ctx->pc != 0x1988B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988B8u; }
        if (ctx->pc != 0x1988B8u) { return; }
    }
    ctx->pc = 0x1988B8u;
    // 0x1988b8: 0x8e24c9a8  lw          $a0, -0x3658($s1)
    ctx->pc = 0x1988b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x1988bc: 0x3c054546  lui         $a1, 0x4546
    ctx->pc = 0x1988bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17734 << 16));
    // 0x1988c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1988c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988c4: 0x27a7002e  addiu       $a3, $sp, 0x2E
    ctx->pc = 0x1988c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    // 0x1988c8: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x1988C8u;
    SET_GPR_U32(ctx, 31, 0x1988D0u);
    ctx->pc = 0x1988CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1988C8u;
            // 0x1988cc: 0x34a5a3bb  ori         $a1, $a1, 0xA3BB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41915);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988D0u; }
        if (ctx->pc != 0x1988D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988D0u; }
        if (ctx->pc != 0x1988D0u) { return; }
    }
    ctx->pc = 0x1988D0u;
    // 0x1988d0: 0x8e24c9a8  lw          $a0, -0x3658($s1)
    ctx->pc = 0x1988d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953384)));
    // 0x1988d4: 0x3c0580ca  lui         $a1, 0x80CA
    ctx->pc = 0x1988d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32970 << 16));
    // 0x1988d8: 0x34a5e0f6  ori         $a1, $a1, 0xE0F6
    ctx->pc = 0x1988d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57590);
    // 0x1988dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1988dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988e0: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x1988E0u;
    SET_GPR_U32(ctx, 31, 0x1988E8u);
    ctx->pc = 0x1988E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1988E0u;
            // 0x1988e4: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988E8u; }
        if (ctx->pc != 0x1988E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988E8u; }
        if (ctx->pc != 0x1988E8u) { return; }
    }
    ctx->pc = 0x1988E8u;
    // 0x1988e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1988e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988ec: 0xc090df0  jal         func_2437C0
    ctx->pc = 0x1988ECu;
    SET_GPR_U32(ctx, 31, 0x1988F4u);
    ctx->pc = 0x1988F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1988ECu;
            // 0x1988f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2437C0u;
    if (runtime->hasFunction(0x2437C0u)) {
        auto targetFn = runtime->lookupFunction(0x2437C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988F4u; }
        if (ctx->pc != 0x1988F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002437C0_0x2437c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988F4u; }
        if (ctx->pc != 0x1988F4u) { return; }
    }
    ctx->pc = 0x1988F4u;
    // 0x1988f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1988f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1988f8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1988f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1988fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1988fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198900: 0x3e00008  jr          $ra
    ctx->pc = 0x198900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198900u;
            // 0x198904: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198908u;
}
