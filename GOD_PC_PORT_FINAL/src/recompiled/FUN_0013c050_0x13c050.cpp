#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0013c050
// Address: 0x13c050 - 0x13c058
void FUN_0013c050_0x13c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c050_0x13c050");
#endif

    ctx->pc = 0x13c050u;

    // 0x13c050: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x13c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x13c054: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x13c054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
}
