#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023bb60
// Address: 0x23bb60 - 0x23bb74
void FUN_0023bb60_0x23bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023bb60_0x23bb60");
#endif

    ctx->pc = 0x23bb60u;

    // 0x23bb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bb64: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23bb68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23bb6c: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x23bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x23bb70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
