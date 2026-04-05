#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021ba60
// Address: 0x21ba60 - 0x21ba68
void FUN_0021ba60_0x21ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021ba60_0x21ba60");
#endif

    ctx->pc = 0x21ba60u;

    // 0x21ba60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x21ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x21ba64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
}
