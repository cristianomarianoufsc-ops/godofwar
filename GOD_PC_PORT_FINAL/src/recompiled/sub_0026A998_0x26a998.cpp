#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A998
// Address: 0x26a998 - 0x26a9b8
void sub_0026A998_0x26a998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A998_0x26a998");
#endif

    ctx->pc = 0x26a998u;

    // 0x26a998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26a998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26a99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a9a0: 0xc06b714  jal         func_1ADC50
    ctx->pc = 0x26A9A0u;
    SET_GPR_U32(ctx, 31, 0x26A9A8u);
    ctx->pc = 0x26A9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9A0u;
            // 0x26a9a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC50u;
    if (runtime->hasFunction(0x1ADC50u)) {
        auto targetFn = runtime->lookupFunction(0x1ADC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9A8u; }
        if (ctx->pc != 0x26A9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADC50_0x1adc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9A8u; }
        if (ctx->pc != 0x26A9A8u) { return; }
    }
    ctx->pc = 0x26A9A8u;
    // 0x26a9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x26A9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9ACu;
            // 0x26a9b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A9B4u;
    // 0x26a9b4: 0x0  nop
    ctx->pc = 0x26a9b4u;
    // NOP
}
