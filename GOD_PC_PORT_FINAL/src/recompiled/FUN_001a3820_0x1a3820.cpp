#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a3820
// Address: 0x1a3820 - 0x1a3830
void FUN_001a3820_0x1a3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3820_0x1a3820");
#endif

    ctx->pc = 0x1a3820u;

    // 0x1a3820: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1a3820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1a3824: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1a3824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1a3828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a382c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1a382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
}
