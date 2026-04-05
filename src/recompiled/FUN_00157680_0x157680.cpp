#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00157680
// Address: 0x157680 - 0x157698
void FUN_00157680_0x157680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157680_0x157680");
#endif

    ctx->pc = 0x157680u;

    // 0x157680: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x157684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157688: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x157688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x15768c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x15768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x157690: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x157690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157694: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x157694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
}
