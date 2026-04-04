#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b7a60
// Address: 0x1b7a60 - 0x1b7aa0
void entry_1b7a60_0x1b7aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b7a60_0x1b7aa0");
#endif

    ctx->pc = 0x1b7a60u;

    // 0x1b7a60: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x1b7a60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1b7a64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B7A64u;
    {
        const bool branch_taken_0x1b7a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A64u;
            // 0x1b7a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a64) {
            ctx->pc = 0x1B7A98u;
            goto label_1b7a98;
        }
    }
    ctx->pc = 0x1B7A6Cu;
    // 0x1b7a6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b7a70:
    // 0x1b7a70: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b7a74: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7a78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b7a7c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7A7Cu;
    {
        const bool branch_taken_0x1b7a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a7c) {
            ctx->pc = 0x1B7A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A7Cu;
            // 0x1b7a80: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A84u;
            goto label_1b7a84;
        }
    }
    ctx->pc = 0x1B7A84u;
label_1b7a84:
    // 0x1b7a84: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x1b7a84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1b7a88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b7a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b7a8c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1b7a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b7a90: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B7A90u;
    {
        const bool branch_taken_0x1b7a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a90) {
            ctx->pc = 0x1B7A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A90u;
            // 0x1b7a94: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A70u;
            runtime->cooperativeGuestYield();
            goto label_1b7a70;
        }
    }
    ctx->pc = 0x1B7A98u;
label_1b7a98:
    // 0x1b7a98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7A70u: goto label_1b7a70;
            case 0x1B7A84u: goto label_1b7a84;
            case 0x1B7A98u: goto label_1b7a98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7AA0u;
}
