#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b5b20
// Address: 0x1b5b20 - 0x1b5b30
void entry_1b5b20_0x1b5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b5b20_0x1b5b30");
#endif

    ctx->pc = 0x1b5b20u;

    // 0x1b5b20: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b5b24: 0xac8502a0  sw          $a1, 0x2A0($a0)
    ctx->pc = 0x1b5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 672), GPR_U32(ctx, 5));
    // 0x1b5b28: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5B28u;
            // 0x1b5b2c: 0xac45cc94  sw          $a1, -0x336C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954132), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5B30u;
}
