#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001b5798
// Address: 0x1b5798 - 0x1b57a0
void FUN_001b5798_0x1b5798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5798_0x1b5798");
#endif

    ctx->pc = 0x1b5798u;

    // 0x1b5798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b579c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1b579cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
}
