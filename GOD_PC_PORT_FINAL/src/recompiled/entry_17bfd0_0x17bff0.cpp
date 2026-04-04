#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17bfd0
// Address: 0x17bfd0 - 0x17bff0
void entry_17bfd0_0x17bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17bfd0_0x17bff0");
#endif

    ctx->pc = 0x17bfd0u;

    // 0x17bfd0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17bfd4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17BFD4u;
    {
        const bool branch_taken_0x17bfd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFD4u;
            // 0x17bfd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfd4) {
            ctx->pc = 0x17BFE0u;
            goto label_17bfe0;
        }
    }
    ctx->pc = 0x17BFDCu;
    // 0x17bfdc: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x17bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_17bfe0:
    // 0x17bfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BFE0u;
            // 0x17bfe4: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BFE0u: goto label_17bfe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BFE8u;
    // 0x17bfe8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17bfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17bfec: 0x0  nop
    ctx->pc = 0x17bfecu;
    // NOP
}
