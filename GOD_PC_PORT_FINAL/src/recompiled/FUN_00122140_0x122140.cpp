#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00122140
// Address: 0x122140 - 0x122154
void FUN_00122140_0x122140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122140_0x122140");
#endif

    ctx->pc = 0x122140u;

    // 0x122140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x122140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x122144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122148: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x122148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12214c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x122150: 0x700484a9  por         $s0, $zero, $a0
    ctx->pc = 0x122150u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
}
