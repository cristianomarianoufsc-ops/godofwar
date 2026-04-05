#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADE58
// Address: 0x1ade58 - 0x1adeb0
void sub_001ADE58_0x1ade58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADE58_0x1ade58");
#endif

    ctx->pc = 0x1ade58u;

    // 0x1ade58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ade58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ade5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ade5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ade60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ade64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ade64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ade68: 0xc04c576  jal         func_1315D8
    ctx->pc = 0x1ADE68u;
    SET_GPR_U32(ctx, 31, 0x1ADE70u);
    ctx->pc = 0x1ADE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE68u;
            // 0x1ade6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D8u;
    if (runtime->hasFunction(0x1315D8u)) {
        auto targetFn = runtime->lookupFunction(0x1315D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE70u; }
        if (ctx->pc != 0x1ADE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315d8_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE70u; }
        if (ctx->pc != 0x1ADE70u) { return; }
    }
    ctx->pc = 0x1ADE70u;
    // 0x1ade70: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1ade70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1ade74: 0x2463d7c8  addiu       $v1, $v1, -0x2838
    ctx->pc = 0x1ade74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957000));
    // 0x1ade78: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ADE78u;
    {
        const bool branch_taken_0x1ade78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE78u;
            // 0x1ade7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade78) {
            ctx->pc = 0x1ADE9Cu;
            goto label_1ade9c;
        }
    }
    ctx->pc = 0x1ADE80u;
    // 0x1ade80: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1ADE80u;
    SET_GPR_U32(ctx, 31, 0x1ADE88u);
    ctx->pc = 0x1ADE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE80u;
            // 0x1ade84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE88u; }
        if (ctx->pc != 0x1ADE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE88u; }
        if (ctx->pc != 0x1ADE88u) { return; }
    }
    ctx->pc = 0x1ADE88u;
    // 0x1ade88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADE88u;
    {
        const bool branch_taken_0x1ade88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ade88) {
            ctx->pc = 0x1ADE8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE88u;
            // 0x1ade8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADE9Cu;
            goto label_1ade9c;
        }
    }
    ctx->pc = 0x1ADE90u;
    // 0x1ade90: 0xc06b6ae  jal         func_1ADAB8
    ctx->pc = 0x1ADE90u;
    SET_GPR_U32(ctx, 31, 0x1ADE98u);
    ctx->pc = 0x1ADE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE90u;
            // 0x1ade94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAB8u;
    if (runtime->hasFunction(0x1ADAB8u)) {
        auto targetFn = runtime->lookupFunction(0x1ADAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE98u; }
        if (ctx->pc != 0x1ADE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADAB8_0x1adab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE98u; }
        if (ctx->pc != 0x1ADE98u) { return; }
    }
    ctx->pc = 0x1ADE98u;
    // 0x1ade98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ade98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ade9c:
    // 0x1ade9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ade9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEA4u;
            // 0x1adea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADE9Cu: goto label_1ade9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADEACu;
    // 0x1adeac: 0x0  nop
    ctx->pc = 0x1adeacu;
    // NOP
}
