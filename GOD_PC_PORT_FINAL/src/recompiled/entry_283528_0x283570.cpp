#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_283528
// Address: 0x283528 - 0x283570
void entry_283528_0x283570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_283528_0x283570");
#endif

    ctx->pc = 0x283528u;

    // 0x283528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28352c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283530: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x283530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x283534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x283538: 0xc0a0c26  jal         func_283098
    ctx->pc = 0x283538u;
    SET_GPR_U32(ctx, 31, 0x283540u);
    ctx->pc = 0x28353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283538u;
            // 0x28353c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283098u;
    if (runtime->hasFunction(0x283098u)) {
        auto targetFn = runtime->lookupFunction(0x283098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283540u; }
        if (ctx->pc != 0x283540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283098_0x2830f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283540u; }
        if (ctx->pc != 0x283540u) { return; }
    }
    ctx->pc = 0x283540u;
    // 0x283540: 0xc0a0c3c  jal         func_2830F0
    ctx->pc = 0x283540u;
    SET_GPR_U32(ctx, 31, 0x283548u);
    ctx->pc = 0x283544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283540u;
            // 0x283544: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2830F0u;
    if (runtime->hasFunction(0x2830F0u)) {
        auto targetFn = runtime->lookupFunction(0x2830F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283548u; }
        if (ctx->pc != 0x283548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2830f0_0x283158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283548u; }
        if (ctx->pc != 0x283548u) { return; }
    }
    ctx->pc = 0x283548u;
    // 0x283548: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x283548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x28354c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283550: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x283550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x283554: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x283554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28355c: 0x2442fde4  addiu       $v0, $v0, -0x21C
    ctx->pc = 0x28355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966756));
    // 0x283560: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x283560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x283564: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283568: 0x80a0d26  j           func_283498
    ctx->pc = 0x283568u;
    ctx->pc = 0x28356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283568u;
            // 0x28356c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283498u;
    if (runtime->hasFunction(0x283498u)) {
        auto targetFn = runtime->lookupFunction(0x283498u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_00283498_0x283498(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x283570u;
}
