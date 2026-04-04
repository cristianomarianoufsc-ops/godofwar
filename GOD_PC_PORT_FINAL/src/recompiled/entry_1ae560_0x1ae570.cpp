#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1ae560
// Address: 0x1ae560 - 0x1ae570
void entry_1ae560_0x1ae570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1ae560_0x1ae570");
#endif

    ctx->pc = 0x1ae560u;

    // 0x1ae560: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ae560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ae564: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE564u;
            // 0x1ae568: 0xac44fdc4  sw          $a0, -0x23C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966724), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE56Cu;
    // 0x1ae56c: 0x0  nop
    ctx->pc = 0x1ae56cu;
    // NOP
}
