#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00263478
// Address: 0x263478 - 0x263480
void FUN_00263478_0x263478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00263478_0x263478");
#endif

    ctx->pc = 0x263478u;

    // 0x263478: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x263478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x26347c: 0x24020408  addiu       $v0, $zero, 0x408
    ctx->pc = 0x26347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
}
