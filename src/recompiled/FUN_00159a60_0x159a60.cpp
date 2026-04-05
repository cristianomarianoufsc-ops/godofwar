#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00159a60
// Address: 0x159a60 - 0x159a70
void FUN_00159a60_0x159a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159a60_0x159a60");
#endif

    ctx->pc = 0x159a60u;

    // 0x159a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159a64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x159a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x159a68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x159a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x159a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
