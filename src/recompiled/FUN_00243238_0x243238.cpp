#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00243238
// Address: 0x243238 - 0x243248
void FUN_00243238_0x243238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00243238_0x243238");
#endif

    ctx->pc = 0x243238u;

    // 0x243238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24323c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x24323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x243240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x243244: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x243244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
}
