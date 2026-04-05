#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002787c8
// Address: 0x2787c8 - 0x2787d0
void FUN_002787c8_0x2787c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002787c8_0x2787c8");
#endif

    ctx->pc = 0x2787c8u;

    // 0x2787c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2787c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2787cc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2787ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
}
