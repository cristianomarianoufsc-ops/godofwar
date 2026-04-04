#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021b8d8
// Address: 0x21b8d8 - 0x21b8e0
void FUN_0021b8d8_0x21b8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021b8d8_0x21b8d8");
#endif

    ctx->pc = 0x21b8d8u;

    // 0x21b8d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21b8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21b8dc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x21b8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
}
