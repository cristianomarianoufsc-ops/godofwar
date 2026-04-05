#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00173a20
// Address: 0x173a20 - 0x173a28
void FUN_00173a20_0x173a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173a20_0x173a20");
#endif

    ctx->pc = 0x173a20u;

    // 0x173a20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x173a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x173a24: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x173a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
