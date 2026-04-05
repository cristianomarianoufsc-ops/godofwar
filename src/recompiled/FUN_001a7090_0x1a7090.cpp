#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a7090
// Address: 0x1a7090 - 0x1a709c
void FUN_001a7090_0x1a7090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7090_0x1a7090");
#endif

    ctx->pc = 0x1a7090u;

    // 0x1a7090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7094: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a7094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1a7098: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a7098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
