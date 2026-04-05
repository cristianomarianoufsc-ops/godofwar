#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002522c0
// Address: 0x2522c0 - 0x2522dc
void FUN_002522c0_0x2522c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002522c0_0x2522c0");
#endif

    ctx->pc = 0x2522c0u;

    // 0x2522c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2522c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2522c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2522c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2522c8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2522c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2522cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2522ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2522d0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2522d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2522d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2522d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2522d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2522d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
}
