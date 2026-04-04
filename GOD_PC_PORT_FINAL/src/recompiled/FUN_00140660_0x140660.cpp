#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00140660
// Address: 0x140660 - 0x14066c
void FUN_00140660_0x140660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00140660_0x140660");
#endif

    ctx->pc = 0x140660u;

    // 0x140660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140664: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x140664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x140668: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
}
