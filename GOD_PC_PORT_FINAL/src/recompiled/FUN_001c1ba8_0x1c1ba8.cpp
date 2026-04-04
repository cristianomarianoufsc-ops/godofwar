#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001c1ba8
// Address: 0x1c1ba8 - 0x1c1bb8
void FUN_001c1ba8_0x1c1ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1ba8_0x1c1ba8");
#endif

    ctx->pc = 0x1c1ba8u;

    // 0x1c1ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1bac: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c1bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1bb4: 0x24421ac0  addiu       $v0, $v0, 0x1AC0
    ctx->pc = 0x1c1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
}
