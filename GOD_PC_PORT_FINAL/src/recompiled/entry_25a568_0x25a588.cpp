#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_25a568
// Address: 0x25a568 - 0x25a588
void entry_25a568_0x25a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_25a568_0x25a588");
#endif

    ctx->pc = 0x25a568u;

    // 0x25a568: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25a568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25a56c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25a56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a570: 0x24633738  addiu       $v1, $v1, 0x3738
    ctx->pc = 0x25a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14136));
    // 0x25a574: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x25a574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x25a578: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x25a578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x25a57c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A57Cu;
            // 0x25a580: 0xac840004  sw          $a0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A584u;
    // 0x25a584: 0x0  nop
    ctx->pc = 0x25a584u;
    // NOP
}
