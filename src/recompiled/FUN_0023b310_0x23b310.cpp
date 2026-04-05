#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023b310
// Address: 0x23b310 - 0x23b32c
void FUN_0023b310_0x23b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b310_0x23b310");
#endif

    ctx->pc = 0x23b310u;

    // 0x23b310: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23b314: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23b314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23b318: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x23b318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x23b31c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23b31cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b320: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x23b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x23b324: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23b324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b328: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x23b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
}
