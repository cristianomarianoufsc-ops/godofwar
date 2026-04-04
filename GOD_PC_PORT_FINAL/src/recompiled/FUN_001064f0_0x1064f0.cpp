#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001064f0
// Address: 0x1064f0 - 0x106508
void FUN_001064f0_0x1064f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001064f0_0x1064f0");
#endif

    ctx->pc = 0x1064f0u;

    // 0x1064f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1064f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1064f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1064f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1064f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1064f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1064fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1064fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106500: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x106504: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x106504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
}
