#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002a54b0
// Address: 0x2a54b0 - 0x2a54b8
void FUN_002a54b0_0x2a54b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002a54b0_0x2a54b0");
#endif

    ctx->pc = 0x2a54b0u;

    // 0x2a54b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a54b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a54b4: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x2a54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
}
