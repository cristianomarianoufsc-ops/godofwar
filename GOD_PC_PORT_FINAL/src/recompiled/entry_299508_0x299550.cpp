#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299508
// Address: 0x299508 - 0x299550
void entry_299508_0x299550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299508_0x299550");
#endif

    ctx->pc = 0x299508u;

    // 0x299508: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x299508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x29950c: 0xc  syscall     0
    ctx->pc = 0x29950cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x299510: 0x3e00008  jr          $ra
    ctx->pc = 0x299510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299528u: goto label_299528;
            case 0x299548u: goto label_299548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299518u;
    // 0x299518: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x299518u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x29951c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x29951Cu;
    {
        const bool branch_taken_0x29951c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x299520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29951Cu;
            // 0x299520: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29951c) {
            ctx->pc = 0x299548u;
            goto label_299548;
        }
    }
    ctx->pc = 0x299524u;
    // 0x299524: 0x0  nop
    ctx->pc = 0x299524u;
    // NOP
label_299528:
    // 0x299528: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x299528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29952c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29952cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x299530: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x299530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x299534: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x299534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x299538: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x299538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x29953c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x29953cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x299540: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299540u;
    {
        const bool branch_taken_0x299540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299540) {
            ctx->pc = 0x299528u;
            runtime->cooperativeGuestYield();
            goto label_299528;
        }
    }
    ctx->pc = 0x299548u;
label_299548:
    // 0x299548: 0x3e00008  jr          $ra
    ctx->pc = 0x299548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299548u;
            // 0x29954c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299528u: goto label_299528;
            case 0x299548u: goto label_299548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299550u;
}
