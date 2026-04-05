#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1940f8
// Address: 0x1940f8 - 0x194108
void entry_1940f8_0x194108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1940f8_0x194108");
#endif

    ctx->pc = 0x1940f8u;

    // 0x1940f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1940f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1940fc: 0x8c425020  lw          $v0, 0x5020($v0)
    ctx->pc = 0x1940fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20512)));
    // 0x194100: 0x3e00008  jr          $ra
    ctx->pc = 0x194100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194100u;
            // 0x194104: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194108u;
}
