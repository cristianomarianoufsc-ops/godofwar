#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D530
// Address: 0x18d530 - 0x18e290
void sub_0018D530_0x18d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D530_0x18d530");
#endif

    ctx->pc = 0x18d530u;

    // 0x18d530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18d534: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18d534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18d538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18d538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d53c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18d53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18d540: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18d540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d544: 0xc090ebe  jal         func_243AF8
    ctx->pc = 0x18D544u;
    SET_GPR_U32(ctx, 31, 0x18D54Cu);
    ctx->pc = 0x18D548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D544u;
            // 0x18d548: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243AF8u;
    if (runtime->hasFunction(0x243AF8u)) {
        auto targetFn = runtime->lookupFunction(0x243AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D54Cu; }
        if (ctx->pc != 0x18D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243af8_0x243b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D54Cu; }
        if (ctx->pc != 0x18D54Cu) { return; }
    }
    ctx->pc = 0x18D54Cu;
    // 0x18d54c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18D54Cu;
    SET_GPR_U32(ctx, 31, 0x18D554u);
    ctx->pc = 0x18D550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D54Cu;
            // 0x18d550: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D554u; }
        if (ctx->pc != 0x18D554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D554u; }
        if (ctx->pc != 0x18D554u) { return; }
    }
    ctx->pc = 0x18D554u;
    // 0x18d554: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18D554u;
    SET_GPR_U32(ctx, 31, 0x18D55Cu);
    ctx->pc = 0x18D558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D554u;
            // 0x18d558: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D55Cu; }
        if (ctx->pc != 0x18D55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D55Cu; }
        if (ctx->pc != 0x18D55Cu) { return; }
    }
    ctx->pc = 0x18D55Cu;
    // 0x18d55c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d560: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18d560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18d564: 0x24a53208  addiu       $a1, $a1, 0x3208
    ctx->pc = 0x18d564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12808));
    // 0x18d568: 0xc060978  jal         func_1825E0
    ctx->pc = 0x18D568u;
    SET_GPR_U32(ctx, 31, 0x18D570u);
    ctx->pc = 0x18D56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D568u;
            // 0x18d56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D570u; }
        if (ctx->pc != 0x18D570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D570u; }
        if (ctx->pc != 0x18D570u) { return; }
    }
    ctx->pc = 0x18D570u;
    // 0x18d570: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18d574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d578: 0x24429d90  addiu       $v0, $v0, -0x6270
    ctx->pc = 0x18d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942096));
    // 0x18d57c: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x18D57Cu;
    SET_GPR_U32(ctx, 31, 0x18D584u);
    ctx->pc = 0x18D580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D57Cu;
            // 0x18d580: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D584u; }
        if (ctx->pc != 0x18D584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D584u; }
        if (ctx->pc != 0x18D584u) { return; }
    }
    ctx->pc = 0x18D584u;
    // 0x18d584: 0x3c057331  lui         $a1, 0x7331
    ctx->pc = 0x18d584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29489 << 16));
    // 0x18d588: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18d588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d58c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x18d58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18d590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d594: 0xae30c8c4  sw          $s0, -0x373C($s1)
    ctx->pc = 0x18d594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953156), GPR_U32(ctx, 16));
    // 0x18d598: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18D598u;
    SET_GPR_U32(ctx, 31, 0x18D5A0u);
    ctx->pc = 0x18D59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D598u;
            // 0x18d59c: 0x34a5234f  ori         $a1, $a1, 0x234F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9039);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5A0u; }
        if (ctx->pc != 0x18D5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5A0u; }
        if (ctx->pc != 0x18D5A0u) { return; }
    }
    ctx->pc = 0x18D5A0u;
    // 0x18d5a0: 0x8e24c8c4  lw          $a0, -0x373C($s1)
    ctx->pc = 0x18d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953156)));
    // 0x18d5a4: 0x3c051b39  lui         $a1, 0x1B39
    ctx->pc = 0x18d5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6969 << 16));
    // 0x18d5a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18d5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5ac: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x18d5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x18d5b0: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18D5B0u;
    SET_GPR_U32(ctx, 31, 0x18D5B8u);
    ctx->pc = 0x18D5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5B0u;
            // 0x18d5b4: 0x34a54804  ori         $a1, $a1, 0x4804 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18436);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5B8u; }
        if (ctx->pc != 0x18D5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5B8u; }
        if (ctx->pc != 0x18D5B8u) { return; }
    }
    ctx->pc = 0x18D5B8u;
    // 0x18d5b8: 0x8e24c8c4  lw          $a0, -0x373C($s1)
    ctx->pc = 0x18d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953156)));
    // 0x18d5bc: 0x3c059769  lui         $a1, 0x9769
    ctx->pc = 0x18d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38761 << 16));
    // 0x18d5c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18d5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5c4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x18d5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18d5c8: 0xc060570  jal         func_1815C0
    ctx->pc = 0x18D5C8u;
    SET_GPR_U32(ctx, 31, 0x18D5D0u);
    ctx->pc = 0x18D5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5C8u;
            // 0x18d5cc: 0x34a57721  ori         $a1, $a1, 0x7721 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30497);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5D0u; }
        if (ctx->pc != 0x18D5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5D0u; }
        if (ctx->pc != 0x18D5D0u) { return; }
    }
    ctx->pc = 0x18D5D0u;
    // 0x18d5d0: 0x8e24c8c4  lw          $a0, -0x373C($s1)
    ctx->pc = 0x18d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953156)));
    // 0x18d5d4: 0x3c051b1d  lui         $a1, 0x1B1D
    ctx->pc = 0x18d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6941 << 16));
    // 0x18d5d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18d5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5dc: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x18d5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x18d5e0: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x18d5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18d5e4: 0xc06085e  jal         func_182178
    ctx->pc = 0x18D5E4u;
    SET_GPR_U32(ctx, 31, 0x18D5ECu);
    ctx->pc = 0x18D5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5E4u;
            // 0x18d5e8: 0x34a5fb0c  ori         $a1, $a1, 0xFB0C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64268);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5ECu; }
        if (ctx->pc != 0x18D5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5ECu; }
        if (ctx->pc != 0x18D5ECu) { return; }
    }
    ctx->pc = 0x18D5ECu;
    // 0x18d5ec: 0x8e24c8c4  lw          $a0, -0x373C($s1)
    ctx->pc = 0x18d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953156)));
    // 0x18d5f0: 0x3c05351d  lui         $a1, 0x351D
    ctx->pc = 0x18d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13597 << 16));
    // 0x18d5f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18d5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5f8: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x18d5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x18d5fc: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18D5FCu;
    SET_GPR_U32(ctx, 31, 0x18D604u);
    ctx->pc = 0x18D600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5FCu;
            // 0x18d600: 0x34a5ec74  ori         $a1, $a1, 0xEC74 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60532);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D604u; }
        if (ctx->pc != 0x18D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D604u; }
        if (ctx->pc != 0x18D604u) { return; }
    }
    ctx->pc = 0x18D604u;
    // 0x18d604: 0x8e24c8c4  lw          $a0, -0x373C($s1)
    ctx->pc = 0x18d604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953156)));
    // 0x18d608: 0x3c0556ba  lui         $a1, 0x56BA
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22202 << 16));
    // 0x18d60c: 0x34a50296  ori         $a1, $a1, 0x296
    ctx->pc = 0x18d60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)662);
    // 0x18d610: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18d610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d614: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x18D614u;
    SET_GPR_U32(ctx, 31, 0x18D61Cu);
    ctx->pc = 0x18D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D614u;
            // 0x18d618: 0x27a7002a  addiu       $a3, $sp, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D61Cu; }
        if (ctx->pc != 0x18D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D61Cu; }
        if (ctx->pc != 0x18D61Cu) { return; }
    }
    ctx->pc = 0x18D61Cu;
    // 0x18d61c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d620: 0xc090ea6  jal         func_243A98
    ctx->pc = 0x18D620u;
    SET_GPR_U32(ctx, 31, 0x18D628u);
    ctx->pc = 0x18D624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D620u;
            // 0x18d624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243A98u;
    if (runtime->hasFunction(0x243A98u)) {
        auto targetFn = runtime->lookupFunction(0x243A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D628u; }
        if (ctx->pc != 0x18D628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243A98_0x243a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D628u; }
        if (ctx->pc != 0x18D628u) { return; }
    }
    ctx->pc = 0x18D628u;
    // 0x18d628: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18d628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d62c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18d62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d630: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18d630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d634: 0x3e00008  jr          $ra
    ctx->pc = 0x18D634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D634u;
            // 0x18d638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D63Cu;
    // 0x18d63c: 0x0  nop
    ctx->pc = 0x18d63cu;
    // NOP
    // 0x18d640: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18d644: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x18d644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18d648: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18d648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18d64c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18d64cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d650: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18d650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x18d654: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18d658: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x18d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x18d65c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x18d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x18d660: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18D660u;
    {
        const bool branch_taken_0x18d660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D660u;
            // 0x18d664: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d660) {
            ctx->pc = 0x18D69Cu;
            goto label_18d69c;
        }
    }
    ctx->pc = 0x18D668u;
    // 0x18d668: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18d66c: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x18d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x18d670: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18d670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18d674: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18d678: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18d67c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18d680: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d684: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d688: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D688u;
    {
        const bool branch_taken_0x18d688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x18D68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D688u;
            // 0x18d68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d688) {
            ctx->pc = 0x18D698u;
            goto label_18d698;
        }
    }
    ctx->pc = 0x18D690u;
    // 0x18d690: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x18d690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18d694: 0x0  nop
    ctx->pc = 0x18d694u;
    // NOP
