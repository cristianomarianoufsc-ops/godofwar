#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9870
// Address: 0x1a9870 - 0x1a98b0
void sub_001A9870_0x1a9870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9870_0x1a9870");
#endif

    ctx->pc = 0x1a9870u;

    // 0x1a9870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9878: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1a9878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a987c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a9880: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a9880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a9884: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a9884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a9888: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a9888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a988c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a9890: 0x40f809  jalr        $v0
    ctx->pc = 0x1A9890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9898u);
        ctx->pc = 0x1A9894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9890u;
            // 0x1a9894: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9898u; }
            if (ctx->pc != 0x1A9898u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9898u;
    // 0x1a9898: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1a9898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a989c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a989cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a98a0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1a98a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a98a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a98a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a98a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A98A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A98ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A98A8u;
            // 0x1a98ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A98B0u;
}
