#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11ea98
// Address: 0x11ea98 - 0x11eab8
void entry_11ea98_0x11eab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11ea98_0x11eab8");
#endif

    ctx->pc = 0x11ea98u;

    // 0x11ea98: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EA98u;
    {
        const bool branch_taken_0x11ea98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ea98) {
            ctx->pc = 0x11EAB0u;
            goto label_11eab0;
        }
    }
    ctx->pc = 0x11EAA0u;
    // 0x11eaa0: 0x8c821068  lw          $v0, 0x1068($a0)
    ctx->pc = 0x11eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4200)));
    // 0x11eaa4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11EAA4u;
    {
        const bool branch_taken_0x11eaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eaa4) {
            ctx->pc = 0x11EAA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAA4u;
            // 0x11eaa8: 0xac851068  sw          $a1, 0x1068($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EAB0u;
            goto label_11eab0;
        }
    }
    ctx->pc = 0x11EAACu;
    // 0x11eaac: 0x0  nop
    ctx->pc = 0x11eaacu;
    // NOP
label_11eab0:
    // 0x11eab0: 0x3e00008  jr          $ra
    ctx->pc = 0x11EAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EAB0u: goto label_11eab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EAB8u;
}