label_18d698:
    // 0x18d698: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18d698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d69c:
    // 0x18d69c: 0x96460068  lhu         $a2, 0x68($s2)
    ctx->pc = 0x18d69cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x18d6a0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18d6a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18d6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6a8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18D6A8u;
    SET_GPR_U32(ctx, 31, 0x18D6B0u);
    ctx->pc = 0x18D6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6A8u;
            // 0x18d6ac: 0x24a53218  addiu       $a1, $a1, 0x3218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6B0u; }
        if (ctx->pc != 0x18D6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6B0u; }
        if (ctx->pc != 0x18D6B0u) { return; }
    }
    ctx->pc = 0x18D6B0u;
    // 0x18d6b0: 0xc061f3a  jal         func_187CE8
    ctx->pc = 0x18D6B0u;
    SET_GPR_U32(ctx, 31, 0x18D6B8u);
    ctx->pc = 0x18D6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6B0u;
            // 0x18d6b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187CE8u;
    if (runtime->hasFunction(0x187CE8u)) {
        auto targetFn = runtime->lookupFunction(0x187CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6B8u; }
        if (ctx->pc != 0x18D6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187CE8_0x187ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6B8u; }
        if (ctx->pc != 0x18D6B8u) { return; }
    }
    ctx->pc = 0x18D6B8u;
    // 0x18d6b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6bc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18d6c0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x18d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x18d6c4: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x18d6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x18d6c8: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x18D6C8u;
    SET_GPR_U32(ctx, 31, 0x18D6D0u);
    ctx->pc = 0x18D6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6C8u;
            // 0x18d6cc: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6D0u; }
        if (ctx->pc != 0x18D6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6D0u; }
        if (ctx->pc != 0x18D6D0u) { return; }
    }
    ctx->pc = 0x18D6D0u;
    // 0x18d6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6d4: 0xc061eee  jal         func_187BB8
    ctx->pc = 0x18D6D4u;
    SET_GPR_U32(ctx, 31, 0x18D6DCu);
    ctx->pc = 0x18D6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6D4u;
            // 0x18d6d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187BB8u;
    if (runtime->hasFunction(0x187BB8u)) {
        auto targetFn = runtime->lookupFunction(0x187BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6DCu; }
        if (ctx->pc != 0x18D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187BB8_0x187bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6DCu; }
        if (ctx->pc != 0x18D6DCu) { return; }
    }
    ctx->pc = 0x18D6DCu;
    // 0x18d6dc: 0x7a240050  lq          $a0, 0x50($s1)
    ctx->pc = 0x18d6dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x18d6e0: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x18d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x18d6e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x18d6e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18d6e8: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x18d6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x18d6ec: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x18d6ecu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x18d6f0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x18d6f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18d6f4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x18d6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x18d6f8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x18d6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18d6fc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x18d6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x18d700: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x18d700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x18d704: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x18d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x18d708: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x18d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18d70c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18d710: 0x7e240050  sq          $a0, 0x50($s1)
    ctx->pc = 0x18d710u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 4));
    // 0x18d714: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x18d714u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d718: 0x7e220060  sq          $v0, 0x60($s1)
    ctx->pc = 0x18d718u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 2));
    // 0x18d71c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x18d71cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d720: 0x7e220070  sq          $v0, 0x70($s1)
    ctx->pc = 0x18d720u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 2));
    // 0x18d724: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x18d724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d728: 0x7e220080  sq          $v0, 0x80($s1)
    ctx->pc = 0x18d728u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 2));
    // 0x18d72c: 0xa643002a  sh          $v1, 0x2A($s2)
    ctx->pc = 0x18d72cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x18d730: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18d730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18d734: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18d734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18d738: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x18d738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d73c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18d73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d740: 0x3e00008  jr          $ra
    ctx->pc = 0x18D740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D740u;
            // 0x18d744: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D748u;
    // 0x18d748: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18d748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18d74c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18d74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18d750: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18d750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18d754: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18d754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d758: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18d758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18d75c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18d760: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18d764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d768: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x18d768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x18d76c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x18d76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x18d770: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18D770u;
    {
        const bool branch_taken_0x18d770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D770u;
            // 0x18d774: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d770) {
            ctx->pc = 0x18D7ACu;
            goto label_18d7ac;
        }
    }
    ctx->pc = 0x18D778u;
    // 0x18d778: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18d77c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x18d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x18d780: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18d780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18d784: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18d788: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18d78c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18d790: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18d790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d794: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d798: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D798u;
    {
        const bool branch_taken_0x18d798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x18D79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D798u;
            // 0x18d79c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d798) {
            ctx->pc = 0x18D7A8u;
            goto label_18d7a8;
        }
    }
    ctx->pc = 0x18D7A0u;
    // 0x18d7a0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18d7a4: 0x0  nop
    ctx->pc = 0x18d7a4u;
    // NOP
label_18d7a8:
    // 0x18d7a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d7ac:
    // 0x18d7ac: 0x12200074  beqz        $s1, . + 4 + (0x74 << 2)
    ctx->pc = 0x18D7ACu;
    {
        const bool branch_taken_0x18d7ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7ACu;
            // 0x18d7b0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7ac) {
            ctx->pc = 0x18D980u;
            goto label_18d980;
        }
    }
    ctx->pc = 0x18D7B4u;
    // 0x18d7b4: 0x8e72006c  lw          $s2, 0x6C($s3)
    ctx->pc = 0x18d7b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x18d7b8: 0x8c44c8c4  lw          $a0, -0x373C($v0)
    ctx->pc = 0x18d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953156)));
    // 0x18d7bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18d7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d7c0: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18D7C0u;
    SET_GPR_U32(ctx, 31, 0x18D7C8u);
    ctx->pc = 0x18D7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7C0u;
            // 0x18d7c4: 0x8e650068  lw          $a1, 0x68($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7C8u; }
        if (ctx->pc != 0x18D7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7C8u; }
        if (ctx->pc != 0x18D7C8u) { return; }
    }
    ctx->pc = 0x18D7C8u;
    // 0x18d7c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18d7c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18d7d0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x18d7d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18d7d4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x18d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18d7d8: 0x40f809  jalr        $v0
    ctx->pc = 0x18D7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D7E0u);
        ctx->pc = 0x18D7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7D8u;
            // 0x18d7dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18D7E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D7E0u; }
            if (ctx->pc != 0x18D7E0u) { return; }
        }
        }
    }
    ctx->pc = 0x18D7E0u;
    // 0x18d7e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7e8: 0xc081a5a  jal         func_206968
    ctx->pc = 0x18D7E8u;
    SET_GPR_U32(ctx, 31, 0x18D7F0u);
    ctx->pc = 0x18D7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7E8u;
            // 0x18d7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7F0u; }
        if (ctx->pc != 0x18D7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7F0u; }
        if (ctx->pc != 0x18D7F0u) { return; }
    }
    ctx->pc = 0x18D7F0u;
    // 0x18d7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7f8: 0xc081a18  jal         func_206860
    ctx->pc = 0x18D7F8u;
    SET_GPR_U32(ctx, 31, 0x18D800u);
    ctx->pc = 0x18D7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7F8u;
            // 0x18d7fc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D800u; }
        if (ctx->pc != 0x18D800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D800u; }
        if (ctx->pc != 0x18D800u) { return; }
    }
    ctx->pc = 0x18D800u;
    // 0x18d800: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D800u;
    {
        const bool branch_taken_0x18d800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d800) {
            ctx->pc = 0x18D810u;
            goto label_18d810;
        }
    }
    ctx->pc = 0x18D808u;
    // 0x18d808: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x18D808u;
    {
        const bool branch_taken_0x18d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D808u;
            // 0x18d80c: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d808) {
            ctx->pc = 0x18D99Cu;
            goto label_18d99c;
        }
    }
    ctx->pc = 0x18D810u;
label_18d810:
    // 0x18d810: 0x5240001b  beql        $s2, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x18D810u;
    {
        const bool branch_taken_0x18d810 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d810) {
            ctx->pc = 0x18D814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D810u;
            // 0x18d814: 0xc6800020  lwc1        $f0, 0x20($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D880u;
            goto label_18d880;
        }
    }
    ctx->pc = 0x18D818u;
    // 0x18d818: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x18D818u;
    SET_GPR_U32(ctx, 31, 0x18D820u);
    ctx->pc = 0x18D81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D818u;
            // 0x18d81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D820u; }
        if (ctx->pc != 0x18D820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D820u; }
        if (ctx->pc != 0x18D820u) { return; }
    }
    ctx->pc = 0x18D820u;
    // 0x18d820: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x18d820u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18d824: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x18d824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x18d828: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x18d828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x18d82c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18d830: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18d834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d838: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18d838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d83c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18d840: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x18d840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18d844: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x18d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18d848: 0x40f809  jalr        $v0
    ctx->pc = 0x18D848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D850u);
        ctx->pc = 0x18D84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D848u;
            // 0x18d84c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18D850u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D850u; }
            if (ctx->pc != 0x18D850u) { return; }
        }
        }
    }
    ctx->pc = 0x18D850u;
    // 0x18d850: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x18d850u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18d854: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18d858: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18d858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18d85c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18d860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d864: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18d864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18d868: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x18d868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x18d86c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x18d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x18d870: 0x40f809  jalr        $v0
    ctx->pc = 0x18D870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D878u);
        ctx->pc = 0x18D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D870u;
            // 0x18d874: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18D878u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D878u; }
            if (ctx->pc != 0x18D878u) { return; }
        }
        }
    }
    ctx->pc = 0x18D878u;
    // 0x18d878: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x18d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d87c: 0x0  nop
    ctx->pc = 0x18d87cu;
    // NOP
