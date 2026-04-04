#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1eda20
// Address: 0x1eda20 - 0x1edaa0
void entry_1eda20_0x1edaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1eda20_0x1edaa0");
#endif

    ctx->pc = 0x1eda20u;

    // 0x1eda20: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1eda20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1eda24: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1eda24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda28: 0x8ce6e26c  lw          $a2, -0x1D94($a3)
    ctx->pc = 0x1eda28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294959724)));
    // 0x1eda2c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1eda2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda30: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1EDA30u;
    {
        const bool branch_taken_0x1eda30 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1EDA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA30u;
            // 0x1eda34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda30) {
            ctx->pc = 0x1EDA64u;
            goto label_1eda64;
        }
    }
    ctx->pc = 0x1EDA38u;
    // 0x1eda38: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1eda38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1eda3c: 0x0  nop
    ctx->pc = 0x1eda3cu;
    // NOP
label_1eda40:
    // 0x1eda40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1eda40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1eda44: 0x24425470  addiu       $v0, $v0, 0x5470
    ctx->pc = 0x1eda44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21616));
    // 0x1eda48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1eda48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eda4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1eda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eda50: 0x10480011  beq         $v0, $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EDA50u;
    {
        const bool branch_taken_0x1eda50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1EDA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA50u;
            // 0x1eda54: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda50) {
            ctx->pc = 0x1EDA98u;
            goto label_1eda98;
        }
    }
    ctx->pc = 0x1EDA58u;
    // 0x1eda58: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1eda58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1eda5c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EDA5Cu;
    {
        const bool branch_taken_0x1eda5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA5Cu;
            // 0x1eda60: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda5c) {
            ctx->pc = 0x1EDA40u;
            runtime->cooperativeGuestYield();
            goto label_1eda40;
        }
    }
    ctx->pc = 0x1EDA64u;
label_1eda64:
    // 0x1eda64: 0x8ce5e26c  lw          $a1, -0x1D94($a3)
    ctx->pc = 0x1eda64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294959724)));
    // 0x1eda68: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1eda68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1eda6c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1eda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1eda70: 0x24635470  addiu       $v1, $v1, 0x5470
    ctx->pc = 0x1eda70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21616));
    // 0x1eda74: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1eda74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1eda78: 0x248454f0  addiu       $a0, $a0, 0x54F0
    ctx->pc = 0x1eda78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21744));
    // 0x1eda7c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1eda7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eda80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1eda80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1eda84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1eda84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1eda88: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1eda88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1eda8c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x1eda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x1eda90: 0xace5e26c  sw          $a1, -0x1D94($a3)
    ctx->pc = 0x1eda90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294959724), GPR_U32(ctx, 5));
    // 0x1eda94: 0x0  nop
    ctx->pc = 0x1eda94u;
    // NOP
label_1eda98:
    // 0x1eda98: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDA40u: goto label_1eda40;
            case 0x1EDA64u: goto label_1eda64;
            case 0x1EDA98u: goto label_1eda98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EDAA0u;
}
