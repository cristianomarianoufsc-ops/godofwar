#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0014f720
// Address: 0x14f720 - 0x14f730
void FUN_0014f720_0x14f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f720_0x14f720");
#endif

    ctx->pc = 0x14f720u;

    // 0x14f720: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14f720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f724: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14f724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14f728: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14f72c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
}
