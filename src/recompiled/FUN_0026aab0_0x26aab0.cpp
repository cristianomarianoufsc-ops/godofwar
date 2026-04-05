#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0026aab0
// Address: 0x26aab0 - 0x26aab8
void FUN_0026aab0_0x26aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026aab0_0x26aab0");
#endif

    ctx->pc = 0x26aab0u;

    // 0x26aab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26aab4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x26aab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
