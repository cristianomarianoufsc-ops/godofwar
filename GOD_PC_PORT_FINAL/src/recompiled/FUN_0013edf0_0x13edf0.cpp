#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0013edf0
// Address: 0x13edf0 - 0x13ee04
void FUN_0013edf0_0x13edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013edf0_0x13edf0");
#endif

    ctx->pc = 0x13edf0u;

    // 0x13edf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13edf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13edf4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13edf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13edf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13edfc: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x13edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x13ee00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13ee00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
