#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00285628
// Address: 0x285628 - 0x285634
void FUN_00285628_0x285628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00285628_0x285628");
#endif

    ctx->pc = 0x285628u;

    // 0x285628: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x285628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x28562c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285630: 0x8c6239b4  lw          $v0, 0x39B4($v1)
    ctx->pc = 0x285630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14772)));
}
