#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011e018
// Address: 0x11e018 - 0x11e028
void FUN_0011e018_0x11e018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e018_0x11e018");
#endif

    ctx->pc = 0x11e018u;

    // 0x11e018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11e01c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x11e01cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e020: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11e020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11e024: 0x24041074  addiu       $a0, $zero, 0x1074
    ctx->pc = 0x11e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4212));
}
