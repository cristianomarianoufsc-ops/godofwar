#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14ed00
// Address: 0x14ed00 - 0x14ed30
void entry_14ed00_0x14ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14ed00_0x14ed30");
#endif

    ctx->pc = 0x14ed00u;

    // 0x14ed00: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x14ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x14ed04: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x14ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x14ed08: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x14ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
    // 0x14ed0c: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x14ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x14ed10: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x14ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x14ed14: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14ED14u;
    {
        const bool branch_taken_0x14ed14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x14ED18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED14u;
            // 0x14ed18: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed14) {
            ctx->pc = 0x14ED30u;
            return;
        }
    }
    ctx->pc = 0x14ED1Cu;
    // 0x14ed1c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14ed20: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14ed24: 0xac401908  sw          $zero, 0x1908($v0)
    ctx->pc = 0x14ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6408), GPR_U32(ctx, 0));
    // 0x14ed28: 0x3e00008  jr          $ra
    ctx->pc = 0x14ED28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED28u;
            // 0x14ed2c: 0xac601904  sw          $zero, 0x1904($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14ED30u;
}
