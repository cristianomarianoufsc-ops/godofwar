#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243820
// Address: 0x243820 - 0x243848
void entry_243820_0x243848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243820_0x243848");
#endif

    ctx->pc = 0x243820u;

    // 0x243820: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x243820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x243824: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x243824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243828: 0x24632218  addiu       $v1, $v1, 0x2218
    ctx->pc = 0x243828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8728));
    // 0x24382c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x24382cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x243830: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x243830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x243834: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x243834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x243838: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x243838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x24383c: 0x3e00008  jr          $ra
    ctx->pc = 0x24383Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24383Cu;
            // 0x243840: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243844u;
    // 0x243844: 0x0  nop
    ctx->pc = 0x243844u;
    // NOP
}
