#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_242a88
// Address: 0x242a88 - 0x242a98
void entry_242a88_0x242a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_242a88_0x242a98");
#endif

    ctx->pc = 0x242a88u;

    // 0x242a88: 0xac860250  sw          $a2, 0x250($a0)
    ctx->pc = 0x242a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 6));
    // 0x242a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x242A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A8Cu;
            // 0x242a90: 0xac85024c  sw          $a1, 0x24C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242A94u;
    // 0x242a94: 0x0  nop
    ctx->pc = 0x242a94u;
    // NOP
}
