#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002364c8
// Address: 0x2364c8 - 0x2364dc
void FUN_002364c8_0x2364c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002364c8_0x2364c8");
#endif

    ctx->pc = 0x2364c8u;

    // 0x2364c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2364c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2364cc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2364ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2364d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2364d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2364d4: 0x2442f050  addiu       $v0, $v0, -0xFB0
    ctx->pc = 0x2364d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
    // 0x2364d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2364d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
