#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFDF0
// Address: 0x1bfdf0 - 0x1bfe30
void sub_001BFDF0_0x1bfdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFDF0_0x1bfdf0");
#endif

    ctx->pc = 0x1bfdf0u;

    // 0x1bfdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfdf4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1bfdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1bfdf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfdfc: 0x8c8203e4  lw          $v0, 0x3E4($a0)
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 996)));
    // 0x1bfe00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bfe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfe04: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1bfe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1bfe08: 0xac8203e4  sw          $v0, 0x3E4($a0)
    ctx->pc = 0x1bfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 996), GPR_U32(ctx, 2));
    // 0x1bfe0c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1bfe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1bfe10: 0x84630058  lh          $v1, 0x58($v1)
    ctx->pc = 0x1bfe10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1bfe14: 0x40f809  jalr        $v0
    ctx->pc = 0x1BFE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFE1Cu);
        ctx->pc = 0x1BFE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE14u;
            // 0x1bfe18: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BFE1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BFE1Cu; }
            if (ctx->pc != 0x1BFE1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BFE1Cu;
    // 0x1bfe1c: 0xa44000a8  sh          $zero, 0xA8($v0)
    ctx->pc = 0x1bfe1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bfe20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfe24: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFE24u;
            // 0x1bfe28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFE2Cu;
    // 0x1bfe2c: 0x0  nop
    ctx->pc = 0x1bfe2cu;
    // NOP
}
