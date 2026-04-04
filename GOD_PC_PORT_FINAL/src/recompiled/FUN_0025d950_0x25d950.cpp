#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0025d950
// Address: 0x25d950 - 0x25d95c
void FUN_0025d950_0x25d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0025d950_0x25d950");
#endif

    ctx->pc = 0x25d950u;

    // 0x25d950: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x25d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x25d954: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x25d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x25d958: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x25d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
}
