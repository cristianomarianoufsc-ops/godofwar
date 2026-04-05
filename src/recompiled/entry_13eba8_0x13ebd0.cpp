#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13eba8
// Address: 0x13eba8 - 0x13ebd0
void entry_13eba8_0x13ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13eba8_0x13ebd0");
#endif

    ctx->pc = 0x13eba8u;

    // 0x13eba8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x13eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13ebac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EBACu;
    {
        const bool branch_taken_0x13ebac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ebac) {
            ctx->pc = 0x13EBC8u;
            goto label_13ebc8;
        }
    }
    ctx->pc = 0x13EBB4u;
    // 0x13ebb4: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x13ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x13ebb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EBB8u;
    {
        const bool branch_taken_0x13ebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ebb8) {
            ctx->pc = 0x13EBC8u;
            goto label_13ebc8;
        }
    }
    ctx->pc = 0x13EBC0u;
    // 0x13ebc0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBC0u;
            // 0x13ebc4: 0x8c420088  lw          $v0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EBC8u: goto label_13ebc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EBC8u;
label_13ebc8:
    // 0x13ebc8: 0x3e00008  jr          $ra
    ctx->pc = 0x13EBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBC8u;
            // 0x13ebcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EBC8u: goto label_13ebc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EBD0u;
}
