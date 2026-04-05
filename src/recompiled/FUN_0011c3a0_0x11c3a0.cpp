#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011c3a0
// Address: 0x11c3a0 - 0x11c3b8
void FUN_0011c3a0_0x11c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011c3a0_0x11c3a0");
#endif

    ctx->pc = 0x11c3a0u;

    // 0x11c3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c3a4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11c3a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11c3ac: 0x2442e958  addiu       $v0, $v0, -0x16A8
    ctx->pc = 0x11c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961496));
    // 0x11c3b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11c3b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
