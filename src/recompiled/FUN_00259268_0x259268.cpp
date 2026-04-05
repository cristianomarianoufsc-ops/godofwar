#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00259268
// Address: 0x259268 - 0x25927c
void FUN_00259268_0x259268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00259268_0x259268");
#endif

    ctx->pc = 0x259268u;

    // 0x259268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x259268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25926c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259270: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x259270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x259274: 0x24422b38  addiu       $v0, $v0, 0x2B38
    ctx->pc = 0x259274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11064));
    // 0x259278: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x259278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
}
