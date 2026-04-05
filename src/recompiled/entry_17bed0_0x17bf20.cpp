#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17bed0
// Address: 0x17bed0 - 0x17bf20
void entry_17bed0_0x17bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17bed0_0x17bf20");
#endif

    ctx->pc = 0x17bed0u;

    // 0x17bed0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x17bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x17bed4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17bed4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bed8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x17bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x17bedc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x17bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x17bee0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x17bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17bee4: 0x0  nop
    ctx->pc = 0x17bee4u;
    // NOP
label_17bee8:
    // 0x17bee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17beec: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x17beecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x17bef0: 0x28620016  slti        $v0, $v1, 0x16
    ctx->pc = 0x17bef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x17bef4: 0x0  nop
    ctx->pc = 0x17bef4u;
    // NOP
    // 0x17bef8: 0x0  nop
    ctx->pc = 0x17bef8u;
    // NOP
    // 0x17befc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17BEFCu;
    {
        const bool branch_taken_0x17befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BEFCu;
            // 0x17bf00: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17befc) {
            ctx->pc = 0x17BEE8u;
            runtime->cooperativeGuestYield();
            goto label_17bee8;
        }
    }
    ctx->pc = 0x17BF04u;
    // 0x17bf04: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x17bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17bf08: 0xa0820023  sb          $v0, 0x23($a0)
    ctx->pc = 0x17bf08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x17bf0c: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x17bf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x17bf10: 0xa0820021  sb          $v0, 0x21($a0)
    ctx->pc = 0x17bf10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x17bf14: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF14u;
            // 0x17bf18: 0xa0820022  sb          $v0, 0x22($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BEE8u: goto label_17bee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BF1Cu;
    // 0x17bf1c: 0x0  nop
    ctx->pc = 0x17bf1cu;
    // NOP
}
