#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2799c8
// Address: 0x2799c8 - 0x2799d8
void entry_2799c8_0x2799d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2799c8_0x2799d8");
#endif

    ctx->pc = 0x2799c8u;

    // 0x2799c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2799c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2799cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2799CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2799D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2799CCu;
            // 0x2799d0: 0x24421690  addiu       $v0, $v0, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2799D4u;
    // 0x2799d4: 0x0  nop
    ctx->pc = 0x2799d4u;
    // NOP
}
