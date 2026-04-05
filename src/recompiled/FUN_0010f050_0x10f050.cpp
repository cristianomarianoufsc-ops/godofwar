#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010f050
// Address: 0x10f050 - 0x10f060
void FUN_0010f050_0x10f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f050_0x10f050");
#endif

    ctx->pc = 0x10f050u;

    // 0x10f050: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x10f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x10f054: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x10f054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x10f058: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x10f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x10f05c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10f05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
