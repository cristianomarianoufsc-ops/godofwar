#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_175258
// Address: 0x175258 - 0x175268
void entry_175258_0x175268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_175258_0x175268");
#endif

    ctx->pc = 0x175258u;

    // 0x175258: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17525c: 0x8c42c4b0  lw          $v0, -0x3B50($v0)
    ctx->pc = 0x17525cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952112)));
    // 0x175260: 0x3e00008  jr          $ra
    ctx->pc = 0x175260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175260u;
            // 0x175264: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175268u;
}
