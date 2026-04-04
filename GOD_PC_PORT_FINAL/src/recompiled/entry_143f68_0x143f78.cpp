#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_143f68
// Address: 0x143f68 - 0x143f78
void entry_143f68_0x143f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_143f68_0x143f78");
#endif

    ctx->pc = 0x143f68u;

    // 0x143f68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x143f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x143F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F6Cu;
            // 0x143f70: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143F74u;
    // 0x143f74: 0x0  nop
    ctx->pc = 0x143f74u;
    // NOP
}
