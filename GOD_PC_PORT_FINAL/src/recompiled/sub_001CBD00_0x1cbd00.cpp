#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CBD00
// Address: 0x1cbd00 - 0x1cbd40
void sub_001CBD00_0x1cbd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBD00_0x1cbd00");
#endif

    ctx->pc = 0x1cbd00u;

    // 0x1cbd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cbd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cbd04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cbd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbd08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cbd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbd0c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBD0Cu;
    {
        const bool branch_taken_0x1cbd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD0Cu;
            // 0x1cbd10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd0c) {
            ctx->pc = 0x1CBD34u;
            goto label_1cbd34;
        }
    }
    ctx->pc = 0x1CBD14u;
    // 0x1cbd14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cbd18: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1cbd18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1cbd1c: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1cbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1cbd20: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBD28u);
        ctx->pc = 0x1CBD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD20u;
            // 0x1cbd24: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBD28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBD34u: goto label_1cbd34;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD28u; }
            if (ctx->pc != 0x1CBD28u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBD28u;
    // 0x1cbd28: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBD28u;
    {
        const bool branch_taken_0x1cbd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd28) {
            ctx->pc = 0x1CBD2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD28u;
            // 0x1cbd2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBD34u;
            goto label_1cbd34;
        }
    }
    ctx->pc = 0x1CBD30u;
    // 0x1cbd30: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cbd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cbd34:
    // 0x1cbd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbd38: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD38u;
            // 0x1cbd3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBD34u: goto label_1cbd34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBD40u;
}
