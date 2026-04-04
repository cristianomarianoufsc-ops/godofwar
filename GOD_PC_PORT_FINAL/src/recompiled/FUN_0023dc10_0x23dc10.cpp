#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023dc10
// Address: 0x23dc10 - 0x23dc24
void FUN_0023dc10_0x23dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023dc10_0x23dc10");
#endif

    ctx->pc = 0x23dc10u;

    // 0x23dc10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23dc14: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x23dc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x23dc18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23dc18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x23dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x23dc20: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x23dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
}
