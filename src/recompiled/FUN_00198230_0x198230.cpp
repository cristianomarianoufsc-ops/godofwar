#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00198230
// Address: 0x198230 - 0x198238
void FUN_00198230_0x198230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198230_0x198230");
#endif

    ctx->pc = 0x198230u;

    // 0x198230: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x198230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x198234: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x198234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
}
