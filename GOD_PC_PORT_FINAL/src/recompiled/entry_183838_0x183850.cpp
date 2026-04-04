#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183838
// Address: 0x183838 - 0x183850
void entry_183838_0x183850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183838_0x183850");
#endif

    ctx->pc = 0x183838u;

    // 0x183838: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x183838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18383c: 0x2443dd50  addiu       $v1, $v0, -0x22B0
    ctx->pc = 0x18383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958416));
    // 0x183840: 0xac44dd50  sw          $a0, -0x22B0($v0)
    ctx->pc = 0x183840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958416), GPR_U32(ctx, 4));
    // 0x183844: 0x3e00008  jr          $ra
    ctx->pc = 0x183844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183844u;
            // 0x183848: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18384Cu;
    // 0x18384c: 0x0  nop
    ctx->pc = 0x18384cu;
    // NOP
}
