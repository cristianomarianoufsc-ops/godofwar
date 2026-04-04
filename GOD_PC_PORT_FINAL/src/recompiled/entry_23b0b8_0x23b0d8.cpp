#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23b0b8
// Address: 0x23b0b8 - 0x23b0d8
void entry_23b0b8_0x23b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23b0b8_0x23b0d8");
#endif

    ctx->pc = 0x23b0b8u;

    // 0x23b0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0B8u;
            // 0x23b0bc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B0C0u;
    // 0x23b0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x23B0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0C0u;
            // 0x23b0c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B0C8u;
    // 0x23b0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0C8u;
            // 0x23b0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B0D0u;
    // 0x23b0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x23B0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B0D8u;
}