label_18d880:
    // 0x18d880: 0xc621017c  lwc1        $f1, 0x17C($s1)
    ctx->pc = 0x18d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d884: 0xc6220178  lwc1        $f2, 0x178($s1)
    ctx->pc = 0x18d884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18d888: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x18d888u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18d88c: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x18d88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d890: 0x0  nop
    ctx->pc = 0x18d890u;
    // NOP
    // 0x18d894: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x18D894u;
    {
        const bool branch_taken_0x18d894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D894u;
            // 0x18d898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d894) {
            ctx->pc = 0x18D980u;
            goto label_18d980;
        }
    }
    ctx->pc = 0x18D89Cu;
    // 0x18d89c: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x18D89Cu;
    SET_GPR_U32(ctx, 31, 0x18D8A4u);
    ctx->pc = 0x18D8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D89Cu;
            // 0x18d8a0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8A4u; }
        if (ctx->pc != 0x18D8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8A4u; }
        if (ctx->pc != 0x18D8A4u) { return; }
    }
    ctx->pc = 0x18D8A4u;
    // 0x18d8a4: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x18d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x18d8a8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x18d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18d8ac: 0x8c70cb94  lw          $s0, -0x346C($v1)
    ctx->pc = 0x18d8acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x18d8b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d8b4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x18d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x18d8b8: 0x8044009b  lb          $a0, 0x9B($v0)
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
    // 0x18d8bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18d8c0: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x18d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x18d8c4: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x18d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x18d8c8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x18D8C8u;
    {
        const bool branch_taken_0x18d8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8C8u;
            // 0x18d8cc: 0x24910001  addiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8c8) {
            ctx->pc = 0x18D980u;
            goto label_18d980;
        }
    }
    ctx->pc = 0x18D8D0u;
    // 0x18d8d0: 0x26031590  addiu       $v1, $s0, 0x1590
    ctx->pc = 0x18d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
    // 0x18d8d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18d8d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d8dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d8e0: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x18D8E0u;
    {
        const bool branch_taken_0x18d8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18d8e0) {
            ctx->pc = 0x18D920u;
            goto label_18d920;
        }
    }
    ctx->pc = 0x18D8E8u;
    // 0x18d8e8: 0x16250003  bne         $s1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D8E8u;
    {
        const bool branch_taken_0x18d8e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x18d8e8) {
            ctx->pc = 0x18D8F8u;
            goto label_18d8f8;
        }
    }
    ctx->pc = 0x18D8F0u;
    // 0x18d8f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D8F0u;
    {
        const bool branch_taken_0x18d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8F0u;
            // 0x18d8f4: 0xae110238  sw          $s1, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8f0) {
            ctx->pc = 0x18D904u;
            goto label_18d904;
        }
    }
    ctx->pc = 0x18D8F8u;
label_18d8f8:
    // 0x18d8f8: 0x56320002  bnel        $s1, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D8F8u;
    {
        const bool branch_taken_0x18d8f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x18d8f8) {
            ctx->pc = 0x18D8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8F8u;
            // 0x18d8fc: 0xae050240  sw          $a1, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D904u;
            goto label_18d904;
        }
    }
    ctx->pc = 0x18D900u;
    // 0x18d900: 0xae05023c  sw          $a1, 0x23C($s0)
    ctx->pc = 0x18d900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 5));
label_18d904:
    // 0x18d904: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18d904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18d908: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18d908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d910: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18D910u;
    SET_GPR_U32(ctx, 31, 0x18D918u);
    ctx->pc = 0x18D914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D910u;
            // 0x18d914: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D918u; }
        if (ctx->pc != 0x18D918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D918u; }
        if (ctx->pc != 0x18D918u) { return; }
    }
    ctx->pc = 0x18D918u;
    // 0x18d918: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18D918u;
    {
        const bool branch_taken_0x18d918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D918u;
            // 0x18d91c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d918) {
            ctx->pc = 0x18D964u;
            goto label_18d964;
        }
    }
    ctx->pc = 0x18D920u;
label_18d920:
    // 0x18d920: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D920u;
    {
        const bool branch_taken_0x18d920 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d920) {
            ctx->pc = 0x18D930u;
            goto label_18d930;
        }
    }
    ctx->pc = 0x18D928u;
    // 0x18d928: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D928u;
    {
        const bool branch_taken_0x18d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D928u;
            // 0x18d92c: 0xae120238  sw          $s2, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d928) {
            ctx->pc = 0x18D93Cu;
            goto label_18d93c;
        }
    }
    ctx->pc = 0x18D930u;
label_18d930:
    // 0x18d930: 0x16320006  bne         $s1, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D930u;
    {
        const bool branch_taken_0x18d930 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x18D934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D930u;
            // 0x18d934: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d930) {
            ctx->pc = 0x18D94Cu;
            goto label_18d94c;
        }
    }
    ctx->pc = 0x18D938u;
    // 0x18d938: 0xae12023c  sw          $s2, 0x23C($s0)
    ctx->pc = 0x18d938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 18));
label_18d93c:
    // 0x18d93c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18D93Cu;
    SET_GPR_U32(ctx, 31, 0x18D944u);
    ctx->pc = 0x18D940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D93Cu;
            // 0x18d940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D944u; }
        if (ctx->pc != 0x18D944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D944u; }
        if (ctx->pc != 0x18D944u) { return; }
    }
    ctx->pc = 0x18D944u;
    // 0x18d944: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18D944u;
    {
        const bool branch_taken_0x18d944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D944u;
            // 0x18d948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d944) {
            ctx->pc = 0x18D964u;
            goto label_18d964;
        }
    }
    ctx->pc = 0x18D94Cu;
label_18d94c:
    // 0x18d94c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D94Cu;
    {
        const bool branch_taken_0x18d94c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D94Cu;
            // 0x18d950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d94c) {
            ctx->pc = 0x18D964u;
            goto label_18d964;
        }
    }
    ctx->pc = 0x18D954u;
    // 0x18d954: 0xae120240  sw          $s2, 0x240($s0)
    ctx->pc = 0x18d954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 18));
    // 0x18d958: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18D958u;
    SET_GPR_U32(ctx, 31, 0x18D960u);
    ctx->pc = 0x18D95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D958u;
            // 0x18d95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D960u; }
        if (ctx->pc != 0x18D960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D960u; }
        if (ctx->pc != 0x18D960u) { return; }
    }
    ctx->pc = 0x18D960u;
    // 0x18d960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d964:
    // 0x18d964: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D964u;
    {
        const bool branch_taken_0x18d964 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D964u;
            // 0x18d968: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d964) {
            ctx->pc = 0x18D974u;
            goto label_18d974;
        }
    }
    ctx->pc = 0x18D96Cu;
    // 0x18d96c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D96Cu;
    {
        const bool branch_taken_0x18d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D96Cu;
            // 0x18d970: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d96c) {
            ctx->pc = 0x18D980u;
            goto label_18d980;
        }
    }
    ctx->pc = 0x18D974u;
label_18d974:
    // 0x18d974: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D974u;
    {
        const bool branch_taken_0x18d974 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d974) {
            ctx->pc = 0x18D978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D974u;
            // 0x18d978: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D980u;
            goto label_18d980;
        }
    }
    ctx->pc = 0x18D97Cu;
    // 0x18d97c: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x18d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
label_18d980:
    // 0x18d980: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x18d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x18d984: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D984u;
    {
        const bool branch_taken_0x18d984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D984u;
            // 0x18d988: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d984) {
            ctx->pc = 0x18D9A0u;
            goto label_18d9a0;
        }
    }
    ctx->pc = 0x18D98Cu;
    // 0x18d98c: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x18d98cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18d990: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x18d990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
    // 0x18d994: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x18d994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18d998: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x18d998u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_18d99c:
    // 0x18d99c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18d99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18d9a0:
    // 0x18d9a0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18d9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d9a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18d9a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d9a8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18d9a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d9ac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18d9acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18D9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9B4u;
            // 0x18d9b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D9BCu;
    // 0x18d9bc: 0x0  nop
    ctx->pc = 0x18d9bcu;
    // NOP
    // 0x18d9c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18d9c4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x18d9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x18d9c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x18d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x18d9cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18d9ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9d0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x18d9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x18d9d4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x18d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x18d9d8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x18d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x18d9dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18d9e0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x18d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x18d9e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d9e8: 0x8e860060  lw          $a2, 0x60($s4)
    ctx->pc = 0x18d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x18d9ec: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x18d9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x18d9f0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18D9F0u;
    {
        const bool branch_taken_0x18d9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9F0u;
            // 0x18d9f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9f0) {
            ctx->pc = 0x18DA2Cu;
            goto label_18da2c;
        }
    }
    ctx->pc = 0x18D9F8u;
    // 0x18d9f8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18d9fc: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x18d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x18da00: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18da00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18da04: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18da04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18da08: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18da0c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18da10: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18da10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18da14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18da18: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DA18u;
    {
        const bool branch_taken_0x18da18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x18DA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA18u;
            // 0x18da1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da18) {
            ctx->pc = 0x18DA28u;
            goto label_18da28;
        }
    }
    ctx->pc = 0x18DA20u;
    // 0x18da20: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18da24: 0x0  nop
    ctx->pc = 0x18da24u;
    // NOP
