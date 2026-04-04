#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_19f808
// Address: 0x19f808 - 0x19f830
void entry_19f808_0x19f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_19f808_0x19f830");
#endif

    ctx->pc = 0x19f808u;

    // 0x19f808: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f80c: 0x8c42c9f0  lw          $v0, -0x3610($v0)
    ctx->pc = 0x19f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953456)));
    // 0x19f810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F810u;
    {
        const bool branch_taken_0x19f810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F810u;
            // 0x19f814: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f810) {
            ctx->pc = 0x19F824u;
            goto label_19f824;
        }
    }
    ctx->pc = 0x19F818u;
    // 0x19f818: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f81c: 0x8c42c9f4  lw          $v0, -0x360C($v0)
    ctx->pc = 0x19f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953460)));
    // 0x19f820: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x19f820u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19f824:
    // 0x19f824: 0x3e00008  jr          $ra
    ctx->pc = 0x19F824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F824u;
            // 0x19f828: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F824u: goto label_19f824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F82Cu;
    // 0x19f82c: 0x0  nop
    ctx->pc = 0x19f82cu;
    // NOP
}
