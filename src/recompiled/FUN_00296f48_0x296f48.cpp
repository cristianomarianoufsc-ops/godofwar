#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00296f48
// Address: 0x296f48 - 0x296f50
void FUN_00296f48_0x296f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00296f48_0x296f48");
#endif

    ctx->pc = 0x296f48u;

    // 0x296f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x296f4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
}
