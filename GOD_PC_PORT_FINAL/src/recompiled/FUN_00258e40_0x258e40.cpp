#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00258e40
// Address: 0x258e40 - 0x258e48
void FUN_00258e40_0x258e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00258e40_0x258e40");
#endif

    ctx->pc = 0x258e40u;

    // 0x258e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x258e44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x258e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
