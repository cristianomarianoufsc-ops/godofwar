#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_238cb0
// Address: 0x238cb0 - 0x238cc0
void entry_238cb0_0x238cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_238cb0_0x238cc0");
#endif

    ctx->pc = 0x238cb0u;

    // 0x238cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x238CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CB4u;
            // 0x238cb8: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238CBCu;
    // 0x238cbc: 0x0  nop
    ctx->pc = 0x238cbcu;
    // NOP
}
