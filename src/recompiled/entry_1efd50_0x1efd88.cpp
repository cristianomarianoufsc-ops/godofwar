#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1efd50
// Address: 0x1efd50 - 0x1efd88
void entry_1efd50_0x1efd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1efd50_0x1efd88");
#endif

    ctx->pc = 0x1efd50u;

    // 0x1efd50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efd54: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1efd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1efd58: 0xac8208cc  sw          $v0, 0x8CC($a0)
    ctx->pc = 0x1efd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2252), GPR_U32(ctx, 2));
    // 0x1efd5c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1efd5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1efd60: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1efd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1efd64: 0x7c8208d0  sq          $v0, 0x8D0($a0)
    ctx->pc = 0x1efd64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2256), GPR_VEC(ctx, 2));
    // 0x1efd68: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1efd68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1efd6c: 0x7c8208e0  sq          $v0, 0x8E0($a0)
    ctx->pc = 0x1efd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2272), GPR_VEC(ctx, 2));
    // 0x1efd70: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1efd70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1efd74: 0x7c8208f0  sq          $v0, 0x8F0($a0)
    ctx->pc = 0x1efd74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2288), GPR_VEC(ctx, 2));
    // 0x1efd78: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1efd78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1efd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD7Cu;
            // 0x1efd80: 0x7c820900  sq          $v0, 0x900($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 2304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFD84u;
    // 0x1efd84: 0x0  nop
    ctx->pc = 0x1efd84u;
    // NOP
}
