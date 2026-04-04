#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002093D0
// Address: 0x2093d0 - 0x2093f0
void sub_002093D0_0x2093d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002093D0_0x2093d0");
#endif

    ctx->pc = 0x2093d0u;

    // 0x2093d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2093d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2093d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2093d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2093d8: 0xc0824ee  jal         func_2093B8
    ctx->pc = 0x2093D8u;
    SET_GPR_U32(ctx, 31, 0x2093E0u);
    ctx->pc = 0x2093B8u;
    if (runtime->hasFunction(0x2093B8u)) {
        auto targetFn = runtime->lookupFunction(0x2093B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2093E0u; }
        if (ctx->pc != 0x2093E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2093b8_0x2093d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2093E0u; }
        if (ctx->pc != 0x2093E0u) { return; }
    }
    ctx->pc = 0x2093E0u;
    // 0x2093e0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x2093e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2093e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2093e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2093e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2093E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2093ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2093E8u;
            // 0x2093ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2093F0u;
}