label_18da28:
    // 0x18da28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18da28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18da2c:
    // 0x18da2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18da30: 0x8e850068  lw          $a1, 0x68($s4)
    ctx->pc = 0x18da30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x18da34: 0x8c44c8c4  lw          $a0, -0x373C($v0)
    ctx->pc = 0x18da34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953156)));
    // 0x18da38: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18DA38u;
    SET_GPR_U32(ctx, 31, 0x18DA40u);
    ctx->pc = 0x18DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA38u;
            // 0x18da3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA40u; }
        if (ctx->pc != 0x18DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA40u; }
        if (ctx->pc != 0x18DA40u) { return; }
    }
    ctx->pc = 0x18DA40u;
    // 0x18da40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x18da40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da44: 0x8e96006c  lw          $s6, 0x6C($s4)
    ctx->pc = 0x18da44u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x18da48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18da48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18da4c: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x18da4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18da50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18da50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da54: 0xc6ac0018  lwc1        $f12, 0x18($s5)
    ctx->pc = 0x18da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18da58: 0xc6600178  lwc1        $f0, 0x178($s3)
    ctx->pc = 0x18da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18da5c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x18da5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x18da60: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x18DA60u;
    SET_GPR_U32(ctx, 31, 0x18DA68u);
    ctx->pc = 0x18DA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA60u;
            // 0x18da64: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA68u; }
        if (ctx->pc != 0x18DA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA68u; }
        if (ctx->pc != 0x18DA68u) { return; }
    }
    ctx->pc = 0x18DA68u;
    // 0x18da68: 0xc6a20020  lwc1        $f2, 0x20($s5)
    ctx->pc = 0x18da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18da6c: 0xc661017c  lwc1        $f1, 0x17C($s3)
    ctx->pc = 0x18da6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18da70: 0xc6600178  lwc1        $f0, 0x178($s3)
    ctx->pc = 0x18da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18da74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18da74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18da78: 0x3c01c700  lui         $at, 0xC700
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50944 << 16));
    // 0x18da7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18da7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18da80: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x18da80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x18da84: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x18da84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x18da88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18da88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18da8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18da8cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x18da90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18da90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18da94: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x18da94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x18da98: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18da98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18da9c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x18da9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x18daa0: 0xc05c470  jal         func_1711C0
    ctx->pc = 0x18DAA0u;
    SET_GPR_U32(ctx, 31, 0x18DAA8u);
    ctx->pc = 0x18DAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAA0u;
            // 0x18daa4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C0u;
    if (runtime->hasFunction(0x1711C0u)) {
        auto targetFn = runtime->lookupFunction(0x1711C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DAA8u; }
        if (ctx->pc != 0x18DAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c0_0x1711c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DAA8u; }
        if (ctx->pc != 0x18DAA8u) { return; }
    }
    ctx->pc = 0x18DAA8u;
    // 0x18daa8: 0xc660017c  lwc1        $f0, 0x17C($s3)
    ctx->pc = 0x18daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18daac: 0xc6a10020  lwc1        $f1, 0x20($s5)
    ctx->pc = 0x18daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18dab0: 0xc6620178  lwc1        $f2, 0x178($s3)
    ctx->pc = 0x18dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18dab4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18dab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18dab8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x18dab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18dabc: 0x0  nop
    ctx->pc = 0x18dabcu;
    // NOP
    // 0x18dac0: 0x450100a7  bc1t        . + 4 + (0xA7 << 2)
    ctx->pc = 0x18DAC0u;
    {
        const bool branch_taken_0x18dac0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAC0u;
            // 0x18dac4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dac0) {
            ctx->pc = 0x18DD60u;
            goto label_18dd60;
        }
    }
    ctx->pc = 0x18DAC8u;
    // 0x18dac8: 0x8e6301b0  lw          $v1, 0x1B0($s3)
    ctx->pc = 0x18dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x18dacc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18dad0: 0x8c50cb94  lw          $s0, -0x346C($v0)
    ctx->pc = 0x18dad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x18dad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dad8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x18dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x18dadc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x18dadcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18dae0: 0x8043009b  lb          $v1, 0x9B($v0)
    ctx->pc = 0x18dae0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
    // 0x18dae4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18dae8: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x18dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x18daec: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x18daecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x18daf0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x18DAF0u;
    {
        const bool branch_taken_0x18daf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAF0u;
            // 0x18daf4: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18daf0) {
            ctx->pc = 0x18DBA8u;
            goto label_18dba8;
        }
    }
    ctx->pc = 0x18DAF8u;
    // 0x18daf8: 0x26061590  addiu       $a2, $s0, 0x1590
    ctx->pc = 0x18daf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
    // 0x18dafc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18db00: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x18db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18db04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18db08: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x18DB08u;
    {
        const bool branch_taken_0x18db08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18db08) {
            ctx->pc = 0x18DB48u;
            goto label_18db48;
        }
    }
    ctx->pc = 0x18DB10u;
    // 0x18db10: 0x16250003  bne         $s1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DB10u;
    {
        const bool branch_taken_0x18db10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x18db10) {
            ctx->pc = 0x18DB20u;
            goto label_18db20;
        }
    }
    ctx->pc = 0x18DB18u;
    // 0x18db18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DB18u;
    {
        const bool branch_taken_0x18db18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB18u;
            // 0x18db1c: 0xae110238  sw          $s1, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db18) {
            ctx->pc = 0x18DB2Cu;
            goto label_18db2c;
        }
    }
    ctx->pc = 0x18DB20u;
label_18db20:
    // 0x18db20: 0x56320002  bnel        $s1, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DB20u;
    {
        const bool branch_taken_0x18db20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x18db20) {
            ctx->pc = 0x18DB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB20u;
            // 0x18db24: 0xae050240  sw          $a1, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DB2Cu;
            goto label_18db2c;
        }
    }
    ctx->pc = 0x18DB28u;
    // 0x18db28: 0xae05023c  sw          $a1, 0x23C($s0)
    ctx->pc = 0x18db28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 5));
label_18db2c:
    // 0x18db2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18db30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18db30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db34: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x18db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18db38: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18DB38u;
    SET_GPR_U32(ctx, 31, 0x18DB40u);
    ctx->pc = 0x18DB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB38u;
            // 0x18db3c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB40u; }
        if (ctx->pc != 0x18DB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB40u; }
        if (ctx->pc != 0x18DB40u) { return; }
    }
    ctx->pc = 0x18DB40u;
    // 0x18db40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18DB40u;
    {
        const bool branch_taken_0x18db40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB40u;
            // 0x18db44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db40) {
            ctx->pc = 0x18DB8Cu;
            goto label_18db8c;
        }
    }
    ctx->pc = 0x18DB48u;
label_18db48:
    // 0x18db48: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DB48u;
    {
        const bool branch_taken_0x18db48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18db48) {
            ctx->pc = 0x18DB58u;
            goto label_18db58;
        }
    }
    ctx->pc = 0x18DB50u;
    // 0x18db50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DB50u;
    {
        const bool branch_taken_0x18db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB50u;
            // 0x18db54: 0xae120238  sw          $s2, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db50) {
            ctx->pc = 0x18DB64u;
            goto label_18db64;
        }
    }
    ctx->pc = 0x18DB58u;
label_18db58:
    // 0x18db58: 0x16320006  bne         $s1, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DB58u;
    {
        const bool branch_taken_0x18db58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x18DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB58u;
            // 0x18db5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db58) {
            ctx->pc = 0x18DB74u;
            goto label_18db74;
        }
    }
    ctx->pc = 0x18DB60u;
    // 0x18db60: 0xae12023c  sw          $s2, 0x23C($s0)
    ctx->pc = 0x18db60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 18));
label_18db64:
    // 0x18db64: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18DB64u;
    SET_GPR_U32(ctx, 31, 0x18DB6Cu);
    ctx->pc = 0x18DB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB64u;
            // 0x18db68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB6Cu; }
        if (ctx->pc != 0x18DB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB6Cu; }
        if (ctx->pc != 0x18DB6Cu) { return; }
    }
    ctx->pc = 0x18DB6Cu;
    // 0x18db6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18DB6Cu;
    {
        const bool branch_taken_0x18db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB6Cu;
            // 0x18db70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db6c) {
            ctx->pc = 0x18DB8Cu;
            goto label_18db8c;
        }
    }
    ctx->pc = 0x18DB74u;
label_18db74:
    // 0x18db74: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DB74u;
    {
        const bool branch_taken_0x18db74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB74u;
            // 0x18db78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db74) {
            ctx->pc = 0x18DB8Cu;
            goto label_18db8c;
        }
    }
    ctx->pc = 0x18DB7Cu;
    // 0x18db7c: 0xae120240  sw          $s2, 0x240($s0)
    ctx->pc = 0x18db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 18));
    // 0x18db80: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18DB80u;
    SET_GPR_U32(ctx, 31, 0x18DB88u);
    ctx->pc = 0x18DB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB80u;
            // 0x18db84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB88u; }
        if (ctx->pc != 0x18DB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB88u; }
        if (ctx->pc != 0x18DB88u) { return; }
    }
    ctx->pc = 0x18DB88u;
    // 0x18db88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18db88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18db8c:
    // 0x18db8c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DB8Cu;
    {
        const bool branch_taken_0x18db8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB8Cu;
            // 0x18db90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db8c) {
            ctx->pc = 0x18DB9Cu;
            goto label_18db9c;
        }
    }
    ctx->pc = 0x18DB94u;
    // 0x18db94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DB94u;
    {
        const bool branch_taken_0x18db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB94u;
            // 0x18db98: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db94) {
            ctx->pc = 0x18DBA8u;
            goto label_18dba8;
        }
    }
    ctx->pc = 0x18DB9Cu;
