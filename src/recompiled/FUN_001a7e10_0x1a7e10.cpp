#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a7e10
// Address: 0x1a7e10 - 0x1a7e28
void FUN_001a7e10_0x1a7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7e10_0x1a7e10");
#endif

    ctx->pc = 0x1a7e10u;

    // 0x1a7e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a7e14: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a7e18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a7e1c: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1a7e20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a7e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a7e24: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a7e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
}
