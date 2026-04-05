#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001685f8
// Address: 0x1685f8 - 0x168610
void FUN_001685f8_0x1685f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001685f8_0x1685f8");
#endif

    ctx->pc = 0x1685f8u;

    // 0x1685f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1685f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1685fc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1685fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x168600: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x168600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x168604: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x168604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x168608: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x168608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x16860c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x16860cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
}
