#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a0a58
// Address: 0x1a0a58 - 0x1a0a60
void FUN_001a0a58_0x1a0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0a58_0x1a0a58");
#endif

    ctx->pc = 0x1a0a58u;

    // 0x1a0a58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0a5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
}