label_18db9c:
    // 0x18db9c: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DB9Cu;
    {
        const bool branch_taken_0x18db9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18db9c) {
            ctx->pc = 0x18DBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB9Cu;
            // 0x18dba0: 0xae120030  sw          $s2, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DBA8u;
            goto label_18dba8;
        }
    }
    ctx->pc = 0x18DBA4u;
    // 0x18dba4: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x18dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
label_18dba8:
    // 0x18dba8: 0xc05c2e6  jal         func_170B98
    ctx->pc = 0x18DBA8u;
    SET_GPR_U32(ctx, 31, 0x18DBB0u);
    ctx->pc = 0x18DBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBA8u;
            // 0x18dbac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B98u;
    if (runtime->hasFunction(0x170B98u)) {
        auto targetFn = runtime->lookupFunction(0x170B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBB0u; }
        if (ctx->pc != 0x18DBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B98_0x170b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBB0u; }
        if (ctx->pc != 0x18DBB0u) { return; }
    }
    ctx->pc = 0x18DBB0u;
    // 0x18dbb0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x18dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x18dbb4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DBB4u;
    {
        const bool branch_taken_0x18dbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbb4) {
            ctx->pc = 0x18DBB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBB4u;
            // 0x18dbb8: 0x86a2002a  lh          $v0, 0x2A($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 42)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DBD0u;
            goto label_18dbd0;
        }
    }
    ctx->pc = 0x18DBBCu;
    // 0x18dbbc: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x18dbbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18dbc0: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x18dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
    // 0x18dbc4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x18dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18dbc8: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x18dbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x18dbcc: 0x86a2002a  lh          $v0, 0x2A($s5)
    ctx->pc = 0x18dbccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 42)));
label_18dbd0:
    // 0x18dbd0: 0x4400061  bltz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x18DBD0u;
    {
        const bool branch_taken_0x18dbd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18DBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBD0u;
            // 0x18dbd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbd0) {
            ctx->pc = 0x18DD58u;
            goto label_18dd58;
        }
    }
    ctx->pc = 0x18DBD8u;
    // 0x18dbd8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x18dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x18dbdc: 0xc05e996  jal         func_17A658
    ctx->pc = 0x18DBDCu;
    SET_GPR_U32(ctx, 31, 0x18DBE4u);
    ctx->pc = 0x18DBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBDCu;
            // 0x18dbe0: 0x24843220  addiu       $a0, $a0, 0x3220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBE4u; }
        if (ctx->pc != 0x18DBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBE4u; }
        if (ctx->pc != 0x18DBE4u) { return; }
    }
    ctx->pc = 0x18DBE4u;
    // 0x18dbe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18dbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dbe8: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x18DBE8u;
    {
        const bool branch_taken_0x18dbe8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBE8u;
            // 0x18dbec: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbe8) {
            ctx->pc = 0x18DD50u;
            goto label_18dd50;
        }
    }
    ctx->pc = 0x18DBF0u;
    // 0x18dbf0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x18dbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18dbf4: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x18dbf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x18dbf8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18dbfc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18dc00: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x18dc00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x18dc04: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x18dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x18dc08: 0x40f809  jalr        $v0
    ctx->pc = 0x18DC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DC10u);
        ctx->pc = 0x18DC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC08u;
            // 0x18dc0c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18DC10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18DC10u; }
            if (ctx->pc != 0x18DC10u) { return; }
        }
        }
    }
    ctx->pc = 0x18DC10u;
    // 0x18dc10: 0x8c500088  lw          $s0, 0x88($v0)
    ctx->pc = 0x18dc10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18dc14: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x18dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x18dc18: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18dc1c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x18dc1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x18dc20: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x18dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x18dc24: 0x40f809  jalr        $v0
    ctx->pc = 0x18DC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DC2Cu);
        ctx->pc = 0x18DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC24u;
            // 0x18dc28: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18DC2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18DC2Cu; }
            if (ctx->pc != 0x18DC2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18DC2Cu;
    // 0x18dc2c: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x18dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x18dc30: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x18dc30u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18dc34: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x18DC34u;
    {
        const bool branch_taken_0x18dc34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC34u;
            // 0x18dc38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc34) {
            ctx->pc = 0x18DC60u;
            goto label_18dc60;
        }
    }
    ctx->pc = 0x18DC3Cu;
    // 0x18dc3c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x18dc3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18dc40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18dc44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18dc48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18dc4c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18dc50: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x18dc50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18dc54: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x18dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x18dc58: 0x40f809  jalr        $v0
    ctx->pc = 0x18DC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DC60u);
        ctx->pc = 0x18DC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC58u;
            // 0x18dc5c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18DC60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18DC60u; }
            if (ctx->pc != 0x18DC60u) { return; }
        }
        }
    }
    ctx->pc = 0x18DC60u;
label_18dc60:
    // 0x18dc60: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x18dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x18dc64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18dc68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x18dc6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18dc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc70: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x18dc70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x18dc74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18dc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc78: 0xafb2001c  sw          $s2, 0x1C($sp)
    ctx->pc = 0x18dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 18));
    // 0x18dc7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x18dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x18dc80: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x18dc80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x18dc84: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x18dc84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x18dc88: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x18dc88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x18dc8c: 0x0  nop
    ctx->pc = 0x18dc8cu;
    // NOP
label_18dc90:
    // 0x18dc90: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18dc94: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x18dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x18dc98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18dc9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18dc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18dca0: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x18dca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18dca4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DCA4u;
    {
        const bool branch_taken_0x18dca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCA4u;
            // 0x18dca8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dca4) {
            ctx->pc = 0x18DC90u;
            runtime->cooperativeGuestYield();
            goto label_18dc90;
        }
    }
    ctx->pc = 0x18DCACu;
    // 0x18dcac: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x18dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x18dcb0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x18dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x18dcb4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x18dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x18dcb8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18dcbc: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x18dcbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x18dcc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18dcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcc4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x18dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x18dcc8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18dccc: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x18dcccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x18dcd0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x18dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x18dcd4: 0x40f809  jalr        $v0
    ctx->pc = 0x18DCD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DCDCu);
        ctx->pc = 0x18DCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCD4u;
            // 0x18dcd8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18DCDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18DCDCu; }
            if (ctx->pc != 0x18DCDCu) { return; }
        }
        }
    }
    ctx->pc = 0x18DCDCu;
    // 0x18dcdc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x18dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x18dce0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DCE0u;
    {
        const bool branch_taken_0x18dce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCE0u;
            // 0x18dce4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dce0) {
            ctx->pc = 0x18DCF0u;
            goto label_18dcf0;
        }
    }
    ctx->pc = 0x18DCE8u;
    // 0x18dce8: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x18DCE8u;
    SET_GPR_U32(ctx, 31, 0x18DCF0u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCF0u; }
        if (ctx->pc != 0x18DCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCF0u; }
        if (ctx->pc != 0x18DCF0u) { return; }
    }
    ctx->pc = 0x18DCF0u;
label_18dcf0:
    // 0x18dcf0: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x18dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x18dcf4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x18dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x18dcf8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x18dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x18dcfc: 0x86a2002a  lh          $v0, 0x2A($s5)
    ctx->pc = 0x18dcfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 42)));
    // 0x18dd00: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x18dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x18dd04: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x18dd04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18dd08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18dd0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18dd10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18dd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18dd18: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18dd1c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x18dd1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18dd20: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18dd24: 0x40f809  jalr        $v0
    ctx->pc = 0x18DD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DD2Cu);
        ctx->pc = 0x18DD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD24u;
            // 0x18dd28: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18DD2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18DD2Cu; }
            if (ctx->pc != 0x18DD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18DD2Cu;
    // 0x18dd2c: 0x52600008  beql        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DD2Cu;
    {
        const bool branch_taken_0x18dd2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd2c) {
            ctx->pc = 0x18DD30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD2Cu;
            // 0x18dd30: 0xae90004c  sw          $s0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DD50u;
            goto label_18dd50;
        }
    }
    ctx->pc = 0x18DD34u;
    // 0x18dd34: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x18dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x18dd38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18dd3c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x18dd3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18dd40: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x18dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x18dd44: 0x40f809  jalr        $v0
    ctx->pc = 0x18DD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DD4Cu);
        ctx->pc = 0x18DD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD44u;
            // 0x18dd48: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18DD4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18DD4Cu; }
            if (ctx->pc != 0x18DD4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18DD4Cu;
    // 0x18dd4c: 0xae90004c  sw          $s0, 0x4C($s4)
    ctx->pc = 0x18dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 16));
label_18dd50:
    // 0x18dd50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18dd54: 0x0  nop
    ctx->pc = 0x18dd54u;
    // NOP
