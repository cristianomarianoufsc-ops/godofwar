#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001362B0
// Address: 0x1362b0 - 0x1362e8
void sub_001362B0_0x1362b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001362B0_0x1362b0");
#endif

    ctx->pc = 0x1362b0u;

    // 0x1362b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1362b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1362b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1362b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1362b8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1362b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1362bc: 0x844300a0  lh          $v1, 0xA0($v0)
    ctx->pc = 0x1362bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1362c0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1362c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1362c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1362C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1362CCu);
        ctx->pc = 0x1362C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1362C4u;
            // 0x1362c8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1362CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1362CCu; }
            if (ctx->pc != 0x1362CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1362CCu;
    // 0x1362cc: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x1362ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1362d0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1362d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1362d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1362d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1362d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1362d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1362dc: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1362dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1362e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1362E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1362E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1362E0u;
            // 0x1362e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1362E8u;
}
