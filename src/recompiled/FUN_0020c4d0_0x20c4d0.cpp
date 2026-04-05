#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0020c4d0
// Address: 0x20c4d0 - 0x20c4dc
void FUN_0020c4d0_0x20c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020c4d0_0x20c4d0");
#endif

    ctx->pc = 0x20c4d0u;

    // 0x20c4d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20c4d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c4d8: 0x8c42bde0  lw          $v0, -0x4220($v0)
    ctx->pc = 0x20c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
}
