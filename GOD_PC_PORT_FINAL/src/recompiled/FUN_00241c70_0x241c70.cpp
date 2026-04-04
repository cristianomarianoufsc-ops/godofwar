#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00241c70
// Address: 0x241c70 - 0x241c80
void FUN_00241c70_0x241c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00241c70_0x241c70");
#endif

    ctx->pc = 0x241c70u;

    // 0x241c70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x241c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x241c74: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x241c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x241c78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x241c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x241c7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x241c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
