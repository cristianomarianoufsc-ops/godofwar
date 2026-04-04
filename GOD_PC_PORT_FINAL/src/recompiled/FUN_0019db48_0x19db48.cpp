#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019db48
// Address: 0x19db48 - 0x19db50
void FUN_0019db48_0x19db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019db48_0x19db48");
#endif

    ctx->pc = 0x19db48u;

    // 0x19db48: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x19db48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x19db4c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x19db4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
}
