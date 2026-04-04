#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001679f8
// Address: 0x1679f8 - 0x167a04
void FUN_001679f8_0x1679f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001679f8_0x1679f8");
#endif

    ctx->pc = 0x1679f8u;

    // 0x1679f8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1679f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1679fc: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1679fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x167a00: 0x27a90098  addiu       $t1, $sp, 0x98
    ctx->pc = 0x167a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
}
