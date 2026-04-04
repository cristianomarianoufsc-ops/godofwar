#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0023fda0
// Address: 0x23fda0 - 0x23fdac
void FUN_0023fda0_0x23fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023fda0_0x23fda0");
#endif

    ctx->pc = 0x23fda0u;

    // 0x23fda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23fda4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fda8: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x23fda8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
}
