#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183868
// Address: 0x183868 - 0x183878
void entry_183868_0x183878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183868_0x183878");
#endif

    ctx->pc = 0x183868u;

    // 0x183868: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x183868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18386c: 0x3e00008  jr          $ra
    ctx->pc = 0x18386Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18386Cu;
            // 0x183870: 0xac444f5c  sw          $a0, 0x4F5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183874u;
    // 0x183874: 0x0  nop
    ctx->pc = 0x183874u;
    // NOP
}
