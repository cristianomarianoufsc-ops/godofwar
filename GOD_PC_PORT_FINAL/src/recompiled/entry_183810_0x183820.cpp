#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183810
// Address: 0x183810 - 0x183820
void entry_183810_0x183820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183810_0x183820");
#endif

    ctx->pc = 0x183810u;

    // 0x183810: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x183810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x183814: 0x3e00008  jr          $ra
    ctx->pc = 0x183814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183814u;
            // 0x183818: 0xac44f19c  sw          $a0, -0xE64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18381Cu;
    // 0x18381c: 0x0  nop
    ctx->pc = 0x18381cu;
    // NOP
}
