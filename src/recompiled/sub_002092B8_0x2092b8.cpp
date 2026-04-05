#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002092B8
// Address: 0x2092b8 - 0x2092e8
void sub_002092B8_0x2092b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002092B8_0x2092b8");
#endif

    ctx->pc = 0x2092b8u;

    // 0x2092b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2092b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2092bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2092bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2092c0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2092c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2092c4: 0x8c4301b0  lw          $v1, 0x1B0($v0)
    ctx->pc = 0x2092c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2092c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2092c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2092cc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2092ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2092d0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2092d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2092d4: 0x40f809  jalr        $v0
    ctx->pc = 0x2092D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2092DCu);
        ctx->pc = 0x2092D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2092D4u;
            // 0x2092d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2092DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2092DCu; }
            if (ctx->pc != 0x2092DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2092DCu;
    // 0x2092dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2092dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2092e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2092E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2092E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2092E0u;
            // 0x2092e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2092E8u;
}
