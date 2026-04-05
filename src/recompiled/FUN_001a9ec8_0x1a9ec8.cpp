#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a9ec8
// Address: 0x1a9ec8 - 0x1a9ed0
void FUN_001a9ec8_0x1a9ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9ec8_0x1a9ec8");
#endif

    ctx->pc = 0x1a9ec8u;

    // 0x1a9ec8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a9ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a9ecc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a9eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
}
