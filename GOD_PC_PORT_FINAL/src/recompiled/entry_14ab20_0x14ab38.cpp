#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14ab20
// Address: 0x14ab20 - 0x14ab38
void entry_14ab20_0x14ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14ab20_0x14ab38");
#endif

    ctx->pc = 0x14ab20u;

    // 0x14ab20: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x14ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x14ab24: 0x8c420ce4  lw          $v0, 0xCE4($v0)
    ctx->pc = 0x14ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3300)));
    // 0x14ab28: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x14ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14ab2c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x14ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x14ab30: 0x3e00008  jr          $ra
    ctx->pc = 0x14AB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB30u;
            // 0x14ab34: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AB38u;
}
