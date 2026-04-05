#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_107538
// Address: 0x107538 - 0x107598
void entry_107538_0x107598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_107538_0x107598");
#endif

    ctx->pc = 0x107538u;

    // 0x107538: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x107538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x10753c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107540: 0x10870011  beq         $a0, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x107540u;
    {
        const bool branch_taken_0x107540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x107544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107540u;
            // 0x107544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107540) {
            ctx->pc = 0x107588u;
            goto label_107588;
        }
    }
    ctx->pc = 0x107548u;
    // 0x107548: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x107548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10754c: 0x0  nop
    ctx->pc = 0x10754cu;
    // NOP
label_107550:
    // 0x107550: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x107550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x107554: 0x5065000a  beql        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x107554u;
    {
        const bool branch_taken_0x107554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x107554) {
            ctx->pc = 0x107558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107554u;
            // 0x107558: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107580u;
            goto label_107580;
        }
    }
    ctx->pc = 0x10755Cu;
    // 0x10755c: 0x0  nop
    ctx->pc = 0x10755cu;
    // NOP
label_107560:
    // 0x107560: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x107560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x107564: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x107564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107568: 0x0  nop
    ctx->pc = 0x107568u;
    // NOP
    // 0x10756c: 0x0  nop
    ctx->pc = 0x10756cu;
    // NOP
    // 0x107570: 0x0  nop
    ctx->pc = 0x107570u;
    // NOP
    // 0x107574: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107574u;
    {
        const bool branch_taken_0x107574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x107578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107574u;
            // 0x107578: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107574) {
            ctx->pc = 0x107560u;
            runtime->cooperativeGuestYield();
            goto label_107560;
        }
    }
    ctx->pc = 0x10757Cu;
    // 0x10757c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x10757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107580:
    // 0x107580: 0x5487fff3  bnel        $a0, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x107580u;
    {
        const bool branch_taken_0x107580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x107580) {
            ctx->pc = 0x107584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107580u;
            // 0x107584: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107550u;
            runtime->cooperativeGuestYield();
            goto label_107550;
        }
    }
    ctx->pc = 0x107588u;
label_107588:
    // 0x107588: 0x3e00008  jr          $ra
    ctx->pc = 0x107588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10758Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107588u;
            // 0x10758c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107550u: goto label_107550;
            case 0x107560u: goto label_107560;
            case 0x107580u: goto label_107580;
            case 0x107588u: goto label_107588;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107590u;
    // 0x107590: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x107590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x107594: 0x0  nop
    ctx->pc = 0x107594u;
    // NOP
}
