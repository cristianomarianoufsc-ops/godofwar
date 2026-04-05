#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00173f38
// Address: 0x173f38 - 0x173f40
void FUN_00173f38_0x173f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173f38_0x173f38");
#endif

    ctx->pc = 0x173f38u;

    // 0x173f38: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x173f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x173f3c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x173f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
}
