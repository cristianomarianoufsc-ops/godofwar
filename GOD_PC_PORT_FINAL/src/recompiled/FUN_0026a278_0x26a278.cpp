#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0026a278
// Address: 0x26a278 - 0x26a280
void FUN_0026a278_0x26a278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026a278_0x26a278");
#endif

    ctx->pc = 0x26a278u;

    // 0x26a278: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26a278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26a27c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
}
