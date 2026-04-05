#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002389f0
// Address: 0x2389f0 - 0x2389f8
void FUN_002389f0_0x2389f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002389f0_0x2389f0");
#endif

    ctx->pc = 0x2389f0u;

    // 0x2389f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2389f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2389f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2389f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
