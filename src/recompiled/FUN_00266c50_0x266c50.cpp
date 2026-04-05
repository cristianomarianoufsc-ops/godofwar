#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00266c50
// Address: 0x266c50 - 0x266c58
void FUN_00266c50_0x266c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00266c50_0x266c50");
#endif

    ctx->pc = 0x266c50u;

    // 0x266c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x266c54: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x266c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
