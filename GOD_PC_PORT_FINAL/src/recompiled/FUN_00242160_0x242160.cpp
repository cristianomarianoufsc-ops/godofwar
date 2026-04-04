#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00242160
// Address: 0x242160 - 0x24216c
void FUN_00242160_0x242160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00242160_0x242160");
#endif

    ctx->pc = 0x242160u;

    // 0x242160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242164: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x242164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x242168: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x242168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
