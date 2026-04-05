#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00206810
// Address: 0x206810 - 0x206860
void FUN_00206810_0x206810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00206810_0x206810");
#endif

    ctx->pc = 0x206810u;

    // 0x206810: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x206810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x206814: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206818: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x206818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x20681c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20681cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x206820: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x206820u;
    {
        const bool branch_taken_0x206820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x206824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206820u;
            // 0x206824: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206820) {
            ctx->pc = 0x206854u;
            goto label_206854;
        }
    }
    ctx->pc = 0x206828u;
label_206828:
    // 0x206828: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x206828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20682c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x206830: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x206830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x206834: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206834u;
    {
        const bool branch_taken_0x206834 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x206834) {
            ctx->pc = 0x206838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206834u;
            // 0x206838: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206848u;
            goto label_206848;
        }
    }
    ctx->pc = 0x20683Cu;
    // 0x20683c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20683Cu;
    {
        const bool branch_taken_0x20683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20683Cu;
            // 0x206840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20683c) {
            ctx->pc = 0x206858u;
            goto label_206858;
        }
    }
    ctx->pc = 0x206844u;
    // 0x206844: 0x0  nop
    ctx->pc = 0x206844u;
    // NOP
label_206848:
    // 0x206848: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x206848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20684c: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x20684Cu;
    {
        const bool branch_taken_0x20684c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x206850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20684Cu;
            // 0x206850: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20684c) {
            ctx->pc = 0x206828u;
            runtime->cooperativeGuestYield();
            goto label_206828;
        }
    }
    ctx->pc = 0x206854u;
label_206854:
    // 0x206854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206858:
    // 0x206858: 0x3e00008  jr          $ra
    ctx->pc = 0x206858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206858u;
            // 0x20685c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206828u: goto label_206828;
            case 0x206848u: goto label_206848;
            case 0x206854u: goto label_206854;
            case 0x206858u: goto label_206858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206860u;
}
