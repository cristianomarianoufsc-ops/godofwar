#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00187e50
// Address: 0x187e50 - 0x187e5c
void FUN_00187e50_0x187e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187e50_0x187e50");
#endif

    ctx->pc = 0x187e50u;

    // 0x187e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187e54: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x187e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x187e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
}
