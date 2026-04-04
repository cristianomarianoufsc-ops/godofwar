#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00214860
// Address: 0x214860 - 0x214868
void FUN_00214860_0x214860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00214860_0x214860");
#endif

    ctx->pc = 0x214860u;

    // 0x214860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214864: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x214864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
