#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0011cc58
// Address: 0x11cc58 - 0x11cc60
void FUN_0011cc58_0x11cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011cc58_0x11cc58");
#endif

    ctx->pc = 0x11cc58u;

    // 0x11cc58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11cc5c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
}
