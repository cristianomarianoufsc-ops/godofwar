#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0022c468
// Address: 0x22c468 - 0x22c47c
void FUN_0022c468_0x22c468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022c468_0x22c468");
#endif

    ctx->pc = 0x22c468u;

    // 0x22c468: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22c46c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x22c470: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x22c474: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22c474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c478: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22c478u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
