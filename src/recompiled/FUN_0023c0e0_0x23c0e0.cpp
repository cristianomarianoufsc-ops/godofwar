#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023c0e0
// Address: 0x23c0e0 - 0x23c0ec
void FUN_0023c0e0_0x23c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c0e0_0x23c0e0");
#endif

    ctx->pc = 0x23c0e0u;

    // 0x23c0e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23c0e4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x23c0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x23c0e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23c0e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
