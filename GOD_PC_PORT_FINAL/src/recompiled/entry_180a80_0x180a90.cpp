#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_180a80
// Address: 0x180a80 - 0x180a90
void entry_180a80_0x180a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_180a80_0x180a90");
#endif

    ctx->pc = 0x180a80u;

    // 0x180a80: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x180a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x180a84: 0x24420458  addiu       $v0, $v0, 0x458
    ctx->pc = 0x180a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1112));
    // 0x180a88: 0x3e00008  jr          $ra
    ctx->pc = 0x180A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180A88u;
            // 0x180a8c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180A90u;
}
