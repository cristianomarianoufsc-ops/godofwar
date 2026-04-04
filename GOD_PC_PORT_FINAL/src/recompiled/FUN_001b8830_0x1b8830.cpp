#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001b8830
// Address: 0x1b8830 - 0x1b8840
void FUN_001b8830_0x1b8830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8830_0x1b8830");
#endif

    ctx->pc = 0x1b8830u;

    // 0x1b8830: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b8830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b8834: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8838: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b8838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b883c: 0x8c43ed58  lw          $v1, -0x12A8($v0)
    ctx->pc = 0x1b883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
}
