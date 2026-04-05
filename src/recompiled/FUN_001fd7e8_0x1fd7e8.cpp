#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001fd7e8
// Address: 0x1fd7e8 - 0x1fd7ec
void FUN_001fd7e8_0x1fd7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd7e8_0x1fd7e8");
#endif

    ctx->pc = 0x1fd7e8u;

    // 0x1fd7e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fd7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
}
