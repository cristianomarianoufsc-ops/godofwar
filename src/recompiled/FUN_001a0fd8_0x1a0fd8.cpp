#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a0fd8
// Address: 0x1a0fd8 - 0x1a0fe4
void FUN_001a0fd8_0x1a0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0fd8_0x1a0fd8");
#endif

    ctx->pc = 0x1a0fd8u;

    // 0x1a0fd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0fdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fe0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a0fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
}
