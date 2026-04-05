#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001723b8
// Address: 0x1723b8 - 0x1723c0
void FUN_001723b8_0x1723b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001723b8_0x1723b8");
#endif

    ctx->pc = 0x1723b8u;

    // 0x1723b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1723b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1723bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1723bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
