#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1efe70
// Address: 0x1efe70 - 0x1efe78
void entry_1efe70_0x1efe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1efe70_0x1efe78");
#endif

    ctx->pc = 0x1efe70u;

    // 0x1efe70: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE70u;
            // 0x1efe74: 0xe48c0958  swc1        $f12, 0x958($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFE78u;
}
