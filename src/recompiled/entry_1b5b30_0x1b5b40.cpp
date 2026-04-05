#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b5b30
// Address: 0x1b5b30 - 0x1b5b40
void entry_1b5b30_0x1b5b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b5b30_0x1b5b40");
#endif

    ctx->pc = 0x1b5b30u;

    // 0x1b5b30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b5b34: 0xac8502a4  sw          $a1, 0x2A4($a0)
    ctx->pc = 0x1b5b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 676), GPR_U32(ctx, 5));
    // 0x1b5b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B38u;
            // 0x1b5b3c: 0xac45cc98  sw          $a1, -0x3368($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5B40u;
}
