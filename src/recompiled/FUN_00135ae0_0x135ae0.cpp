#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00135ae0
// Address: 0x135ae0 - 0x135afc
void FUN_00135ae0_0x135ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135ae0_0x135ae0");
#endif

    ctx->pc = 0x135ae0u;

    // 0x135ae0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x135ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x135ae4: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x135ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x135ae8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x135ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x135aec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x135aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x135af0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x135af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135af4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x135af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135af8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x135af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
}
