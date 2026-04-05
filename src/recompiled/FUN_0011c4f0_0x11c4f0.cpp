#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011c4f0
// Address: 0x11c4f0 - 0x11c504
void FUN_0011c4f0_0x11c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011c4f0_0x11c4f0");
#endif

    ctx->pc = 0x11c4f0u;

    // 0x11c4f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11c4f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11c4f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11c4fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11c4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c500: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11c500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
}
