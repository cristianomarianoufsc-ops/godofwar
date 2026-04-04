#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002574d8
// Address: 0x2574d8 - 0x2574e8
void FUN_002574d8_0x2574d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002574d8_0x2574d8");
#endif

    ctx->pc = 0x2574d8u;

    // 0x2574d8: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2574d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x2574dc: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x2574dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
    // 0x2574e0: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x2574e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
    // 0x2574e4: 0x8fb10238  lw          $s1, 0x238($sp)
    ctx->pc = 0x2574e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
}
