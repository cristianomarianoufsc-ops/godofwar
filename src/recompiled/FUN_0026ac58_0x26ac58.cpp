#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0026ac58
// Address: 0x26ac58 - 0x26ac60
void FUN_0026ac58_0x26ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0026ac58_0x26ac58");
#endif

    ctx->pc = 0x26ac58u;

    // 0x26ac58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ac5c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26ac5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
}
