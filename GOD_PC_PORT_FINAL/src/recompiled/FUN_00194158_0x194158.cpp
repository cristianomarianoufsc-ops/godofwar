#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00194158
// Address: 0x194158 - 0x19416c
void FUN_00194158_0x194158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00194158_0x194158");
#endif

    ctx->pc = 0x194158u;

    // 0x194158: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19415c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19415cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194160: 0x8c62c944  lw          $v0, -0x36BC($v1)
    ctx->pc = 0x194160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953284)));
    // 0x194164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194168: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x194168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
}
