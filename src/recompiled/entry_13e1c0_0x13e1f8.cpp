#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e1c0
// Address: 0x13e1c0 - 0x13e1f8
void entry_13e1c0_0x13e1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e1c0_0x13e1f8");
#endif

    ctx->pc = 0x13e1c0u;

    // 0x13e1c0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x13e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x13e1c4: 0x8c43beb0  lw          $v1, -0x4150($v0)
    ctx->pc = 0x13e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950576)));
label_13e1c8:
    // 0x13e1c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E1C8u;
    {
        const bool branch_taken_0x13e1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e1c8) {
            ctx->pc = 0x13E1F0u;
            goto label_13e1f0;
        }
    }
    ctx->pc = 0x13E1D0u;
    // 0x13e1d0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13e1d4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x13e1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13e1d8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13E1D8u;
    {
        const bool branch_taken_0x13e1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e1d8) {
            ctx->pc = 0x13E1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1D8u;
            // 0x13e1dc: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E1C8u;
            runtime->cooperativeGuestYield();
            goto label_13e1c8;
        }
    }
    ctx->pc = 0x13E1E0u;
    // 0x13e1e0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x13e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13e1e4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x13e1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13e1e8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13E1E8u;
    {
        const bool branch_taken_0x13e1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e1e8) {
            ctx->pc = 0x13E1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1E8u;
            // 0x13e1ec: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E1C8u;
            runtime->cooperativeGuestYield();
            goto label_13e1c8;
        }
    }
    ctx->pc = 0x13E1F0u;
label_13e1f0:
    // 0x13e1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1F0u;
            // 0x13e1f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E1C8u: goto label_13e1c8;
            case 0x13E1F0u: goto label_13e1f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E1F8u;
}
