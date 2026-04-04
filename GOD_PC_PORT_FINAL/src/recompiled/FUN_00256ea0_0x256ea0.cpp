#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00256ea0
// Address: 0x256ea0 - 0x256ea8
void FUN_00256ea0_0x256ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00256ea0_0x256ea0");
#endif

    ctx->pc = 0x256ea0u;

    // 0x256ea0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x256ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x256ea4: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x256ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
}
