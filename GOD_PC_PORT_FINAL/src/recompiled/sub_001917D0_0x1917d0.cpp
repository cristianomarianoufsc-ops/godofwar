#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001917D0
// Address: 0x1917d0 - 0x192110
void sub_001917D0_0x1917d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001917D0_0x1917d0");
#endif

    ctx->pc = 0x1917d0u;

    // 0x1917d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1917d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1917d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1917d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1917d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1917d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917dc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1917dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1917e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1917e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1917e4: 0xc090da2  jal         func_243688
    ctx->pc = 0x1917E4u;
    SET_GPR_U32(ctx, 31, 0x1917ECu);
    ctx->pc = 0x1917E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1917E4u;
            // 0x1917e8: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243688u;
    if (runtime->hasFunction(0x243688u)) {
        auto targetFn = runtime->lookupFunction(0x243688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917ECu; }
        if (ctx->pc != 0x1917ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243688_0x2436b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917ECu; }
        if (ctx->pc != 0x1917ECu) { return; }
    }
    ctx->pc = 0x1917ECu;
    // 0x1917ec: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1917ECu;
    SET_GPR_U32(ctx, 31, 0x1917F4u);
    ctx->pc = 0x1917F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1917ECu;
            // 0x1917f0: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917F4u; }
        if (ctx->pc != 0x1917F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917F4u; }
        if (ctx->pc != 0x1917F4u) { return; }
    }
    ctx->pc = 0x1917F4u;
    // 0x1917f4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1917F4u;
    SET_GPR_U32(ctx, 31, 0x1917FCu);
    ctx->pc = 0x1917F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1917F4u;
            // 0x1917f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917FCu; }
        if (ctx->pc != 0x1917FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917FCu; }
        if (ctx->pc != 0x1917FCu) { return; }
    }
    ctx->pc = 0x1917FCu;
    // 0x1917fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1917fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191800: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x191800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x191804: 0x24a532e0  addiu       $a1, $a1, 0x32E0
    ctx->pc = 0x191804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13024));
    // 0x191808: 0xc060978  jal         func_1825E0
    ctx->pc = 0x191808u;
    SET_GPR_U32(ctx, 31, 0x191810u);
    ctx->pc = 0x19180Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191808u;
            // 0x19180c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191810u; }
        if (ctx->pc != 0x191810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191810u; }
        if (ctx->pc != 0x191810u) { return; }
    }
    ctx->pc = 0x191810u;
    // 0x191810: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x191810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x191814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191818: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x191818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
    // 0x19181c: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x19181Cu;
    SET_GPR_U32(ctx, 31, 0x191824u);
    ctx->pc = 0x191820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19181Cu;
            // 0x191820: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191824u; }
        if (ctx->pc != 0x191824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191824u; }
        if (ctx->pc != 0x191824u) { return; }
    }
    ctx->pc = 0x191824u;
    // 0x191824: 0x3c05819e  lui         $a1, 0x819E
    ctx->pc = 0x191824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33182 << 16));
    // 0x191828: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x191828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19182c: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x19182cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x191830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191834: 0xae30c900  sw          $s0, -0x3700($s1)
    ctx->pc = 0x191834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953216), GPR_U32(ctx, 16));
    // 0x191838: 0xc060570  jal         func_1815C0
    ctx->pc = 0x191838u;
    SET_GPR_U32(ctx, 31, 0x191840u);
    ctx->pc = 0x19183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191838u;
            // 0x19183c: 0x34a54a49  ori         $a1, $a1, 0x4A49 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19017);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191840u; }
        if (ctx->pc != 0x191840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191840u; }
        if (ctx->pc != 0x191840u) { return; }
    }
    ctx->pc = 0x191840u;
    // 0x191840: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x191840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x191844: 0x3c05a9b9  lui         $a1, 0xA9B9
    ctx->pc = 0x191844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43449 << 16));
    // 0x191848: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x191848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19184c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x19184cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x191850: 0xc060570  jal         func_1815C0
    ctx->pc = 0x191850u;
    SET_GPR_U32(ctx, 31, 0x191858u);
    ctx->pc = 0x191854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191850u;
            // 0x191854: 0x34a528b3  ori         $a1, $a1, 0x28B3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10419);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191858u; }
        if (ctx->pc != 0x191858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191858u; }
        if (ctx->pc != 0x191858u) { return; }
    }
    ctx->pc = 0x191858u;
    // 0x191858: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x191858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x19185c: 0x3c05b4af  lui         $a1, 0xB4AF
    ctx->pc = 0x19185cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46255 << 16));
    // 0x191860: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x191860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191864: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x191864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x191868: 0xc060570  jal         func_1815C0
    ctx->pc = 0x191868u;
    SET_GPR_U32(ctx, 31, 0x191870u);
    ctx->pc = 0x19186Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191868u;
            // 0x19186c: 0x34a576ab  ori         $a1, $a1, 0x76AB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30379);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191870u; }
        if (ctx->pc != 0x191870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191870u; }
        if (ctx->pc != 0x191870u) { return; }
    }
    ctx->pc = 0x191870u;
    // 0x191870: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x191870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x191874: 0x3c051fc6  lui         $a1, 0x1FC6
    ctx->pc = 0x191874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8134 << 16));
    // 0x191878: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x191878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19187c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x19187cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191880: 0xc060570  jal         func_1815C0
    ctx->pc = 0x191880u;
    SET_GPR_U32(ctx, 31, 0x191888u);
    ctx->pc = 0x191884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191880u;
            // 0x191884: 0x34a5d36d  ori         $a1, $a1, 0xD36D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54125);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191888u; }
        if (ctx->pc != 0x191888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191888u; }
        if (ctx->pc != 0x191888u) { return; }
    }
    ctx->pc = 0x191888u;
    // 0x191888: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x191888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x19188c: 0x3c054ba7  lui         $a1, 0x4BA7
    ctx->pc = 0x19188cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19367 << 16));
    // 0x191890: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x191890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191894: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x191894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x191898: 0xc060570  jal         func_1815C0
    ctx->pc = 0x191898u;
    SET_GPR_U32(ctx, 31, 0x1918A0u);
    ctx->pc = 0x19189Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191898u;
            // 0x19189c: 0x34a5dfc2  ori         $a1, $a1, 0xDFC2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57282);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918A0u; }
        if (ctx->pc != 0x1918A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918A0u; }
        if (ctx->pc != 0x1918A0u) { return; }
    }
    ctx->pc = 0x1918A0u;
    // 0x1918a0: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x1918a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x1918a4: 0x3c051d8c  lui         $a1, 0x1D8C
    ctx->pc = 0x1918a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7564 << 16));
    // 0x1918a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1918a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1918ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1918acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1918b0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1918B0u;
    SET_GPR_U32(ctx, 31, 0x1918B8u);
    ctx->pc = 0x1918B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918B0u;
            // 0x1918b4: 0x34a51daa  ori         $a1, $a1, 0x1DAA (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7594);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918B8u; }
        if (ctx->pc != 0x1918B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918B8u; }
        if (ctx->pc != 0x1918B8u) { return; }
    }
    ctx->pc = 0x1918B8u;
    // 0x1918b8: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x1918b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x1918bc: 0x3c05870e  lui         $a1, 0x870E
    ctx->pc = 0x1918bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34574 << 16));
    // 0x1918c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1918c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1918c4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1918c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1918c8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1918C8u;
    SET_GPR_U32(ctx, 31, 0x1918D0u);
    ctx->pc = 0x1918CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918C8u;
            // 0x1918cc: 0x34a56017  ori         $a1, $a1, 0x6017 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24599);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918D0u; }
        if (ctx->pc != 0x1918D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918D0u; }
        if (ctx->pc != 0x1918D0u) { return; }
    }
    ctx->pc = 0x1918D0u;
    // 0x1918d0: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x1918d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x1918d4: 0x3c05f8fa  lui         $a1, 0xF8FA
    ctx->pc = 0x1918d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63738 << 16));
    // 0x1918d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1918d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1918dc: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x1918dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1918e0: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x1918E0u;
    SET_GPR_U32(ctx, 31, 0x1918E8u);
    ctx->pc = 0x1918E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918E0u;
            // 0x1918e4: 0x34a58e13  ori         $a1, $a1, 0x8E13 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36371);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918E8u; }
        if (ctx->pc != 0x1918E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918E8u; }
        if (ctx->pc != 0x1918E8u) { return; }
    }
    ctx->pc = 0x1918E8u;
    // 0x1918e8: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x1918e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x1918ec: 0x3c059314  lui         $a1, 0x9314
    ctx->pc = 0x1918ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37652 << 16));
    // 0x1918f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1918f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1918f4: 0x27a70036  addiu       $a3, $sp, 0x36
    ctx->pc = 0x1918f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
    // 0x1918f8: 0xc06063a  jal         func_1818E8
    ctx->pc = 0x1918F8u;
    SET_GPR_U32(ctx, 31, 0x191900u);
    ctx->pc = 0x1918FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918F8u;
            // 0x1918fc: 0x34a559a0  ori         $a1, $a1, 0x59A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22944);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818E8u;
    if (runtime->hasFunction(0x1818E8u)) {
        auto targetFn = runtime->lookupFunction(0x1818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191900u; }
        if (ctx->pc != 0x191900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001818E8_0x1818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191900u; }
        if (ctx->pc != 0x191900u) { return; }
    }
    ctx->pc = 0x191900u;
    // 0x191900: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x191900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x191904: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x191904u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x191908: 0x3c05d650  lui         $a1, 0xD650
    ctx->pc = 0x191908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54864 << 16));
    // 0x19190c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19190cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191910: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x191910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x191914: 0x2529c8e0  addiu       $t1, $t1, -0x3720
    ctx->pc = 0x191914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953184));
    // 0x191918: 0x34a5acb2  ori         $a1, $a1, 0xACB2
    ctx->pc = 0x191918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44210);
    // 0x19191c: 0xc06074a  jal         func_181D28
    ctx->pc = 0x19191Cu;
    SET_GPR_U32(ctx, 31, 0x191924u);
    ctx->pc = 0x191920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19191Cu;
            // 0x191920: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D28u;
    if (runtime->hasFunction(0x181D28u)) {
        auto targetFn = runtime->lookupFunction(0x181D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191924u; }
        if (ctx->pc != 0x191924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D28_0x181d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191924u; }
        if (ctx->pc != 0x191924u) { return; }
    }
    ctx->pc = 0x191924u;
    // 0x191924: 0x8e24c900  lw          $a0, -0x3700($s1)
    ctx->pc = 0x191924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953216)));
    // 0x191928: 0x3c05353d  lui         $a1, 0x353D
    ctx->pc = 0x191928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13629 << 16));
    // 0x19192c: 0x34a5ead6  ori         $a1, $a1, 0xEAD6
    ctx->pc = 0x19192cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60118);
    // 0x191930: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x191930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191934: 0x27a7003a  addiu       $a3, $sp, 0x3A
    ctx->pc = 0x191934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 58));
    // 0x191938: 0xc06081c  jal         func_182070
    ctx->pc = 0x191938u;
    SET_GPR_U32(ctx, 31, 0x191940u);
    ctx->pc = 0x19193Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191938u;
            // 0x19193c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191940u; }
        if (ctx->pc != 0x191940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191940u; }
        if (ctx->pc != 0x191940u) { return; }
    }
    ctx->pc = 0x191940u;
    // 0x191940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x191940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191944: 0xc090d8a  jal         func_243628
    ctx->pc = 0x191944u;
    SET_GPR_U32(ctx, 31, 0x19194Cu);
    ctx->pc = 0x191948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191944u;
            // 0x191948: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (runtime->hasFunction(0x243628u)) {
        auto targetFn = runtime->lookupFunction(0x243628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19194Cu; }
        if (ctx->pc != 0x19194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243628_0x243628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19194Cu; }
        if (ctx->pc != 0x19194Cu) { return; }
    }
    ctx->pc = 0x19194Cu;
    // 0x19194c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19194cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191950: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x191950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191954: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x191954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191958: 0x3e00008  jr          $ra
    ctx->pc = 0x191958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19195Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191958u;
            // 0x19195c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191960u;
    // 0x191960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x191964: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x191964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x191968: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x191968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19196c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19196cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191970: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x191974: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x191974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x191978: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x191978u;
    {
        const bool branch_taken_0x191978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19197Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191978u;
            // 0x19197c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191978) {
            ctx->pc = 0x1919B4u;
            goto label_1919b4;
        }
    }
    ctx->pc = 0x191980u;
    // 0x191980: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x191980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x191984: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x191984u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x191988: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x191988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19198c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19198cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191990: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x191990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x191994: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x191994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x191998: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x191998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19199c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1919a0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1919A0u;
    {
        const bool branch_taken_0x1919a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1919A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919A0u;
            // 0x1919a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919a0) {
            ctx->pc = 0x1919B0u;
            goto label_1919b0;
        }
    }
    ctx->pc = 0x1919A8u;
    // 0x1919a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1919a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1919ac: 0x0  nop
    ctx->pc = 0x1919acu;
    // NOP
