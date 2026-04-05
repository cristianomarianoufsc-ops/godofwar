#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00152930
// Address: 0x152930 - 0x15293c
void FUN_00152930_0x152930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152930_0x152930");
#endif

    ctx->pc = 0x152930u;

    // 0x152930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152934: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x152934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x152938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
}
