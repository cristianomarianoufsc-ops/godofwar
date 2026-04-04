#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193810
// Address: 0x193810 - 0x193c60
void sub_00193810_0x193810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193810_0x193810");
#endif

    ctx->pc = 0x193810u;

    // 0x193810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x193810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x193814: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x193814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x193818: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x193818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19381c: 0x24523370  addiu       $s2, $v0, 0x3370
    ctx->pc = 0x19381cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x193820: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x193820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x193824: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x193824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x193828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19382c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x193830: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193834: 0xc05f9ae  jal         func_17E6B8
    ctx->pc = 0x193834u;
    SET_GPR_U32(ctx, 31, 0x19383Cu);
    ctx->pc = 0x193838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193834u;
            // 0x193838: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6B8u;
    if (runtime->hasFunction(0x17E6B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19383Cu; }
        if (ctx->pc != 0x19383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6b8_0x17e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19383Cu; }
        if (ctx->pc != 0x19383Cu) { return; }
    }
    ctx->pc = 0x19383Cu;
    // 0x19383c: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x19383Cu;
    SET_GPR_U32(ctx, 31, 0x193844u);
    ctx->pc = 0x193840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19383Cu;
            // 0x193840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193844u; }
        if (ctx->pc != 0x193844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193844u; }
        if (ctx->pc != 0x193844u) { return; }
    }
    ctx->pc = 0x193844u;
    // 0x193844: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193848: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x193848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x19384c: 0x24a53388  addiu       $a1, $a1, 0x3388
    ctx->pc = 0x19384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13192));
    // 0x193850: 0x24c6c910  addiu       $a2, $a2, -0x36F0
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953232));
    // 0x193854: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x193854u;
    SET_GPR_U32(ctx, 31, 0x19385Cu);
    ctx->pc = 0x193858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193854u;
            // 0x193858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19385Cu; }
        if (ctx->pc != 0x19385Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19385Cu; }
        if (ctx->pc != 0x19385Cu) { return; }
    }
    ctx->pc = 0x19385Cu;
    // 0x19385c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19385cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193860: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x193860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x193864: 0x24a53398  addiu       $a1, $a1, 0x3398
    ctx->pc = 0x193864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13208));
    // 0x193868: 0x24c6c914  addiu       $a2, $a2, -0x36EC
    ctx->pc = 0x193868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953236));
    // 0x19386c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19386Cu;
    SET_GPR_U32(ctx, 31, 0x193874u);
    ctx->pc = 0x193870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19386Cu;
            // 0x193870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193874u; }
        if (ctx->pc != 0x193874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193874u; }
        if (ctx->pc != 0x193874u) { return; }
    }
    ctx->pc = 0x193874u;
    // 0x193874: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193878: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x193878u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x19387c: 0x24a533a8  addiu       $a1, $a1, 0x33A8
    ctx->pc = 0x19387cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13224));
    // 0x193880: 0x24c6c918  addiu       $a2, $a2, -0x36E8
    ctx->pc = 0x193880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953240));
    // 0x193884: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x193884u;
    SET_GPR_U32(ctx, 31, 0x19388Cu);
    ctx->pc = 0x193888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193884u;
            // 0x193888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19388Cu; }
        if (ctx->pc != 0x19388Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19388Cu; }
        if (ctx->pc != 0x19388Cu) { return; }
    }
    ctx->pc = 0x19388Cu;
    // 0x19388c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19388cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193890: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x193890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x193894: 0x24a533b8  addiu       $a1, $a1, 0x33B8
    ctx->pc = 0x193894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13240));
    // 0x193898: 0x24c6c91c  addiu       $a2, $a2, -0x36E4
    ctx->pc = 0x193898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953244));
    // 0x19389c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x19389Cu;
    SET_GPR_U32(ctx, 31, 0x1938A4u);
    ctx->pc = 0x1938A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19389Cu;
            // 0x1938a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938A4u; }
        if (ctx->pc != 0x1938A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938A4u; }
        if (ctx->pc != 0x1938A4u) { return; }
    }
    ctx->pc = 0x1938A4u;
    // 0x1938a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1938a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1938a8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1938a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1938ac: 0x24a533c8  addiu       $a1, $a1, 0x33C8
    ctx->pc = 0x1938acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13256));
    // 0x1938b0: 0x24c6c920  addiu       $a2, $a2, -0x36E0
    ctx->pc = 0x1938b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953248));
    // 0x1938b4: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x1938B4u;
    SET_GPR_U32(ctx, 31, 0x1938BCu);
    ctx->pc = 0x1938B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1938B4u;
            // 0x1938b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938BCu; }
        if (ctx->pc != 0x1938BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938BCu; }
        if (ctx->pc != 0x1938BCu) { return; }
    }
    ctx->pc = 0x1938BCu;
    // 0x1938bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1938bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1938c0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1938c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1938c4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1938c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1938c8: 0x24a533e0  addiu       $a1, $a1, 0x33E0
    ctx->pc = 0x1938c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
    // 0x1938cc: 0x24c6c928  addiu       $a2, $a2, -0x36D8
    ctx->pc = 0x1938ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953256));
    // 0x1938d0: 0xc05f836  jal         func_17E0D8
    ctx->pc = 0x1938D0u;
    SET_GPR_U32(ctx, 31, 0x1938D8u);
    ctx->pc = 0x1938D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1938D0u;
            // 0x1938d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D8u;
    if (runtime->hasFunction(0x17E0D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938D8u; }
        if (ctx->pc != 0x1938D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e0d8_0x17e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938D8u; }
        if (ctx->pc != 0x1938D8u) { return; }
    }
    ctx->pc = 0x1938D8u;
    // 0x1938d8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1938d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1938dc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1938dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1938e0: 0x24a533f0  addiu       $a1, $a1, 0x33F0
    ctx->pc = 0x1938e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13296));
    // 0x1938e4: 0x24c6c940  addiu       $a2, $a2, -0x36C0
    ctx->pc = 0x1938e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953280));
    // 0x1938e8: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x1938E8u;
    SET_GPR_U32(ctx, 31, 0x1938F0u);
    ctx->pc = 0x1938ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1938E8u;
            // 0x1938ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938F0u; }
        if (ctx->pc != 0x1938F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938F0u; }
        if (ctx->pc != 0x1938F0u) { return; }
    }
    ctx->pc = 0x1938F0u;
    // 0x1938f0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1938f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1938f4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1938f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1938f8: 0x2610df64  addiu       $s0, $s0, -0x209C
    ctx->pc = 0x1938f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958948));
    // 0x1938fc: 0x24a53400  addiu       $a1, $a1, 0x3400
    ctx->pc = 0x1938fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13312));
    // 0x193900: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x193900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193904: 0xc05f71c  jal         func_17DC70
    ctx->pc = 0x193904u;
    SET_GPR_U32(ctx, 31, 0x19390Cu);
    ctx->pc = 0x193908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193904u;
            // 0x193908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DC70u;
    if (runtime->hasFunction(0x17DC70u)) {
        auto targetFn = runtime->lookupFunction(0x17DC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19390Cu; }
        if (ctx->pc != 0x19390Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DC70_0x17dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19390Cu; }
        if (ctx->pc != 0x19390Cu) { return; }
    }
    ctx->pc = 0x19390Cu;
    // 0x19390c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19390cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193910: 0x2606fffe  addiu       $a2, $s0, -0x2
    ctx->pc = 0x193910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x193914: 0x24a53418  addiu       $a1, $a1, 0x3418
    ctx->pc = 0x193914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13336));
    // 0x193918: 0xc05f71c  jal         func_17DC70
    ctx->pc = 0x193918u;
    SET_GPR_U32(ctx, 31, 0x193920u);
    ctx->pc = 0x19391Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193918u;
            // 0x19391c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DC70u;
    if (runtime->hasFunction(0x17DC70u)) {
        auto targetFn = runtime->lookupFunction(0x17DC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193920u; }
        if (ctx->pc != 0x193920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DC70_0x17dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193920u; }
        if (ctx->pc != 0x193920u) { return; }
    }
    ctx->pc = 0x193920u;
    // 0x193920: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193924: 0x2606fffc  addiu       $a2, $s0, -0x4
    ctx->pc = 0x193924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x193928: 0x24a53430  addiu       $a1, $a1, 0x3430
    ctx->pc = 0x193928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13360));
    // 0x19392c: 0xc05f71c  jal         func_17DC70
    ctx->pc = 0x19392Cu;
    SET_GPR_U32(ctx, 31, 0x193934u);
    ctx->pc = 0x193930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19392Cu;
            // 0x193930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DC70u;
    if (runtime->hasFunction(0x17DC70u)) {
        auto targetFn = runtime->lookupFunction(0x17DC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193934u; }
        if (ctx->pc != 0x193934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DC70_0x17dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193934u; }
        if (ctx->pc != 0x193934u) { return; }
    }
    ctx->pc = 0x193934u;
    // 0x193934: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x193934u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x193938: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19393c: 0x2610df6c  addiu       $s0, $s0, -0x2094
    ctx->pc = 0x19393cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958956));
    // 0x193940: 0x24a53448  addiu       $a1, $a1, 0x3448
    ctx->pc = 0x193940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13384));
    // 0x193944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193948: 0xc05f71c  jal         func_17DC70
    ctx->pc = 0x193948u;
    SET_GPR_U32(ctx, 31, 0x193950u);
    ctx->pc = 0x19394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193948u;
            // 0x19394c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DC70u;
    if (runtime->hasFunction(0x17DC70u)) {
        auto targetFn = runtime->lookupFunction(0x17DC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193950u; }
        if (ctx->pc != 0x193950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DC70_0x17dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193950u; }
        if (ctx->pc != 0x193950u) { return; }
    }
    ctx->pc = 0x193950u;
    // 0x193950: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193958: 0x24a53460  addiu       $a1, $a1, 0x3460
    ctx->pc = 0x193958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13408));
    // 0x19395c: 0xc05f71c  jal         func_17DC70
    ctx->pc = 0x19395Cu;
    SET_GPR_U32(ctx, 31, 0x193964u);
    ctx->pc = 0x193960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19395Cu;
            // 0x193960: 0x2606fffe  addiu       $a2, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DC70u;
    if (runtime->hasFunction(0x17DC70u)) {
        auto targetFn = runtime->lookupFunction(0x17DC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193964u; }
        if (ctx->pc != 0x193964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DC70_0x17dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193964u; }
        if (ctx->pc != 0x193964u) { return; }
    }
    ctx->pc = 0x193964u;
    // 0x193964: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193968: 0x2606fffc  addiu       $a2, $s0, -0x4
    ctx->pc = 0x193968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x19396c: 0x24a53470  addiu       $a1, $a1, 0x3470
    ctx->pc = 0x19396cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13424));
    // 0x193970: 0xc05f71c  jal         func_17DC70
    ctx->pc = 0x193970u;
    SET_GPR_U32(ctx, 31, 0x193978u);
    ctx->pc = 0x193974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193970u;
            // 0x193974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DC70u;
    if (runtime->hasFunction(0x17DC70u)) {
        auto targetFn = runtime->lookupFunction(0x17DC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193978u; }
        if (ctx->pc != 0x193978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DC70_0x17dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193978u; }
        if (ctx->pc != 0x193978u) { return; }
    }
    ctx->pc = 0x193978u;
    // 0x193978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19397c: 0x0  nop
    ctx->pc = 0x19397cu;
    // NOP