label_1919b0:
    // 0x1919b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1919b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1919b4:
    // 0x1919b4: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1919B4u;
    {
        const bool branch_taken_0x1919b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919B4u;
            // 0x1919b8: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919b4) {
            ctx->pc = 0x191A4Cu;
            goto label_191a4c;
        }
    }
    ctx->pc = 0x1919BCu;
    // 0x1919bc: 0x8c42de90  lw          $v0, -0x2170($v0)
    ctx->pc = 0x1919bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958736)));
    // 0x1919c0: 0x2451003a  addiu       $s1, $v0, 0x3A
    ctx->pc = 0x1919c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x1919c4: 0x8042003a  lb          $v0, 0x3A($v0)
    ctx->pc = 0x1919c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x1919c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1919C8u;
    {
        const bool branch_taken_0x1919c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919C8u;
            // 0x1919cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919c8) {
            ctx->pc = 0x191A50u;
            goto label_191a50;
        }
    }
    ctx->pc = 0x1919D0u;
    // 0x1919d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1919d4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1919d8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1919d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1919dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1919DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1919E4u);
        ctx->pc = 0x1919E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1919DCu;
            // 0x1919e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1919E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1919E4u; }
            if (ctx->pc != 0x1919E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1919E4u;
    // 0x1919e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1919e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1919e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1919e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1919ec: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1919ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1919f0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1919f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1919f4: 0xc090ed4  jal         func_243B50
    ctx->pc = 0x1919F4u;
    SET_GPR_U32(ctx, 31, 0x1919FCu);
    ctx->pc = 0x1919F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1919F4u;
            // 0x1919f8: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243B50u;
    if (runtime->hasFunction(0x243B50u)) {
        auto targetFn = runtime->lookupFunction(0x243B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919FCu; }
        if (ctx->pc != 0x1919FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243b50_0x243b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919FCu; }
        if (ctx->pc != 0x1919FCu) { return; }
    }
    ctx->pc = 0x1919FCu;
    // 0x1919fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1919fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a00: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x191A00u;
    SET_GPR_U32(ctx, 31, 0x191A08u);
    ctx->pc = 0x191A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A00u;
            // 0x191a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A08u; }
        if (ctx->pc != 0x191A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A08u; }
        if (ctx->pc != 0x191A08u) { return; }
    }
    ctx->pc = 0x191A08u;
    // 0x191a08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a10: 0xc07dbf8  jal         func_1F6FE0
    ctx->pc = 0x191A10u;
    SET_GPR_U32(ctx, 31, 0x191A18u);
    ctx->pc = 0x191A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A10u;
            // 0x191a14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6FE0u;
    if (runtime->hasFunction(0x1F6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A18u; }
        if (ctx->pc != 0x191A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6FE0_0x1f6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A18u; }
        if (ctx->pc != 0x191A18u) { return; }
    }
    ctx->pc = 0x191A18u;
    // 0x191a18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x191a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x191a1c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x191a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191a20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x191a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x191a24: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191A24u;
    {
        const bool branch_taken_0x191a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x191A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A24u;
            // 0x191a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a24) {
            ctx->pc = 0x191A40u;
            goto label_191a40;
        }
    }
    ctx->pc = 0x191A2Cu;
    // 0x191a2c: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x191a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x191a30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x191a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191a38: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x191A38u;
    SET_GPR_U32(ctx, 31, 0x191A40u);
    ctx->pc = 0x191A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A38u;
            // 0x191a3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A40u; }
        if (ctx->pc != 0x191A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A40u; }
        if (ctx->pc != 0x191A40u) { return; }
    }
    ctx->pc = 0x191A40u;
