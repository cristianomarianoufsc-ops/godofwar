#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b0c70
// Address: 0x1b0c70 - 0x1b0c80
void entry_1b0c70_0x1b0c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b0c70_0x1b0c80");
#endif

    ctx->pc = 0x1b0c70u;

    // 0x1b0c70: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b0c74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C74u;
            // 0x1b0c78: 0xe44c25f8  swc1        $f12, 0x25F8($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9720), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0C7Cu;
    // 0x1b0c7c: 0x0  nop
    ctx->pc = 0x1b0c7cu;
    // NOP
}
