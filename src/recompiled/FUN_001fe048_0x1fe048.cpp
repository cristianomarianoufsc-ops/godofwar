#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001fe048
// Address: 0x1fe048 - 0x1fe054
void FUN_001fe048_0x1fe048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe048_0x1fe048");
#endif

    ctx->pc = 0x1fe048u;

    // 0x1fe048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe04c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fe04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe050: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
}
