#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00178e60
// Address: 0x178e60 - 0x178e78
void FUN_00178e60_0x178e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178e60_0x178e60");
#endif

    ctx->pc = 0x178e60u;

    // 0x178e60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x178e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x178e64: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x178e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x178e68: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x178e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x178e6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x178e6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x178e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x178e74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x178e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
}
