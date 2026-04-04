#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023bd78
// Address: 0x23bd78 - 0x23bd8c
void FUN_0023bd78_0x23bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023bd78_0x23bd78");
#endif

    ctx->pc = 0x23bd78u;

    // 0x23bd78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bd7c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bd80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23bd84: 0x2442ef70  addiu       $v0, $v0, -0x1090
    ctx->pc = 0x23bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963056));
    // 0x23bd88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
