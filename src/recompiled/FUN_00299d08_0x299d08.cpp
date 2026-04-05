#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00299d08
// Address: 0x299d08 - 0x299d10
void FUN_00299d08_0x299d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00299d08_0x299d08");
#endif

    ctx->pc = 0x299d08u;

    // 0x299d08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x299d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x299d0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x299d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
}
