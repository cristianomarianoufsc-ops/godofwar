#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001186d8
// Address: 0x1186d8 - 0x1186e8
void FUN_001186d8_0x1186d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001186d8_0x1186d8");
#endif

    ctx->pc = 0x1186d8u;

    // 0x1186d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1186d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1186dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1186dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1186e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1186e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1186e4: 0x2442fb30  addiu       $v0, $v0, -0x4D0
    ctx->pc = 0x1186e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966064));
}
