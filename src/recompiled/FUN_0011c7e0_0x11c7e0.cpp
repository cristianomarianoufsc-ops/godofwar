#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011c7e0
// Address: 0x11c7e0 - 0x11c7f8
void FUN_0011c7e0_0x11c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011c7e0_0x11c7e0");
#endif

    ctx->pc = 0x11c7e0u;

    // 0x11c7e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c7e4: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x11c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x11c7e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11c7ec: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x11c7ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11c7f4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x11c7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
}
