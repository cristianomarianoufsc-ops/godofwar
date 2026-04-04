#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ab928
// Address: 0x1ab928 - 0x1ab938
void FUN_001ab928_0x1ab928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab928_0x1ab928");
#endif

    ctx->pc = 0x1ab928u;

    // 0x1ab928: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ab928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ab92c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ab92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1ab930: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ab930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1ab934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
