#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2CB0
// Address: 0x1d2cb0 - 0x1d2d08
void sub_001D2CB0_0x1d2cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2CB0_0x1d2cb0");
#endif

    ctx->pc = 0x1d2cb0u;

    // 0x1d2cb0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d2cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1d2cb4: 0x8cc2cd44  lw          $v0, -0x32BC($a2)
    ctx->pc = 0x1d2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954308)));
    // 0x1d2cb8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D2CB8u;
    {
        const bool branch_taken_0x1d2cb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D2CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CB8u;
            // 0x1d2cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cb8) {
            ctx->pc = 0x1D2CFCu;
            goto label_1d2cfc;
        }
    }
    ctx->pc = 0x1D2CC0u;
    // 0x1d2cc0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d2cc4: 0x0  nop
    ctx->pc = 0x1d2cc4u;
    // NOP
label_1d2cc8:
    // 0x1d2cc8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d2ccc: 0x24426160  addiu       $v0, $v0, 0x6160
    ctx->pc = 0x1d2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24928));
    // 0x1d2cd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d2cd4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1d2cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d2cd8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d2cdc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2CDCu;
    {
        const bool branch_taken_0x1d2cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D2CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CDCu;
            // 0x1d2ce0: 0x8cc2cd44  lw          $v0, -0x32BC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cdc) {
            ctx->pc = 0x1D2CECu;
            goto label_1d2cec;
        }
    }
    ctx->pc = 0x1D2CE4u;
    // 0x1d2ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CE4u;
            // 0x1d2ce8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2CC8u: goto label_1d2cc8;
            case 0x1D2CECu: goto label_1d2cec;
            case 0x1D2CFCu: goto label_1d2cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2CECu;
label_1d2cec:
    // 0x1d2cec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d2cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d2cf0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d2cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d2cf4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D2CF4u;
    {
        const bool branch_taken_0x1d2cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CF4u;
            // 0x1d2cf8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cf4) {
            ctx->pc = 0x1D2CC8u;
            runtime->cooperativeGuestYield();
            goto label_1d2cc8;
        }
    }
    ctx->pc = 0x1D2CFCu;
label_1d2cfc:
    // 0x1d2cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CFCu;
            // 0x1d2d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2CC8u: goto label_1d2cc8;
            case 0x1D2CECu: goto label_1d2cec;
            case 0x1D2CFCu: goto label_1d2cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2D04u;
    // 0x1d2d04: 0x0  nop
    ctx->pc = 0x1d2d04u;
    // NOP
}
