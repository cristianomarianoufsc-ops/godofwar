#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ee738
// Address: 0x1ee738 - 0x1ee758
void entry_1ee738_0x1ee758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ee738_0x1ee758");
#endif

    ctx->pc = 0x1ee738u;

    // 0x1ee738: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ee738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ee73c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ee73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ee740: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1ee740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1ee744: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ee744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ee748: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1ee748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1ee74c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE74Cu;
            // 0x1ee750: 0xac64e2b0  sw          $a0, -0x1D50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959792), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE754u;
    // 0x1ee754: 0x0  nop
    ctx->pc = 0x1ee754u;
    // NOP
}
