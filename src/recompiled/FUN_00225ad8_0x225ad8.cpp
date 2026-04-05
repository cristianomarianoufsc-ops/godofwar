#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00225ad8
// Address: 0x225ad8 - 0x225af0
void FUN_00225ad8_0x225ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225ad8_0x225ad8");
#endif

    ctx->pc = 0x225ad8u;

    // 0x225ad8: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x225ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x225adc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225ae0: 0x8ce611a0  lw          $a2, 0x11A0($a3)
    ctx->pc = 0x225ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4512)));
    // 0x225ae4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x225ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x225ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225aec: 0x2463a380  addiu       $v1, $v1, -0x5C80
    ctx->pc = 0x225aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943616));
}
