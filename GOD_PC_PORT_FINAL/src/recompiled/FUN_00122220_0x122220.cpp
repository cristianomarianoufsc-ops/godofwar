#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00122220
// Address: 0x122220 - 0x122234
void FUN_00122220_0x122220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122220_0x122220");
#endif

    ctx->pc = 0x122220u;

    // 0x122220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x122220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x122224: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122228: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x122228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12222c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x122230: 0x700484a9  por         $s0, $zero, $a0
    ctx->pc = 0x122230u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
}
