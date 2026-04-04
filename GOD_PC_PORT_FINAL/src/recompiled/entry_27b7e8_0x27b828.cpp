#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27b7e8
// Address: 0x27b7e8 - 0x27b828
void entry_27b7e8_0x27b828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27b7e8_0x27b828");
#endif

    ctx->pc = 0x27b7e8u;

    // 0x27b7e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b7ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27b7f0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x27b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x27b7f4: 0xac4332e0  sw          $v1, 0x32E0($v0)
    ctx->pc = 0x27b7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13024), GPR_U32(ctx, 3));
    // 0x27b7f8: 0x2484d008  addiu       $a0, $a0, -0x2FF8
    ctx->pc = 0x27b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955016));
    // 0x27b7fc: 0x24833340  addiu       $v1, $a0, 0x3340
    ctx->pc = 0x27b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
label_27b800:
    // 0x27b800: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x27b800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x27b804: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x27b804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x27b808: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x27b808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x27b80c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x27b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x27b810: 0x24840334  addiu       $a0, $a0, 0x334
    ctx->pc = 0x27b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 820));
    // 0x27b814: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x27b814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27b818: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27B818u;
    {
        const bool branch_taken_0x27b818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b818) {
            ctx->pc = 0x27B800u;
            runtime->cooperativeGuestYield();
            goto label_27b800;
        }
    }
    ctx->pc = 0x27B820u;
    // 0x27b820: 0x3e00008  jr          $ra
    ctx->pc = 0x27B820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B820u;
            // 0x27b824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B800u: goto label_27b800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B828u;
}
