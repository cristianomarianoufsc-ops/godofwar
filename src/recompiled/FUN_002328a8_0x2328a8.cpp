#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002328a8
// Address: 0x2328a8 - 0x2328b8
void FUN_002328a8_0x2328a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002328a8_0x2328a8");
#endif

    ctx->pc = 0x2328a8u;

    // 0x2328a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2328a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2328ac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2328acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2328b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2328b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2328b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
