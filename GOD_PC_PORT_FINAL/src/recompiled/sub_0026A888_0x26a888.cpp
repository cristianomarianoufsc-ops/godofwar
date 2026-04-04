#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A888
// Address: 0x26a888 - 0x26a8c0
void sub_0026A888_0x26a888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A888_0x26a888");
#endif

    ctx->pc = 0x26a888u;

    // 0x26a888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26a88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26a890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a894: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x26a894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a898: 0xc077b96  jal         func_1DEE58
    ctx->pc = 0x26A898u;
    SET_GPR_U32(ctx, 31, 0x26A8A0u);
    ctx->pc = 0x26A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A898u;
            // 0x26a89c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE58u;
    if (runtime->hasFunction(0x1DEE58u)) {
        auto targetFn = runtime->lookupFunction(0x1DEE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8A0u; }
        if (ctx->pc != 0x26A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEE58_0x1dee58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8A0u; }
        if (ctx->pc != 0x26A8A0u) { return; }
    }
    ctx->pc = 0x26A8A0u;
    // 0x26a8a0: 0xc077cfa  jal         func_1DF3E8
    ctx->pc = 0x26A8A0u;
    SET_GPR_U32(ctx, 31, 0x26A8A8u);
    ctx->pc = 0x26A8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8A0u;
            // 0x26a8a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF3E8u;
    if (runtime->hasFunction(0x1DF3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1DF3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8A8u; }
        if (ctx->pc != 0x26A8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF3E8_0x1df3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8A8u; }
        if (ctx->pc != 0x26A8A8u) { return; }
    }
    ctx->pc = 0x26A8A8u;
    // 0x26a8a8: 0xc074092  jal         func_1D0248
    ctx->pc = 0x26A8A8u;
    SET_GPR_U32(ctx, 31, 0x26A8B0u);
    ctx->pc = 0x26A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8A8u;
            // 0x26a8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0248u;
    if (runtime->hasFunction(0x1D0248u)) {
        auto targetFn = runtime->lookupFunction(0x1D0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8B0u; }
        if (ctx->pc != 0x26A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0248_0x1d0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8B0u; }
        if (ctx->pc != 0x26A8B0u) { return; }
    }
    ctx->pc = 0x26A8B0u;
    // 0x26a8b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26a8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x26A8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A8B8u;
            // 0x26a8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A8C0u;
}
