#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1483e0
// Address: 0x1483e0 - 0x148408
void entry_1483e0_0x148408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1483e0_0x148408");
#endif

    ctx->pc = 0x1483e0u;

    // 0x1483e0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1483e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1483e4: 0x8c82c00c  lw          $v0, -0x3FF4($a0)
    ctx->pc = 0x1483e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950924)));
    // 0x1483e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1483E8u;
    {
        const bool branch_taken_0x1483e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1483ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1483E8u;
            // 0x1483ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483e8) {
            ctx->pc = 0x1483FCu;
            goto label_1483fc;
        }
    }
    ctx->pc = 0x1483F0u;
    // 0x1483f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1483f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1483F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1483F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1483F4u;
            // 0x1483f8: 0xac83c00c  sw          $v1, -0x3FF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950924), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1483FCu: goto label_1483fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1483FCu;
label_1483fc:
    // 0x1483fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1483FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1483FCu;
            // 0x148400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1483FCu: goto label_1483fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148404u;
    // 0x148404: 0x0  nop
    ctx->pc = 0x148404u;
    // NOP
}
