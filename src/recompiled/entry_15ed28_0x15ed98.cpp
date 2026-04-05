#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15ed28
// Address: 0x15ed28 - 0x15ed98
void entry_15ed28_0x15ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15ed28_0x15ed98");
#endif

    ctx->pc = 0x15ed28u;

    // 0x15ed28: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x15ed28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ed2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ed30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed34: 0x0  nop
    ctx->pc = 0x15ed34u;
    // NOP
label_15ed38:
    // 0x15ed38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ed38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed3c: 0x0  nop
    ctx->pc = 0x15ed3cu;
    // NOP
label_15ed40:
    // 0x15ed40: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x15ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x15ed44: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x15ed44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x15ed48: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x15ed48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15ed4c: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x15ed4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15ed50: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x15ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15ed54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15ed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15ed58: 0x28c50007  slti        $a1, $a2, 0x7
    ctx->pc = 0x15ed58u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x15ed5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ed60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15ed64: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x15ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15ed68: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15ED68u;
    {
        const bool branch_taken_0x15ed68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15ED6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED68u;
            // 0x15ed6c: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed68) {
            ctx->pc = 0x15ED40u;
            runtime->cooperativeGuestYield();
            goto label_15ed40;
        }
    }
    ctx->pc = 0x15ED70u;
    // 0x15ed70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15ed70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15ed74: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x15ed74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15ed78: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x15ED78u;
    {
        const bool branch_taken_0x15ed78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ed78) {
            ctx->pc = 0x15ED7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED78u;
            // 0x15ed7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15ED40u;
            runtime->cooperativeGuestYield();
            goto label_15ed40;
        }
    }
    ctx->pc = 0x15ED80u;
    // 0x15ed80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15ed80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15ed84: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x15ed84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15ed88: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15ED88u;
    {
        const bool branch_taken_0x15ed88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15ED8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED88u;
            // 0x15ed8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed88) {
            ctx->pc = 0x15ED38u;
            runtime->cooperativeGuestYield();
            goto label_15ed38;
        }
    }
    ctx->pc = 0x15ED90u;
    // 0x15ed90: 0x3e00008  jr          $ra
    ctx->pc = 0x15ED90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ED38u: goto label_15ed38;
            case 0x15ED40u: goto label_15ed40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15ED98u;
}