label_191a40:
    // 0x191a40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x191a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a44: 0xc062ec0  jal         func_18BB00
    ctx->pc = 0x191A44u;
    SET_GPR_U32(ctx, 31, 0x191A4Cu);
    ctx->pc = 0x191A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A44u;
            // 0x191a48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BB00u;
    if (runtime->hasFunction(0x18BB00u)) {
        auto targetFn = runtime->lookupFunction(0x18BB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A4Cu; }
        if (ctx->pc != 0x191A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BB00_0x18bb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A4Cu; }
        if (ctx->pc != 0x191A4Cu) { return; }
    }
    ctx->pc = 0x191A4Cu;
label_191a4c:
    // 0x191a4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x191a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_191a50:
    // 0x191a50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x191a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191a54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191a58: 0x3e00008  jr          $ra
    ctx->pc = 0x191A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A58u;
            // 0x191a5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191A60u;
    // 0x191a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x191a64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x191a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x191a68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x191a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x191a6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x191a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x191a70: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x191a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x191a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191a78: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x191a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x191a7c: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x191a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x191a80: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x191a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x191a84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x191A84u;
    {
        const bool branch_taken_0x191a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A84u;
            // 0x191a88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a84) {
            ctx->pc = 0x191ABCu;
            goto label_191abc;
        }
    }
    ctx->pc = 0x191A8Cu;
    // 0x191a8c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x191a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x191a90: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x191a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x191a94: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x191a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x191a98: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191a9c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x191a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x191aa0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x191aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x191aa4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x191aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191aa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191aac: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191AACu;
    {
        const bool branch_taken_0x191aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x191AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191AACu;
            // 0x191ab0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191aac) {
            ctx->pc = 0x191AB8u;
            goto label_191ab8;
        }
    }
    ctx->pc = 0x191AB4u;
    // 0x191ab4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x191ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_191ab8:
    // 0x191ab8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x191ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191abc:
    // 0x191abc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x191abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x191ac0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x191ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x191ac4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x191ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x191ac8: 0x40f809  jalr        $v0
    ctx->pc = 0x191AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191AD0u);
        ctx->pc = 0x191ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191AC8u;
            // 0x191acc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191AD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191AD0u; }
            if (ctx->pc != 0x191AD0u) { return; }
        }
        }
    }
    ctx->pc = 0x191AD0u;
    // 0x191ad0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191ad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ad4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x191ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x191ad8: 0x8c45deac  lw          $a1, -0x2154($v0)
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958764)));
    // 0x191adc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x191adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x191ae0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x191AE0u;
    {
        const bool branch_taken_0x191ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191AE0u;
            // 0x191ae4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ae0) {
            ctx->pc = 0x191B18u;
            goto label_191b18;
        }
    }
    ctx->pc = 0x191AE8u;
    // 0x191ae8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x191ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x191aec: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x191aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x191af0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x191af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x191af4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191af8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x191af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x191afc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x191afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x191b00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x191b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191b04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191b08: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191B08u;
    {
        const bool branch_taken_0x191b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x191B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B08u;
            // 0x191b0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b08) {
            ctx->pc = 0x191B14u;
            goto label_191b14;
        }
    }
    ctx->pc = 0x191B10u;
    // 0x191b10: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x191b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_191b14:
    // 0x191b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191b18:
    // 0x191b18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191b1c: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x191b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x191b20: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x191b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x191b24: 0x2506de90  addiu       $a2, $t0, -0x2170
    ctx->pc = 0x191b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958736));
    // 0x191b28: 0xc4c5000c  lwc1        $f5, 0xC($a2)
    ctx->pc = 0x191b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x191b2c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x191b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x191b30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x191b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191b34: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x191b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x191b38: 0x120000a5  beqz        $s0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x191B38u;
    {
        const bool branch_taken_0x191b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B38u;
            // 0x191b3c: 0x8c83002c  lw          $v1, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b38) {
            ctx->pc = 0x191DD0u;
            goto label_191dd0;
        }
    }
    ctx->pc = 0x191B40u;
    // 0x191b40: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191b44: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x191b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b48: 0xc446c658  lwc1        $f6, -0x39A8($v0)
    ctx->pc = 0x191b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x191b4c: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x191b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x191b50: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x191b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191b54: 0x8d03de90  lw          $v1, -0x2170($t0)
    ctx->pc = 0x191b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294958736)));
    // 0x191b58: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x191b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x191b5c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x191b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x191b60: 0x94650038  lhu         $a1, 0x38($v1)
    ctx->pc = 0x191b60u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x191b64: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x191b64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x191b68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191b6c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x191B6Cu;
    {
        const bool branch_taken_0x191b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B6Cu;
            // 0x191b70: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b6c) {
            ctx->pc = 0x191BF0u;
            goto label_191bf0;
        }
    }
    ctx->pc = 0x191B74u;
    // 0x191b74: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x191b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191b78: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x191b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x191b7c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x191b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x191b80: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x191b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x191b84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x191b88: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x191b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x191b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191b90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191b94: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x191b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x191b98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x191b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x191b9c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x191b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191ba0: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x191ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ba4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x191ba4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x191ba8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x191ba8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x191bac: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x191bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x191bb0: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x191bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191bb4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x191bb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x191bb8: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x191bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191bbc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x191bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x191bc0: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x191bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x191bc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x191bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x191bc8: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x191bc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x191bcc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x191bccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x191bd0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x191BD0u;
    {
        const bool branch_taken_0x191bd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x191BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191BD0u;
            // 0x191bd4: 0x46012940  add.s       $f5, $f5, $f1 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bd0) {
            ctx->pc = 0x191BE8u;
            goto label_191be8;
        }
    }
    ctx->pc = 0x191BD8u;
    // 0x191bd8: 0x46041803  div.s       $f0, $f3, $f4
    ctx->pc = 0x191bd8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[4];
    // 0x191bdc: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x191bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x191be0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x191be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x191be4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x191be4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_191be8:
    // 0x191be8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x191BE8u;
    {
        const bool branch_taken_0x191be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191BE8u;
            // 0x191bec: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191be8) {
            ctx->pc = 0x191C14u;
            goto label_191c14;
        }
    }
    ctx->pc = 0x191BF0u;
