#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE868
// Address: 0x1be868 - 0x1be9c8
void sub_001BE868_0x1be868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE868_0x1be868");
#endif

    ctx->pc = 0x1be868u;

    // 0x1be868: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1be868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1be86c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1be86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1be870: 0x3c11002b  lui         $s1, 0x2B
    ctx->pc = 0x1be870u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)43 << 16));
    // 0x1be874: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1be874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1be878: 0x26315b90  addiu       $s1, $s1, 0x5B90
    ctx->pc = 0x1be878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23440));
    // 0x1be87c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1be87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1be880: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1be880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1be884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be888: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1be888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1be88c: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x1be88cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x1be890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be894: 0xc05f9b8  jal         func_17E6E0
    ctx->pc = 0x1BE894u;
    SET_GPR_U32(ctx, 31, 0x1BE89Cu);
    ctx->pc = 0x1BE898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE894u;
            // 0x1be898: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6E0u;
    if (runtime->hasFunction(0x17E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x17E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE89Cu; }
        if (ctx->pc != 0x1BE89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e6e0_0x17e708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE89Cu; }
        if (ctx->pc != 0x1BE89Cu) { return; }
    }
    ctx->pc = 0x1BE89Cu;
    // 0x1be89c: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x1be89cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x1be8a0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8a8: 0x24a55ba0  addiu       $a1, $a1, 0x5BA0
    ctx->pc = 0x1be8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23456));
    // 0x1be8ac: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1BE8ACu;
    SET_GPR_U32(ctx, 31, 0x1BE8B4u);
    ctx->pc = 0x1BE8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8ACu;
            // 0x1be8b0: 0x26665e98  addiu       $a2, $s3, 0x5E98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8B4u; }
        if (ctx->pc != 0x1BE8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8B4u; }
        if (ctx->pc != 0x1BE8B4u) { return; }
    }
    ctx->pc = 0x1BE8B4u;
    // 0x1be8b4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8bc: 0x24a55ba8  addiu       $a1, $a1, 0x5BA8
    ctx->pc = 0x1be8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23464));
    // 0x1be8c0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1BE8C0u;
    SET_GPR_U32(ctx, 31, 0x1BE8C8u);
    ctx->pc = 0x1BE8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8C0u;
            // 0x1be8c4: 0x26465e9c  addiu       $a2, $s2, 0x5E9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8C8u; }
        if (ctx->pc != 0x1BE8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8C8u; }
        if (ctx->pc != 0x1BE8C8u) { return; }
    }
    ctx->pc = 0x1BE8C8u;
    // 0x1be8c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be8cc: 0x26865ea0  addiu       $a2, $s4, 0x5EA0
    ctx->pc = 0x1be8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 24224));
    // 0x1be8d0: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0
    ctx->pc = 0x1be8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
    // 0x1be8d4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1BE8D4u;
    SET_GPR_U32(ctx, 31, 0x1BE8DCu);
    ctx->pc = 0x1BE8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8D4u;
            // 0x1be8d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8DCu; }
        if (ctx->pc != 0x1BE8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8DCu; }
        if (ctx->pc != 0x1BE8DCu) { return; }
    }
    ctx->pc = 0x1BE8DCu;
    // 0x1be8dc: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1BE8DCu;
    SET_GPR_U32(ctx, 31, 0x1BE8E4u);
    ctx->pc = 0x1BE8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE8DCu;
            // 0x1be8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8E4u; }
        if (ctx->pc != 0x1BE8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE8E4u; }
        if (ctx->pc != 0x1BE8E4u) { return; }
    }
    ctx->pc = 0x1BE8E4u;
    // 0x1be8e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1be8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1be8e8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1be8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1be8ec: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1be8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1be8f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1be8f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8f4: 0x24e7cca0  addiu       $a3, $a3, -0x3360
    ctx->pc = 0x1be8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954144));
    // 0x1be8f8: 0x24c6cc9c  addiu       $a2, $a2, -0x3364
    ctx->pc = 0x1be8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954140));
    // 0x1be8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be900: 0xc05f91e  jal         func_17E478
    ctx->pc = 0x1BE900u;
    SET_GPR_U32(ctx, 31, 0x1BE908u);
    ctx->pc = 0x1BE904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE900u;
            // 0x1be904: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E478u;
    if (runtime->hasFunction(0x17E478u)) {
        auto targetFn = runtime->lookupFunction(0x17E478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE908u; }
        if (ctx->pc != 0x1BE908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E478_0x17e478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE908u; }
        if (ctx->pc != 0x1BE908u) { return; }
    }
    ctx->pc = 0x1BE908u;
    // 0x1be908: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1be908u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1be90c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1be90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1be910: 0x26105ea8  addiu       $s0, $s0, 0x5EA8
    ctx->pc = 0x1be910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24232));
    // 0x1be914: 0x24845be8  addiu       $a0, $a0, 0x5BE8
    ctx->pc = 0x1be914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23528));
    // 0x1be918: 0xc06f9fa  jal         func_1BE7E8
    ctx->pc = 0x1BE918u;
    SET_GPR_U32(ctx, 31, 0x1BE920u);
    ctx->pc = 0x1BE91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE918u;
            // 0x1be91c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7E8u;
    if (runtime->hasFunction(0x1BE7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE920u; }
        if (ctx->pc != 0x1BE920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE7E8_0x1be7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE920u; }
        if (ctx->pc != 0x1BE920u) { return; }
    }
    ctx->pc = 0x1BE920u;
    // 0x1be920: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1be920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1be924: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1be924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1be928: 0xc06f9fa  jal         func_1BE7E8
    ctx->pc = 0x1BE928u;
    SET_GPR_U32(ctx, 31, 0x1BE930u);
    ctx->pc = 0x1BE92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE928u;
            // 0x1be92c: 0x24845bf8  addiu       $a0, $a0, 0x5BF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7E8u;
    if (runtime->hasFunction(0x1BE7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE930u; }
        if (ctx->pc != 0x1BE930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE7E8_0x1be7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE930u; }
        if (ctx->pc != 0x1BE930u) { return; }
    }
    ctx->pc = 0x1BE930u;
    // 0x1be930: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1be930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1be934: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x1be934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1be938: 0xc06f9fa  jal         func_1BE7E8
    ctx->pc = 0x1BE938u;
    SET_GPR_U32(ctx, 31, 0x1BE940u);
    ctx->pc = 0x1BE93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE938u;
            // 0x1be93c: 0x24845c10  addiu       $a0, $a0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7E8u;
    if (runtime->hasFunction(0x1BE7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE940u; }
        if (ctx->pc != 0x1BE940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE7E8_0x1be7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE940u; }
        if (ctx->pc != 0x1BE940u) { return; }
    }
    ctx->pc = 0x1BE940u;
    // 0x1be940: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1be940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1be944: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x1be944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1be948: 0xc06f9fa  jal         func_1BE7E8
    ctx->pc = 0x1BE948u;
    SET_GPR_U32(ctx, 31, 0x1BE950u);
    ctx->pc = 0x1BE94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE948u;
            // 0x1be94c: 0x24845c20  addiu       $a0, $a0, 0x5C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7E8u;
    if (runtime->hasFunction(0x1BE7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE950u; }
        if (ctx->pc != 0x1BE950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE7E8_0x1be7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE950u; }
        if (ctx->pc != 0x1BE950u) { return; }
    }
    ctx->pc = 0x1BE950u;
    // 0x1be950: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1BE950u;
    SET_GPR_U32(ctx, 31, 0x1BE958u);
    ctx->pc = 0x1BE954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE950u;
            // 0x1be954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE958u; }
        if (ctx->pc != 0x1BE958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE958u; }
        if (ctx->pc != 0x1BE958u) { return; }
    }
    ctx->pc = 0x1BE958u;
    // 0x1be958: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1be958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1be95c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1be95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be960: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1be960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1be964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1be964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be968: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1be968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x1be96c: 0x34210a90  ori         $at, $at, 0xA90
    ctx->pc = 0x1be96cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2704);
    // 0x1be970: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1be970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be974: 0xe6415e9c  swc1        $f1, 0x5E9C($s2)
    ctx->pc = 0x1be974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24220), bits); }
    // 0x1be978: 0xc060e52  jal         func_183948
    ctx->pc = 0x1BE978u;
    SET_GPR_U32(ctx, 31, 0x1BE980u);
    ctx->pc = 0x1BE97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE978u;
            // 0x1be97c: 0xe6605e98  swc1        $f0, 0x5E98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE980u; }
        if (ctx->pc != 0x1BE980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE980u; }
        if (ctx->pc != 0x1BE980u) { return; }
    }
    ctx->pc = 0x1BE980u;
    // 0x1be980: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1be980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1be984: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1be984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1be988: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1be988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be98c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1be990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be994: 0xe4405ed8  swc1        $f0, 0x5ED8($v0)
    ctx->pc = 0x1be994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24280), bits); }
    // 0x1be998: 0xc077948  jal         func_1DE520
    ctx->pc = 0x1BE998u;
    SET_GPR_U32(ctx, 31, 0x1BE9A0u);
    ctx->pc = 0x1BE99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE998u;
            // 0x1be99c: 0xe6815ea0  swc1        $f1, 0x5EA0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24224), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE520u;
    if (runtime->hasFunction(0x1DE520u)) {
        auto targetFn = runtime->lookupFunction(0x1DE520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9A0u; }
        if (ctx->pc != 0x1BE9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE520_0x1de520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9A0u; }
        if (ctx->pc != 0x1BE9A0u) { return; }
    }
    ctx->pc = 0x1BE9A0u;
    // 0x1be9a0: 0xc0861b0  jal         func_2186C0
    ctx->pc = 0x1BE9A0u;
    SET_GPR_U32(ctx, 31, 0x1BE9A8u);
    ctx->pc = 0x2186C0u;
    if (runtime->hasFunction(0x2186C0u)) {
        auto targetFn = runtime->lookupFunction(0x2186C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9A8u; }
        if (ctx->pc != 0x1BE9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002186C0_0x2186c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9A8u; }
        if (ctx->pc != 0x1BE9A8u) { return; }
    }
    ctx->pc = 0x1BE9A8u;
    // 0x1be9a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1be9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be9ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1be9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be9b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1be9b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be9b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1be9b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be9b8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1be9b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9C0u;
            // 0x1be9c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE9C8u;
}
