#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001101f8
// Address: 0x1101f8 - 0x11020c
void FUN_001101f8_0x1101f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001101f8_0x1101f8");
#endif

    ctx->pc = 0x1101f8u;

    // 0x1101f8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1101f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1101fc: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x1101fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x110200: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x110200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x110204: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x110204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110208: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x110208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
}
