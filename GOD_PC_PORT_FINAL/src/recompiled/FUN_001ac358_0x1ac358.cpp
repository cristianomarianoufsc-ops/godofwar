#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ac358
// Address: 0x1ac358 - 0x1ac368
void FUN_001ac358_0x1ac358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac358_0x1ac358");
#endif

    ctx->pc = 0x1ac358u;

    // 0x1ac358: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ac358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ac35c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ac35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ac360: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ac360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ac364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
