#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010b390
// Address: 0x10b390 - 0x10b398
void FUN_0010b390_0x10b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010b390_0x10b390");
#endif

    ctx->pc = 0x10b390u;

    // 0x10b390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10b394: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
}
