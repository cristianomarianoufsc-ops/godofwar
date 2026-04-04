#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243170
// Address: 0x243170 - 0x243188
void entry_243170_0x243188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243170_0x243188");
#endif

    ctx->pc = 0x243170u;

    // 0x243170: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x243170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x243174: 0x3e00008  jr          $ra
    ctx->pc = 0x243174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243174u;
            // 0x243178: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24317Cu;
    // 0x24317c: 0x0  nop
    ctx->pc = 0x24317cu;
    // NOP
    // 0x243180: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x243180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x243184: 0x0  nop
    ctx->pc = 0x243184u;
    // NOP
}
