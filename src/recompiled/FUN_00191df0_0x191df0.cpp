#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00191df0
// Address: 0x191df0 - 0x191df8
void FUN_00191df0_0x191df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191df0_0x191df0");
#endif

    ctx->pc = 0x191df0u;

    // 0x191df0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x191df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x191df4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x191df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
}
