#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00241f40
// Address: 0x241f40 - 0x241f48
void FUN_00241f40_0x241f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00241f40_0x241f40");
#endif

    ctx->pc = 0x241f40u;

    // 0x241f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x241f44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x241f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
