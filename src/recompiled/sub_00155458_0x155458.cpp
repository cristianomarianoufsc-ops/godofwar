#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155458
// Address: 0x155458 - 0x1554a8
void sub_00155458_0x155458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155458_0x155458");
#endif

    ctx->pc = 0x155458u;

    // 0x155458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15545c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155460: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x155464: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x155464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x155468: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x155468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15546c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15546cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155470: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x155470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x155474: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x155474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x155478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15547c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155480: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x155480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x155484: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x155484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155488: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155488u;
    {
        const bool branch_taken_0x155488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155488u;
            // 0x15548c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155488) {
            ctx->pc = 0x155498u;
            goto label_155498;
        }
    }
    ctx->pc = 0x155490u;
    // 0x155490: 0xc055502  jal         func_155408
    ctx->pc = 0x155490u;
    SET_GPR_U32(ctx, 31, 0x155498u);
    ctx->pc = 0x155408u;
    if (runtime->hasFunction(0x155408u)) {
        auto targetFn = runtime->lookupFunction(0x155408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155498u; }
        if (ctx->pc != 0x155498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155408_0x155408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155498u; }
        if (ctx->pc != 0x155498u) { return; }
    }
    ctx->pc = 0x155498u;
label_155498:
    // 0x155498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15549c: 0x3e00008  jr          $ra
    ctx->pc = 0x15549Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1554A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15549Cu;
            // 0x1554a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155498u: goto label_155498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1554A4u;
    // 0x1554a4: 0x0  nop
    ctx->pc = 0x1554a4u;
    // NOP
}
