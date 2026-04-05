#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019c7c0
// Address: 0x19c7c0 - 0x19c7c8
void FUN_0019c7c0_0x19c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019c7c0_0x19c7c0");
#endif

    ctx->pc = 0x19c7c0u;

    // 0x19c7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c7c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
}
