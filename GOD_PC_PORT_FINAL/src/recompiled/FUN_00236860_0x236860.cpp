#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00236860
// Address: 0x236860 - 0x236874
void FUN_00236860_0x236860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236860_0x236860");
#endif

    ctx->pc = 0x236860u;

    // 0x236860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x236860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x236864: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x236864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x236868: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x236868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23686c: 0x2442e110  addiu       $v0, $v0, -0x1EF0
    ctx->pc = 0x23686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959376));
    // 0x236870: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x236870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
