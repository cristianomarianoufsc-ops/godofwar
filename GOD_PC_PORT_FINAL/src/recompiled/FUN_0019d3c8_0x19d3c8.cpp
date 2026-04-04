#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019d3c8
// Address: 0x19d3c8 - 0x19d3d0
void FUN_0019d3c8_0x19d3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019d3c8_0x19d3c8");
#endif

    ctx->pc = 0x19d3c8u;

    // 0x19d3c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19d3cc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
}
