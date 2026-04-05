#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23cf90
// Address: 0x23cf90 - 0x23cfb0
void entry_23cf90_0x23cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23cf90_0x23cfb0");
#endif

    ctx->pc = 0x23cf90u;

    // 0x23cf90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23cf90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf94: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x23cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x23cf98: 0x3e00008  jr          $ra
    ctx->pc = 0x23CF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CF98u;
            // 0x23cf9c: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CFA0u;
    // 0x23cfa0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23cfa4: 0x0  nop
    ctx->pc = 0x23cfa4u;
    // NOP
    // 0x23cfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x23CFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CFA8u;
            // 0x23cfac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CFB0u;
}
