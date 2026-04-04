#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_107c10
// Address: 0x107c10 - 0x107c48
void entry_107c10_0x107c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_107c10_0x107c48");
#endif

    ctx->pc = 0x107c10u;

    // 0x107c10: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x107c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107c14: 0x24860014  addiu       $a2, $a0, 0x14
    ctx->pc = 0x107c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x107c18: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x107C18u;
    {
        const bool branch_taken_0x107c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x107C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C18u;
            // 0x107c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c18) {
            ctx->pc = 0x107C3Cu;
            goto label_107c3c;
        }
    }
    ctx->pc = 0x107C20u;
label_107c20:
    // 0x107c20: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x107c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x107c24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x107c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107c28: 0x0  nop
    ctx->pc = 0x107c28u;
    // NOP
    // 0x107c2c: 0x0  nop
    ctx->pc = 0x107c2cu;
    // NOP
    // 0x107c30: 0x0  nop
    ctx->pc = 0x107c30u;
    // NOP
    // 0x107c34: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107C34u;
    {
        const bool branch_taken_0x107c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x107C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C34u;
            // 0x107c38: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c34) {
            ctx->pc = 0x107C20u;
            runtime->cooperativeGuestYield();
            goto label_107c20;
        }
    }
    ctx->pc = 0x107C3Cu;
label_107c3c:
    // 0x107c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x107C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C3Cu;
            // 0x107c40: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107C20u: goto label_107c20;
            case 0x107C3Cu: goto label_107c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107C44u;
    // 0x107c44: 0x0  nop
    ctx->pc = 0x107c44u;
    // NOP
}
