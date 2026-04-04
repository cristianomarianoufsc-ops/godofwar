#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0025b9d8
// Address: 0x25b9d8 - 0x25b9e0
void FUN_0025b9d8_0x25b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0025b9d8_0x25b9d8");
#endif

    ctx->pc = 0x25b9d8u;

    // 0x25b9d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b9dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25b9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
