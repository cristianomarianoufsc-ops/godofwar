#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010fc88
// Address: 0x10fc88 - 0x10fc8c
void FUN_0010fc88_0x10fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010fc88_0x10fc88");
#endif

    ctx->pc = 0x10fc88u;

    // 0x10fc88: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x10fc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
}
