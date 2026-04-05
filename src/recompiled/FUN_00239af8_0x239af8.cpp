#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00239af8
// Address: 0x239af8 - 0x239b00
void FUN_00239af8_0x239af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239af8_0x239af8");
#endif

    ctx->pc = 0x239af8u;

    // 0x239af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239afc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x239afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
