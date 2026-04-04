#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2996f0
// Address: 0x2996f0 - 0x299738
void entry_2996f0_0x299738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2996f0_0x299738");
#endif

    ctx->pc = 0x2996f0u;

    // 0x2996f0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2996f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2996f4: 0xc  syscall     0
    ctx->pc = 0x2996f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2996f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2996F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299710u: goto label_299710;
            case 0x299730u: goto label_299730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299700u;
    // 0x299700: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x299700u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x299704: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x299704u;
    {
        const bool branch_taken_0x299704 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x299708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299704u;
            // 0x299708: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299704) {
            ctx->pc = 0x299730u;
            goto label_299730;
        }
    }
    ctx->pc = 0x29970Cu;
    // 0x29970c: 0x0  nop
    ctx->pc = 0x29970cu;
    // NOP
label_299710:
    // 0x299710: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x299710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x299714: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x299714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x299718: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x299718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x29971c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x29971cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x299720: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x299720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x299724: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x299724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x299728: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299728u;
    {
        const bool branch_taken_0x299728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299728) {
            ctx->pc = 0x299710u;
            runtime->cooperativeGuestYield();
            goto label_299710;
        }
    }
    ctx->pc = 0x299730u;
label_299730:
    // 0x299730: 0x3e00008  jr          $ra
    ctx->pc = 0x299730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299730u;
            // 0x299734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299710u: goto label_299710;
            case 0x299730u: goto label_299730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299738u;
}
