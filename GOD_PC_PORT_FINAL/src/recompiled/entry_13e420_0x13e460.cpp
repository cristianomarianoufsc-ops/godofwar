#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e420
// Address: 0x13e420 - 0x13e460
void entry_13e420_0x13e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e420_0x13e460");
#endif

    ctx->pc = 0x13e420u;

    // 0x13e420: 0x24027a61  addiu       $v0, $zero, 0x7A61
    ctx->pc = 0x13e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31329));
    // 0x13e424: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e428: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x13e428u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x13e42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e430: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13E430u;
    {
        const bool branch_taken_0x13e430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e430) {
            ctx->pc = 0x13E434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E430u;
            // 0x13e434: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E438u;
            goto label_13e438;
        }
    }
    ctx->pc = 0x13E438u;
label_13e438:
    // 0x13e438: 0x24037582  addiu       $v1, $zero, 0x7582
    ctx->pc = 0x13e438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30082));
    // 0x13e43c: 0x2810  mfhi        $a1
    ctx->pc = 0x13e43cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x13e440: 0x1012  mflo        $v0
    ctx->pc = 0x13e440u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x13e444: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x13e444u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13e448: 0x3010  mfhi        $a2
    ctx->pc = 0x13e448u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x13e44c: 0xc04f918  jal         func_13E460
    ctx->pc = 0x13E44Cu;
    SET_GPR_U32(ctx, 31, 0x13E454u);
    ctx->pc = 0x13E460u;
    if (runtime->hasFunction(0x13E460u)) {
        auto targetFn = runtime->lookupFunction(0x13E460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E454u; }
        if (ctx->pc != 0x13E454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e460_0x13e5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E454u; }
        if (ctx->pc != 0x13E454u) { return; }
    }
    ctx->pc = 0x13E454u;
    // 0x13e454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e458: 0x3e00008  jr          $ra
    ctx->pc = 0x13E458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E458u;
            // 0x13e45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E438u: goto label_13e438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E460u;
}
