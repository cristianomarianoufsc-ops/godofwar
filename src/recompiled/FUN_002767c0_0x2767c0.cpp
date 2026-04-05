#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002767c0
// Address: 0x2767c0 - 0x2767c8
void FUN_002767c0_0x2767c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002767c0_0x2767c0");
#endif

    ctx->pc = 0x2767c0u;

    // 0x2767c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2767c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2767c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2767c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
}
