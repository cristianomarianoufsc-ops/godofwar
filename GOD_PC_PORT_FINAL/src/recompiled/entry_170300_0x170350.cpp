#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_170300
// Address: 0x170300 - 0x170350
void entry_170300_0x170350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_170300_0x170350");
#endif

    ctx->pc = 0x170300u;

    // 0x170300: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x170300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170304: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x170304u;
    {
        const bool branch_taken_0x170304 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x170308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170304u;
            // 0x170308: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170304) {
            ctx->pc = 0x170348u;
            goto label_170348;
        }
    }
    ctx->pc = 0x17030Cu;
    // 0x17030c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x17030cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_170310:
    // 0x170310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170310u;
    {
        const bool branch_taken_0x170310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170310u;
            // 0x170314: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170310) {
            ctx->pc = 0x170330u;
            goto label_170330;
        }
    }
    ctx->pc = 0x170318u;
    // 0x170318: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x170318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x17031c: 0x244253f0  addiu       $v0, $v0, 0x53F0
    ctx->pc = 0x17031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21488));
    // 0x170320: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x170320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170328: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x170328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x17032c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x17032cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_170330:
    // 0x170330: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x170330u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x170334: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x170334u;
    {
        const bool branch_taken_0x170334 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x170338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170334u;
            // 0x170338: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170334) {
            ctx->pc = 0x170348u;
            goto label_170348;
        }
    }
    ctx->pc = 0x17033Cu;
    // 0x17033c: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x17033cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x170340: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x170340u;
    {
        const bool branch_taken_0x170340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170340u;
            // 0x170344: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170340) {
            ctx->pc = 0x170310u;
            runtime->cooperativeGuestYield();
            goto label_170310;
        }
    }
    ctx->pc = 0x170348u;
label_170348:
    // 0x170348: 0x3e00008  jr          $ra
    ctx->pc = 0x170348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170310u: goto label_170310;
            case 0x170330u: goto label_170330;
            case 0x170348u: goto label_170348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170350u;
}
