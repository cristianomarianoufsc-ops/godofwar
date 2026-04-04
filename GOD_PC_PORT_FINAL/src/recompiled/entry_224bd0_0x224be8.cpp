#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_224bd0
// Address: 0x224bd0 - 0x224be8
void entry_224bd0_0x224be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_224bd0_0x224be8");
#endif

    ctx->pc = 0x224bd0u;

    // 0x224bd0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x224bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x224bd4: 0x52bc3  sra         $a1, $a1, 15
    ctx->pc = 0x224bd4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 15));
    // 0x224bd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x224bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x224bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x224BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224BDCu;
            // 0x224be0: 0x84820018  lh          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224BE4u;
    // 0x224be4: 0x0  nop
    ctx->pc = 0x224be4u;
    // NOP
}
