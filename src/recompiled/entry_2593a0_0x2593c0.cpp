#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2593a0
// Address: 0x2593a0 - 0x2593c0
void entry_2593a0_0x2593c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2593a0_0x2593c0");
#endif

    ctx->pc = 0x2593a0u;

    // 0x2593a0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2593a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2593a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2593a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2593a8: 0x24633960  addiu       $v1, $v1, 0x3960
    ctx->pc = 0x2593a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14688));
    // 0x2593ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2593acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2593b0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2593b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2593b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2593B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2593B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2593B4u;
            // 0x2593b8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2593BCu;
    // 0x2593bc: 0x0  nop
    ctx->pc = 0x2593bcu;
    // NOP
}
