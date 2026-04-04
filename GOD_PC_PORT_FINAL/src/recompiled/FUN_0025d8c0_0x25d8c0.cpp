#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0025d8c0
// Address: 0x25d8c0 - 0x25d8cc
void FUN_0025d8c0_0x25d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0025d8c0_0x25d8c0");
#endif

    ctx->pc = 0x25d8c0u;

    // 0x25d8c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25d8c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x25d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x25d8c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
