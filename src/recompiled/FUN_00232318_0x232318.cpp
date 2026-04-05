#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00232318
// Address: 0x232318 - 0x232328
void FUN_00232318_0x232318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232318_0x232318");
#endif

    ctx->pc = 0x232318u;

    // 0x232318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23231c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x232320: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x232320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x232324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
