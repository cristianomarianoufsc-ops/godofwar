#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001881d0
// Address: 0x1881d0 - 0x1881e0
void FUN_001881d0_0x1881d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001881d0_0x1881d0");
#endif

    ctx->pc = 0x1881d0u;

    // 0x1881d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1881d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1881d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1881d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1881d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1881dc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1881dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
}
