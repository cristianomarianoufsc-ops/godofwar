#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001d2b50
// Address: 0x1d2b50 - 0x1d2be8
void FUN_001d2b50_0x1d2b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2b50_0x1d2b50");
#endif

    ctx->pc = 0x1d2b50u;

    // 0x1d2b50: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d2b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d2b54: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1d2b54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b58: 0x8cc2cd44  lw          $v0, -0x32BC($a2)
    ctx->pc = 0x1d2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954308)));
    // 0x1d2b5c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2B5Cu;
    {
        const bool branch_taken_0x1d2b5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D2B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B5Cu;
            // 0x1d2b60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b5c) {
            ctx->pc = 0x1D2BA4u;
            goto label_1d2ba4;
        }
    }
    ctx->pc = 0x1D2B64u;
    // 0x1d2b64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1d2b68:
    // 0x1d2b68: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1d2b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d2b6c: 0x24456160  addiu       $a1, $v0, 0x6160
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24928));
    // 0x1d2b70: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1d2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d2b74: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d2b78: 0x14490006  bne         $v0, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2B78u;
    {
        const bool branch_taken_0x1d2b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x1D2B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B78u;
            // 0x1d2b7c: 0x8cc2cd44  lw          $v0, -0x32BC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b78) {
            ctx->pc = 0x1D2B94u;
            goto label_1d2b94;
        }
    }
    ctx->pc = 0x1D2B80u;
    // 0x1d2b80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d2b84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2b88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B8Cu;
            // 0x1d2b90: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2B68u: goto label_1d2b68;
            case 0x1D2B94u: goto label_1d2b94;
            case 0x1D2BA4u: goto label_1d2ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2B94u;
label_1d2b94:
    // 0x1d2b94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d2b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d2b98: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d2b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d2b9c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D2B9Cu;
    {
        const bool branch_taken_0x1d2b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B9Cu;
            // 0x1d2ba0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b9c) {
            ctx->pc = 0x1D2B68u;
            runtime->cooperativeGuestYield();
            goto label_1d2b68;
        }
    }
    ctx->pc = 0x1D2BA4u;
label_1d2ba4:
    // 0x1d2ba4: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1d2ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1d2ba8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d2bac: 0x8ce4cd44  lw          $a0, -0x32BC($a3)
    ctx->pc = 0x1d2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954308)));
    // 0x1d2bb0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1d2bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1d2bb4: 0x8c484f58  lw          $t0, 0x4F58($v0)
    ctx->pc = 0x1d2bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20312)));
    // 0x1d2bb8: 0x24636160  addiu       $v1, $v1, 0x6160
    ctx->pc = 0x1d2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24928));
    // 0x1d2bbc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1d2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d2bc0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1d2bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1d2bc4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1d2bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d2bc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d2bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d2bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2bd0: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x1d2bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x1d2bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2bd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d2bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d2bdc: 0xace4cd44  sw          $a0, -0x32BC($a3)
    ctx->pc = 0x1d2bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954308), GPR_U32(ctx, 4));
    // 0x1d2be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2BE0u;
            // 0x1d2be4: 0xaca8cd48  sw          $t0, -0x32B8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294954312), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2B68u: goto label_1d2b68;
            case 0x1D2B94u: goto label_1d2b94;
            case 0x1D2BA4u: goto label_1d2ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2BE8u;
}
