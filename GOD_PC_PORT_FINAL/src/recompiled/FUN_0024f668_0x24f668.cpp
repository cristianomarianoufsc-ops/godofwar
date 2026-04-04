#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0024f668
// Address: 0x24f668 - 0x24f670
void FUN_0024f668_0x24f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0024f668_0x24f668");
#endif

    ctx->pc = 0x24f668u;

    // 0x24f668: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f66c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
}
