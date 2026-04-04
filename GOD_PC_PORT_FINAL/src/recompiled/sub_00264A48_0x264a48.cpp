#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00264A48
// Address: 0x264a48 - 0x264ab0
void sub_00264A48_0x264a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264A48_0x264a48");
#endif

    ctx->pc = 0x264a48u;

    // 0x264a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264a4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x264a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x264a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264a5c: 0xc096402  jal         func_259008
    ctx->pc = 0x264A5Cu;
    SET_GPR_U32(ctx, 31, 0x264A64u);
    ctx->pc = 0x264A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A5Cu;
            // 0x264a60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A64u; }
        if (ctx->pc != 0x264A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A64u; }
        if (ctx->pc != 0x264A64u) { return; }
    }
    ctx->pc = 0x264A64u;
    // 0x264a64: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x264a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x264a68: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x264a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x264a6c: 0x24423c08  addiu       $v0, $v0, 0x3C08
    ctx->pc = 0x264a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15368));
    // 0x264a70: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x264a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x264a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x264a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a78: 0xc09a97c  jal         func_26A5F0
    ctx->pc = 0x264A78u;
    SET_GPR_U32(ctx, 31, 0x264A80u);
    ctx->pc = 0x264A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A78u;
            // 0x264a7c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A5F0u;
    if (runtime->hasFunction(0x26A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x26A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A80u; }
        if (ctx->pc != 0x264A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A5F0_0x26a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A80u; }
        if (ctx->pc != 0x264A80u) { return; }
    }
    ctx->pc = 0x264A80u;
    // 0x264a80: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x264a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x264a84: 0xc09a98e  jal         func_26A638
    ctx->pc = 0x264A84u;
    SET_GPR_U32(ctx, 31, 0x264A8Cu);
    ctx->pc = 0x264A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A84u;
            // 0x264a88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A638u;
    if (runtime->hasFunction(0x26A638u)) {
        auto targetFn = runtime->lookupFunction(0x26A638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A8Cu; }
        if (ctx->pc != 0x264A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A638_0x26a638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A8Cu; }
        if (ctx->pc != 0x264A8Cu) { return; }
    }
    ctx->pc = 0x264A8Cu;
    // 0x264a8c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x264a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x264a90: 0xc09a9a0  jal         func_26A680
    ctx->pc = 0x264A90u;
    SET_GPR_U32(ctx, 31, 0x264A98u);
    ctx->pc = 0x264A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264A90u;
            // 0x264a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A680u;
    if (runtime->hasFunction(0x26A680u)) {
        auto targetFn = runtime->lookupFunction(0x26A680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A98u; }
        if (ctx->pc != 0x264A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A680_0x26a680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A98u; }
        if (ctx->pc != 0x264A98u) { return; }
    }
    ctx->pc = 0x264A98u;
    // 0x264a98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x264a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264aa0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x264aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x264AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264AA8u;
            // 0x264aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264AB0u;
}
