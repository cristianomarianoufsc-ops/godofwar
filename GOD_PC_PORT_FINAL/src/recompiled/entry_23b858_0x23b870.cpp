#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23b858
// Address: 0x23b858 - 0x23b870
void entry_23b858_0x23b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23b858_0x23b870");
#endif

    ctx->pc = 0x23b858u;

    // 0x23b858: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23b858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23b85c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23b85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b860: 0x24632e30  addiu       $v1, $v1, 0x2E30
    ctx->pc = 0x23b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11824));
    // 0x23b864: 0x3e00008  jr          $ra
    ctx->pc = 0x23B864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B864u;
            // 0x23b868: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B86Cu;
    // 0x23b86c: 0x0  nop
    ctx->pc = 0x23b86cu;
    // NOP
}
