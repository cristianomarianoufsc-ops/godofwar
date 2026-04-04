#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001b4a38
// Address: 0x1b4a38 - 0x1b4a78
void FUN_001b4a38_0x1b4a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4a38_0x1b4a38");
#endif

    ctx->pc = 0x1b4a38u;

    // 0x1b4a38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4a3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4a40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b4a40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b4a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b4a48: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4A48u;
    {
        const bool branch_taken_0x1b4a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B4A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A48u;
            // 0x1b4a4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a48) {
            ctx->pc = 0x1B4A6Cu;
            goto label_1b4a6c;
        }
    }
    ctx->pc = 0x1B4A50u;
label_1b4a50:
    // 0x1b4a50: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b4a54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b4a58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4a5c: 0x0  nop
    ctx->pc = 0x1b4a5cu;
    // NOP
    // 0x1b4a60: 0x0  nop
    ctx->pc = 0x1b4a60u;
    // NOP
    // 0x1b4a64: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B4A64u;
    {
        const bool branch_taken_0x1b4a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B4A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A64u;
            // 0x1b4a68: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a64) {
            ctx->pc = 0x1B4A50u;
            runtime->cooperativeGuestYield();
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B4A6Cu;
label_1b4a6c:
    // 0x1b4a6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b4a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4A70u;
            // 0x1b4a74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4A50u: goto label_1b4a50;
            case 0x1B4A6Cu: goto label_1b4a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4A78u;
}
