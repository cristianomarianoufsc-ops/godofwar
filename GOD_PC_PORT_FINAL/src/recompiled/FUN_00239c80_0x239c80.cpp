#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00239c80
// Address: 0x239c80 - 0x239c88
void FUN_00239c80_0x239c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239c80_0x239c80");
#endif

    ctx->pc = 0x239c80u;

    // 0x239c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239c84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x239c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
}