label_193980:
    // 0x193980: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x193980u;
    SET_GPR_U32(ctx, 31, 0x193988u);
    ctx->pc = 0x193984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193980u;
            // 0x193984: 0x24110038  addiu       $s1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193988u; }
        if (ctx->pc != 0x193988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193988u; }
        if (ctx->pc != 0x193988u) { return; }
    }
    ctx->pc = 0x193988u;
    // 0x193988: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19398c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193990: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193994: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193994u;
    SET_GPR_U32(ctx, 31, 0x19399Cu);
    ctx->pc = 0x193998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193994u;
            // 0x193998: 0x24a53488  addiu       $a1, $a1, 0x3488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19399Cu; }
        if (ctx->pc != 0x19399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19399Cu; }
        if (ctx->pc != 0x19399Cu) { return; }
    }
    ctx->pc = 0x19399Cu;
    // 0x19399c: 0x2713018  mult        $a2, $s3, $s1
    ctx->pc = 0x19399cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1939a0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1939a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1939a4: 0x2610deb8  addiu       $s0, $s0, -0x2148
    ctx->pc = 0x1939a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958776));
    // 0x1939a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1939a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1939acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939b0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1939B0u;
    SET_GPR_U32(ctx, 31, 0x1939B8u);
    ctx->pc = 0x1939B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939B0u;
            // 0x1939b4: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939B8u; }
        if (ctx->pc != 0x1939B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939B8u; }
        if (ctx->pc != 0x1939B8u) { return; }
    }
    ctx->pc = 0x1939B8u;
    // 0x1939b8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1939b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1939bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1939bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1939c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939c4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1939C4u;
    SET_GPR_U32(ctx, 31, 0x1939CCu);
    ctx->pc = 0x1939C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939C4u;
            // 0x1939c8: 0x24a534a8  addiu       $a1, $a1, 0x34A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939CCu; }
        if (ctx->pc != 0x1939CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939CCu; }
        if (ctx->pc != 0x1939CCu) { return; }
    }
    ctx->pc = 0x1939CCu;
    // 0x1939cc: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1939ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1939d0: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x1939d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1939d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1939d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1939d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939dc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1939DCu;
    SET_GPR_U32(ctx, 31, 0x1939E4u);
    ctx->pc = 0x1939E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939DCu;
            // 0x1939e0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939E4u; }
        if (ctx->pc != 0x1939E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939E4u; }
        if (ctx->pc != 0x1939E4u) { return; }
    }
    ctx->pc = 0x1939E4u;
    // 0x1939e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1939e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1939e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1939e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1939ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939f0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1939F0u;
    SET_GPR_U32(ctx, 31, 0x1939F8u);
    ctx->pc = 0x1939F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939F0u;
            // 0x1939f4: 0x24a534c0  addiu       $a1, $a1, 0x34C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939F8u; }
        if (ctx->pc != 0x1939F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939F8u; }
        if (ctx->pc != 0x1939F8u) { return; }
    }
    ctx->pc = 0x1939F8u;
    // 0x1939f8: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x1939f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1939fc: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1939fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x193a00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a08: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x193A08u;
    SET_GPR_U32(ctx, 31, 0x193A10u);
    ctx->pc = 0x193A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A08u;
            // 0x193a0c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A10u; }
        if (ctx->pc != 0x193A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A10u; }
        if (ctx->pc != 0x193A10u) { return; }
    }
    ctx->pc = 0x193A10u;
    // 0x193a10: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a1c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193A1Cu;
    SET_GPR_U32(ctx, 31, 0x193A24u);
    ctx->pc = 0x193A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A1Cu;
            // 0x193a20: 0x24a534d8  addiu       $a1, $a1, 0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A24u; }
        if (ctx->pc != 0x193A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A24u; }
        if (ctx->pc != 0x193A24u) { return; }
    }
    ctx->pc = 0x193A24u;
    // 0x193a24: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x193a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193a28: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x193a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x193a2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a34: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x193A34u;
    SET_GPR_U32(ctx, 31, 0x193A3Cu);
    ctx->pc = 0x193A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A34u;
            // 0x193a38: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A3Cu; }
        if (ctx->pc != 0x193A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A3Cu; }
        if (ctx->pc != 0x193A3Cu) { return; }
    }
    ctx->pc = 0x193A3Cu;
    // 0x193a3c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193a40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a48: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193A48u;
    SET_GPR_U32(ctx, 31, 0x193A50u);
    ctx->pc = 0x193A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A48u;
            // 0x193a4c: 0x24a534e8  addiu       $a1, $a1, 0x34E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A50u; }
        if (ctx->pc != 0x193A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A50u; }
        if (ctx->pc != 0x193A50u) { return; }
    }
    ctx->pc = 0x193A50u;
    // 0x193a50: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x193a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193a54: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x193a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x193a58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a60: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x193A60u;
    SET_GPR_U32(ctx, 31, 0x193A68u);
    ctx->pc = 0x193A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A60u;
            // 0x193a64: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A68u; }
        if (ctx->pc != 0x193A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A68u; }
        if (ctx->pc != 0x193A68u) { return; }
    }
    ctx->pc = 0x193A68u;
    // 0x193a68: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a74: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193A74u;
    SET_GPR_U32(ctx, 31, 0x193A7Cu);
    ctx->pc = 0x193A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A74u;
            // 0x193a78: 0x24a53508  addiu       $a1, $a1, 0x3508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A7Cu; }
        if (ctx->pc != 0x193A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A7Cu; }
        if (ctx->pc != 0x193A7Cu) { return; }
    }
    ctx->pc = 0x193A7Cu;
    // 0x193a7c: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x193a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193a80: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x193a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x193a84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a8c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x193A8Cu;
    SET_GPR_U32(ctx, 31, 0x193A94u);
    ctx->pc = 0x193A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A8Cu;
            // 0x193a90: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A94u; }
        if (ctx->pc != 0x193A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A94u; }
        if (ctx->pc != 0x193A94u) { return; }
    }
    ctx->pc = 0x193A94u;
    // 0x193a94: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193a98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193aa0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193AA0u;
    SET_GPR_U32(ctx, 31, 0x193AA8u);
    ctx->pc = 0x193AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193AA0u;
            // 0x193aa4: 0x24a53528  addiu       $a1, $a1, 0x3528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AA8u; }
        if (ctx->pc != 0x193AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AA8u; }
        if (ctx->pc != 0x193AA8u) { return; }
    }
    ctx->pc = 0x193AA8u;
    // 0x193aa8: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x193aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193aac: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x193aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x193ab0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ab8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x193AB8u;
    SET_GPR_U32(ctx, 31, 0x193AC0u);
    ctx->pc = 0x193ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193AB8u;
            // 0x193abc: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AC0u; }
        if (ctx->pc != 0x193AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AC0u; }
        if (ctx->pc != 0x193AC0u) { return; }
    }
    ctx->pc = 0x193AC0u;
    // 0x193ac0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193ac4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ac8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193acc: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193ACCu;
    SET_GPR_U32(ctx, 31, 0x193AD4u);
    ctx->pc = 0x193AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193ACCu;
            // 0x193ad0: 0x24a53548  addiu       $a1, $a1, 0x3548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AD4u; }
        if (ctx->pc != 0x193AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AD4u; }
        if (ctx->pc != 0x193AD4u) { return; }
    }
    ctx->pc = 0x193AD4u;
    // 0x193ad4: 0x2711018  mult        $v0, $s3, $s1
    ctx->pc = 0x193ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193ad8: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x193ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x193adc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ae4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x193AE4u;
    SET_GPR_U32(ctx, 31, 0x193AECu);
    ctx->pc = 0x193AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193AE4u;
            // 0x193ae8: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AECu; }
        if (ctx->pc != 0x193AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AECu; }
        if (ctx->pc != 0x193AECu) { return; }
    }
    ctx->pc = 0x193AECu;
    // 0x193aec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193af0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193af4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193af8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193AF8u;
    SET_GPR_U32(ctx, 31, 0x193B00u);
    ctx->pc = 0x193AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193AF8u;
            // 0x193afc: 0x24a53560  addiu       $a1, $a1, 0x3560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B00u; }
        if (ctx->pc != 0x193B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B00u; }
        if (ctx->pc != 0x193B00u) { return; }
    }
    ctx->pc = 0x193B00u;
    // 0x193b00: 0x2718818  mult        $s1, $s3, $s1
    ctx->pc = 0x193b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x193b04: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x193b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x193b08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b10: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x193B10u;
    SET_GPR_U32(ctx, 31, 0x193B18u);
    ctx->pc = 0x193B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B10u;
            // 0x193b14: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B18u; }
        if (ctx->pc != 0x193B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B18u; }
        if (ctx->pc != 0x193B18u) { return; }
    }
    ctx->pc = 0x193B18u;
    // 0x193b18: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193b1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b24: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193B24u;
    SET_GPR_U32(ctx, 31, 0x193B2Cu);
    ctx->pc = 0x193B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B24u;
            // 0x193b28: 0x24a53578  addiu       $a1, $a1, 0x3578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B2Cu; }
        if (ctx->pc != 0x193B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B2Cu; }
        if (ctx->pc != 0x193B2Cu) { return; }
    }
    ctx->pc = 0x193B2Cu;
    // 0x193b2c: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x193b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x193b30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b34: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x193b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x193b38: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x193B38u;
    SET_GPR_U32(ctx, 31, 0x193B40u);
    ctx->pc = 0x193B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B38u;
            // 0x193b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B40u; }
        if (ctx->pc != 0x193B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B40u; }
        if (ctx->pc != 0x193B40u) { return; }
    }
    ctx->pc = 0x193B40u;
    // 0x193b40: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b4c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193B4Cu;
    SET_GPR_U32(ctx, 31, 0x193B54u);
    ctx->pc = 0x193B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B4Cu;
            // 0x193b50: 0x24a53590  addiu       $a1, $a1, 0x3590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B54u; }
        if (ctx->pc != 0x193B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B54u; }
        if (ctx->pc != 0x193B54u) { return; }
    }
    ctx->pc = 0x193B54u;
    // 0x193b54: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x193b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x193b58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b5c: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x193b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x193b60: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x193B60u;
    SET_GPR_U32(ctx, 31, 0x193B68u);
    ctx->pc = 0x193B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B60u;
            // 0x193b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B68u; }
        if (ctx->pc != 0x193B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B68u; }
        if (ctx->pc != 0x193B68u) { return; }
    }
    ctx->pc = 0x193B68u;
    // 0x193b68: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193b6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b74: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193B74u;
    SET_GPR_U32(ctx, 31, 0x193B7Cu);
    ctx->pc = 0x193B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B74u;
            // 0x193b78: 0x24a535a8  addiu       $a1, $a1, 0x35A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B7Cu; }
        if (ctx->pc != 0x193B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B7Cu; }
        if (ctx->pc != 0x193B7Cu) { return; }
    }
    ctx->pc = 0x193B7Cu;
    // 0x193b7c: 0x2606002c  addiu       $a2, $s0, 0x2C
    ctx->pc = 0x193b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x193b80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b84: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x193b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x193b88: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x193B88u;
    SET_GPR_U32(ctx, 31, 0x193B90u);
    ctx->pc = 0x193B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B88u;
            // 0x193b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B90u; }
        if (ctx->pc != 0x193B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B90u; }
        if (ctx->pc != 0x193B90u) { return; }
    }
    ctx->pc = 0x193B90u;
    // 0x193b90: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193b94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b9c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193B9Cu;
    SET_GPR_U32(ctx, 31, 0x193BA4u);
    ctx->pc = 0x193BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B9Cu;
            // 0x193ba0: 0x24a535c0  addiu       $a1, $a1, 0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BA4u; }
        if (ctx->pc != 0x193BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BA4u; }
        if (ctx->pc != 0x193BA4u) { return; }
    }
    ctx->pc = 0x193BA4u;
    // 0x193ba4: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x193ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x193ba8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bac: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x193bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x193bb0: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x193BB0u;
    SET_GPR_U32(ctx, 31, 0x193BB8u);
    ctx->pc = 0x193BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193BB0u;
            // 0x193bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BB8u; }
        if (ctx->pc != 0x193BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BB8u; }
        if (ctx->pc != 0x193BB8u) { return; }
    }
    ctx->pc = 0x193BB8u;
    // 0x193bb8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193bbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bc0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bc4: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193BC4u;
    SET_GPR_U32(ctx, 31, 0x193BCCu);
    ctx->pc = 0x193BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193BC4u;
            // 0x193bc8: 0x24a535e0  addiu       $a1, $a1, 0x35E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BCCu; }
        if (ctx->pc != 0x193BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BCCu; }
        if (ctx->pc != 0x193BCCu) { return; }
    }
    ctx->pc = 0x193BCCu;
    // 0x193bcc: 0x26060032  addiu       $a2, $s0, 0x32
    ctx->pc = 0x193bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    // 0x193bd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bd4: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x193bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x193bd8: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x193BD8u;
    SET_GPR_U32(ctx, 31, 0x193BE0u);
    ctx->pc = 0x193BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193BD8u;
            // 0x193bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BE0u; }
        if (ctx->pc != 0x193BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BE0u; }
        if (ctx->pc != 0x193BE0u) { return; }
    }
    ctx->pc = 0x193BE0u;
    // 0x193be0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193be4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193be8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bec: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193BECu;
    SET_GPR_U32(ctx, 31, 0x193BF4u);
    ctx->pc = 0x193BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193BECu;
            // 0x193bf0: 0x24a53600  addiu       $a1, $a1, 0x3600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BF4u; }
        if (ctx->pc != 0x193BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BF4u; }
        if (ctx->pc != 0x193BF4u) { return; }
    }
    ctx->pc = 0x193BF4u;
    // 0x193bf4: 0x26060034  addiu       $a2, $s0, 0x34
    ctx->pc = 0x193bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x193bf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x193bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bfc: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x193bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x193c00: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x193C00u;
    SET_GPR_U32(ctx, 31, 0x193C08u);
    ctx->pc = 0x193C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C00u;
            // 0x193c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C08u; }
        if (ctx->pc != 0x193C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C08u; }
        if (ctx->pc != 0x193C08u) { return; }
    }
    ctx->pc = 0x193C08u;
    // 0x193c08: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x193c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x193c0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c14: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x193C14u;
    SET_GPR_U32(ctx, 31, 0x193C1Cu);
    ctx->pc = 0x193C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C14u;
            // 0x193c18: 0x24a53618  addiu       $a1, $a1, 0x3618 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C1Cu; }
        if (ctx->pc != 0x193C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C1Cu; }
        if (ctx->pc != 0x193C1Cu) { return; }
    }
    ctx->pc = 0x193C1Cu;
    // 0x193c1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x193c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x193c20: 0x26100036  addiu       $s0, $s0, 0x36
    ctx->pc = 0x193c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
    // 0x193c24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c28: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x193c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x193c2c: 0xc05f7bc  jal         func_17DEF0
    ctx->pc = 0x193C2Cu;
    SET_GPR_U32(ctx, 31, 0x193C34u);
    ctx->pc = 0x193C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C2Cu;
            // 0x193c30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF0u;
    if (runtime->hasFunction(0x17DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C34u; }
        if (ctx->pc != 0x193C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEF0_0x17def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C34u; }
        if (ctx->pc != 0x193C34u) { return; }
    }
    ctx->pc = 0x193C34u;
    // 0x193c34: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x193c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x193c38: 0x1440ff51  bnez        $v0, . + 4 + (-0xAF << 2)
    ctx->pc = 0x193C38u;
    {
        const bool branch_taken_0x193c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C38u;
            // 0x193c3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c38) {
            ctx->pc = 0x193980u;
            runtime->cooperativeGuestYield();
            goto label_193980;
        }
    }
    ctx->pc = 0x193C40u;
    // 0x193c40: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x193c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193c44: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x193c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193c48: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x193c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193c4c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x193c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193c50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193c54: 0x3e00008  jr          $ra
    ctx->pc = 0x193C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C54u;
            // 0x193c58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193980u: goto label_193980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193C5Cu;
    // 0x193c5c: 0x0  nop
    ctx->pc = 0x193c5cu;
    // NOP
}
