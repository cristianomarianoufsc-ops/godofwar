#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ab828
// Address: 0x1ab828 - 0x1ab840
void FUN_001ab828_0x1ab828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab828_0x1ab828");
#endif

    ctx->pc = 0x1ab828u;

    // 0x1ab828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ab828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ab82c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ab82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab830: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ab830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ab834: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ab834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ab838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab83c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ab83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
}
