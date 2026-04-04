#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002689d8
// Address: 0x2689d8 - 0x2689f8
void FUN_002689d8_0x2689d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002689d8_0x2689d8");
#endif

    ctx->pc = 0x2689d8u;

    // 0x2689d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2689d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2689dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2689dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2689e0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2689e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2689e4: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x2689e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
    // 0x2689e8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2689e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2689ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2689ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2689f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2689f4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2689f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
}