label_191bf0:
    // 0x191bf0: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x191bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191bf4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x191bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x191bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x191bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x191bfc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x191bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191c00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x191c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x191c04: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x191c04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x191c08: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x191c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x191c0c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x191c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x191c10: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x191c10u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_191c14:
    // 0x191c14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x191c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191c18: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x191c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191c1c: 0x0  nop
    ctx->pc = 0x191c1cu;
    // NOP
    // 0x191c20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x191C20u;
    {
        const bool branch_taken_0x191c20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191c20) {
            ctx->pc = 0x191C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191C20u;
            // 0x191c24: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x191C28u;
            goto label_191c28;
        }
    }
    ctx->pc = 0x191C28u;
label_191c28:
    // 0x191c28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x191c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191c30: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x191c30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x191c34: 0x2623de90  addiu       $v1, $s1, -0x2170
    ctx->pc = 0x191c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958736));
    // 0x191c38: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x191c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191c3c: 0x0  nop
    ctx->pc = 0x191c3cu;
    // NOP
    // 0x191c40: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x191C40u;
    {
        const bool branch_taken_0x191c40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x191C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C40u;
            // 0x191c44: 0xe465000c  swc1        $f5, 0xC($v1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c40) {
            ctx->pc = 0x191D7Cu;
            goto label_191d7c;
        }
    }
    ctx->pc = 0x191C48u;
    // 0x191c48: 0x8e22de90  lw          $v0, -0x2170($s1)
    ctx->pc = 0x191c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958736)));
    // 0x191c4c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x191c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191c50: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x191c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191c54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191c58: 0x0  nop
    ctx->pc = 0x191c58u;
    // NOP
    // 0x191c5c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x191C5Cu;
    {
        const bool branch_taken_0x191c5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C5Cu;
            // 0x191c60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c5c) {
            ctx->pc = 0x191C78u;
            goto label_191c78;
        }
    }
    ctx->pc = 0x191C64u;
    // 0x191c64: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x191c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191c68: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x191c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191c70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x191C70u;
    {
        const bool branch_taken_0x191c70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191c70) {
            ctx->pc = 0x191C7Cu;
            goto label_191c7c;
        }
    }
    ctx->pc = 0x191C78u;
label_191c78:
    // 0x191c78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x191c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191c7c:
    // 0x191c7c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x191C7Cu;
    {
        const bool branch_taken_0x191c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C7Cu;
            // 0x191c80: 0x8e22de90  lw          $v0, -0x2170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c7c) {
            ctx->pc = 0x191CF0u;
            goto label_191cf0;
        }
    }
    ctx->pc = 0x191C84u;
    // 0x191c84: 0x94430036  lhu         $v1, 0x36($v0)
    ctx->pc = 0x191c84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x191c88: 0x94420034  lhu         $v0, 0x34($v0)
    ctx->pc = 0x191c88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x191c8c: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x191C8Cu;
    {
        const bool branch_taken_0x191c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x191C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C8Cu;
            // 0x191c90: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c8c) {
            ctx->pc = 0x191CF4u;
            goto label_191cf4;
        }
    }
    ctx->pc = 0x191C94u;
    // 0x191c94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x191c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191c98: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x191c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x191c9c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x191c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x191ca0: 0x40f809  jalr        $v0
    ctx->pc = 0x191CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191CA8u);
        ctx->pc = 0x191CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CA0u;
            // 0x191ca4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191CA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191CA8u; }
            if (ctx->pc != 0x191CA8u) { return; }
        }
        }
    }
    ctx->pc = 0x191CA8u;
    // 0x191ca8: 0x8e23de90  lw          $v1, -0x2170($s1)
    ctx->pc = 0x191ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958736)));
    // 0x191cac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x191cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191cb0: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x191cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x191cb4: 0xc080836  jal         func_2020D8
    ctx->pc = 0x191CB4u;
    SET_GPR_U32(ctx, 31, 0x191CBCu);
    ctx->pc = 0x191CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191CB4u;
            // 0x191cb8: 0x94650034  lhu         $a1, 0x34($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    if (runtime->hasFunction(0x2020D8u)) {
        auto targetFn = runtime->lookupFunction(0x2020D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CBCu; }
        if (ctx->pc != 0x191CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002020D8_0x2020d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CBCu; }
        if (ctx->pc != 0x191CBCu) { return; }
    }
    ctx->pc = 0x191CBCu;
    // 0x191cbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x191cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191cc0: 0xc08223a  jal         func_2088E8
    ctx->pc = 0x191CC0u;
    SET_GPR_U32(ctx, 31, 0x191CC8u);
    ctx->pc = 0x191CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191CC0u;
            // 0x191cc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2088E8u;
    if (runtime->hasFunction(0x2088E8u)) {
        auto targetFn = runtime->lookupFunction(0x2088E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CC8u; }
        if (ctx->pc != 0x191CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002088E8_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CC8u; }
        if (ctx->pc != 0x191CC8u) { return; }
    }
    ctx->pc = 0x191CC8u;
    // 0x191cc8: 0x8e22de90  lw          $v0, -0x2170($s1)
    ctx->pc = 0x191cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958736)));
    // 0x191ccc: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x191cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x191cd0: 0xc080836  jal         func_2020D8
    ctx->pc = 0x191CD0u;
    SET_GPR_U32(ctx, 31, 0x191CD8u);
    ctx->pc = 0x191CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191CD0u;
            // 0x191cd4: 0x94450034  lhu         $a1, 0x34($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    if (runtime->hasFunction(0x2020D8u)) {
        auto targetFn = runtime->lookupFunction(0x2020D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CD8u; }
        if (ctx->pc != 0x191CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002020D8_0x2020d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CD8u; }
        if (ctx->pc != 0x191CD8u) { return; }
    }
    ctx->pc = 0x191CD8u;
    // 0x191cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191cdc: 0xc08223a  jal         func_2088E8
    ctx->pc = 0x191CDCu;
    SET_GPR_U32(ctx, 31, 0x191CE4u);
    ctx->pc = 0x191CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191CDCu;
            // 0x191ce0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2088E8u;
    if (runtime->hasFunction(0x2088E8u)) {
        auto targetFn = runtime->lookupFunction(0x2088E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CE4u; }
        if (ctx->pc != 0x191CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002088E8_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191CE4u; }
        if (ctx->pc != 0x191CE4u) { return; }
    }
    ctx->pc = 0x191CE4u;
    // 0x191ce4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x191CE4u;
    {
        const bool branch_taken_0x191ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191CE4u;
            // 0x191ce8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ce4) {
            ctx->pc = 0x191DD4u;
            goto label_191dd4;
        }
    }
    ctx->pc = 0x191CECu;
    // 0x191cec: 0x0  nop
    ctx->pc = 0x191cecu;
    // NOP
