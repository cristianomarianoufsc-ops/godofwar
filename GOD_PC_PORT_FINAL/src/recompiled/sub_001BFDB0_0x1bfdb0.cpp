#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFDB0
// Address: 0x1bfdb0 - 0x1bfdf0
void sub_001BFDB0_0x1bfdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFDB0_0x1bfdb0");
#endif

    ctx->pc = 0x1bfdb0u;

    // 0x1bfdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfdb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfdb8: 0x8c8203e4  lw          $v0, 0x3E4($a0)
    ctx->pc = 0x1bfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 996)));
    // 0x1bfdbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bfdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfdc0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bfdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bfdc4: 0xac8203e4  sw          $v0, 0x3E4($a0)
    ctx->pc = 0x1bfdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 996), GPR_U32(ctx, 2));
    // 0x1bfdc8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1bfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1bfdcc: 0x84630058  lh          $v1, 0x58($v1)
    ctx->pc = 0x1bfdccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1bfdd0: 0x40f809  jalr        $v0
    ctx->pc = 0x1BFDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFDD8u);
        ctx->pc = 0x1BFDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDD0u;
            // 0x1bfdd4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BFDD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BFDD8u; }
            if (ctx->pc != 0x1BFDD8u) { return; }
        }
        }
    }
    ctx->pc = 0x1BFDD8u;
    // 0x1bfdd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfddc: 0xa44300a8  sh          $v1, 0xA8($v0)
    ctx->pc = 0x1bfddcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bfde0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfde4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFDE4u;
            // 0x1bfde8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFDECu;
    // 0x1bfdec: 0x0  nop
    ctx->pc = 0x1bfdecu;
    // NOP
}
