#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010d950
// Address: 0x10d950 - 0x10d958
void FUN_0010d950_0x10d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010d950_0x10d950");
#endif

    ctx->pc = 0x10d950u;

    // 0x10d950: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x10d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x10d954: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x10d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
}
