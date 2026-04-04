#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00242280
// Address: 0x242280 - 0x242294
void FUN_00242280_0x242280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00242280_0x242280");
#endif

    ctx->pc = 0x242280u;

    // 0x242280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x242280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x242284: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x242284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x242288: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x242288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x24228c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x24228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x242290: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x242290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
