#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019f868
// Address: 0x19f868 - 0x19f888
void FUN_0019f868_0x19f868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f868_0x19f868");
#endif

    ctx->pc = 0x19f868u;

    // 0x19f868: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f86c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19f870: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19f874: 0x2442f830  addiu       $v0, $v0, -0x7D0
    ctx->pc = 0x19f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965296));
    // 0x19f878: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19f87c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f87cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f880: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19f884: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x19f884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
}
