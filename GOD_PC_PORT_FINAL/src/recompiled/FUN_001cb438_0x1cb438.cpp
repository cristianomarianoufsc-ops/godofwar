#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001cb438
// Address: 0x1cb438 - 0x1cb458
void FUN_001cb438_0x1cb438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cb438_0x1cb438");
#endif

    ctx->pc = 0x1cb438u;

    // 0x1cb438: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cb438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1cb43c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb440: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1cb440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1cb444: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1cb444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1cb448: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x1cb448u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1cb44c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1cb44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1cb450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb454: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1cb454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
}
