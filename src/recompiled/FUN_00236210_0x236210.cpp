#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00236210
// Address: 0x236210 - 0x236218
void FUN_00236210_0x236210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236210_0x236210");
#endif

    ctx->pc = 0x236210u;

    // 0x236210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236214: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x236214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
