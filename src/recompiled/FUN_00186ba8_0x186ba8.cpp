#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00186ba8
// Address: 0x186ba8 - 0x186bb8
void FUN_00186ba8_0x186ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186ba8_0x186ba8");
#endif

    ctx->pc = 0x186ba8u;

    // 0x186ba8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x186ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x186bac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x186bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x186bb0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x186bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x186bb4: 0x2442fef0  addiu       $v0, $v0, -0x110
    ctx->pc = 0x186bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967024));
}
