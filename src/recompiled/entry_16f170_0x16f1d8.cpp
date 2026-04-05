#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16f170
// Address: 0x16f170 - 0x16f1d8
void entry_16f170_0x16f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16f170_0x16f1d8");
#endif

    ctx->pc = 0x16f170u;

    // 0x16f170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f174: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x16f174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x16f178: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16f178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16f17c: 0x24c34a58  addiu       $v1, $a2, 0x4A58
    ctx->pc = 0x16f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 19032));
label_16f180:
    // 0x16f180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f184: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f188: 0x10440011  beq         $v0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16F188u;
    {
        const bool branch_taken_0x16f188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x16F18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F188u;
            // 0x16f18c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f188) {
            ctx->pc = 0x16F1D0u;
            goto label_16f1d0;
        }
    }
    ctx->pc = 0x16F190u;
    // 0x16f190: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x16f190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16f194: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16F194u;
    {
        const bool branch_taken_0x16f194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F194u;
            // 0x16f198: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f194) {
            ctx->pc = 0x16F180u;
            runtime->cooperativeGuestYield();
            goto label_16f180;
        }
    }
    ctx->pc = 0x16F19Cu;
    // 0x16f19c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1a0: 0x24c24a58  addiu       $v0, $a2, 0x4A58
    ctx->pc = 0x16f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 19032));
    // 0x16f1a4: 0x0  nop
    ctx->pc = 0x16f1a4u;
    // NOP
label_16f1a8:
    // 0x16f1a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16f1ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f1b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f1b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F1B4u;
    {
        const bool branch_taken_0x16f1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1B4u;
            // 0x16f1b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1b4) {
            ctx->pc = 0x16F1C4u;
            goto label_16f1c4;
        }
    }
    ctx->pc = 0x16F1BCu;
    // 0x16f1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16F1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1BCu;
            // 0x16f1c0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F180u: goto label_16f180;
            case 0x16F1A8u: goto label_16f1a8;
            case 0x16F1C4u: goto label_16f1c4;
            case 0x16F1D0u: goto label_16f1d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F1C4u;
label_16f1c4:
    // 0x16f1c4: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x16f1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16f1c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16F1C8u;
    {
        const bool branch_taken_0x16f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1C8u;
            // 0x16f1cc: 0x24c24a58  addiu       $v0, $a2, 0x4A58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 19032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1c8) {
            ctx->pc = 0x16F1A8u;
            runtime->cooperativeGuestYield();
            goto label_16f1a8;
        }
    }
    ctx->pc = 0x16F1D0u;
label_16f1d0:
    // 0x16f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x16F1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F180u: goto label_16f180;
            case 0x16F1A8u: goto label_16f1a8;
            case 0x16F1C4u: goto label_16f1c4;
            case 0x16F1D0u: goto label_16f1d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F1D8u;
}
