#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0012e2f8
// Address: 0x12e2f8 - 0x12e310
void FUN_0012e2f8_0x12e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012e2f8_0x12e2f8");
#endif

    ctx->pc = 0x12e2f8u;

    // 0x12e2f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12e2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12e2fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x12e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x12e300: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12e304: 0x2442c448  addiu       $v0, $v0, -0x3BB8
    ctx->pc = 0x12e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952008));
    // 0x12e308: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x12e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12e30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
