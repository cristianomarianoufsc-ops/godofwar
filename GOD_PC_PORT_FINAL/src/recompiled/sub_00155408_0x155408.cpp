#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155408
// Address: 0x155408 - 0x155458
void sub_00155408_0x155408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155408_0x155408");
#endif

    ctx->pc = 0x155408u;

    // 0x155408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15540c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155414: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x155414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x155418: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x155418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15541c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15541Cu;
    {
        const bool branch_taken_0x15541c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x155420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15541Cu;
            // 0x155420: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15541c) {
            ctx->pc = 0x155440u;
            goto label_155440;
        }
    }
    ctx->pc = 0x155424u;
    // 0x155424: 0x0  nop
    ctx->pc = 0x155424u;
    // NOP
label_155428:
    // 0x155428: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x155428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x15542c: 0xc0554e8  jal         func_1553A0
    ctx->pc = 0x15542Cu;
    SET_GPR_U32(ctx, 31, 0x155434u);
    ctx->pc = 0x155430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15542Cu;
            // 0x155430: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1553A0u;
    if (runtime->hasFunction(0x1553A0u)) {
        auto targetFn = runtime->lookupFunction(0x1553A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155434u; }
        if (ctx->pc != 0x155434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001553a0_0x1553a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155434u; }
        if (ctx->pc != 0x155434u) { return; }
    }
    ctx->pc = 0x155434u;
    // 0x155434: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x155434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155438: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x155438u;
    {
        const bool branch_taken_0x155438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155438u;
            // 0x15543c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155438) {
            ctx->pc = 0x155428u;
            runtime->cooperativeGuestYield();
            goto label_155428;
        }
    }
    ctx->pc = 0x155440u;
label_155440:
    // 0x155440: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x155440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155444: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x155444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15544c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15544cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155450: 0x3e00008  jr          $ra
    ctx->pc = 0x155450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155450u;
            // 0x155454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155428u: goto label_155428;
            case 0x155440u: goto label_155440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155458u;
}
