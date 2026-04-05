#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_125b60
// Address: 0x125b60 - 0x125bb8
void entry_125b60_0x125bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_125b60_0x125bb8");
#endif

    ctx->pc = 0x125b60u;

    // 0x125b60: 0x84830034  lh          $v1, 0x34($a0)
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x125b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125b68: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x125B68u;
    {
        const bool branch_taken_0x125b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B68u;
            // 0x125b6c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b68) {
            ctx->pc = 0x125BA0u;
            goto label_125ba0;
        }
    }
    ctx->pc = 0x125B70u;
    // 0x125b70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125B70u;
    {
        const bool branch_taken_0x125b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B70u;
            // 0x125b74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b70) {
            ctx->pc = 0x125B88u;
            goto label_125b88;
        }
    }
    ctx->pc = 0x125B78u;
    // 0x125b78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x125B78u;
    {
        const bool branch_taken_0x125b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B78u;
            // 0x125b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b78) {
            ctx->pc = 0x125B98u;
            goto label_125b98;
        }
    }
    ctx->pc = 0x125B80u;
    // 0x125b80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x125B80u;
    {
        const bool branch_taken_0x125b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125b80) {
            ctx->pc = 0x125BACu;
            goto label_125bac;
        }
    }
    ctx->pc = 0x125B88u;
label_125b88:
    // 0x125b88: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x125B88u;
    {
        const bool branch_taken_0x125b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B88u;
            // 0x125b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b88) {
            ctx->pc = 0x125BA8u;
            goto label_125ba8;
        }
    }
    ctx->pc = 0x125B90u;
    // 0x125b90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x125B90u;
    {
        const bool branch_taken_0x125b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125b90) {
            ctx->pc = 0x125BACu;
            goto label_125bac;
        }
    }
    ctx->pc = 0x125B98u;
label_125b98:
    // 0x125b98: 0x3e00008  jr          $ra
    ctx->pc = 0x125B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B98u;
            // 0x125b9c: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125B88u: goto label_125b88;
            case 0x125B98u: goto label_125b98;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125BA0u;
label_125ba0:
    // 0x125ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x125BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BA0u;
            // 0x125ba4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125B88u: goto label_125b88;
            case 0x125B98u: goto label_125b98;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125BA8u;
label_125ba8:
    // 0x125ba8: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x125ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_125bac:
    // 0x125bac: 0x3e00008  jr          $ra
    ctx->pc = 0x125BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125B88u: goto label_125b88;
            case 0x125B98u: goto label_125b98;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125BB4u;
    // 0x125bb4: 0x0  nop
    ctx->pc = 0x125bb4u;
    // NOP
}
