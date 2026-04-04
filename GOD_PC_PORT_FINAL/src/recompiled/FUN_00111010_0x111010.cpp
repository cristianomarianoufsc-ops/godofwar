#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00111010
// Address: 0x111010 - 0x111020
void FUN_00111010_0x111010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00111010_0x111010");
#endif

    ctx->pc = 0x111010u;

    // 0x111010: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x111010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x111014: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x111014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x111018: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x111018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11101c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x11101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
}
