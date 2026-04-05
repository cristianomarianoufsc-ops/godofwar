#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26c5e8
// Address: 0x26c5e8 - 0x26c5f8
void entry_26c5e8_0x26c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26c5e8_0x26c5f8");
#endif

    ctx->pc = 0x26c5e8u;

    // 0x26c5e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26c5ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x26C5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C5F0u;
            // 0x26c5f4: 0xac62137c  sw          $v0, 0x137C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4988), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C5F8u;
}
