#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0016dbc0
// Address: 0x16dbc0 - 0x16dbc8
void FUN_0016dbc0_0x16dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016dbc0_0x16dbc0");
#endif

    ctx->pc = 0x16dbc0u;

    // 0x16dbc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16dbc4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
}
