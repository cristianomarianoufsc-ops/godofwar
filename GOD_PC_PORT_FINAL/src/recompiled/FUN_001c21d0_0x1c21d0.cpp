#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001c21d0
// Address: 0x1c21d0 - 0x1c21e8
void FUN_001c21d0_0x1c21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c21d0_0x1c21d0");
#endif

    ctx->pc = 0x1c21d0u;

    // 0x1c21d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c21d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1c21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1c21d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c21dc: 0x24429b80  addiu       $v0, $v0, -0x6480
    ctx->pc = 0x1c21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
    // 0x1c21e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c21e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c21e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c21e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
