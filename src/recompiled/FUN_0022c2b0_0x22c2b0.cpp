#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0022c2b0
// Address: 0x22c2b0 - 0x22c2c4
void FUN_0022c2b0_0x22c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022c2b0_0x22c2b0");
#endif

    ctx->pc = 0x22c2b0u;

    // 0x22c2b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22c2b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x22c2b8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x22c2bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22c2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22c2c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
