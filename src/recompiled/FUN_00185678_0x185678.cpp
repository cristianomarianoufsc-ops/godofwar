#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00185678
// Address: 0x185678 - 0x185680
void FUN_00185678_0x185678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00185678_0x185678");
#endif

    ctx->pc = 0x185678u;

    // 0x185678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18567c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
}
