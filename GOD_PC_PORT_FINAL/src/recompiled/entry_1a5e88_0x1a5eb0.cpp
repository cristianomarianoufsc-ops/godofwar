#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a5e88
// Address: 0x1a5e88 - 0x1a5eb0
void entry_1a5e88_0x1a5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a5e88_0x1a5eb0");
#endif

    ctx->pc = 0x1a5e88u;

    // 0x1a5e88: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x1a5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1a5e8c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a5e90: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a5e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a5e94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a5e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e98: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1a5e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1a5e9c: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x1a5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x1a5ea0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1a5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1a5ea4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a5ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a5ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5EA8u;
            // 0x1a5eac: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5EB0u;
}