label_191cf0:
    // 0x191cf0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x191cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_191cf4:
    // 0x191cf4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x191cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x191cf8: 0x2451de90  addiu       $s1, $v0, -0x2170
    ctx->pc = 0x191cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x191cfc: 0xc6340010  lwc1        $f20, 0x10($s1)
    ctx->pc = 0x191cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191d00: 0x8c42de90  lw          $v0, -0x2170($v0)
    ctx->pc = 0x191d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958736)));
    // 0x191d04: 0x46142801  sub.s       $f0, $f5, $f20
    ctx->pc = 0x191d04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[20]);
    // 0x191d08: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x191d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191d0c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x191d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x191d10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x191d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191d14: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x191d14u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x191d18: 0xe6340010  swc1        $f20, 0x10($s1)
    ctx->pc = 0x191d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x191d1c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x191d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x191d20: 0x40f809  jalr        $v0
    ctx->pc = 0x191D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191D28u);
        ctx->pc = 0x191D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D20u;
            // 0x191d24: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191D28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191D28u; }
            if (ctx->pc != 0x191D28u) { return; }
        }
        }
    }
    ctx->pc = 0x191D28u;
    // 0x191d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d2c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x191d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x191d30: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x191d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x191d34: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x191D34u;
    {
        const bool branch_taken_0x191d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x191d34) {
            ctx->pc = 0x191D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191D34u;
            // 0x191d38: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191D48u;
            goto label_191d48;
        }
    }
    ctx->pc = 0x191D3Cu;
    // 0x191d3c: 0xc07d8ea  jal         func_1F63A8
    ctx->pc = 0x191D3Cu;
    SET_GPR_U32(ctx, 31, 0x191D44u);
    ctx->pc = 0x191D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191D3Cu;
            // 0x191d40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63A8u;
    if (runtime->hasFunction(0x1F63A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D44u; }
        if (ctx->pc != 0x191D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f63a8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D44u; }
        if (ctx->pc != 0x191D44u) { return; }
    }
    ctx->pc = 0x191D44u;
    // 0x191d44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x191d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_191d48:
    // 0x191d48: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x191d4c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x191d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x191d50: 0x40f809  jalr        $v0
    ctx->pc = 0x191D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191D58u);
        ctx->pc = 0x191D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D50u;
            // 0x191d54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191D58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191D58u; }
            if (ctx->pc != 0x191D58u) { return; }
        }
        }
    }
    ctx->pc = 0x191D58u;
    // 0x191d58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d5c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x191d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x191d60: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x191d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x191d64: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x191D64u;
    {
        const bool branch_taken_0x191d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x191D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D64u;
            // 0x191d68: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d64) {
            ctx->pc = 0x191DD4u;
            goto label_191dd4;
        }
    }
    ctx->pc = 0x191D6Cu;
    // 0x191d6c: 0xc07d8ea  jal         func_1F63A8
    ctx->pc = 0x191D6Cu;
    SET_GPR_U32(ctx, 31, 0x191D74u);
    ctx->pc = 0x191D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191D6Cu;
            // 0x191d70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63A8u;
    if (runtime->hasFunction(0x1F63A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D74u; }
        if (ctx->pc != 0x191D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f63a8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D74u; }
        if (ctx->pc != 0x191D74u) { return; }
    }
    ctx->pc = 0x191D74u;
    // 0x191d74: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x191D74u;
    {
        const bool branch_taken_0x191d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D74u;
            // 0x191d78: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d74) {
            ctx->pc = 0x191DD4u;
            goto label_191dd4;
        }
    }
    ctx->pc = 0x191D7Cu;
