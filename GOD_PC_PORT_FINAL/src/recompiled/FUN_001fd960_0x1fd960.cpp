#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001fd960
// Address: 0x1fd960 - 0x1fd968
void FUN_001fd960_0x1fd960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd960_0x1fd960");
#endif

    ctx->pc = 0x1fd960u;

    // 0x1fd960: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1fd960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1fd964: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1fd964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
}
