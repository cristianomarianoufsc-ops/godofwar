#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0016db00
// Address: 0x16db00 - 0x16db08
void FUN_0016db00_0x16db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016db00_0x16db00");
#endif

    ctx->pc = 0x16db00u;

    // 0x16db00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16db04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
}
