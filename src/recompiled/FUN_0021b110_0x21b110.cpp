#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021b110
// Address: 0x21b110 - 0x21b118
void FUN_0021b110_0x21b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021b110_0x21b110");
#endif

    ctx->pc = 0x21b110u;

    // 0x21b110: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21b110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21b114: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x21b114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
}
