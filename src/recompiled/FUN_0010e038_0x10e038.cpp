#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010e038
// Address: 0x10e038 - 0x10e04c
void FUN_0010e038_0x10e038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e038_0x10e038");
#endif

    ctx->pc = 0x10e038u;

    // 0x10e038: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x10e038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x10e03c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x10e03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x10e040: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x10e040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x10e044: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10e044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e048: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x10e048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
}
