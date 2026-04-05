#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26fe50
// Address: 0x26fe50 - 0x26fe60
void entry_26fe50_0x26fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26fe50_0x26fe60");
#endif

    ctx->pc = 0x26fe50u;

    // 0x26fe50: 0x3e00008  jr          $ra
    ctx->pc = 0x26FE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE50u;
            // 0x26fe54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FE58u;
    // 0x26fe58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26fe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26fe5c: 0x0  nop
    ctx->pc = 0x26fe5cu;
    // NOP
}
