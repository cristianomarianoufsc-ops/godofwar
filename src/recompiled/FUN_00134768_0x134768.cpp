#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00134768
// Address: 0x134768 - 0x13477c
void FUN_00134768_0x134768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134768_0x134768");
#endif

    ctx->pc = 0x134768u;

    // 0x134768: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x134768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x13476c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13476cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134770: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x134770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x134774: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x134774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x134778: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x134778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
