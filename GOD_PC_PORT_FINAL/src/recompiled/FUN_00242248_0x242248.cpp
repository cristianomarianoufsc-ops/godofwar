#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00242248
// Address: 0x242248 - 0x242250
void FUN_00242248_0x242248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00242248_0x242248");
#endif

    ctx->pc = 0x242248u;

    // 0x242248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24224c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x24224cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
}
