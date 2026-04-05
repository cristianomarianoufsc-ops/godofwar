#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_116b68
// Address: 0x116b68 - 0x116bb0
void entry_116b68_0x116bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_116b68_0x116bb0");
#endif

    ctx->pc = 0x116b68u;

    // 0x116b68: 0x94870012  lhu         $a3, 0x12($a0)
    ctx->pc = 0x116b68u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x116b6c: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x116B6Cu;
    {
        const bool branch_taken_0x116b6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B6Cu;
            // 0x116b70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b6c) {
            ctx->pc = 0x116BA4u;
            goto label_116ba4;
        }
    }
    ctx->pc = 0x116B74u;
    // 0x116b74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x116b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_116b78:
    // 0x116b78: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x116b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116b7c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x116b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x116b80: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x116b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116b84: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x116b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x116b88: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116B88u;
    {
        const bool branch_taken_0x116b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x116B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B88u;
            // 0x116b8c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b88) {
            ctx->pc = 0x116B98u;
            goto label_116b98;
        }
    }
    ctx->pc = 0x116B90u;
    // 0x116b90: 0x3e00008  jr          $ra
    ctx->pc = 0x116B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B90u;
            // 0x116b94: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116B78u: goto label_116b78;
            case 0x116B98u: goto label_116b98;
            case 0x116BA4u: goto label_116ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116B98u;
label_116b98:
    // 0x116b98: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x116b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x116b9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x116B9Cu;
    {
        const bool branch_taken_0x116b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B9Cu;
            // 0x116ba0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b9c) {
            ctx->pc = 0x116B78u;
            runtime->cooperativeGuestYield();
            goto label_116b78;
        }
    }
    ctx->pc = 0x116BA4u;
label_116ba4:
    // 0x116ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x116BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116BA4u;
            // 0x116ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116B78u: goto label_116b78;
            case 0x116B98u: goto label_116b98;
            case 0x116BA4u: goto label_116ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116BACu;
    // 0x116bac: 0x0  nop
    ctx->pc = 0x116bacu;
    // NOP
}
