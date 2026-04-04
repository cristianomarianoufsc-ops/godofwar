#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001bb000
// Address: 0x1bb000 - 0x1bb01c
void FUN_001bb000_0x1bb000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bb000_0x1bb000");
#endif

    ctx->pc = 0x1bb000u;

    // 0x1bb000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bb004: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1bb004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bb008: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1bb008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1bb00c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1bb00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1bb010: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb014: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1bb014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1bb018: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bb018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
}