label_191d7c:
    // 0x191d7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x191d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191d80: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x191d80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x191d84: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x191d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x191d88: 0x40f809  jalr        $v0
    ctx->pc = 0x191D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191D90u);
        ctx->pc = 0x191D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D88u;
            // 0x191d8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191D90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191D90u; }
            if (ctx->pc != 0x191D90u) { return; }
        }
        }
    }
    ctx->pc = 0x191D90u;
    // 0x191d90: 0x8e23de90  lw          $v1, -0x2170($s1)
    ctx->pc = 0x191d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958736)));
    // 0x191d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x191d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d98: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x191d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x191d9c: 0xc080836  jal         func_2020D8
    ctx->pc = 0x191D9Cu;
    SET_GPR_U32(ctx, 31, 0x191DA4u);
    ctx->pc = 0x191DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191D9Cu;
            // 0x191da0: 0x94650036  lhu         $a1, 0x36($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    if (runtime->hasFunction(0x2020D8u)) {
        auto targetFn = runtime->lookupFunction(0x2020D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DA4u; }
        if (ctx->pc != 0x191DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002020D8_0x2020d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DA4u; }
        if (ctx->pc != 0x191DA4u) { return; }
    }
    ctx->pc = 0x191DA4u;
    // 0x191da4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x191da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191da8: 0xc08223a  jal         func_2088E8
    ctx->pc = 0x191DA8u;
    SET_GPR_U32(ctx, 31, 0x191DB0u);
    ctx->pc = 0x191DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191DA8u;
            // 0x191dac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2088E8u;
    if (runtime->hasFunction(0x2088E8u)) {
        auto targetFn = runtime->lookupFunction(0x2088E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DB0u; }
        if (ctx->pc != 0x191DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002088E8_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DB0u; }
        if (ctx->pc != 0x191DB0u) { return; }
    }
    ctx->pc = 0x191DB0u;
    // 0x191db0: 0x8e22de90  lw          $v0, -0x2170($s1)
    ctx->pc = 0x191db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958736)));
    // 0x191db4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x191db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x191db8: 0xc080836  jal         func_2020D8
    ctx->pc = 0x191DB8u;
    SET_GPR_U32(ctx, 31, 0x191DC0u);
    ctx->pc = 0x191DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191DB8u;
            // 0x191dbc: 0x94450036  lhu         $a1, 0x36($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    if (runtime->hasFunction(0x2020D8u)) {
        auto targetFn = runtime->lookupFunction(0x2020D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DC0u; }
        if (ctx->pc != 0x191DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002020D8_0x2020d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DC0u; }
        if (ctx->pc != 0x191DC0u) { return; }
    }
    ctx->pc = 0x191DC0u;
    // 0x191dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191dc4: 0xc08223a  jal         func_2088E8
    ctx->pc = 0x191DC4u;
    SET_GPR_U32(ctx, 31, 0x191DCCu);
    ctx->pc = 0x191DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191DC4u;
            // 0x191dc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2088E8u;
    if (runtime->hasFunction(0x2088E8u)) {
        auto targetFn = runtime->lookupFunction(0x2088E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DCCu; }
        if (ctx->pc != 0x191DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002088E8_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DCCu; }
        if (ctx->pc != 0x191DCCu) { return; }
    }
    ctx->pc = 0x191DCCu;
    // 0x191dcc: 0x0  nop
    ctx->pc = 0x191dccu;
    // NOP
label_191dd0:
    // 0x191dd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x191dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_191dd4:
    // 0x191dd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x191dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191dd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x191dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191ddc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x191ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191de4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x191de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191de8: 0x3e00008  jr          $ra
    ctx->pc = 0x191DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191DE8u;
            // 0x191dec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191DF0u;
    // 0x191df0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x191df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x191df4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x191df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x191df8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x191df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x191dfc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x191dfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191e00: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x191e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x191e04: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x191e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x191e08: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x191e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x191e0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x191e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x191e10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x191e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x191e14: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x191e14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x191e18: 0x8ea50060  lw          $a1, 0x60($s5)
    ctx->pc = 0x191e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x191e1c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x191e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x191e20: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x191E20u;
    {
        const bool branch_taken_0x191e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191E20u;
            // 0x191e24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e20) {
            ctx->pc = 0x191E5Cu;
            goto label_191e5c;
        }
    }
    ctx->pc = 0x191E28u;
    // 0x191e28: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x191e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x191e2c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x191e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x191e30: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x191e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x191e34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191e38: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x191e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x191e3c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x191e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x191e40: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x191e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191e44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191e48: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191E48u;
    {
        const bool branch_taken_0x191e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x191E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191E48u;
            // 0x191e4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e48) {
            ctx->pc = 0x191E58u;
            goto label_191e58;
        }
    }
    ctx->pc = 0x191E50u;
    // 0x191e50: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x191e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x191e54: 0x0  nop
    ctx->pc = 0x191e54u;
    // NOP
label_191e58:
    // 0x191e58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x191e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191e5c:
    // 0x191e5c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x191e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x191e60: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x191e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x191e64: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x191e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x191e68: 0x40f809  jalr        $v0
    ctx->pc = 0x191E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191E70u);
        ctx->pc = 0x191E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191E68u;
            // 0x191e6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191E70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191E70u; }
            if (ctx->pc != 0x191E70u) { return; }
        }
        }
    }
    ctx->pc = 0x191E70u;
    // 0x191e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x191e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191e74: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x191e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x191e78: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x191e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x191e7c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x191E7Cu;
    {
        const bool branch_taken_0x191e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191E7Cu;
            // 0x191e80: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e7c) {
            ctx->pc = 0x191EB4u;
            goto label_191eb4;
        }
    }
    ctx->pc = 0x191E84u;
    // 0x191e84: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x191e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x191e88: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x191e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x191e8c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x191e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x191e90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191e94: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x191e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x191e98: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x191e9c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x191e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191ea0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191ea4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191EA4u;
    {
        const bool branch_taken_0x191ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x191EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191EA4u;
            // 0x191ea8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ea4) {
            ctx->pc = 0x191EB0u;
            goto label_191eb0;
        }
    }
    ctx->pc = 0x191EACu;
    // 0x191eac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x191eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_191eb0:
    // 0x191eb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x191eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191eb4:
    // 0x191eb4: 0x5240008c  beql        $s2, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x191EB4u;
    {
        const bool branch_taken_0x191eb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191eb4) {
            ctx->pc = 0x191EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191EB4u;
            // 0x191eb8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1920E8u;
            goto label_1920e8;
        }
    }
    ctx->pc = 0x191EBCu;
    // 0x191ebc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x191ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x191ec0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x191ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x191ec4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x191ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x191ec8: 0x40f809  jalr        $v0
    ctx->pc = 0x191EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191ED0u);
        ctx->pc = 0x191ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191EC8u;
            // 0x191ecc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191ED0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191ED0u; }
            if (ctx->pc != 0x191ED0u) { return; }
        }
        }
    }
    ctx->pc = 0x191ED0u;
    // 0x191ed0: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x191ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x191ed4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x191ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x191ed8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x191ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x191edc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x191EDCu;
    {
        const bool branch_taken_0x191edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191EDCu;
            // 0x191ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191edc) {
            ctx->pc = 0x191F20u;
            goto label_191f20;
        }
    }
    ctx->pc = 0x191EE4u;
    // 0x191ee4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x191ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x191ee8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191eec: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x191EECu;
    {
        const bool branch_taken_0x191eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x191EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191EECu;
            // 0x191ef0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191eec) {
            ctx->pc = 0x191F1Cu;
            goto label_191f1c;
        }
    }
    ctx->pc = 0x191EF4u;
    // 0x191ef4: 0x0  nop
    ctx->pc = 0x191ef4u;
    // NOP
