#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00285548
// Address: 0x285548 - 0x285554
void FUN_00285548_0x285548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00285548_0x285548");
#endif

    ctx->pc = 0x285548u;

    // 0x285548: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x285548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x28554c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28554cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x285550: 0x8c6239b4  lw          $v0, 0x39B4($v1)
    ctx->pc = 0x285550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14772)));
}
