#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227990
// Address: 0x227990 - 0x2279e8
void sub_00227990_0x227990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227990_0x227990");
#endif

    ctx->pc = 0x227990u;

    // 0x227990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227994: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22799c: 0xc089bb8  jal         func_226EE0
    ctx->pc = 0x22799Cu;
    SET_GPR_U32(ctx, 31, 0x2279A4u);
    ctx->pc = 0x2279A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22799Cu;
            // 0x2279a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226EE0u;
    if (runtime->hasFunction(0x226EE0u)) {
        auto targetFn = runtime->lookupFunction(0x226EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279A4u; }
        if (ctx->pc != 0x2279A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226EE0_0x226ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279A4u; }
        if (ctx->pc != 0x2279A4u) { return; }
    }
    ctx->pc = 0x2279A4u;
    // 0x2279a4: 0xc08eb96  jal         func_23AE58
    ctx->pc = 0x2279A4u;
    SET_GPR_U32(ctx, 31, 0x2279ACu);
    ctx->pc = 0x2279A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2279A4u;
            // 0x2279a8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE58u;
    if (runtime->hasFunction(0x23AE58u)) {
        auto targetFn = runtime->lookupFunction(0x23AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279ACu; }
        if (ctx->pc != 0x2279ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae58_0x23ae70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279ACu; }
        if (ctx->pc != 0x2279ACu) { return; }
    }
    ctx->pc = 0x2279ACu;
    // 0x2279ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2279acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2279b0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2279b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2279b4: 0x2442a308  addiu       $v0, $v0, -0x5CF8
    ctx->pc = 0x2279b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943496));
    // 0x2279b8: 0x2463a2d8  addiu       $v1, $v1, -0x5D28
    ctx->pc = 0x2279b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943448));
    // 0x2279bc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2279bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2279c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2279c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2279c4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2279c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2279c8: 0xc089d92  jal         func_227648
    ctx->pc = 0x2279C8u;
    SET_GPR_U32(ctx, 31, 0x2279D0u);
    ctx->pc = 0x2279CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2279C8u;
            // 0x2279cc: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (runtime->hasFunction(0x227648u)) {
        auto targetFn = runtime->lookupFunction(0x227648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279D0u; }
        if (ctx->pc != 0x2279D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227648_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279D0u; }
        if (ctx->pc != 0x2279D0u) { return; }
    }
    ctx->pc = 0x2279D0u;
    // 0x2279d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2279d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2279d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2279d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2279d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2279d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2279dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2279DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2279E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2279DCu;
            // 0x2279e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2279E4u;
    // 0x2279e4: 0x0  nop
    ctx->pc = 0x2279e4u;
    // NOP
}
