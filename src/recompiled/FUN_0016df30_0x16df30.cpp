#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0016df30
// Address: 0x16df30 - 0x16df40
void FUN_0016df30_0x16df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016df30_0x16df30");
#endif

    ctx->pc = 0x16df30u;

    // 0x16df30: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x16df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x16df34: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16df34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16df38: 0x7fb10340  sq          $s1, 0x340($sp)
    ctx->pc = 0x16df38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 17));
    // 0x16df3c: 0x2442f170  addiu       $v0, $v0, -0xE90
    ctx->pc = 0x16df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
}
