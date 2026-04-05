#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4848
// Address: 0x1f4848 - 0x1f4c98
void sub_001F4848_0x1f4848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4848_0x1f4848");
#endif

    ctx->pc = 0x1f4848u;

    // 0x1f4848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f484c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f484cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f4854: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f485c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f485cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f4860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4864: 0x24a57390  addiu       $a1, $a1, 0x7390
    ctx->pc = 0x1f4864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29584));
    // 0x1f4868: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x1F4868u;
    SET_GPR_U32(ctx, 31, 0x1F4870u);
    ctx->pc = 0x1F486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4868u;
            // 0x1f486c: 0x24c6e2d0  addiu       $a2, $a2, -0x1D30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4870u; }
        if (ctx->pc != 0x1F4870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4870u; }
        if (ctx->pc != 0x1F4870u) { return; }
    }
    ctx->pc = 0x1F4870u;
    // 0x1f4870: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4874: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4878: 0x24a55e78  addiu       $a1, $a1, 0x5E78
    ctx->pc = 0x1f4878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24184));
    // 0x1f487c: 0x24c6e330  addiu       $a2, $a2, -0x1CD0
    ctx->pc = 0x1f487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959920));
    // 0x1f4880: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4880u;
    SET_GPR_U32(ctx, 31, 0x1F4888u);
    ctx->pc = 0x1F4884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4880u;
            // 0x1f4884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4888u; }
        if (ctx->pc != 0x1F4888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4888u; }
        if (ctx->pc != 0x1F4888u) { return; }
    }
    ctx->pc = 0x1F4888u;
    // 0x1f4888: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f488c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f488cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4890: 0x24a55e90  addiu       $a1, $a1, 0x5E90
    ctx->pc = 0x1f4890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24208));
    // 0x1f4894: 0x24c6e32c  addiu       $a2, $a2, -0x1CD4
    ctx->pc = 0x1f4894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959916));
    // 0x1f4898: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4898u;
    SET_GPR_U32(ctx, 31, 0x1F48A0u);
    ctx->pc = 0x1F489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4898u;
            // 0x1f489c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48A0u; }
        if (ctx->pc != 0x1F48A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48A0u; }
        if (ctx->pc != 0x1F48A0u) { return; }
    }
    ctx->pc = 0x1F48A0u;
    // 0x1f48a0: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1F48A0u;
    SET_GPR_U32(ctx, 31, 0x1F48A8u);
    ctx->pc = 0x1F48A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F48A0u;
            // 0x1f48a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48A8u; }
        if (ctx->pc != 0x1F48A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48A8u; }
        if (ctx->pc != 0x1F48A8u) { return; }
    }
    ctx->pc = 0x1F48A8u;
    // 0x1f48a8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f48a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f48ac: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f48acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f48b0: 0x24a573a0  addiu       $a1, $a1, 0x73A0
    ctx->pc = 0x1f48b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29600));
    // 0x1f48b4: 0x24c6e2d4  addiu       $a2, $a2, -0x1D2C
    ctx->pc = 0x1f48b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959828));
    // 0x1f48b8: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x1F48B8u;
    SET_GPR_U32(ctx, 31, 0x1F48C0u);
    ctx->pc = 0x1F48BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F48B8u;
            // 0x1f48bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48C0u; }
        if (ctx->pc != 0x1F48C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48C0u; }
        if (ctx->pc != 0x1F48C0u) { return; }
    }
    ctx->pc = 0x1F48C0u;
    // 0x1f48c0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f48c4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f48c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f48c8: 0x24a573b8  addiu       $a1, $a1, 0x73B8
    ctx->pc = 0x1f48c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29624));
    // 0x1f48cc: 0x24c6e2d8  addiu       $a2, $a2, -0x1D28
    ctx->pc = 0x1f48ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959832));
    // 0x1f48d0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F48D0u;
    SET_GPR_U32(ctx, 31, 0x1F48D8u);
    ctx->pc = 0x1F48D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F48D0u;
            // 0x1f48d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48D8u; }
        if (ctx->pc != 0x1F48D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48D8u; }
        if (ctx->pc != 0x1F48D8u) { return; }
    }
    ctx->pc = 0x1F48D8u;
    // 0x1f48d8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f48d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f48dc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f48dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f48e0: 0x24a573c8  addiu       $a1, $a1, 0x73C8
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29640));
    // 0x1f48e4: 0x24c6e2dc  addiu       $a2, $a2, -0x1D24
    ctx->pc = 0x1f48e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959836));
    // 0x1f48e8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F48E8u;
    SET_GPR_U32(ctx, 31, 0x1F48F0u);
    ctx->pc = 0x1F48ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F48E8u;
            // 0x1f48ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48F0u; }
        if (ctx->pc != 0x1F48F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F48F0u; }
        if (ctx->pc != 0x1F48F0u) { return; }
    }
    ctx->pc = 0x1F48F0u;
    // 0x1f48f0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f48f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f48f4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f48f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f48f8: 0x24a573d8  addiu       $a1, $a1, 0x73D8
    ctx->pc = 0x1f48f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29656));
    // 0x1f48fc: 0x24c6e2e0  addiu       $a2, $a2, -0x1D20
    ctx->pc = 0x1f48fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959840));
    // 0x1f4900: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4900u;
    SET_GPR_U32(ctx, 31, 0x1F4908u);
    ctx->pc = 0x1F4904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4900u;
            // 0x1f4904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4908u; }
        if (ctx->pc != 0x1F4908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4908u; }
        if (ctx->pc != 0x1F4908u) { return; }
    }
    ctx->pc = 0x1F4908u;
    // 0x1f4908: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f490c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f490cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4910: 0x24a573e8  addiu       $a1, $a1, 0x73E8
    ctx->pc = 0x1f4910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29672));
    // 0x1f4914: 0x24c6e2e4  addiu       $a2, $a2, -0x1D1C
    ctx->pc = 0x1f4914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959844));
    // 0x1f4918: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4918u;
    SET_GPR_U32(ctx, 31, 0x1F4920u);
    ctx->pc = 0x1F491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4918u;
            // 0x1f491c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4920u; }
        if (ctx->pc != 0x1F4920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4920u; }
        if (ctx->pc != 0x1F4920u) { return; }
    }
    ctx->pc = 0x1F4920u;
    // 0x1f4920: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4924: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4924u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4928: 0x24a573f8  addiu       $a1, $a1, 0x73F8
    ctx->pc = 0x1f4928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29688));
    // 0x1f492c: 0x24c6e2e8  addiu       $a2, $a2, -0x1D18
    ctx->pc = 0x1f492cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959848));
    // 0x1f4930: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4930u;
    SET_GPR_U32(ctx, 31, 0x1F4938u);
    ctx->pc = 0x1F4934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4930u;
            // 0x1f4934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4938u; }
        if (ctx->pc != 0x1F4938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4938u; }
        if (ctx->pc != 0x1F4938u) { return; }
    }
    ctx->pc = 0x1F4938u;
    // 0x1f4938: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f493c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f493cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4940: 0x24a57410  addiu       $a1, $a1, 0x7410
    ctx->pc = 0x1f4940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29712));
    // 0x1f4944: 0x24c6e2ec  addiu       $a2, $a2, -0x1D14
    ctx->pc = 0x1f4944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959852));
    // 0x1f4948: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x1F4948u;
    SET_GPR_U32(ctx, 31, 0x1F4950u);
    ctx->pc = 0x1F494Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4948u;
            // 0x1f494c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4950u; }
        if (ctx->pc != 0x1F4950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4950u; }
        if (ctx->pc != 0x1F4950u) { return; }
    }
    ctx->pc = 0x1F4950u;
    // 0x1f4950: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4954: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4958: 0x24a57428  addiu       $a1, $a1, 0x7428
    ctx->pc = 0x1f4958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29736));
    // 0x1f495c: 0x24c6e2f0  addiu       $a2, $a2, -0x1D10
    ctx->pc = 0x1f495cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959856));
    // 0x1f4960: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4960u;
    SET_GPR_U32(ctx, 31, 0x1F4968u);
    ctx->pc = 0x1F4964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4960u;
            // 0x1f4964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4968u; }
        if (ctx->pc != 0x1F4968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4968u; }
        if (ctx->pc != 0x1F4968u) { return; }
    }
    ctx->pc = 0x1F4968u;
    // 0x1f4968: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f496c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f496cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4970: 0x24a57438  addiu       $a1, $a1, 0x7438
    ctx->pc = 0x1f4970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29752));
    // 0x1f4974: 0x24c6e2f4  addiu       $a2, $a2, -0x1D0C
    ctx->pc = 0x1f4974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959860));
    // 0x1f4978: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4978u;
    SET_GPR_U32(ctx, 31, 0x1F4980u);
    ctx->pc = 0x1F497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4978u;
            // 0x1f497c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4980u; }
        if (ctx->pc != 0x1F4980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4980u; }
        if (ctx->pc != 0x1F4980u) { return; }
    }
    ctx->pc = 0x1F4980u;
    // 0x1f4980: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4984: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4988: 0x24a57448  addiu       $a1, $a1, 0x7448
    ctx->pc = 0x1f4988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29768));
    // 0x1f498c: 0x24c6e2f8  addiu       $a2, $a2, -0x1D08
    ctx->pc = 0x1f498cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959864));
    // 0x1f4990: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4990u;
    SET_GPR_U32(ctx, 31, 0x1F4998u);
    ctx->pc = 0x1F4994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4990u;
            // 0x1f4994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4998u; }
        if (ctx->pc != 0x1F4998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4998u; }
        if (ctx->pc != 0x1F4998u) { return; }
    }
    ctx->pc = 0x1F4998u;
    // 0x1f4998: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f499c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f499cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f49a0: 0x24a57458  addiu       $a1, $a1, 0x7458
    ctx->pc = 0x1f49a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29784));
    // 0x1f49a4: 0x24c6e2fc  addiu       $a2, $a2, -0x1D04
    ctx->pc = 0x1f49a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959868));
    // 0x1f49a8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F49A8u;
    SET_GPR_U32(ctx, 31, 0x1F49B0u);
    ctx->pc = 0x1F49ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F49A8u;
            // 0x1f49ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49B0u; }
        if (ctx->pc != 0x1F49B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49B0u; }
        if (ctx->pc != 0x1F49B0u) { return; }
    }
    ctx->pc = 0x1F49B0u;
    // 0x1f49b0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f49b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f49b4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f49b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f49b8: 0x24a57470  addiu       $a1, $a1, 0x7470
    ctx->pc = 0x1f49b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29808));
    // 0x1f49bc: 0x24c6e300  addiu       $a2, $a2, -0x1D00
    ctx->pc = 0x1f49bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959872));
    // 0x1f49c0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F49C0u;
    SET_GPR_U32(ctx, 31, 0x1F49C8u);
    ctx->pc = 0x1F49C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F49C0u;
            // 0x1f49c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49C8u; }
        if (ctx->pc != 0x1F49C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49C8u; }
        if (ctx->pc != 0x1F49C8u) { return; }
    }
    ctx->pc = 0x1F49C8u;
    // 0x1f49c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f49cc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f49ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f49d0: 0x24a57480  addiu       $a1, $a1, 0x7480
    ctx->pc = 0x1f49d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29824));
    // 0x1f49d4: 0x24c6e304  addiu       $a2, $a2, -0x1CFC
    ctx->pc = 0x1f49d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959876));
    // 0x1f49d8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F49D8u;
    SET_GPR_U32(ctx, 31, 0x1F49E0u);
    ctx->pc = 0x1F49DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F49D8u;
            // 0x1f49dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49E0u; }
        if (ctx->pc != 0x1F49E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49E0u; }
        if (ctx->pc != 0x1F49E0u) { return; }
    }
    ctx->pc = 0x1F49E0u;
    // 0x1f49e0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f49e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f49e4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f49e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f49e8: 0x24a57498  addiu       $a1, $a1, 0x7498
    ctx->pc = 0x1f49e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29848));
    // 0x1f49ec: 0x24c6e308  addiu       $a2, $a2, -0x1CF8
    ctx->pc = 0x1f49ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959880));
    // 0x1f49f0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F49F0u;
    SET_GPR_U32(ctx, 31, 0x1F49F8u);
    ctx->pc = 0x1F49F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F49F0u;
            // 0x1f49f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49F8u; }
        if (ctx->pc != 0x1F49F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F49F8u; }
        if (ctx->pc != 0x1F49F8u) { return; }
    }
    ctx->pc = 0x1F49F8u;
    // 0x1f49f8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f49f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f49fc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f49fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4a00: 0x24a574a8  addiu       $a1, $a1, 0x74A8
    ctx->pc = 0x1f4a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29864));
    // 0x1f4a04: 0x24c6e30c  addiu       $a2, $a2, -0x1CF4
    ctx->pc = 0x1f4a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959884));
    // 0x1f4a08: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4A08u;
    SET_GPR_U32(ctx, 31, 0x1F4A10u);
    ctx->pc = 0x1F4A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A08u;
            // 0x1f4a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A10u; }
        if (ctx->pc != 0x1F4A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A10u; }
        if (ctx->pc != 0x1F4A10u) { return; }
    }
    ctx->pc = 0x1F4A10u;
    // 0x1f4a10: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1F4A10u;
    SET_GPR_U32(ctx, 31, 0x1F4A18u);
    ctx->pc = 0x1F4A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A10u;
            // 0x1f4a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A18u; }
        if (ctx->pc != 0x1F4A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A18u; }
        if (ctx->pc != 0x1F4A18u) { return; }
    }
    ctx->pc = 0x1F4A18u;
    // 0x1f4a18: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4a1c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4a20: 0x24a574c0  addiu       $a1, $a1, 0x74C0
    ctx->pc = 0x1f4a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29888));
    // 0x1f4a24: 0x24c6e348  addiu       $a2, $a2, -0x1CB8
    ctx->pc = 0x1f4a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959944));
    // 0x1f4a28: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4A28u;
    SET_GPR_U32(ctx, 31, 0x1F4A30u);
    ctx->pc = 0x1F4A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A28u;
            // 0x1f4a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A30u; }
        if (ctx->pc != 0x1F4A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A30u; }
        if (ctx->pc != 0x1F4A30u) { return; }
    }
    ctx->pc = 0x1F4A30u;
    // 0x1f4a30: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4a34: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4a34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4a38: 0x24a574d0  addiu       $a1, $a1, 0x74D0
    ctx->pc = 0x1f4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29904));
    // 0x1f4a3c: 0x24c6e34c  addiu       $a2, $a2, -0x1CB4
    ctx->pc = 0x1f4a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959948));
    // 0x1f4a40: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4A40u;
    SET_GPR_U32(ctx, 31, 0x1F4A48u);
    ctx->pc = 0x1F4A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A40u;
            // 0x1f4a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A48u; }
        if (ctx->pc != 0x1F4A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A48u; }
        if (ctx->pc != 0x1F4A48u) { return; }
    }
    ctx->pc = 0x1F4A48u;
    // 0x1f4a48: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4a4c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4a50: 0x24a574e8  addiu       $a1, $a1, 0x74E8
    ctx->pc = 0x1f4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29928));
    // 0x1f4a54: 0x24c6e33c  addiu       $a2, $a2, -0x1CC4
    ctx->pc = 0x1f4a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959932));
    // 0x1f4a58: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4A58u;
    SET_GPR_U32(ctx, 31, 0x1F4A60u);
    ctx->pc = 0x1F4A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A58u;
            // 0x1f4a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A60u; }
        if (ctx->pc != 0x1F4A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A60u; }
        if (ctx->pc != 0x1F4A60u) { return; }
    }
    ctx->pc = 0x1F4A60u;
    // 0x1f4a60: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4a64: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4a68: 0x24a574f8  addiu       $a1, $a1, 0x74F8
    ctx->pc = 0x1f4a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29944));
    // 0x1f4a6c: 0x24c6e340  addiu       $a2, $a2, -0x1CC0
    ctx->pc = 0x1f4a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959936));
    // 0x1f4a70: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4A70u;
    SET_GPR_U32(ctx, 31, 0x1F4A78u);
    ctx->pc = 0x1F4A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A70u;
            // 0x1f4a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A78u; }
        if (ctx->pc != 0x1F4A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A78u; }
        if (ctx->pc != 0x1F4A78u) { return; }
    }
    ctx->pc = 0x1F4A78u;
    // 0x1f4a78: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4a7c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4a80: 0x24a57508  addiu       $a1, $a1, 0x7508
    ctx->pc = 0x1f4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29960));
    // 0x1f4a84: 0x24c6e310  addiu       $a2, $a2, -0x1CF0
    ctx->pc = 0x1f4a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959888));
    // 0x1f4a88: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4A88u;
    SET_GPR_U32(ctx, 31, 0x1F4A90u);
    ctx->pc = 0x1F4A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A88u;
            // 0x1f4a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A90u; }
        if (ctx->pc != 0x1F4A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A90u; }
        if (ctx->pc != 0x1F4A90u) { return; }
    }
    ctx->pc = 0x1F4A90u;
    // 0x1f4a90: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4a94: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4a94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4a98: 0x24a57518  addiu       $a1, $a1, 0x7518
    ctx->pc = 0x1f4a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29976));
    // 0x1f4a9c: 0x24c6e318  addiu       $a2, $a2, -0x1CE8
    ctx->pc = 0x1f4a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959896));
    // 0x1f4aa0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4AA0u;
    SET_GPR_U32(ctx, 31, 0x1F4AA8u);
    ctx->pc = 0x1F4AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AA0u;
            // 0x1f4aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AA8u; }
        if (ctx->pc != 0x1F4AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AA8u; }
        if (ctx->pc != 0x1F4AA8u) { return; }
    }
    ctx->pc = 0x1F4AA8u;
    // 0x1f4aa8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4aac: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4aacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4ab0: 0x24a57530  addiu       $a1, $a1, 0x7530
    ctx->pc = 0x1f4ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30000));
    // 0x1f4ab4: 0x24c6e314  addiu       $a2, $a2, -0x1CEC
    ctx->pc = 0x1f4ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959892));
    // 0x1f4ab8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4AB8u;
    SET_GPR_U32(ctx, 31, 0x1F4AC0u);
    ctx->pc = 0x1F4ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AB8u;
            // 0x1f4abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AC0u; }
        if (ctx->pc != 0x1F4AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AC0u; }
        if (ctx->pc != 0x1F4AC0u) { return; }
    }
    ctx->pc = 0x1F4AC0u;
    // 0x1f4ac0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4ac4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4ac8: 0x24a57540  addiu       $a1, $a1, 0x7540
    ctx->pc = 0x1f4ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30016));
    // 0x1f4acc: 0x24c6e31c  addiu       $a2, $a2, -0x1CE4
    ctx->pc = 0x1f4accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959900));
    // 0x1f4ad0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4AD0u;
    SET_GPR_U32(ctx, 31, 0x1F4AD8u);
    ctx->pc = 0x1F4AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AD0u;
            // 0x1f4ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AD8u; }
        if (ctx->pc != 0x1F4AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AD8u; }
        if (ctx->pc != 0x1F4AD8u) { return; }
    }
    ctx->pc = 0x1F4AD8u;
    // 0x1f4ad8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4adc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4adcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4ae0: 0x24a57558  addiu       $a1, $a1, 0x7558
    ctx->pc = 0x1f4ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30040));
    // 0x1f4ae4: 0x24c6e350  addiu       $a2, $a2, -0x1CB0
    ctx->pc = 0x1f4ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959952));
    // 0x1f4ae8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4AE8u;
    SET_GPR_U32(ctx, 31, 0x1F4AF0u);
    ctx->pc = 0x1F4AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AE8u;
            // 0x1f4aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AF0u; }
        if (ctx->pc != 0x1F4AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AF0u; }
        if (ctx->pc != 0x1F4AF0u) { return; }
    }
    ctx->pc = 0x1F4AF0u;
    // 0x1f4af0: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1F4AF0u;
    SET_GPR_U32(ctx, 31, 0x1F4AF8u);
    ctx->pc = 0x1F4AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AF0u;
            // 0x1f4af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AF8u; }
        if (ctx->pc != 0x1F4AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AF8u; }
        if (ctx->pc != 0x1F4AF8u) { return; }
    }
    ctx->pc = 0x1F4AF8u;
    // 0x1f4af8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4afc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4afcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4b00: 0x24a57568  addiu       $a1, $a1, 0x7568
    ctx->pc = 0x1f4b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30056));
    // 0x1f4b04: 0x24c6e354  addiu       $a2, $a2, -0x1CAC
    ctx->pc = 0x1f4b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959956));
    // 0x1f4b08: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4B08u;
    SET_GPR_U32(ctx, 31, 0x1F4B10u);
    ctx->pc = 0x1F4B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B08u;
            // 0x1f4b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B10u; }
        if (ctx->pc != 0x1F4B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B10u; }
        if (ctx->pc != 0x1F4B10u) { return; }
    }
    ctx->pc = 0x1F4B10u;
    // 0x1f4b10: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4b14: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4b18: 0x24a57578  addiu       $a1, $a1, 0x7578
    ctx->pc = 0x1f4b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30072));
    // 0x1f4b1c: 0x24c6e358  addiu       $a2, $a2, -0x1CA8
    ctx->pc = 0x1f4b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959960));
    // 0x1f4b20: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4B20u;
    SET_GPR_U32(ctx, 31, 0x1F4B28u);
    ctx->pc = 0x1F4B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B20u;
            // 0x1f4b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B28u; }
        if (ctx->pc != 0x1F4B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B28u; }
        if (ctx->pc != 0x1F4B28u) { return; }
    }
    ctx->pc = 0x1F4B28u;
    // 0x1f4b28: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4b2c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4b30: 0x24a57588  addiu       $a1, $a1, 0x7588
    ctx->pc = 0x1f4b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30088));
    // 0x1f4b34: 0x24c6e360  addiu       $a2, $a2, -0x1CA0
    ctx->pc = 0x1f4b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959968));
    // 0x1f4b38: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4B38u;
    SET_GPR_U32(ctx, 31, 0x1F4B40u);
    ctx->pc = 0x1F4B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B38u;
            // 0x1f4b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B40u; }
        if (ctx->pc != 0x1F4B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B40u; }
        if (ctx->pc != 0x1F4B40u) { return; }
    }
    ctx->pc = 0x1F4B40u;
    // 0x1f4b40: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4b44: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4b44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4b48: 0x24a57598  addiu       $a1, $a1, 0x7598
    ctx->pc = 0x1f4b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30104));
    // 0x1f4b4c: 0x24c6e364  addiu       $a2, $a2, -0x1C9C
    ctx->pc = 0x1f4b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959972));
    // 0x1f4b50: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4B50u;
    SET_GPR_U32(ctx, 31, 0x1F4B58u);
    ctx->pc = 0x1F4B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B50u;
            // 0x1f4b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B58u; }
        if (ctx->pc != 0x1F4B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B58u; }
        if (ctx->pc != 0x1F4B58u) { return; }
    }
    ctx->pc = 0x1F4B58u;
    // 0x1f4b58: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4b5c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4b60: 0x24a575a8  addiu       $a1, $a1, 0x75A8
    ctx->pc = 0x1f4b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30120));
    // 0x1f4b64: 0x24c6e35c  addiu       $a2, $a2, -0x1CA4
    ctx->pc = 0x1f4b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959964));
    // 0x1f4b68: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4B68u;
    SET_GPR_U32(ctx, 31, 0x1F4B70u);
    ctx->pc = 0x1F4B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B68u;
            // 0x1f4b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B70u; }
        if (ctx->pc != 0x1F4B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B70u; }
        if (ctx->pc != 0x1F4B70u) { return; }
    }
    ctx->pc = 0x1F4B70u;
    // 0x1f4b70: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4b74: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4b74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4b78: 0x24a575b8  addiu       $a1, $a1, 0x75B8
    ctx->pc = 0x1f4b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30136));
    // 0x1f4b7c: 0x24c6e368  addiu       $a2, $a2, -0x1C98
    ctx->pc = 0x1f4b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959976));
    // 0x1f4b80: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4B80u;
    SET_GPR_U32(ctx, 31, 0x1F4B88u);
    ctx->pc = 0x1F4B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B80u;
            // 0x1f4b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B88u; }
        if (ctx->pc != 0x1F4B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B88u; }
        if (ctx->pc != 0x1F4B88u) { return; }
    }
    ctx->pc = 0x1F4B88u;
    // 0x1f4b88: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4b8c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4b90: 0x24a575c8  addiu       $a1, $a1, 0x75C8
    ctx->pc = 0x1f4b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30152));
    // 0x1f4b94: 0x24c6e36c  addiu       $a2, $a2, -0x1C94
    ctx->pc = 0x1f4b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959980));
    // 0x1f4b98: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4B98u;
    SET_GPR_U32(ctx, 31, 0x1F4BA0u);
    ctx->pc = 0x1F4B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B98u;
            // 0x1f4b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BA0u; }
        if (ctx->pc != 0x1F4BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BA0u; }
        if (ctx->pc != 0x1F4BA0u) { return; }
    }
    ctx->pc = 0x1F4BA0u;
    // 0x1f4ba0: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1F4BA0u;
    SET_GPR_U32(ctx, 31, 0x1F4BA8u);
    ctx->pc = 0x1F4BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BA0u;
            // 0x1f4ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BA8u; }
        if (ctx->pc != 0x1F4BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BA8u; }
        if (ctx->pc != 0x1F4BA8u) { return; }
    }
    ctx->pc = 0x1F4BA8u;
    // 0x1f4ba8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4bac: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4bacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4bb0: 0x24a575d8  addiu       $a1, $a1, 0x75D8
    ctx->pc = 0x1f4bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30168));
    // 0x1f4bb4: 0x24c6e320  addiu       $a2, $a2, -0x1CE0
    ctx->pc = 0x1f4bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959904));
    // 0x1f4bb8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4BB8u;
    SET_GPR_U32(ctx, 31, 0x1F4BC0u);
    ctx->pc = 0x1F4BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BB8u;
            // 0x1f4bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BC0u; }
        if (ctx->pc != 0x1F4BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BC0u; }
        if (ctx->pc != 0x1F4BC0u) { return; }
    }
    ctx->pc = 0x1F4BC0u;
    // 0x1f4bc0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4bc4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4bc8: 0x24a575e8  addiu       $a1, $a1, 0x75E8
    ctx->pc = 0x1f4bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30184));
    // 0x1f4bcc: 0x24c6e370  addiu       $a2, $a2, -0x1C90
    ctx->pc = 0x1f4bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959984));
    // 0x1f4bd0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4BD0u;
    SET_GPR_U32(ctx, 31, 0x1F4BD8u);
    ctx->pc = 0x1F4BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BD0u;
            // 0x1f4bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BD8u; }
        if (ctx->pc != 0x1F4BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BD8u; }
        if (ctx->pc != 0x1F4BD8u) { return; }
    }
    ctx->pc = 0x1F4BD8u;
    // 0x1f4bd8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4bdc: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4be0: 0x24a575f8  addiu       $a1, $a1, 0x75F8
    ctx->pc = 0x1f4be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30200));
    // 0x1f4be4: 0x24c6e374  addiu       $a2, $a2, -0x1C8C
    ctx->pc = 0x1f4be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959988));
    // 0x1f4be8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4BE8u;
    SET_GPR_U32(ctx, 31, 0x1F4BF0u);
    ctx->pc = 0x1F4BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BE8u;
            // 0x1f4bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BF0u; }
        if (ctx->pc != 0x1F4BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BF0u; }
        if (ctx->pc != 0x1F4BF0u) { return; }
    }
    ctx->pc = 0x1F4BF0u;
    // 0x1f4bf0: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1F4BF0u;
    SET_GPR_U32(ctx, 31, 0x1F4BF8u);
    ctx->pc = 0x1F4BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4BF0u;
            // 0x1f4bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BF8u; }
        if (ctx->pc != 0x1F4BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4BF8u; }
        if (ctx->pc != 0x1F4BF8u) { return; }
    }
    ctx->pc = 0x1F4BF8u;
    // 0x1f4bf8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1f4bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1f4bfc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4c00: 0x2610340c  addiu       $s0, $s0, 0x340C
    ctx->pc = 0x1f4c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13324));
    // 0x1f4c04: 0x24a57608  addiu       $a1, $a1, 0x7608
    ctx->pc = 0x1f4c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30216));
    // 0x1f4c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c0c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4C0Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C14u);
    ctx->pc = 0x1F4C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C0Cu;
            // 0x1f4c10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C14u; }
        if (ctx->pc != 0x1F4C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C14u; }
        if (ctx->pc != 0x1F4C14u) { return; }
    }
    ctx->pc = 0x1F4C14u;
    // 0x1f4c14: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c1c: 0x24a57618  addiu       $a1, $a1, 0x7618
    ctx->pc = 0x1f4c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30232));
    // 0x1f4c20: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4C20u;
    SET_GPR_U32(ctx, 31, 0x1F4C28u);
    ctx->pc = 0x1F4C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C20u;
            // 0x1f4c24: 0x26060004  addiu       $a2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C28u; }
        if (ctx->pc != 0x1F4C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C28u; }
        if (ctx->pc != 0x1F4C28u) { return; }
    }
    ctx->pc = 0x1F4C28u;
    // 0x1f4c28: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c30: 0x24a57630  addiu       $a1, $a1, 0x7630
    ctx->pc = 0x1f4c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30256));
    // 0x1f4c34: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4C34u;
    SET_GPR_U32(ctx, 31, 0x1F4C3Cu);
    ctx->pc = 0x1F4C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C34u;
            // 0x1f4c38: 0x26060018  addiu       $a2, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C3Cu; }
        if (ctx->pc != 0x1F4C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C3Cu; }
        if (ctx->pc != 0x1F4C3Cu) { return; }
    }
    ctx->pc = 0x1F4C3Cu;
    // 0x1f4c3c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c44: 0x24a57640  addiu       $a1, $a1, 0x7640
    ctx->pc = 0x1f4c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30272));
    // 0x1f4c48: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4C48u;
    SET_GPR_U32(ctx, 31, 0x1F4C50u);
    ctx->pc = 0x1F4C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C48u;
            // 0x1f4c4c: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C50u; }
        if (ctx->pc != 0x1F4C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C50u; }
        if (ctx->pc != 0x1F4C50u) { return; }
    }
    ctx->pc = 0x1F4C50u;
    // 0x1f4c50: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4c54: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x1f4c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1f4c58: 0x24a57650  addiu       $a1, $a1, 0x7650
    ctx->pc = 0x1f4c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30288));
    // 0x1f4c5c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4C5Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C64u);
    ctx->pc = 0x1F4C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C5Cu;
            // 0x1f4c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C64u; }
        if (ctx->pc != 0x1F4C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C64u; }
        if (ctx->pc != 0x1F4C64u) { return; }
    }
    ctx->pc = 0x1F4C64u;
    // 0x1f4c64: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1F4C64u;
    SET_GPR_U32(ctx, 31, 0x1F4C6Cu);
    ctx->pc = 0x1F4C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C64u;
            // 0x1f4c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C6Cu; }
        if (ctx->pc != 0x1F4C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C6Cu; }
        if (ctx->pc != 0x1F4C6Cu) { return; }
    }
    ctx->pc = 0x1F4C6Cu;
    // 0x1f4c6c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f4c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f4c70: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1f4c70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1f4c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c78: 0x24a57658  addiu       $a1, $a1, 0x7658
    ctx->pc = 0x1f4c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30296));
    // 0x1f4c7c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1F4C7Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C84u);
    ctx->pc = 0x1F4C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C7Cu;
            // 0x1f4c80: 0x24c6e37c  addiu       $a2, $a2, -0x1C84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959996));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C84u; }
        if (ctx->pc != 0x1F4C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C84u; }
        if (ctx->pc != 0x1F4C84u) { return; }
    }
    ctx->pc = 0x1F4C84u;
    // 0x1f4c84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f4c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4C90u;
            // 0x1f4c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4C98u;
}
