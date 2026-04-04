#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC070
// Address: 0x1bc070 - 0x1bc0b0
void sub_001BC070_0x1bc070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC070_0x1bc070");
#endif

    ctx->pc = 0x1bc070u;

    // 0x1bc070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bc078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bc07c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc084: 0xc06ed82  jal         func_1BB608
    ctx->pc = 0x1BC084u;
    SET_GPR_U32(ctx, 31, 0x1BC08Cu);
    ctx->pc = 0x1BC088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC084u;
            // 0x1bc088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB608u;
    if (runtime->hasFunction(0x1BB608u)) {
        auto targetFn = runtime->lookupFunction(0x1BB608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC08Cu; }
        if (ctx->pc != 0x1BC08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB608_0x1bb608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC08Cu; }
        if (ctx->pc != 0x1BC08Cu) { return; }
    }
    ctx->pc = 0x1BC08Cu;
    // 0x1bc08c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bc08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc090: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1bc090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bc094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc098: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BC098u;
    SET_GPR_U32(ctx, 31, 0x1BC0A0u);
    ctx->pc = 0x1BC09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC098u;
            // 0x1bc09c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0A0u; }
        if (ctx->pc != 0x1BC0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC0A0u; }
        if (ctx->pc != 0x1BC0A0u) { return; }
    }
    ctx->pc = 0x1BC0A0u;
    // 0x1bc0a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bc0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0A8u;
            // 0x1bc0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC0B0u;
}
