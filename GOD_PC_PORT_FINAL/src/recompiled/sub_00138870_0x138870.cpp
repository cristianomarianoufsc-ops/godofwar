#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138870
// Address: 0x138870 - 0x1388b0
void sub_00138870_0x138870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138870_0x138870");
#endif

    ctx->pc = 0x138870u;

    // 0x138870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138874: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x138874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x138878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13887c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13887cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x138880: 0x2442f1f8  addiu       $v0, $v0, -0xE08
    ctx->pc = 0x138880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963704));
    // 0x138884: 0x42583  sra         $a0, $a0, 22
    ctx->pc = 0x138884u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x138888: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x138888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13888c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138894: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x138894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x138898: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x138898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x13889c: 0x40f809  jalr        $v0
    ctx->pc = 0x13889Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1388A4u);
        ctx->pc = 0x1388A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13889Cu;
            // 0x1388a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1388A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1388A4u; }
            if (ctx->pc != 0x1388A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1388A4u;
    // 0x1388a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1388a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1388a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1388A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1388ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388A8u;
            // 0x1388ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1388B0u;
}
