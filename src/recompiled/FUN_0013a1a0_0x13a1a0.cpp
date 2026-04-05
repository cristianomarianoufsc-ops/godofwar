#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0013a1a0
// Address: 0x13a1a0 - 0x13a1b0
void FUN_0013a1a0_0x13a1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013a1a0_0x13a1a0");
#endif

    ctx->pc = 0x13a1a0u;

    // 0x13a1a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x13a1a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13a1a8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x13a1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x13a1ac: 0x2442f170  addiu       $v0, $v0, -0xE90
    ctx->pc = 0x13a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
}
