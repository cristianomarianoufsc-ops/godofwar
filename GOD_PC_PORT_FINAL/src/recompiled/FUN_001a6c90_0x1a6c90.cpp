#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a6c90
// Address: 0x1a6c90 - 0x1a6ca0
void FUN_001a6c90_0x1a6c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6c90_0x1a6c90");
#endif

    ctx->pc = 0x1a6c90u;

    // 0x1a6c90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1a6c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1a6c94: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1a6c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1a6c98: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1a6c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1a6c9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a6c9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
