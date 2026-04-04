#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001824a8
// Address: 0x1824a8 - 0x1824b0
void FUN_001824a8_0x1824a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001824a8_0x1824a8");
#endif

    ctx->pc = 0x1824a8u;

    // 0x1824a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1824a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1824ac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1824acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
}