label_18dd58:
    // 0x18dd58: 0xa682002a  sh          $v0, 0x2A($s4)
    ctx->pc = 0x18dd58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x18dd5c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x18dd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18dd60:
    // 0x18dd60: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x18dd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18dd64: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x18dd64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18dd68: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x18dd68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18dd6c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18dd6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18dd70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18dd70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18dd74: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x18dd74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18dd78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18dd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18dd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD7Cu;
            // 0x18dd80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DD84u;
    // 0x18dd84: 0x0  nop
    ctx->pc = 0x18dd84u;
    // NOP
    // 0x18dd88: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x18dd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x18dd8c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x18dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x18dd90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18dd90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd94: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x18dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x18dd98: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x18dd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x18dd9c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x18dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x18dda0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x18dda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x18dda4: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x18dda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x18dda8: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x18dda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x18ddac: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x18ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x18ddb0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x18ddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x18ddb4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18ddb8: 0x8c44c8c4  lw          $a0, -0x373C($v0)
    ctx->pc = 0x18ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953156)));
    // 0x18ddbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ddbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ddc0: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18DDC0u;
    SET_GPR_U32(ctx, 31, 0x18DDC8u);
    ctx->pc = 0x18DDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDC0u;
            // 0x18ddc4: 0x8e850068  lw          $a1, 0x68($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDC8u; }
        if (ctx->pc != 0x18DDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDC8u; }
        if (ctx->pc != 0x18DDC8u) { return; }
    }
    ctx->pc = 0x18DDC8u;
    // 0x18ddc8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18ddc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddcc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x18ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x18ddd0: 0xc4614f24  lwc1        $f1, 0x4F24($v1)
    ctx->pc = 0x18ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ddd4: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x18ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ddd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ddd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18dddc: 0x0  nop
    ctx->pc = 0x18dddcu;
    // NOP
    // 0x18dde0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x18DDE0u;
    {
        const bool branch_taken_0x18dde0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDE0u;
            // 0x18dde4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dde0) {
            ctx->pc = 0x18DDF8u;
            goto label_18ddf8;
        }
    }
    ctx->pc = 0x18DDE8u;
    // 0x18dde8: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x18dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ddec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ddecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ddf0: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x18DDF0u;
    {
        const bool branch_taken_0x18ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDF0u;
            // 0x18ddf4: 0xe4604f24  swc1        $f0, 0x4F24($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddf0) {
            ctx->pc = 0x18E154u;
            goto label_18e154;
        }
    }
    ctx->pc = 0x18DDF8u;
label_18ddf8:
    // 0x18ddf8: 0x8e840060  lw          $a0, 0x60($s4)
    ctx->pc = 0x18ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x18ddfc: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x18ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x18de00: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18DE00u;
    {
        const bool branch_taken_0x18de00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE00u;
            // 0x18de04: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de00) {
            ctx->pc = 0x18DE3Cu;
            goto label_18de3c;
        }
    }
    ctx->pc = 0x18DE08u;
    // 0x18de08: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18de0c: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x18de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x18de10: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18de10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18de14: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18de14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18de18: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18de1c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18de20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18de24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18de28: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DE28u;
    {
        const bool branch_taken_0x18de28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x18DE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE28u;
            // 0x18de2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de28) {
            ctx->pc = 0x18DE38u;
            goto label_18de38;
        }
    }
    ctx->pc = 0x18DE30u;
    // 0x18de30: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x18de30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18de34: 0x0  nop
    ctx->pc = 0x18de34u;
    // NOP
label_18de38:
    // 0x18de38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18de38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18de3c:
    // 0x18de3c: 0xc05c162  jal         func_170588
    ctx->pc = 0x18DE3Cu;
    SET_GPR_U32(ctx, 31, 0x18DE44u);
    ctx->pc = 0x18DE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE3Cu;
            // 0x18de40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170588u;
    if (runtime->hasFunction(0x170588u)) {
        auto targetFn = runtime->lookupFunction(0x170588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE44u; }
        if (ctx->pc != 0x18DE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170588_0x170620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE44u; }
        if (ctx->pc != 0x18DE44u) { return; }
    }
    ctx->pc = 0x18DE44u;
    // 0x18de44: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x18de44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18de48: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x18de48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x18de4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18de50: 0x2611e848  addiu       $s1, $s0, -0x17B8
    ctx->pc = 0x18de50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x18de54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18de54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18de58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18de58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de60: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18de64: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x18de64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x18de68: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x18de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x18de6c: 0x40f809  jalr        $v0
    ctx->pc = 0x18DE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DE74u);
        ctx->pc = 0x18DE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE6Cu;
            // 0x18de70: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18DE74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18DE74u; }
            if (ctx->pc != 0x18DE74u) { return; }
        }
        }
    }
    ctx->pc = 0x18DE74u;
    // 0x18de74: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x18de74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de78: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x18de78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18de7c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x18de7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18de80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18de84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18de84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18de8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de90: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18de94: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x18de94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18de98: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18de9c: 0x40f809  jalr        $v0
    ctx->pc = 0x18DE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DEA4u);
        ctx->pc = 0x18DEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE9Cu;
            // 0x18dea0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18DEA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18DEA4u; }
            if (ctx->pc != 0x18DEA4u) { return; }
        }
        }
    }
    ctx->pc = 0x18DEA4u;
    // 0x18dea4: 0x8ec40024  lw          $a0, 0x24($s6)
    ctx->pc = 0x18dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x18dea8: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DEA8u;
    {
        const bool branch_taken_0x18dea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dea8) {
            ctx->pc = 0x18DEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEA8u;
            // 0x18deac: 0x8e6301b0  lw          $v1, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DECCu;
            goto label_18decc;
        }
    }
    ctx->pc = 0x18DEB0u;
    // 0x18deb0: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x18DEB0u;
    SET_GPR_U32(ctx, 31, 0x18DEB8u);
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEB8u; }
        if (ctx->pc != 0x18DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEB8u; }
        if (ctx->pc != 0x18DEB8u) { return; }
    }
    ctx->pc = 0x18DEB8u;
    // 0x18deb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DEB8u;
    {
        const bool branch_taken_0x18deb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEB8u;
            // 0x18debc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18deb8) {
            ctx->pc = 0x18DEC8u;
            goto label_18dec8;
        }
    }
    ctx->pc = 0x18DEC0u;
    // 0x18dec0: 0xc05c294  jal         func_170A50
    ctx->pc = 0x18DEC0u;
    SET_GPR_U32(ctx, 31, 0x18DEC8u);
    ctx->pc = 0x18DEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEC0u;
            // 0x18dec4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEC8u; }
        if (ctx->pc != 0x18DEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEC8u; }
        if (ctx->pc != 0x18DEC8u) { return; }
    }
    ctx->pc = 0x18DEC8u;
label_18dec8:
    // 0x18dec8: 0x8e6301b0  lw          $v1, 0x1B0($s3)
    ctx->pc = 0x18dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
label_18decc:
    // 0x18decc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18deccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18ded0: 0x8c51cb94  lw          $s1, -0x346C($v0)
    ctx->pc = 0x18ded0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x18ded4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x18ded4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ded8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x18ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x18dedc: 0x8043009b  lb          $v1, 0x9B($v0)
    ctx->pc = 0x18dedcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
    // 0x18dee0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18dee4: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x18dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x18dee8: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x18dee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x18deec: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x18DEECu;
    {
        const bool branch_taken_0x18deec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEECu;
            // 0x18def0: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18deec) {
            ctx->pc = 0x18DFBCu;
            goto label_18dfbc;
        }
    }
    ctx->pc = 0x18DEF4u;
    // 0x18def4: 0x26251590  addiu       $a1, $s1, 0x1590
    ctx->pc = 0x18def4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5520));
    // 0x18def8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18def8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18defc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18df00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18df04: 0x10520011  beq         $v0, $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x18DF04u;
    {
        const bool branch_taken_0x18df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x18df04) {
            ctx->pc = 0x18DF4Cu;
            goto label_18df4c;
        }
    }
    ctx->pc = 0x18DF0Cu;
    // 0x18df0c: 0x16120004  bne         $s0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DF0Cu;
    {
        const bool branch_taken_0x18df0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x18DF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF0Cu;
            // 0x18df10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df0c) {
            ctx->pc = 0x18DF20u;
            goto label_18df20;
        }
    }
    ctx->pc = 0x18DF14u;
    // 0x18df14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18DF14u;
    {
        const bool branch_taken_0x18df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF14u;
            // 0x18df18: 0xae320238  sw          $s2, 0x238($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df14) {
            ctx->pc = 0x18DF2Cu;
            goto label_18df2c;
        }
    }
    ctx->pc = 0x18DF1Cu;
    // 0x18df1c: 0x0  nop
    ctx->pc = 0x18df1cu;
    // NOP
label_18df20:
    // 0x18df20: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DF20u;
    {
        const bool branch_taken_0x18df20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18df20) {
            ctx->pc = 0x18DF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF20u;
            // 0x18df24: 0xae320240  sw          $s2, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DF2Cu;
            goto label_18df2c;
        }
    }
    ctx->pc = 0x18DF28u;
    // 0x18df28: 0xae32023c  sw          $s2, 0x23C($s1)
    ctx->pc = 0x18df28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 18));
label_18df2c:
    // 0x18df2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18df30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18df38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18df38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18df3c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18DF3Cu;
    SET_GPR_U32(ctx, 31, 0x18DF44u);
    ctx->pc = 0x18DF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF3Cu;
            // 0x18df40: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF44u; }
        if (ctx->pc != 0x18DF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF44u; }
        if (ctx->pc != 0x18DF44u) { return; }
    }
    ctx->pc = 0x18DF44u;
    // 0x18df44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18DF44u;
    {
        const bool branch_taken_0x18df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF44u;
            // 0x18df48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df44) {
            ctx->pc = 0x18DFA0u;
            goto label_18dfa0;
        }
    }
    ctx->pc = 0x18DF4Cu;
