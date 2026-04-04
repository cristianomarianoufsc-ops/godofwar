#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002480e8
// Address: 0x2480e8 - 0x2480ec
void FUN_002480e8_0x2480e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002480e8_0x2480e8");
#endif

    ctx->pc = 0x2480e8u;

    // 0x2480e8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2480e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
}
