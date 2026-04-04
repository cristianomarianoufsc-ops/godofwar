#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_134a40
// Address: 0x134a40 - 0x134a50
void entry_134a40_0x134a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_134a40_0x134a50");
#endif

    ctx->pc = 0x134a40u;

    // 0x134a40: 0xac8600a0  sw          $a2, 0xA0($a0)
    ctx->pc = 0x134a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 6));
    // 0x134a44: 0x3e00008  jr          $ra
    ctx->pc = 0x134A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A44u;
            // 0x134a48: 0xac85009c  sw          $a1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134A4Cu;
    // 0x134a4c: 0x0  nop
    ctx->pc = 0x134a4cu;
    // NOP
}
