#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23c590
// Address: 0x23c590 - 0x23c5a0
void entry_23c590_0x23c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23c590_0x23c5a0");
#endif

    ctx->pc = 0x23c590u;

    // 0x23c590: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23c590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c594: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23c594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23c598: 0x3e00008  jr          $ra
    ctx->pc = 0x23C598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C598u;
            // 0x23c59c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C5A0u;
}
