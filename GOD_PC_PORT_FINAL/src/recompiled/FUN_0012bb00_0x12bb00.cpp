#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0012bb00
// Address: 0x12bb00 - 0x12bb14
void FUN_0012bb00_0x12bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012bb00_0x12bb00");
#endif

    ctx->pc = 0x12bb00u;

    // 0x12bb00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12bb04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12bb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12bb08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12bb0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12bb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
}
