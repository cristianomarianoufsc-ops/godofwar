#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EA20
// Address: 0x13ea20 - 0x13ea58
void sub_0013EA20_0x13ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EA20_0x13ea20");
#endif

    ctx->pc = 0x13ea20u;

    // 0x13ea20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13ea24: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13ea28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ea2c: 0x8c43e86c  lw          $v1, -0x1794($v0)
    ctx->pc = 0x13ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961260)));
    // 0x13ea30: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13ea34: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x13ea34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13ea38: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x13ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x13ea3c: 0x40f809  jalr        $v0
    ctx->pc = 0x13EA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EA44u);
        ctx->pc = 0x13EA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA3Cu;
            // 0x13ea40: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13EA44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13EA44u; }
            if (ctx->pc != 0x13EA44u) { return; }
        }
        }
    }
    ctx->pc = 0x13EA44u;
    // 0x13ea44: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x13EA44u;
    SET_GPR_U32(ctx, 31, 0x13EA4Cu);
    ctx->pc = 0x13EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA44u;
            // 0x13ea48: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA4Cu; }
        if (ctx->pc != 0x13EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA4Cu; }
        if (ctx->pc != 0x13EA4Cu) { return; }
    }
    ctx->pc = 0x13EA4Cu;
    // 0x13ea4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ea4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ea50: 0x3e00008  jr          $ra
    ctx->pc = 0x13EA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA50u;
            // 0x13ea54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EA58u;
}
