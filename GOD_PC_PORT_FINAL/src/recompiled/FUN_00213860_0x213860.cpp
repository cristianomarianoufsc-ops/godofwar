#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00213860
// Address: 0x213860 - 0x213874
void FUN_00213860_0x213860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00213860_0x213860");
#endif

    ctx->pc = 0x213860u;

    // 0x213860: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x213860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x213864: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x213864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x213868: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x213868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x21386c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x21386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x213870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