label_18df4c:
    // 0x18df4c: 0x16120007  bne         $s0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DF4Cu;
    {
        const bool branch_taken_0x18df4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x18DF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF4Cu;
            // 0x18df50: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df4c) {
            ctx->pc = 0x18DF6Cu;
            goto label_18df6c;
        }
    }
    ctx->pc = 0x18DF54u;
    // 0x18df54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18df54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18df58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18df58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df5c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18DF5Cu;
    SET_GPR_U32(ctx, 31, 0x18DF64u);
    ctx->pc = 0x18DF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF5Cu;
            // 0x18df60: 0xae220238  sw          $v0, 0x238($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF64u; }
        if (ctx->pc != 0x18DF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF64u; }
        if (ctx->pc != 0x18DF64u) { return; }
    }
    ctx->pc = 0x18DF64u;
    // 0x18df64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18DF64u;
    {
        const bool branch_taken_0x18df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF64u;
            // 0x18df68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df64) {
            ctx->pc = 0x18DFA0u;
            goto label_18dfa0;
        }
    }
    ctx->pc = 0x18DF6Cu;
label_18df6c:
    // 0x18df6c: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DF6Cu;
    {
        const bool branch_taken_0x18df6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x18DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF6Cu;
            // 0x18df70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df6c) {
            ctx->pc = 0x18DF88u;
            goto label_18df88;
        }
    }
    ctx->pc = 0x18DF74u;
    // 0x18df74: 0xae30023c  sw          $s0, 0x23C($s1)
    ctx->pc = 0x18df74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 16));
    // 0x18df78: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18DF78u;
    SET_GPR_U32(ctx, 31, 0x18DF80u);
    ctx->pc = 0x18DF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF78u;
            // 0x18df7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF80u; }
        if (ctx->pc != 0x18DF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF80u; }
        if (ctx->pc != 0x18DF80u) { return; }
    }
    ctx->pc = 0x18DF80u;
    // 0x18df80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18DF80u;
    {
        const bool branch_taken_0x18df80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF80u;
            // 0x18df84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df80) {
            ctx->pc = 0x18DFA0u;
            goto label_18dfa0;
        }
    }
    ctx->pc = 0x18DF88u;
label_18df88:
    // 0x18df88: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DF88u;
    {
        const bool branch_taken_0x18df88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF88u;
            // 0x18df8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df88) {
            ctx->pc = 0x18DFA0u;
            goto label_18dfa0;
        }
    }
    ctx->pc = 0x18DF90u;
    // 0x18df90: 0xae230240  sw          $v1, 0x240($s1)
    ctx->pc = 0x18df90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 3));
    // 0x18df94: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x18DF94u;
    SET_GPR_U32(ctx, 31, 0x18DF9Cu);
    ctx->pc = 0x18DF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF94u;
            // 0x18df98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF9Cu; }
        if (ctx->pc != 0x18DF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF9Cu; }
        if (ctx->pc != 0x18DF9Cu) { return; }
    }
    ctx->pc = 0x18DF9Cu;
    // 0x18df9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dfa0:
    // 0x18dfa0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DFA0u;
    {
        const bool branch_taken_0x18dfa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFA0u;
            // 0x18dfa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfa0) {
            ctx->pc = 0x18DFB0u;
            goto label_18dfb0;
        }
    }
    ctx->pc = 0x18DFA8u;
    // 0x18dfa8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DFA8u;
    {
        const bool branch_taken_0x18dfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFA8u;
            // 0x18dfac: 0xae320028  sw          $s2, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfa8) {
            ctx->pc = 0x18DFBCu;
            goto label_18dfbc;
        }
    }
    ctx->pc = 0x18DFB0u;
label_18dfb0:
    // 0x18dfb0: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DFB0u;
    {
        const bool branch_taken_0x18dfb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dfb0) {
            ctx->pc = 0x18DFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFB0u;
            // 0x18dfb4: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DFBCu;
            goto label_18dfbc;
        }
    }
    ctx->pc = 0x18DFB8u;
    // 0x18dfb8: 0xae32002c  sw          $s2, 0x2C($s1)
    ctx->pc = 0x18dfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 18));
label_18dfbc:
    // 0x18dfbc: 0x86c20028  lh          $v0, 0x28($s6)
    ctx->pc = 0x18dfbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x18dfc0: 0x4400061  bltz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x18DFC0u;
    {
        const bool branch_taken_0x18dfc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18DFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFC0u;
            // 0x18dfc4: 0x3c020019  lui         $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfc0) {
            ctx->pc = 0x18E148u;
            goto label_18e148;
        }
    }
    ctx->pc = 0x18DFC8u;
    // 0x18dfc8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x18dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x18dfcc: 0xc05e996  jal         func_17A658
    ctx->pc = 0x18DFCCu;
    SET_GPR_U32(ctx, 31, 0x18DFD4u);
    ctx->pc = 0x18DFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFCCu;
            // 0x18dfd0: 0x24843220  addiu       $a0, $a0, 0x3220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFD4u; }
        if (ctx->pc != 0x18DFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFD4u; }
        if (ctx->pc != 0x18DFD4u) { return; }
    }
    ctx->pc = 0x18DFD4u;
    // 0x18dfd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18dfd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfd8: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x18DFD8u;
    {
        const bool branch_taken_0x18dfd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFD8u;
            // 0x18dfdc: 0x26f0e848  addiu       $s0, $s7, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfd8) {
            ctx->pc = 0x18E140u;
            goto label_18e140;
        }
    }
    ctx->pc = 0x18DFE0u;
    // 0x18dfe0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x18dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18dfe4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18dfe8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18dfec: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x18dfecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x18dff0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x18dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x18dff4: 0x40f809  jalr        $v0
    ctx->pc = 0x18DFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DFFCu);
        ctx->pc = 0x18DFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFF4u;
            // 0x18dff8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18DFFCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18DFFCu; }
            if (ctx->pc != 0x18DFFCu) { return; }
        }
        }
    }
    ctx->pc = 0x18DFFCu;
    // 0x18dffc: 0x8c510088  lw          $s1, 0x88($v0)
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18e000: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x18e000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x18e004: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18e008: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x18e008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x18e00c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x18e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x18e010: 0x40f809  jalr        $v0
    ctx->pc = 0x18E010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E018u);
        ctx->pc = 0x18E014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E010u;
            // 0x18e014: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E018u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E018u; }
            if (ctx->pc != 0x18E018u) { return; }
        }
        }
    }
    ctx->pc = 0x18E018u;
    // 0x18e018: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x18e018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x18e01c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x18e01cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18e020: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x18E020u;
    {
        const bool branch_taken_0x18e020 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E020u;
            // 0x18e024: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e020) {
            ctx->pc = 0x18E050u;
            goto label_18e050;
        }
    }
    ctx->pc = 0x18E028u;
    // 0x18e028: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x18e028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e02c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18e030: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18e034: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e038: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18e03c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x18e03cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18e040: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x18e044: 0x40f809  jalr        $v0
    ctx->pc = 0x18E044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E04Cu);
        ctx->pc = 0x18E048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E044u;
            // 0x18e048: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E04Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E04Cu; }
            if (ctx->pc != 0x18E04Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18E04Cu;
    // 0x18e04c: 0x0  nop
    ctx->pc = 0x18e04cu;
    // NOP
label_18e050:
    // 0x18e050: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18e050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18e054: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x18e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x18e058: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18e058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18e05c: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x18e05cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e060: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x18e060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x18e064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e068: 0xac92001c  sw          $s2, 0x1C($a0)
    ctx->pc = 0x18e068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 18));
    // 0x18e06c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x18e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18e070: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x18e070u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x18e074: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x18e074u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x18e078: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x18e078u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x18e07c: 0x0  nop
    ctx->pc = 0x18e07cu;
    // NOP
label_18e080:
    // 0x18e080: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18e080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18e084: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x18e084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x18e088: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18e088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e08c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18e090: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x18e090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18e094: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E094u;
    {
        const bool branch_taken_0x18e094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E094u;
            // 0x18e098: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e094) {
            ctx->pc = 0x18E080u;
            runtime->cooperativeGuestYield();
            goto label_18e080;
        }
    }
    ctx->pc = 0x18E09Cu;
    // 0x18e09c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x18e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x18e0a0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x18e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x18e0a4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x18e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x18e0a8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18e0ac: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x18e0acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x18e0b0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x18e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18e0b4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x18e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x18e0b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18e0bc: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x18e0bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x18e0c0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x18e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x18e0c4: 0x40f809  jalr        $v0
    ctx->pc = 0x18E0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E0CCu);
        ctx->pc = 0x18E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0C4u;
            // 0x18e0c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E0CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E0CCu; }
            if (ctx->pc != 0x18E0CCu) { return; }
        }
        }
    }
    ctx->pc = 0x18E0CCu;
    // 0x18e0cc: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x18e0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x18e0d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E0D0u;
    {
        const bool branch_taken_0x18e0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0D0u;
            // 0x18e0d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0d0) {
            ctx->pc = 0x18E0E0u;
            goto label_18e0e0;
        }
    }
    ctx->pc = 0x18E0D8u;
    // 0x18e0d8: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x18E0D8u;
    SET_GPR_U32(ctx, 31, 0x18E0E0u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0E0u; }
        if (ctx->pc != 0x18E0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0E0u; }
        if (ctx->pc != 0x18E0E0u) { return; }
    }
    ctx->pc = 0x18E0E0u;
