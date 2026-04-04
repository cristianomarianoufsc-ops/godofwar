#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00265d80
// Address: 0x265d80 - 0x265d94
void FUN_00265d80_0x265d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00265d80_0x265d80");
#endif

    ctx->pc = 0x265d80u;

    // 0x265d80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x265d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x265d84: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x265d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x265d88: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x265d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x265d8c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x265d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x265d90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x265d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
