#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23c828
// Address: 0x23c828 - 0x23c850
void entry_23c828_0x23c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23c828_0x23c850");
#endif

    ctx->pc = 0x23c828u;

    // 0x23c828: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23c828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23c82c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23c82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c830: 0x24632dd0  addiu       $v1, $v1, 0x2DD0
    ctx->pc = 0x23c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11728));
    // 0x23c834: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23c834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x23c838: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x23c838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x23c83c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x23c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x23c840: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x23c840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x23c844: 0x3e00008  jr          $ra
    ctx->pc = 0x23C844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C844u;
            // 0x23c848: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C84Cu;
    // 0x23c84c: 0x0  nop
    ctx->pc = 0x23c84cu;
    // NOP
}
