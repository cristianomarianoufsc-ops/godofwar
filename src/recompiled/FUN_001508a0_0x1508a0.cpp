#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001508a0
// Address: 0x1508a0 - 0x1508e8
void FUN_001508a0_0x1508a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001508a0_0x1508a0");
#endif

    ctx->pc = 0x1508a0u;

    // 0x1508a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1508a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1508a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1508a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1508a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1508a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1508ac: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1508ACu;
    {
        const bool branch_taken_0x1508ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1508B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508ACu;
            // 0x1508b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508ac) {
            ctx->pc = 0x1508DCu;
            goto label_1508dc;
        }
    }
    ctx->pc = 0x1508B4u;
    // 0x1508b4: 0x0  nop
    ctx->pc = 0x1508b4u;
    // NOP
label_1508b8:
    // 0x1508b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1508b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1508bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1508bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1508c0: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1508C0u;
    {
        const bool branch_taken_0x1508c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1508c0) {
            ctx->pc = 0x1508C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1508C0u;
            // 0x1508c4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1508D0u;
            goto label_1508d0;
        }
    }
    ctx->pc = 0x1508C8u;
    // 0x1508c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1508C8u;
    {
        const bool branch_taken_0x1508c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508C8u;
            // 0x1508cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508c8) {
            ctx->pc = 0x1508E0u;
            goto label_1508e0;
        }
    }
    ctx->pc = 0x1508D0u;
label_1508d0:
    // 0x1508d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1508d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1508d4: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1508D4u;
    {
        const bool branch_taken_0x1508d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1508D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508D4u;
            // 0x1508d8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508d4) {
            ctx->pc = 0x1508B8u;
            runtime->cooperativeGuestYield();
            goto label_1508b8;
        }
    }
    ctx->pc = 0x1508DCu;
label_1508dc:
    // 0x1508dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1508dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1508e0:
    // 0x1508e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1508E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1508E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508E0u;
            // 0x1508e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1508B8u: goto label_1508b8;
            case 0x1508D0u: goto label_1508d0;
            case 0x1508DCu: goto label_1508dc;
            case 0x1508E0u: goto label_1508e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1508E8u;
}
