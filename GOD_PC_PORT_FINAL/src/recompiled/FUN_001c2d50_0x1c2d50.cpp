#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001c2d50
// Address: 0x1c2d50 - 0x1c2d64
void FUN_001c2d50_0x1c2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2d50_0x1c2d50");
#endif

    ctx->pc = 0x1c2d50u;

    // 0x1c2d50: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1c2d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x1c2d54: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1c2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1c2d58: 0x7fb701c0  sq          $s7, 0x1C0($sp)
    ctx->pc = 0x1c2d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 23));
    // 0x1c2d5c: 0x8c5777b4  lw          $s7, 0x77B4($v0)
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30644)));
    // 0x1c2d60: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x1c2d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
}
