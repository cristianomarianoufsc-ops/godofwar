#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001066d8
// Address: 0x1066d8 - 0x1066e0
void FUN_001066d8_0x1066d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001066d8_0x1066d8");
#endif

    ctx->pc = 0x1066d8u;

    // 0x1066d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1066d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1066dc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1066dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
