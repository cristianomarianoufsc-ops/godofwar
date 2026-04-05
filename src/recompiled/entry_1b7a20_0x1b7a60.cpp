#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b7a20
// Address: 0x1b7a20 - 0x1b7a60
void entry_1b7a20_0x1b7a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b7a20_0x1b7a60");
#endif

    ctx->pc = 0x1b7a20u;

    // 0x1b7a20: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x1b7a20u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1b7a24: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1B7A24u;
    {
        const bool branch_taken_0x1b7a24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A24u;
            // 0x1b7a28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a24) {
            ctx->pc = 0x1B7A50u;
            goto label_1b7a50;
        }
    }
    ctx->pc = 0x1B7A2Cu;
    // 0x1b7a2c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b7a30:
    // 0x1b7a30: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b7a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7a38: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7a3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7A3Cu;
    {
        const bool branch_taken_0x1b7a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A3Cu;
            // 0x1b7a40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a3c) {
            ctx->pc = 0x1B7A54u;
            goto label_1b7a54;
        }
    }
    ctx->pc = 0x1B7A44u;
    // 0x1b7a44: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1b7a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1b7a48: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B7A48u;
    {
        const bool branch_taken_0x1b7a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a48) {
            ctx->pc = 0x1B7A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A48u;
            // 0x1b7a4c: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A30u;
            runtime->cooperativeGuestYield();
            goto label_1b7a30;
        }
    }
    ctx->pc = 0x1B7A50u;
label_1b7a50:
    // 0x1b7a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a54:
    // 0x1b7a54: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7A30u: goto label_1b7a30;
            case 0x1B7A50u: goto label_1b7a50;
            case 0x1B7A54u: goto label_1b7a54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7A5Cu;
    // 0x1b7a5c: 0x0  nop
    ctx->pc = 0x1b7a5cu;
    // NOP
}
