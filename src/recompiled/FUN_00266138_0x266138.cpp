#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00266138
// Address: 0x266138 - 0x266140
void FUN_00266138_0x266138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00266138_0x266138");
#endif

    ctx->pc = 0x266138u;

    // 0x266138: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x266138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26613c: 0x240203f1  addiu       $v0, $zero, 0x3F1
    ctx->pc = 0x26613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
}
