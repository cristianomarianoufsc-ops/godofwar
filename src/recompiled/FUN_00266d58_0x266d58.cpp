#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00266d58
// Address: 0x266d58 - 0x266d74
void FUN_00266d58_0x266d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00266d58_0x266d58");
#endif

    ctx->pc = 0x266d58u;

    // 0x266d58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x266d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x266d5c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x266d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x266d60: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x266d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x266d64: 0x244231f8  addiu       $v0, $v0, 0x31F8
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12792));
    // 0x266d68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x266d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x266d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x266d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d70: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x266d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
}