label_18e0e0:
    // 0x18e0e0: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x18e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x18e0e4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x18e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x18e0e8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x18e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x18e0ec: 0x86c20028  lh          $v0, 0x28($s6)
    ctx->pc = 0x18e0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x18e0f0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x18e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x18e0f4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x18e0f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e0f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18e0fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18e100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18e100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18e104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e108: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18e10c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x18e10cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18e110: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x18e114: 0x40f809  jalr        $v0
    ctx->pc = 0x18E114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E11Cu);
        ctx->pc = 0x18E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E114u;
            // 0x18e118: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E11Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E11Cu; }
            if (ctx->pc != 0x18E11Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18E11Cu;
    // 0x18e11c: 0x52600008  beql        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E11Cu;
    {
        const bool branch_taken_0x18e11c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e11c) {
            ctx->pc = 0x18E120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E11Cu;
            // 0x18e120: 0xae90004c  sw          $s0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E140u;
            goto label_18e140;
        }
    }
    ctx->pc = 0x18E124u;
    // 0x18e124: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x18e124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x18e128: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18e12c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x18e12cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18e130: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x18e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x18e134: 0x40f809  jalr        $v0
    ctx->pc = 0x18E134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E13Cu);
        ctx->pc = 0x18E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E134u;
            // 0x18e138: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E13Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E13Cu; }
            if (ctx->pc != 0x18E13Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18E13Cu;
    // 0x18e13c: 0xae90004c  sw          $s0, 0x4C($s4)
    ctx->pc = 0x18e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 16));
label_18e140:
    // 0x18e140: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18e144: 0x0  nop
    ctx->pc = 0x18e144u;
    // NOP
label_18e148:
    // 0x18e148: 0xae95006c  sw          $s5, 0x6C($s4)
    ctx->pc = 0x18e148u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 21));
    // 0x18e14c: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x18e150: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x18e150u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
label_18e154:
    // 0x18e154: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x18e154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x18e158: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x18e158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x18e15c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x18e15cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18e160: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x18e160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18e164: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x18e164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18e168: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x18e168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18e16c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x18e16cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18e170: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x18e170u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18e174: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x18e174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18e178: 0x3e00008  jr          $ra
    ctx->pc = 0x18E178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E178u;
            // 0x18e17c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E180u;
    // 0x18e180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e188: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18e18c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e194: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x18e194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x18e198: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x18e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x18e19c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18E19Cu;
    {
        const bool branch_taken_0x18e19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E19Cu;
            // 0x18e1a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e19c) {
            ctx->pc = 0x18E1D4u;
            goto label_18e1d4;
        }
    }
    ctx->pc = 0x18E1A4u;
    // 0x18e1a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18e1a8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x18e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x18e1ac: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18e1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18e1b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18e1b4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18e1b8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18e1bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e1c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e1c4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E1C4u;
    {
        const bool branch_taken_0x18e1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x18E1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1C4u;
            // 0x18e1c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1c4) {
            ctx->pc = 0x18E1D0u;
            goto label_18e1d0;
        }
    }
    ctx->pc = 0x18E1CCu;
    // 0x18e1cc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18e1d0:
    // 0x18e1d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e1d4:
    // 0x18e1d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e1d8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x18e1d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18e1dc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x18e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18e1e0: 0x40f809  jalr        $v0
    ctx->pc = 0x18E1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E1E8u);
        ctx->pc = 0x18E1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1E0u;
            // 0x18e1e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E1E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E1E8u; }
            if (ctx->pc != 0x18E1E8u) { return; }
        }
        }
    }
    ctx->pc = 0x18E1E8u;
    // 0x18e1e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1ec: 0xc081a44  jal         func_206910
    ctx->pc = 0x18E1ECu;
    SET_GPR_U32(ctx, 31, 0x18E1F4u);
    ctx->pc = 0x18E1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1ECu;
            // 0x18e1f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    if (runtime->hasFunction(0x206910u)) {
        auto targetFn = runtime->lookupFunction(0x206910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1F4u; }
        if (ctx->pc != 0x18E1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206910_0x206910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1F4u; }
        if (ctx->pc != 0x18E1F4u) { return; }
    }
    ctx->pc = 0x18E1F4u;
    // 0x18e1f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18e1f8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x18e1f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18e1fc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x18e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18e200: 0x40f809  jalr        $v0
    ctx->pc = 0x18E200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E208u);
        ctx->pc = 0x18E204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E200u;
            // 0x18e204: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18E208u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18E208u; }
            if (ctx->pc != 0x18E208u) { return; }
        }
        }
    }
    ctx->pc = 0x18E208u;
    // 0x18e208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18e208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e20c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e210: 0xc081a18  jal         func_206860
    ctx->pc = 0x18E210u;
    SET_GPR_U32(ctx, 31, 0x18E218u);
    ctx->pc = 0x18E214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E210u;
            // 0x18e214: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E218u; }
        if (ctx->pc != 0x18E218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E218u; }
        if (ctx->pc != 0x18E218u) { return; }
    }
    ctx->pc = 0x18E218u;
    // 0x18e218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18e218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e21c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x18E21Cu;
    {
        const bool branch_taken_0x18e21c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E21Cu;
            // 0x18e220: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e21c) {
            ctx->pc = 0x18E258u;
            goto label_18e258;
        }
    }
    ctx->pc = 0x18E224u;
    // 0x18e224: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x18e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x18e228: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x18e228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x18e22c: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x18e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x18e230: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x18e230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x18e234: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x18e234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x18e238: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x18e238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x18e23c: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x18e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x18e240: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x18e240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x18e244: 0x84a2002a  lh          $v0, 0x2A($a1)
    ctx->pc = 0x18e244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x18e248: 0x5044000b  beql        $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E248u;
    {
        const bool branch_taken_0x18e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x18e248) {
            ctx->pc = 0x18E24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E248u;
            // 0x18e24c: 0xa622002a  sh          $v0, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E278u;
            goto label_18e278;
        }
    }
    ctx->pc = 0x18E250u;
    // 0x18e250: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18E250u;
    {
        const bool branch_taken_0x18e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E250u;
            // 0x18e254: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e250) {
            ctx->pc = 0x18E27Cu;
            goto label_18e27c;
        }
    }
    ctx->pc = 0x18E258u;
label_18e258:
    // 0x18e258: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18e258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18e25c: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x18e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x18e260: 0x2442d748  addiu       $v0, $v0, -0x28B8
    ctx->pc = 0x18e260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956872));
    // 0x18e264: 0x2463dd88  addiu       $v1, $v1, -0x2278
    ctx->pc = 0x18e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958472));
    // 0x18e268: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x18e268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x18e26c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x18e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x18e270: 0xac804f24  sw          $zero, 0x4F24($a0)
    ctx->pc = 0x18e270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20260), GPR_U32(ctx, 0));
    // 0x18e274: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x18e274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_18e278:
    // 0x18e278: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18e278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e27c:
    // 0x18e27c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e284: 0x3e00008  jr          $ra
    ctx->pc = 0x18E284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E284u;
            // 0x18e288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D810u: goto label_18d810;
            case 0x18D880u: goto label_18d880;
            case 0x18D8F8u: goto label_18d8f8;
            case 0x18D904u: goto label_18d904;
            case 0x18D920u: goto label_18d920;
            case 0x18D930u: goto label_18d930;
            case 0x18D93Cu: goto label_18d93c;
            case 0x18D94Cu: goto label_18d94c;
            case 0x18D964u: goto label_18d964;
            case 0x18D974u: goto label_18d974;
            case 0x18D980u: goto label_18d980;
            case 0x18D99Cu: goto label_18d99c;
            case 0x18D9A0u: goto label_18d9a0;
            case 0x18DA28u: goto label_18da28;
            case 0x18DA2Cu: goto label_18da2c;
            case 0x18DB20u: goto label_18db20;
            case 0x18DB2Cu: goto label_18db2c;
            case 0x18DB48u: goto label_18db48;
            case 0x18DB58u: goto label_18db58;
            case 0x18DB64u: goto label_18db64;
            case 0x18DB74u: goto label_18db74;
            case 0x18DB8Cu: goto label_18db8c;
            case 0x18DB9Cu: goto label_18db9c;
            case 0x18DBA8u: goto label_18dba8;
            case 0x18DBD0u: goto label_18dbd0;
            case 0x18DC60u: goto label_18dc60;
            case 0x18DC90u: goto label_18dc90;
            case 0x18DCF0u: goto label_18dcf0;
            case 0x18DD50u: goto label_18dd50;
            case 0x18DD58u: goto label_18dd58;
            case 0x18DD60u: goto label_18dd60;
            case 0x18DDF8u: goto label_18ddf8;
            case 0x18DE38u: goto label_18de38;
            case 0x18DE3Cu: goto label_18de3c;
            case 0x18DEC8u: goto label_18dec8;
            case 0x18DECCu: goto label_18decc;
            case 0x18DF20u: goto label_18df20;
            case 0x18DF2Cu: goto label_18df2c;
            case 0x18DF4Cu: goto label_18df4c;
            case 0x18DF6Cu: goto label_18df6c;
            case 0x18DF88u: goto label_18df88;
            case 0x18DFA0u: goto label_18dfa0;
            case 0x18DFB0u: goto label_18dfb0;
            case 0x18DFBCu: goto label_18dfbc;
            case 0x18E050u: goto label_18e050;
            case 0x18E080u: goto label_18e080;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E154u: goto label_18e154;
            case 0x18E1D0u: goto label_18e1d0;
            case 0x18E1D4u: goto label_18e1d4;
            case 0x18E258u: goto label_18e258;
            case 0x18E278u: goto label_18e278;
            case 0x18E27Cu: goto label_18e27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E28Cu;
    // 0x18e28c: 0x0  nop
    ctx->pc = 0x18e28cu;
    // NOP
}
