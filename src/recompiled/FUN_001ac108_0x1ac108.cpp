#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ac108
// Address: 0x1ac108 - 0x1ac110
void FUN_001ac108_0x1ac108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac108_0x1ac108");
#endif

    ctx->pc = 0x1ac108u;

    // 0x1ac108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
