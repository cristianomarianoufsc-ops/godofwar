#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019f830
// Address: 0x19f830 - 0x19f83c
void FUN_0019f830_0x19f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f830_0x19f830");
#endif

    ctx->pc = 0x19f830u;

    // 0x19f830: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19f830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19f834: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f838: 0x9062c9f8  lbu         $v0, -0x3608($v1)
    ctx->pc = 0x19f838u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953464)));
}
