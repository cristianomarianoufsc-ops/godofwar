#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00286028
// Address: 0x286028 - 0x286030
void FUN_00286028_0x286028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286028_0x286028");
#endif

    ctx->pc = 0x286028u;

    // 0x286028: 0x27bdf910  addiu       $sp, $sp, -0x6F0
    ctx->pc = 0x286028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965520));
    // 0x28602c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28602cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
}
