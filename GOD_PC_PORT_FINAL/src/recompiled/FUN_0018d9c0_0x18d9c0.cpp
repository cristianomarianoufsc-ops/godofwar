#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0018d9c0
// Address: 0x18d9c0 - 0x18d9c4
void FUN_0018d9c0_0x18d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018d9c0_0x18d9c0");
#endif

    ctx->pc = 0x18d9c0u;

    // 0x18d9c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
}
