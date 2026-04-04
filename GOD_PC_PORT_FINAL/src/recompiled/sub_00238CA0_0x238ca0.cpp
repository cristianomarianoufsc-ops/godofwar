#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238CA0
// Address: 0x238ca0 - 0x238cb0
void sub_00238CA0_0x238ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238CA0_0x238ca0");
#endif

    ctx->pc = 0x238ca0u;

    // 0x238ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x238CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CA4u;
            // 0x238ca8: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238CACu;
    // 0x238cac: 0x0  nop
    ctx->pc = 0x238cacu;
    // NOP
}
