#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_170e98
// Address: 0x170e98 - 0x170ea8
void entry_170e98_0x170ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_170e98_0x170ea8");
#endif

    ctx->pc = 0x170e98u;

    // 0x170e98: 0x808200cf  lb          $v0, 0xCF($a0)
    ctx->pc = 0x170e98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 207)));
    // 0x170e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x170E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170E9Cu;
            // 0x170ea0: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170EA4u;
    // 0x170ea4: 0x0  nop
    ctx->pc = 0x170ea4u;
    // NOP
}
