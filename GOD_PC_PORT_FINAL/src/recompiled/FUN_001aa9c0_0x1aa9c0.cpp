#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001aa9c0
// Address: 0x1aa9c0 - 0x1aa9c8
void FUN_001aa9c0_0x1aa9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa9c0_0x1aa9c0");
#endif

    ctx->pc = 0x1aa9c0u;

    // 0x1aa9c0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x1aa9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x1aa9c4: 0x7fb30290  sq          $s3, 0x290($sp)
    ctx->pc = 0x1aa9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 19));
}
