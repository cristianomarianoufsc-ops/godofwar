#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001388B0
// Address: 0x1388b0 - 0x1388f0
void sub_001388B0_0x1388b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001388B0_0x1388b0");
#endif

    ctx->pc = 0x1388b0u;

    // 0x1388b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1388b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1388b4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1388b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1388b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1388b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1388bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1388bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1388c0: 0x2442f1f8  addiu       $v0, $v0, -0xE08
    ctx->pc = 0x1388c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963704));
    // 0x1388c4: 0x42583  sra         $a0, $a0, 22
    ctx->pc = 0x1388c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x1388c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1388c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1388cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1388ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1388d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1388d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1388d4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1388d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1388d8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1388d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1388dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1388DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1388E4u);
        ctx->pc = 0x1388E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388DCu;
            // 0x1388e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1388E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1388E4u; }
            if (ctx->pc != 0x1388E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1388E4u;
    // 0x1388e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1388e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1388e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1388E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1388ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388E8u;
            // 0x1388ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1388F0u;
}
