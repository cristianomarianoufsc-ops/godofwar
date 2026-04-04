#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023b6a0
// Address: 0x23b6a0 - 0x23b6c0
void FUN_0023b6a0_0x23b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b6a0_0x23b6a0");
#endif

    ctx->pc = 0x23b6a0u;

    // 0x23b6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23b6a4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b6a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23b6ac: 0x2442f4c0  addiu       $v0, $v0, -0xB40
    ctx->pc = 0x23b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964416));
    // 0x23b6b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23b6b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23b6bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23b6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
