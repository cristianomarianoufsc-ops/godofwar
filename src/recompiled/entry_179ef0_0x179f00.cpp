#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_179ef0
// Address: 0x179ef0 - 0x179f00
void entry_179ef0_0x179f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_179ef0_0x179f00");
#endif

    ctx->pc = 0x179ef0u;

    // 0x179ef0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x179ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x179ef4: 0x8c62c4d4  lw          $v0, -0x3B2C($v1)
    ctx->pc = 0x179ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952148)));
    // 0x179ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x179EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179EF8u;
            // 0x179efc: 0xac64c4d4  sw          $a0, -0x3B2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179F00u;
}
