#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23aab0
// Address: 0x23aab0 - 0x23aac8
void entry_23aab0_0x23aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23aab0_0x23aac8");
#endif

    ctx->pc = 0x23aab0u;

    // 0x23aab0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x23aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x23aab4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23aab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23aab8: 0x3e00008  jr          $ra
    ctx->pc = 0x23AAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAB8u;
            // 0x23aabc: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23AAC0u;
    // 0x23aac0: 0x3e00008  jr          $ra
    ctx->pc = 0x23AAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23AAC8u;
}
