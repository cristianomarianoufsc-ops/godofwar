#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1315c8
// Address: 0x1315c8 - 0x1315d8
void entry_1315c8_0x1315d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1315c8_0x1315d8");
#endif

    ctx->pc = 0x1315c8u;

    // 0x1315c8: 0xac86010c  sw          $a2, 0x10C($a0)
    ctx->pc = 0x1315c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 6));
    // 0x1315cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1315CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1315D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1315CCu;
            // 0x1315d0: 0xac850108  sw          $a1, 0x108($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1315D4u;
    // 0x1315d4: 0x0  nop
    ctx->pc = 0x1315d4u;
    // NOP
}
