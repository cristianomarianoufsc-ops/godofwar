#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00239310
// Address: 0x239310 - 0x239324
void FUN_00239310_0x239310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239310_0x239310");
#endif

    ctx->pc = 0x239310u;

    // 0x239310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x239314: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x239314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x239318: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x239318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23931c: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x239320: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x239320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
