#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00279068
// Address: 0x279068 - 0x279070
void FUN_00279068_0x279068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00279068_0x279068");
#endif

    ctx->pc = 0x279068u;

    // 0x279068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27906c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27906cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
}
