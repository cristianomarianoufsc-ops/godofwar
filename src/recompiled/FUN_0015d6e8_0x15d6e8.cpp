#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0015d6e8
// Address: 0x15d6e8 - 0x15d6f4
void FUN_0015d6e8_0x15d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d6e8_0x15d6e8");
#endif

    ctx->pc = 0x15d6e8u;

    // 0x15d6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d6ec: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x15d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x15d6f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
