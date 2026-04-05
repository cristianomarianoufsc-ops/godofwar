#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001189d0
// Address: 0x1189d0 - 0x1189e8
void FUN_001189d0_0x1189d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001189d0_0x1189d0");
#endif

    ctx->pc = 0x1189d0u;

    // 0x1189d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1189d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1189d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1189d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1189d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1189d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1189dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1189e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1189e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1189e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1189e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
}