label_191ef8:
    // 0x191ef8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x191ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x191efc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x191efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x191f00: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x191f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x191f04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191F04u;
    {
        const bool branch_taken_0x191f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F04u;
            // 0x191f08: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f04) {
            ctx->pc = 0x191F20u;
            goto label_191f20;
        }
    }
    ctx->pc = 0x191F0Cu;
    // 0x191f0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x191f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191f10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x191f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191f14: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x191F14u;
    {
        const bool branch_taken_0x191f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x191F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F14u;
            // 0x191f18: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f14) {
            ctx->pc = 0x191EF8u;
            runtime->cooperativeGuestYield();
            goto label_191ef8;
        }
    }
    ctx->pc = 0x191F1Cu;
label_191f1c:
    // 0x191f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191f20:
    // 0x191f20: 0x54a20071  bnel        $a1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x191F20u;
    {
        const bool branch_taken_0x191f20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x191f20) {
            ctx->pc = 0x191F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191F20u;
            // 0x191f24: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1920E8u;
            goto label_1920e8;
        }
    }
    ctx->pc = 0x191F28u;
    // 0x191f28: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191f2c: 0x8ea50068  lw          $a1, 0x68($s5)
    ctx->pc = 0x191f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x191f30: 0x8c44c900  lw          $a0, -0x3700($v0)
    ctx->pc = 0x191f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953216)));
    // 0x191f34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x191f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x191f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x191f3c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x191F3Cu;
    SET_GPR_U32(ctx, 31, 0x191F44u);
    ctx->pc = 0x191F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191F3Cu;
            // 0x191f40: 0x3c140030  lui         $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F44u; }
        if (ctx->pc != 0x191F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F44u; }
        if (ctx->pc != 0x191F44u) { return; }
    }
    ctx->pc = 0x191F44u;
    // 0x191f44: 0x2691de90  addiu       $s1, $s4, -0x2170
    ctx->pc = 0x191f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958736));
    // 0x191f48: 0xae82de90  sw          $v0, -0x2170($s4)
    ctx->pc = 0x191f48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294958736), GPR_U32(ctx, 2));
    // 0x191f4c: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x191f4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x191f50: 0xe6340008  swc1        $f20, 0x8($s1)
    ctx->pc = 0x191f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x191f54: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x191f54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x191f58: 0xe6340010  swc1        $f20, 0x10($s1)
    ctx->pc = 0x191f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x191f5c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x191f60: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x191f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x191f64: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x191f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x191f68: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x191f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x191f6c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x191f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x191f70: 0x40f809  jalr        $v0
    ctx->pc = 0x191F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191F78u);
        ctx->pc = 0x191F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191F70u;
            // 0x191f74: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191F78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191F78u; }
            if (ctx->pc != 0x191F78u) { return; }
        }
        }
    }
    ctx->pc = 0x191F78u;
    // 0x191f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x191f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x191f7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x191f80: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x191f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x191f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f88: 0xc07d8fa  jal         func_1F63E8
    ctx->pc = 0x191F88u;
    SET_GPR_U32(ctx, 31, 0x191F90u);
    ctx->pc = 0x191F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191F88u;
            // 0x191f8c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63E8u;
    if (runtime->hasFunction(0x1F63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F90u; }
        if (ctx->pc != 0x191F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F63E8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F90u; }
        if (ctx->pc != 0x191F90u) { return; }
    }
    ctx->pc = 0x191F90u;
    // 0x191f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f94: 0xc07d8ea  jal         func_1F63A8
    ctx->pc = 0x191F94u;
    SET_GPR_U32(ctx, 31, 0x191F9Cu);
    ctx->pc = 0x191F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191F94u;
            // 0x191f98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63A8u;
    if (runtime->hasFunction(0x1F63A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F9Cu; }
        if (ctx->pc != 0x191F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f63a8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F9Cu; }
        if (ctx->pc != 0x191F9Cu) { return; }
    }
    ctx->pc = 0x191F9Cu;
    // 0x191f9c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x191f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x191fa0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x191fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x191fa4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x191fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x191fa8: 0x40f809  jalr        $v0
    ctx->pc = 0x191FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191FB0u);
        ctx->pc = 0x191FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FA8u;
            // 0x191fac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191FB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191FB0u; }
            if (ctx->pc != 0x191FB0u) { return; }
        }
        }
    }
    ctx->pc = 0x191FB0u;
    // 0x191fb0: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x191fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x191fb4: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x191fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x191fb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191FB8u;
    {
        const bool branch_taken_0x191fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FB8u;
            // 0x191fbc: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fb8) {
            ctx->pc = 0x191FC8u;
            goto label_191fc8;
        }
    }
    ctx->pc = 0x191FC0u;
    // 0x191fc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191FC0u;
    {
        const bool branch_taken_0x191fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FC0u;
            // 0x191fc4: 0xc46c001c  lwc1        $f12, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fc0) {
            ctx->pc = 0x191FCCu;
            goto label_191fcc;
        }
    }
    ctx->pc = 0x191FC8u;
