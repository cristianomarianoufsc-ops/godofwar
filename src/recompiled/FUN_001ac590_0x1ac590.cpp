#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ac590
// Address: 0x1ac590 - 0x1ac5a0
void FUN_001ac590_0x1ac590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac590_0x1ac590");
#endif

    ctx->pc = 0x1ac590u;

    // 0x1ac590: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1ac594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac598: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x1ac598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
    // 0x1ac59c: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x1ac59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
}
