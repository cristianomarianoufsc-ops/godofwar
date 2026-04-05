#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00240f10
// Address: 0x240f10 - 0x240f20
void FUN_00240f10_0x240f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240f10_0x240f10");
#endif

    ctx->pc = 0x240f10u;

    // 0x240f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x240f14: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x240f14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x240f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x240f1c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x240f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
}
