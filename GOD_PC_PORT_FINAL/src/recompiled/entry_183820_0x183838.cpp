#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183820
// Address: 0x183820 - 0x183838
void entry_183820_0x183838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183820_0x183838");
#endif

    ctx->pc = 0x183820u;

    // 0x183820: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x183820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x183824: 0x2443dd58  addiu       $v1, $v0, -0x22A8
    ctx->pc = 0x183824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x183828: 0xac44dd58  sw          $a0, -0x22A8($v0)
    ctx->pc = 0x183828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958424), GPR_U32(ctx, 4));
    // 0x18382c: 0x3e00008  jr          $ra
    ctx->pc = 0x18382Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18382Cu;
            // 0x183830: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183834u;
    // 0x183834: 0x0  nop
    ctx->pc = 0x183834u;
    // NOP
}
