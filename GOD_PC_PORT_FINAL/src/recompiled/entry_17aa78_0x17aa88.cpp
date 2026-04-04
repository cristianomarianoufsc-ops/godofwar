#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17aa78
// Address: 0x17aa78 - 0x17aa88
void entry_17aa78_0x17aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17aa78_0x17aa88");
#endif

    ctx->pc = 0x17aa78u;

    // 0x17aa78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17aa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA7Cu;
            // 0x17aa80: 0x8c42c4e4  lw          $v0, -0x3B1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AA84u;
    // 0x17aa84: 0x0  nop
    ctx->pc = 0x17aa84u;
    // NOP
}
