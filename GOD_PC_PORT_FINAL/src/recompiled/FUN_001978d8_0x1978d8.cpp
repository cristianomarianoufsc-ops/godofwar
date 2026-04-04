#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001978d8
// Address: 0x1978d8 - 0x1978e0
void FUN_001978d8_0x1978d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001978d8_0x1978d8");
#endif

    ctx->pc = 0x1978d8u;

    // 0x1978d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1978d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1978dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1978dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
