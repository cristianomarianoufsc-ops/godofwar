#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019f1e8
// Address: 0x19f1e8 - 0x19f1fc
void FUN_0019f1e8_0x19f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f1e8_0x19f1e8");
#endif

    ctx->pc = 0x19f1e8u;

    // 0x19f1e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f1ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19f1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19f1f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19f1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19f1f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19f1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
