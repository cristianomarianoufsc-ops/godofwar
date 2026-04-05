#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018a8f8
// Address: 0x18a8f8 - 0x18a914
void FUN_0018a8f8_0x18a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a8f8_0x18a8f8");
#endif

    ctx->pc = 0x18a8f8u;

    // 0x18a8f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18a8fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a900: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18a904: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18a908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18a908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a90c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18a910: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
}
