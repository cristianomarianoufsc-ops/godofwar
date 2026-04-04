#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23b088
// Address: 0x23b088 - 0x23b0b8
void entry_23b088_0x23b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23b088_0x23b0b8");
#endif

    ctx->pc = 0x23b088u;

    // 0x23b088: 0x3e00008  jr          $ra
    ctx->pc = 0x23B088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B090u;
    // 0x23b090: 0x3e00008  jr          $ra
    ctx->pc = 0x23B090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B098u;
    // 0x23b098: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x23b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23b09c: 0x0  nop
    ctx->pc = 0x23b09cu;
    // NOP
    // 0x23b0a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23b0a4: 0x0  nop
    ctx->pc = 0x23b0a4u;
    // NOP
    // 0x23b0a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23b0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23b0ac: 0x0  nop
    ctx->pc = 0x23b0acu;
    // NOP
    // 0x23b0b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23b0b4: 0x0  nop
    ctx->pc = 0x23b0b4u;
    // NOP
}
