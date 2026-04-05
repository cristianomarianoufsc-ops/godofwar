#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_286838
// Address: 0x286838 - 0x2868c0
void entry_286838_0x2868c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_286838_0x2868c0");
#endif

    ctx->pc = 0x286838u;

    // 0x286838: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x286838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28683c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x28683cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286840: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x286840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x286844: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x286844u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x286848: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x286848u;
    {
        const bool branch_taken_0x286848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286848u;
            // 0x28684c: 0x8cea0000  lw          $t2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286848) {
            ctx->pc = 0x2868B4u;
            goto label_2868b4;
        }
    }
    ctx->pc = 0x286850u;
label_286850:
    // 0x286850: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x286850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x286854: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x286854u;
    {
        const bool branch_taken_0x286854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286854) {
            ctx->pc = 0x286858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286854u;
            // 0x286858: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2868A4u;
            goto label_2868a4;
        }
    }
    ctx->pc = 0x28685Cu;
    // 0x28685c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x28685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x286860: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x286860u;
    {
        const bool branch_taken_0x286860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286860) {
            ctx->pc = 0x286864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286860u;
            // 0x286864: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2868A4u;
            goto label_2868a4;
        }
    }
    ctx->pc = 0x286868u;
    // 0x286868: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x286868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x28686c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x28686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x286870: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x286870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x286874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x286874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286878: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x286878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28687c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x28687cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x286880: 0xad640004  sw          $a0, 0x4($t3)
    ctx->pc = 0x286880u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x286884: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x286884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x286888: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x286888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x28688c: 0x69282b  sltu        $a1, $v1, $t1
    ctx->pc = 0x28688cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x286890: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x286890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286894: 0x65480b  movn        $t1, $v1, $a1
    ctx->pc = 0x286894u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x286898: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x286898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28689c: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x28689cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x2868a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2868a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2868a4:
    // 0x2868a4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2868a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2868a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2868a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2868ac: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2868ACu;
    {
        const bool branch_taken_0x2868ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2868B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2868ACu;
            // 0x2868b0: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868ac) {
            ctx->pc = 0x286850u;
            runtime->cooperativeGuestYield();
            goto label_286850;
        }
    }
    ctx->pc = 0x2868B4u;
label_2868b4:
    // 0x2868b4: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x2868b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x2868b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2868B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2868BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2868B8u;
            // 0x2868bc: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286850u: goto label_286850;
            case 0x2868A4u: goto label_2868a4;
            case 0x2868B4u: goto label_2868b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2868C0u;
}
