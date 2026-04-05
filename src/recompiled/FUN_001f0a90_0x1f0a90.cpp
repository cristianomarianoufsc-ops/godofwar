#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001f0a90
// Address: 0x1f0a90 - 0x1f0a98
void FUN_001f0a90_0x1f0a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0a90_0x1f0a90");
#endif

    ctx->pc = 0x1f0a90u;

    // 0x1f0a90: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1f0a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1f0a94: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1f0a94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
}
