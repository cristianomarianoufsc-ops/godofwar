#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002573a8
// Address: 0x2573a8 - 0x2573b8
void FUN_002573a8_0x2573a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002573a8_0x2573a8");
#endif

    ctx->pc = 0x2573a8u;

    // 0x2573a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2573a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2573ac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2573acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2573b0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2573b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2573b4: 0x2571ffff  addiu       $s1, $t3, -0x1
    ctx->pc = 0x2573b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
}
