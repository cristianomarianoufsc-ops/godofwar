#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00266558
// Address: 0x266558 - 0x266560
void FUN_00266558_0x266558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00266558_0x266558");
#endif

    ctx->pc = 0x266558u;

    // 0x266558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x266558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26655c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
}
