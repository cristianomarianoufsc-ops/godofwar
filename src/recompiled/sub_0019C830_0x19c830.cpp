#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C830
// Address: 0x19c830 - 0x19c9a0
void sub_0019C830_0x19c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C830_0x19c830");
#endif

    ctx->pc = 0x19c830u;

    // 0x19c830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c834: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c83c: 0xc066e8c  jal         func_19BA30
    ctx->pc = 0x19C83Cu;
    SET_GPR_U32(ctx, 31, 0x19C844u);
    ctx->pc = 0x19BA30u;
    if (runtime->hasFunction(0x19BA30u)) {
        auto targetFn = runtime->lookupFunction(0x19BA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C844u; }
        if (ctx->pc != 0x19C844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BA30_0x19ba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C844u; }
        if (ctx->pc != 0x19C844u) { return; }
    }
    ctx->pc = 0x19C844u;
    // 0x19c844: 0xc066dfe  jal         func_19B7F8
    ctx->pc = 0x19C844u;
    SET_GPR_U32(ctx, 31, 0x19C84Cu);
    ctx->pc = 0x19B7F8u;
    if (runtime->hasFunction(0x19B7F8u)) {
        auto targetFn = runtime->lookupFunction(0x19B7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C84Cu; }
        if (ctx->pc != 0x19C84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B7F8_0x19b7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C84Cu; }
        if (ctx->pc != 0x19C84Cu) { return; }
    }
    ctx->pc = 0x19C84Cu;
    // 0x19c84c: 0xc05d656  jal         func_175958
    ctx->pc = 0x19C84Cu;
    SET_GPR_U32(ctx, 31, 0x19C854u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C854u; }
        if (ctx->pc != 0x19C854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C854u; }
        if (ctx->pc != 0x19C854u) { return; }
    }
    ctx->pc = 0x19C854u;
    // 0x19c854: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c858: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c85c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c85cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c860: 0x24a53b00  addiu       $a1, $a1, 0x3B00
    ctx->pc = 0x19c860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15104));
    // 0x19c864: 0x24c6c528  addiu       $a2, $a2, -0x3AD8
    ctx->pc = 0x19c864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952232));
    // 0x19c868: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C868u;
    SET_GPR_U32(ctx, 31, 0x19C870u);
    ctx->pc = 0x19C86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C868u;
            // 0x19c86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C870u; }
        if (ctx->pc != 0x19C870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C870u; }
        if (ctx->pc != 0x19C870u) { return; }
    }
    ctx->pc = 0x19C870u;
    // 0x19c870: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c874: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c878: 0x24a53b10  addiu       $a1, $a1, 0x3B10
    ctx->pc = 0x19c878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15120));
    // 0x19c87c: 0x24c6c5a8  addiu       $a2, $a2, -0x3A58
    ctx->pc = 0x19c87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952360));
    // 0x19c880: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C880u;
    SET_GPR_U32(ctx, 31, 0x19C888u);
    ctx->pc = 0x19C884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C880u;
            // 0x19c884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C888u; }
        if (ctx->pc != 0x19C888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C888u; }
        if (ctx->pc != 0x19C888u) { return; }
    }
    ctx->pc = 0x19C888u;
    // 0x19c888: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c88c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c88cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c890: 0x24a53b20  addiu       $a1, $a1, 0x3B20
    ctx->pc = 0x19c890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15136));
    // 0x19c894: 0x24c6be80  addiu       $a2, $a2, -0x4180
    ctx->pc = 0x19c894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950528));
    // 0x19c898: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C898u;
    SET_GPR_U32(ctx, 31, 0x19C8A0u);
    ctx->pc = 0x19C89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C898u;
            // 0x19c89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8A0u; }
        if (ctx->pc != 0x19C8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8A0u; }
        if (ctx->pc != 0x19C8A0u) { return; }
    }
    ctx->pc = 0x19C8A0u;
    // 0x19c8a0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c8a4: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c8a8: 0x24a53b38  addiu       $a1, $a1, 0x3B38
    ctx->pc = 0x19c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15160));
    // 0x19c8ac: 0x24c6bec8  addiu       $a2, $a2, -0x4138
    ctx->pc = 0x19c8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950600));
    // 0x19c8b0: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C8B0u;
    SET_GPR_U32(ctx, 31, 0x19C8B8u);
    ctx->pc = 0x19C8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8B0u;
            // 0x19c8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8B8u; }
        if (ctx->pc != 0x19C8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8B8u; }
        if (ctx->pc != 0x19C8B8u) { return; }
    }
    ctx->pc = 0x19C8B8u;
    // 0x19c8b8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c8bc: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c8c0: 0x24a53b50  addiu       $a1, $a1, 0x3B50
    ctx->pc = 0x19c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15184));
    // 0x19c8c4: 0x24c6bfc8  addiu       $a2, $a2, -0x4038
    ctx->pc = 0x19c8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950856));
    // 0x19c8c8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C8C8u;
    SET_GPR_U32(ctx, 31, 0x19C8D0u);
    ctx->pc = 0x19C8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8C8u;
            // 0x19c8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8D0u; }
        if (ctx->pc != 0x19C8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8D0u; }
        if (ctx->pc != 0x19C8D0u) { return; }
    }
    ctx->pc = 0x19C8D0u;
    // 0x19c8d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c8d4: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c8d8: 0x24a53b68  addiu       $a1, $a1, 0x3B68
    ctx->pc = 0x19c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15208));
    // 0x19c8dc: 0x24c6c0a0  addiu       $a2, $a2, -0x3F60
    ctx->pc = 0x19c8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951072));
    // 0x19c8e0: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C8E0u;
    SET_GPR_U32(ctx, 31, 0x19C8E8u);
    ctx->pc = 0x19C8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8E0u;
            // 0x19c8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8E8u; }
        if (ctx->pc != 0x19C8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8E8u; }
        if (ctx->pc != 0x19C8E8u) { return; }
    }
    ctx->pc = 0x19C8E8u;
    // 0x19c8e8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c8ec: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c8f0: 0x24a53b80  addiu       $a1, $a1, 0x3B80
    ctx->pc = 0x19c8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15232));
    // 0x19c8f4: 0x24c6c7c0  addiu       $a2, $a2, -0x3840
    ctx->pc = 0x19c8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952896));
    // 0x19c8f8: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C8F8u;
    SET_GPR_U32(ctx, 31, 0x19C900u);
    ctx->pc = 0x19C8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8F8u;
            // 0x19c8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C900u; }
        if (ctx->pc != 0x19C900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C900u; }
        if (ctx->pc != 0x19C900u) { return; }
    }
    ctx->pc = 0x19C900u;
    // 0x19c900: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c904: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c908: 0x24a53b98  addiu       $a1, $a1, 0x3B98
    ctx->pc = 0x19c908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15256));
    // 0x19c90c: 0x24c6c750  addiu       $a2, $a2, -0x38B0
    ctx->pc = 0x19c90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952784));
    // 0x19c910: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C910u;
    SET_GPR_U32(ctx, 31, 0x19C918u);
    ctx->pc = 0x19C914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C910u;
            // 0x19c914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C918u; }
        if (ctx->pc != 0x19C918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C918u; }
        if (ctx->pc != 0x19C918u) { return; }
    }
    ctx->pc = 0x19C918u;
    // 0x19c918: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c91c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c920: 0x24a53bb0  addiu       $a1, $a1, 0x3BB0
    ctx->pc = 0x19c920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15280));
    // 0x19c924: 0x24c6c628  addiu       $a2, $a2, -0x39D8
    ctx->pc = 0x19c924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952488));
    // 0x19c928: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C928u;
    SET_GPR_U32(ctx, 31, 0x19C930u);
    ctx->pc = 0x19C92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C928u;
            // 0x19c92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C930u; }
        if (ctx->pc != 0x19C930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C930u; }
        if (ctx->pc != 0x19C930u) { return; }
    }
    ctx->pc = 0x19C930u;
    // 0x19c930: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c934: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c938: 0x24a53bc8  addiu       $a1, $a1, 0x3BC8
    ctx->pc = 0x19c938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15304));
    // 0x19c93c: 0x24c6c690  addiu       $a2, $a2, -0x3970
    ctx->pc = 0x19c93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952592));
    // 0x19c940: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C940u;
    SET_GPR_U32(ctx, 31, 0x19C948u);
    ctx->pc = 0x19C944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C940u;
            // 0x19c944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C948u; }
        if (ctx->pc != 0x19C948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C948u; }
        if (ctx->pc != 0x19C948u) { return; }
    }
    ctx->pc = 0x19C948u;
    // 0x19c948: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c94c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c94cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c950: 0x24a53bd8  addiu       $a1, $a1, 0x3BD8
    ctx->pc = 0x19c950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15320));
    // 0x19c954: 0x24c6c6e0  addiu       $a2, $a2, -0x3920
    ctx->pc = 0x19c954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952672));
    // 0x19c958: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C958u;
    SET_GPR_U32(ctx, 31, 0x19C960u);
    ctx->pc = 0x19C95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C958u;
            // 0x19c95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C960u; }
        if (ctx->pc != 0x19C960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C960u; }
        if (ctx->pc != 0x19C960u) { return; }
    }
    ctx->pc = 0x19C960u;
    // 0x19c960: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c964: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c968: 0x24a53be8  addiu       $a1, $a1, 0x3BE8
    ctx->pc = 0x19c968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15336));
    // 0x19c96c: 0x24c6c228  addiu       $a2, $a2, -0x3DD8
    ctx->pc = 0x19c96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951464));
    // 0x19c970: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C970u;
    SET_GPR_U32(ctx, 31, 0x19C978u);
    ctx->pc = 0x19C974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C970u;
            // 0x19c974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C978u; }
        if (ctx->pc != 0x19C978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C978u; }
        if (ctx->pc != 0x19C978u) { return; }
    }
    ctx->pc = 0x19C978u;
    // 0x19c978: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c97c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c984: 0x24a53bf8  addiu       $a1, $a1, 0x3BF8
    ctx->pc = 0x19c984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15352));
    // 0x19c988: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x19C988u;
    SET_GPR_U32(ctx, 31, 0x19C990u);
    ctx->pc = 0x19C98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C988u;
            // 0x19c98c: 0x24c6c4b8  addiu       $a2, $a2, -0x3B48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C990u; }
        if (ctx->pc != 0x19C990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C990u; }
        if (ctx->pc != 0x19C990u) { return; }
    }
    ctx->pc = 0x19C990u;
    // 0x19c990: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c998: 0x3e00008  jr          $ra
    ctx->pc = 0x19C998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C998u;
            // 0x19c99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C9A0u;
}
