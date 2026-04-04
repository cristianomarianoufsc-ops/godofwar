#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011ad58
// Address: 0x11ad58 - 0x11ad68
void FUN_0011ad58_0x11ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ad58_0x11ad58");
#endif

    ctx->pc = 0x11ad58u;

    // 0x11ad58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ad5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11ad60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11ad64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ad64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
