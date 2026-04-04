#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00228640
// Address: 0x228640 - 0x228650
void FUN_00228640_0x228640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00228640_0x228640");
#endif

    ctx->pc = 0x228640u;

    // 0x228640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x228644: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x228644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x228648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22864c: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x22864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
}
