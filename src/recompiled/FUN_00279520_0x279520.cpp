#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00279520
// Address: 0x279520 - 0x279588
void FUN_00279520_0x279520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00279520_0x279520");
#endif

    ctx->pc = 0x279520u;

    // 0x279520: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x279520u;
    {
        const bool branch_taken_0x279520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x279524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279520u;
            // 0x279524: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279520) {
            ctx->pc = 0x27953Cu;
            goto label_27953c;
        }
    }
    ctx->pc = 0x279528u;
    // 0x279528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27952c: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27952Cu;
    {
        const bool branch_taken_0x27952c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x279530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27952Cu;
            // 0x279530: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27952c) {
            ctx->pc = 0x27956Cu;
            goto label_27956c;
        }
    }
    ctx->pc = 0x279534u;
    // 0x279534: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x279534u;
    {
        const bool branch_taken_0x279534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279534) {
            ctx->pc = 0x279580u;
            goto label_279580;
        }
    }
    ctx->pc = 0x27953Cu;
label_27953c:
    // 0x27953c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27953cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x279540: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x279540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x279544: 0x0  nop
    ctx->pc = 0x279544u;
    // NOP
label_279548:
    // 0x279548: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27954c: 0x0  nop
    ctx->pc = 0x27954cu;
    // NOP
    // 0x279550: 0x0  nop
    ctx->pc = 0x279550u;
    // NOP
    // 0x279554: 0x0  nop
    ctx->pc = 0x279554u;
    // NOP
    // 0x279558: 0x0  nop
    ctx->pc = 0x279558u;
    // NOP
    // 0x27955c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27955Cu;
    {
        const bool branch_taken_0x27955c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27955c) {
            ctx->pc = 0x279548u;
            runtime->cooperativeGuestYield();
            goto label_279548;
        }
    }
    ctx->pc = 0x279564u;
    // 0x279564: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x279564u;
    {
        const bool branch_taken_0x279564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279564u;
            // 0x279568: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279564) {
            ctx->pc = 0x27957Cu;
            goto label_27957c;
        }
    }
    ctx->pc = 0x27956Cu;
label_27956c:
    // 0x27956c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27956cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279570: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x279570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x279574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x279574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279578: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x279578u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_27957c:
    // 0x27957c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27957cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_279580:
    // 0x279580: 0x3e00008  jr          $ra
    ctx->pc = 0x279580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27953Cu: goto label_27953c;
            case 0x279548u: goto label_279548;
            case 0x27956Cu: goto label_27956c;
            case 0x27957Cu: goto label_27957c;
            case 0x279580u: goto label_279580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279588u;
}
