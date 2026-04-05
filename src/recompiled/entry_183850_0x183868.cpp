#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183850
// Address: 0x183850 - 0x183868
void entry_183850_0x183868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183850_0x183868");
#endif

    ctx->pc = 0x183850u;

    // 0x183850: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x183850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x183854: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x183854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x183858: 0xac441070  sw          $a0, 0x1070($v0)
    ctx->pc = 0x183858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4208), GPR_U32(ctx, 4));
    // 0x18385c: 0x3e00008  jr          $ra
    ctx->pc = 0x18385Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18385Cu;
            // 0x183860: 0xac65f1a8  sw          $a1, -0xE58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183864u;
    // 0x183864: 0x0  nop
    ctx->pc = 0x183864u;
    // NOP
}