label_191fc8:
    // 0x191fc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x191fc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_191fcc:
    // 0x191fcc: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x191fccu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x191fd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x191fd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x191fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x191fd8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x191fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x191fdc: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x191fdcu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
    // 0x191fe0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x191fe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x191fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191fe8: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x191fe8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x191fec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191ff0: 0x0  nop
    ctx->pc = 0x191ff0u;
    // NOP
    // 0x191ff4: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x191FF4u;
    {
        const bool branch_taken_0x191ff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x191FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191FF4u;
            // 0x191ff8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ff4) {
            ctx->pc = 0x1920E8u;
            goto label_1920e8;
        }
    }
    ctx->pc = 0x191FFCu;
    // 0x191ffc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x191ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x192000: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x192000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x192004: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x192004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x192008: 0x40f809  jalr        $v0
    ctx->pc = 0x192008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192010u);
        ctx->pc = 0x19200Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192008u;
            // 0x19200c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x192010u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x192010u; }
            if (ctx->pc != 0x192010u) { return; }
        }
        }
    }
    ctx->pc = 0x192010u;
    // 0x192010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192014: 0x2683de90  addiu       $v1, $s4, -0x2170
    ctx->pc = 0x192014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958736));
    // 0x192018: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x192018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x19201c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192020: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x192020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x192024: 0xc07d8fa  jal         func_1F63E8
    ctx->pc = 0x192024u;
    SET_GPR_U32(ctx, 31, 0x19202Cu);
    ctx->pc = 0x192028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192024u;
            // 0x192028: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63E8u;
    if (runtime->hasFunction(0x1F63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19202Cu; }
        if (ctx->pc != 0x19202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F63E8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19202Cu; }
        if (ctx->pc != 0x19202Cu) { return; }
    }
    ctx->pc = 0x19202Cu;
    // 0x19202c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192030: 0xc07d8ea  jal         func_1F63A8
    ctx->pc = 0x192030u;
    SET_GPR_U32(ctx, 31, 0x192038u);
    ctx->pc = 0x192034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192030u;
            // 0x192034: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63A8u;
    if (runtime->hasFunction(0x1F63A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192038u; }
        if (ctx->pc != 0x192038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f63a8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192038u; }
        if (ctx->pc != 0x192038u) { return; }
    }
    ctx->pc = 0x192038u;
    // 0x192038: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x192038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x19203c: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x19203cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x192040: 0x24421a60  addiu       $v0, $v0, 0x1A60
    ctx->pc = 0x192040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6752));
    // 0x192044: 0x24631960  addiu       $v1, $v1, 0x1960
    ctx->pc = 0x192044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x192048: 0xaea2002c  sw          $v0, 0x2C($s5)
    ctx->pc = 0x192048u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 2));
    // 0x19204c: 0x8e82de90  lw          $v0, -0x2170($s4)
    ctx->pc = 0x19204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294958736)));
    // 0x192050: 0xaea30030  sw          $v1, 0x30($s5)
    ctx->pc = 0x192050u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
    // 0x192054: 0x2451003a  addiu       $s1, $v0, 0x3A
    ctx->pc = 0x192054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x192058: 0x8042003a  lb          $v0, 0x3A($v0)
    ctx->pc = 0x192058u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x19205c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x19205Cu;
    {
        const bool branch_taken_0x19205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19205Cu;
            // 0x192060: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19205c) {
            ctx->pc = 0x1920E8u;
            goto label_1920e8;
        }
    }
    ctx->pc = 0x192064u;
    // 0x192064: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x192064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x192068: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x192068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19206c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x19206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x192070: 0x40f809  jalr        $v0
    ctx->pc = 0x192070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192078u);
        ctx->pc = 0x192074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192070u;
            // 0x192074: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x192078u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x192078u; }
            if (ctx->pc != 0x192078u) { return; }
        }
        }
    }
    ctx->pc = 0x192078u;
    // 0x192078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19207c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x19207cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x192080: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x192080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x192084: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x192084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x192088: 0xc090ed4  jal         func_243B50
    ctx->pc = 0x192088u;
    SET_GPR_U32(ctx, 31, 0x192090u);
    ctx->pc = 0x19208Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192088u;
            // 0x19208c: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243B50u;
    if (runtime->hasFunction(0x243B50u)) {
        auto targetFn = runtime->lookupFunction(0x243B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192090u; }
        if (ctx->pc != 0x192090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243b50_0x243b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192090u; }
        if (ctx->pc != 0x192090u) { return; }
    }
    ctx->pc = 0x192090u;
    // 0x192090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192094: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x192094u;
    SET_GPR_U32(ctx, 31, 0x19209Cu);
    ctx->pc = 0x192098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192094u;
            // 0x192098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19209Cu; }
        if (ctx->pc != 0x19209Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19209Cu; }
        if (ctx->pc != 0x19209Cu) { return; }
    }
    ctx->pc = 0x19209Cu;
    // 0x19209c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19209cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1920a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1920a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1920a4: 0xc07dbf8  jal         func_1F6FE0
    ctx->pc = 0x1920A4u;
    SET_GPR_U32(ctx, 31, 0x1920ACu);
    ctx->pc = 0x1920A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1920A4u;
            // 0x1920a8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6FE0u;
    if (runtime->hasFunction(0x1F6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920ACu; }
        if (ctx->pc != 0x1920ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6FE0_0x1f6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920ACu; }
        if (ctx->pc != 0x1920ACu) { return; }
    }
    ctx->pc = 0x1920ACu;
    // 0x1920ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1920acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1920b0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1920b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1920b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1920b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1920b8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1920B8u;
    {
        const bool branch_taken_0x1920b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1920BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1920B8u;
            // 0x1920bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920b8) {
            ctx->pc = 0x1920D8u;
            goto label_1920d8;
        }
    }
    ctx->pc = 0x1920C0u;
    // 0x1920c0: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1920c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1920c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1920c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1920c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1920cc: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x1920CCu;
    SET_GPR_U32(ctx, 31, 0x1920D4u);
    ctx->pc = 0x1920D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1920CCu;
            // 0x1920d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920D4u; }
        if (ctx->pc != 0x1920D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920D4u; }
        if (ctx->pc != 0x1920D4u) { return; }
    }
    ctx->pc = 0x1920D4u;
    // 0x1920d4: 0x0  nop
    ctx->pc = 0x1920d4u;
    // NOP
label_1920d8:
    // 0x1920d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1920d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1920dc: 0xc062ec0  jal         func_18BB00
    ctx->pc = 0x1920DCu;
    SET_GPR_U32(ctx, 31, 0x1920E4u);
    ctx->pc = 0x1920E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1920DCu;
            // 0x1920e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BB00u;
    if (runtime->hasFunction(0x18BB00u)) {
        auto targetFn = runtime->lookupFunction(0x18BB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920E4u; }
        if (ctx->pc != 0x1920E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BB00_0x18bb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920E4u; }
        if (ctx->pc != 0x1920E4u) { return; }
    }
    ctx->pc = 0x1920E4u;
    // 0x1920e4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1920e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1920e8:
    // 0x1920e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1920e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1920ec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1920ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1920f0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1920f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1920f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1920f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1920f8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1920f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1920fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1920fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192100: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x192100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192104: 0x3e00008  jr          $ra
    ctx->pc = 0x192104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192104u;
            // 0x192108: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919B0u: goto label_1919b0;
            case 0x1919B4u: goto label_1919b4;
            case 0x191A40u: goto label_191a40;
            case 0x191A4Cu: goto label_191a4c;
            case 0x191A50u: goto label_191a50;
            case 0x191AB8u: goto label_191ab8;
            case 0x191ABCu: goto label_191abc;
            case 0x191B14u: goto label_191b14;
            case 0x191B18u: goto label_191b18;
            case 0x191BE8u: goto label_191be8;
            case 0x191BF0u: goto label_191bf0;
            case 0x191C14u: goto label_191c14;
            case 0x191C28u: goto label_191c28;
            case 0x191C78u: goto label_191c78;
            case 0x191C7Cu: goto label_191c7c;
            case 0x191CF0u: goto label_191cf0;
            case 0x191CF4u: goto label_191cf4;
            case 0x191D48u: goto label_191d48;
            case 0x191D7Cu: goto label_191d7c;
            case 0x191DD0u: goto label_191dd0;
            case 0x191DD4u: goto label_191dd4;
            case 0x191E58u: goto label_191e58;
            case 0x191E5Cu: goto label_191e5c;
            case 0x191EB0u: goto label_191eb0;
            case 0x191EB4u: goto label_191eb4;
            case 0x191EF8u: goto label_191ef8;
            case 0x191F1Cu: goto label_191f1c;
            case 0x191F20u: goto label_191f20;
            case 0x191FC8u: goto label_191fc8;
            case 0x191FCCu: goto label_191fcc;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920E8u: goto label_1920e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19210Cu;
    // 0x19210c: 0x0  nop
    ctx->pc = 0x19210cu;
    // NOP
}
