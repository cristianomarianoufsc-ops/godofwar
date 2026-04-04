#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00189020
// Address: 0x189020 - 0x189030
void FUN_00189020_0x189020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00189020_0x189020");
#endif

    ctx->pc = 0x189020u;

    // 0x189020: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x189020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x189024: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x189024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x189028: 0x8c444db8  lw          $a0, 0x4DB8($v0)
    ctx->pc = 0x189028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19896)));
    // 0x18902c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
}
