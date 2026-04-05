#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023d9c8
// Address: 0x23d9c8 - 0x23d9d0
void FUN_0023d9c8_0x23d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023d9c8_0x23d9c8");
#endif

    ctx->pc = 0x23d9c8u;

    // 0x23d9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d9cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23d9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
