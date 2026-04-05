#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14ab10
// Address: 0x14ab10 - 0x14ab20
void entry_14ab10_0x14ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14ab10_0x14ab20");
#endif

    ctx->pc = 0x14ab10u;

    // 0x14ab10: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x14ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x14ab14: 0x3e00008  jr          $ra
    ctx->pc = 0x14AB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB14u;
            // 0x14ab18: 0x8c420ce4  lw          $v0, 0xCE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AB1Cu;
    // 0x14ab1c: 0x0  nop
    ctx->pc = 0x14ab1cu;
    // NOP
}
