#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a1590
// Address: 0x1a1590 - 0x1a15b0
void entry_1a1590_0x1a15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a1590_0x1a15b0");
#endif

    ctx->pc = 0x1a1590u;

    // 0x1a1590: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1a1590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1a1594: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a1594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1598: 0x2463a2a8  addiu       $v1, $v1, -0x5D58
    ctx->pc = 0x1a1598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943400));
    // 0x1a159c: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x1a159cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x1a15a0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1a15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1a15a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A15A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A15A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A15A4u;
            // 0x1a15a8: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A15ACu;
    // 0x1a15ac: 0x0  nop
    ctx->pc = 0x1a15acu;
    // NOP
}
