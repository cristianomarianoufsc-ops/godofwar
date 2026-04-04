#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001107c0
// Address: 0x1107c0 - 0x1107d4
void FUN_001107c0_0x1107c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001107c0_0x1107c0");
#endif

    ctx->pc = 0x1107c0u;

    // 0x1107c0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1107c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1107c4: 0x7fb001d0  sq          $s0, 0x1D0($sp)
    ctx->pc = 0x1107c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 16));
    // 0x1107c8: 0x7fb101c0  sq          $s1, 0x1C0($sp)
    ctx->pc = 0x1107c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 17));
    // 0x1107cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1107ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107d0: 0x7fb201b0  sq          $s2, 0x1B0($sp)
    ctx->pc = 0x1107d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 18));
}
