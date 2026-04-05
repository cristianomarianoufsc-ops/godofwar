#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23b5b8
// Address: 0x23b5b8 - 0x23b5c0
void entry_23b5b8_0x23b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23b5b8_0x23b5c0");
#endif

    ctx->pc = 0x23b5b8u;

    // 0x23b5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B5B8u;
            // 0x23b5bc: 0xac850100  sw          $a1, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B5C0u;
}
