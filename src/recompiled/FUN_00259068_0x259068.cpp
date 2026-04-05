#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00259068
// Address: 0x259068 - 0x259070
void FUN_00259068_0x259068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00259068_0x259068");
#endif

    ctx->pc = 0x259068u;

    // 0x259068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25906c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
}
