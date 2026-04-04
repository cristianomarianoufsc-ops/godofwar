#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a71a8
// Address: 0x1a71a8 - 0x1a71c0
void FUN_001a71a8_0x1a71a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a71a8_0x1a71a8");
#endif

    ctx->pc = 0x1a71a8u;

    // 0x1a71a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a71a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a71ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a71acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a71b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a71b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a71b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a71b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a71b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a71bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a71bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
}
