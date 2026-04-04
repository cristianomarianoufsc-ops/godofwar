#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0019f040
// Address: 0x19f040 - 0x19f054
void FUN_0019f040_0x19f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f040_0x19f040");
#endif

    ctx->pc = 0x19f040u;

    // 0x19f040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f044: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f048: 0x2403040c  addiu       $v1, $zero, 0x40C
    ctx->pc = 0x19f048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x19f04c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19f050: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x19f050u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
}
