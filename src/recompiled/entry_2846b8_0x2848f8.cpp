#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2846b8
// Address: 0x2846b8 - 0x2848f8
void entry_2846b8_0x2848f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2846b8_0x2848f8");
#endif

    ctx->pc = 0x2846b8u;

    // 0x2846b8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2846b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846bc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2846bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2846c0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x2846c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2846c4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2846C4u;
    {
        const bool branch_taken_0x2846c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2846c4) {
            ctx->pc = 0x2846C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2846C4u;
            // 0x2846c8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2846D4u;
            goto label_2846d4;
        }
    }
    ctx->pc = 0x2846CCu;
label_2846cc:
    // 0x2846cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2846CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2846D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2846CCu;
            // 0x2846d0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2846CCu: goto label_2846cc;
            case 0x2846D4u: goto label_2846d4;
            case 0x2846E0u: goto label_2846e0;
            case 0x2846E8u: goto label_2846e8;
            case 0x284710u: goto label_284710;
            case 0x284754u: goto label_284754;
            case 0x284798u: goto label_284798;
            case 0x2847BCu: goto label_2847bc;
            case 0x2847C4u: goto label_2847c4;
            case 0x2847D0u: goto label_2847d0;
            case 0x2847F4u: goto label_2847f4;
            case 0x28480Cu: goto label_28480c;
            case 0x284818u: goto label_284818;
            case 0x28482Cu: goto label_28482c;
            case 0x284844u: goto label_284844;
            case 0x284854u: goto label_284854;
            case 0x284880u: goto label_284880;
            case 0x2848ACu: goto label_2848ac;
            case 0x2848BCu: goto label_2848bc;
            case 0x2848F0u: goto label_2848f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2846D4u;
label_2846d4:
    // 0x2846d4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2846d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2846d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2846D8u;
    {
        const bool branch_taken_0x2846d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2846DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2846D8u;
            // 0x2846dc: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846d8) {
            ctx->pc = 0x2846E8u;
            goto label_2846e8;
        }
    }
    ctx->pc = 0x2846E0u;
label_2846e0:
    // 0x2846e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2846E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2846E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2846E0u;
            // 0x2846e4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2846CCu: goto label_2846cc;
            case 0x2846D4u: goto label_2846d4;
            case 0x2846E0u: goto label_2846e0;
            case 0x2846E8u: goto label_2846e8;
            case 0x284710u: goto label_284710;
            case 0x284754u: goto label_284754;
            case 0x284798u: goto label_284798;
            case 0x2847BCu: goto label_2847bc;
            case 0x2847C4u: goto label_2847c4;
            case 0x2847D0u: goto label_2847d0;
            case 0x2847F4u: goto label_2847f4;
            case 0x28480Cu: goto label_28480c;
            case 0x284818u: goto label_284818;
            case 0x28482Cu: goto label_28482c;
            case 0x284844u: goto label_284844;
            case 0x284854u: goto label_284854;
            case 0x284880u: goto label_284880;
            case 0x2848ACu: goto label_2848ac;
            case 0x2848BCu: goto label_2848bc;
            case 0x2848F0u: goto label_2848f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2846E8u;
label_2846e8:
    // 0x2846e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2846E8u;
    {
        const bool branch_taken_0x2846e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2846E8u;
            // 0x2846ec: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846e8) {
            ctx->pc = 0x284710u;
            goto label_284710;
        }
    }
    ctx->pc = 0x2846F0u;
    // 0x2846f0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2846F0u;
    {
        const bool branch_taken_0x2846f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2846f0) {
            ctx->pc = 0x2846CCu;
            runtime->cooperativeGuestYield();
            goto label_2846cc;
        }
    }
    ctx->pc = 0x2846F8u;
    // 0x2846f8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2846f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2846fc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2846fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x284700: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x284700u;
    {
        const bool branch_taken_0x284700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x284704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284700u;
            // 0x284704: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284700) {
            ctx->pc = 0x2846CCu;
            runtime->cooperativeGuestYield();
            goto label_2846cc;
        }
    }
    ctx->pc = 0x284708u;
    // 0x284708: 0x3e00008  jr          $ra
    ctx->pc = 0x284708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284708u;
            // 0x28470c: 0x24426948  addiu       $v0, $v0, 0x6948 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2846CCu: goto label_2846cc;
            case 0x2846D4u: goto label_2846d4;
            case 0x2846E0u: goto label_2846e0;
            case 0x2846E8u: goto label_2846e8;
            case 0x284710u: goto label_284710;
            case 0x284754u: goto label_284754;
            case 0x284798u: goto label_284798;
            case 0x2847BCu: goto label_2847bc;
            case 0x2847C4u: goto label_2847c4;
            case 0x2847D0u: goto label_2847d0;
            case 0x2847F4u: goto label_2847f4;
            case 0x28480Cu: goto label_28480c;
            case 0x284818u: goto label_284818;
            case 0x28482Cu: goto label_28482c;
            case 0x284844u: goto label_284844;
            case 0x284854u: goto label_284854;
            case 0x284880u: goto label_284880;
            case 0x2848ACu: goto label_2848ac;
            case 0x2848BCu: goto label_2848bc;
            case 0x2848F0u: goto label_2848f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284710u;
label_284710:
    // 0x284710: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x284710u;
    {
        const bool branch_taken_0x284710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284710u;
            // 0x284714: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284710) {
            ctx->pc = 0x2846E0u;
            runtime->cooperativeGuestYield();
            goto label_2846e0;
        }
    }
    ctx->pc = 0x284718u;
    // 0x284718: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x284718u;
    {
        const bool branch_taken_0x284718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28471Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284718u;
            // 0x28471c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284718) {
            ctx->pc = 0x284754u;
            goto label_284754;
        }
    }
    ctx->pc = 0x284720u;
    // 0x284720: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x284720u;
    {
        const bool branch_taken_0x284720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284720u;
            // 0x284724: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284720) {
            ctx->pc = 0x2846CCu;
            runtime->cooperativeGuestYield();
            goto label_2846cc;
        }
    }
    ctx->pc = 0x284728u;
    // 0x284728: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x284728u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28472c: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x28472cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x284730: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x284730u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x284734: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x284734u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x284738: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x284738u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x28473c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x28473cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x284740: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x284740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x284744: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x284744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x284748: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x284748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x28474c: 0x3e00008  jr          $ra
    ctx->pc = 0x28474Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28474Cu;
            // 0x284750: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2846CCu: goto label_2846cc;
            case 0x2846D4u: goto label_2846d4;
            case 0x2846E0u: goto label_2846e0;
            case 0x2846E8u: goto label_2846e8;
            case 0x284710u: goto label_284710;
            case 0x284754u: goto label_284754;
            case 0x284798u: goto label_284798;
            case 0x2847BCu: goto label_2847bc;
            case 0x2847C4u: goto label_2847c4;
            case 0x2847D0u: goto label_2847d0;
            case 0x2847F4u: goto label_2847f4;
            case 0x28480Cu: goto label_28480c;
            case 0x284818u: goto label_284818;
            case 0x28482Cu: goto label_28482c;
            case 0x284844u: goto label_284844;
            case 0x284854u: goto label_284854;
            case 0x284880u: goto label_284880;
            case 0x2848ACu: goto label_2848ac;
            case 0x2848BCu: goto label_2848bc;
            case 0x2848F0u: goto label_2848f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284754u;
label_284754:
    // 0x284754: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x284754u;
    {
        const bool branch_taken_0x284754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284754u;
            // 0x284758: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284754) {
            ctx->pc = 0x2846E0u;
            runtime->cooperativeGuestYield();
            goto label_2846e0;
        }
    }
    ctx->pc = 0x28475Cu;
    // 0x28475c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x28475cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x284760: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x284760u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x284764: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x284764u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x284768: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x284768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x28476c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28476cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284770: 0x32023  negu        $a0, $v1
    ctx->pc = 0x284770u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x284774: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x284774u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x284778: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x284778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x28477c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x28477Cu;
    {
        const bool branch_taken_0x28477c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28477Cu;
            // 0x284780: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28477c) {
            ctx->pc = 0x2847F4u;
            goto label_2847f4;
        }
    }
    ctx->pc = 0x284784u;
    // 0x284784: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x284784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x284788: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x284788u;
    {
        const bool branch_taken_0x284788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284788u;
            // 0x28478c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284788) {
            ctx->pc = 0x2847BCu;
            goto label_2847bc;
        }
    }
    ctx->pc = 0x284790u;
    // 0x284790: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x284790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x284794: 0x0  nop
    ctx->pc = 0x284794u;
    // NOP
label_284798:
    // 0x284798: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x284798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x28479c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x28479cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2847a0: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x2847a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2847a4: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x2847a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2847a8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2847a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2847ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2847ACu;
    {
        const bool branch_taken_0x2847ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2847ac) {
            ctx->pc = 0x284798u;
            runtime->cooperativeGuestYield();
            goto label_284798;
        }
    }
    ctx->pc = 0x2847B4u;
    // 0x2847b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2847B4u;
    {
        const bool branch_taken_0x2847b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2847B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2847B4u;
            // 0x2847b8: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847b4) {
            ctx->pc = 0x2847C4u;
            goto label_2847c4;
        }
    }
    ctx->pc = 0x2847BCu;
label_2847bc:
    // 0x2847bc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2847bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2847c0: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x2847c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_2847c4:
    // 0x2847c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2847C4u;
    {
        const bool branch_taken_0x2847c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2847c4) {
            ctx->pc = 0x284818u;
            goto label_284818;
        }
    }
    ctx->pc = 0x2847CCu;
    // 0x2847cc: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x2847ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_2847d0:
    // 0x2847d0: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x2847d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x2847d4: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x2847d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x2847d8: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x2847d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2847dc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2847dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2847e0: 0x0  nop
    ctx->pc = 0x2847e0u;
    // NOP
    // 0x2847e4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2847E4u;
    {
        const bool branch_taken_0x2847e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2847e4) {
            ctx->pc = 0x2847D0u;
            runtime->cooperativeGuestYield();
            goto label_2847d0;
        }
    }
    ctx->pc = 0x2847ECu;
    // 0x2847ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2847ECu;
    {
        const bool branch_taken_0x2847ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2847F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2847ECu;
            // 0x2847f0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847ec) {
            ctx->pc = 0x284818u;
            goto label_284818;
        }
    }
    ctx->pc = 0x2847F4u;
label_2847f4:
    // 0x2847f4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x2847f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2847f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2847F8u;
    {
        const bool branch_taken_0x2847f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2847FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2847F8u;
            // 0x2847fc: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847f8) {
            ctx->pc = 0x28480Cu;
            goto label_28480c;
        }
    }
    ctx->pc = 0x284800u;
    // 0x284800: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x284800u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284804: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x284804u;
    {
        const bool branch_taken_0x284804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284804u;
            // 0x284808: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284804) {
            ctx->pc = 0x284818u;
            goto label_284818;
        }
    }
    ctx->pc = 0x28480Cu;
label_28480c:
    // 0x28480c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x28480cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284810: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x284810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x284814: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x284814u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284818:
    // 0x284818: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x284818u;
    {
        const bool branch_taken_0x284818 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x28481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284818u;
            // 0x28481c: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284818) {
            ctx->pc = 0x2848ACu;
            goto label_2848ac;
        }
    }
    ctx->pc = 0x284820u;
    // 0x284820: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284820u;
    {
        const bool branch_taken_0x284820 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x284824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284820u;
            // 0x284824: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284820) {
            ctx->pc = 0x28482Cu;
            goto label_28482c;
        }
    }
    ctx->pc = 0x284828u;
    // 0x284828: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x284828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_28482c:
    // 0x28482c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28482Cu;
    {
        const bool branch_taken_0x28482c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x284830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28482Cu;
            // 0x284830: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28482c) {
            ctx->pc = 0x284844u;
            goto label_284844;
        }
    }
    ctx->pc = 0x284834u;
    // 0x284834: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x284834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x284838: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x284838u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x28483c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28483Cu;
    {
        const bool branch_taken_0x28483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28483Cu;
            // 0x284840: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28483c) {
            ctx->pc = 0x284854u;
            goto label_284854;
        }
    }
    ctx->pc = 0x284844u;
label_284844:
    // 0x284844: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x284844u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x284848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28484c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x28484cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x284850: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x284850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_284854:
    // 0x284854: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x284854u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x284858: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28485c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x28485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x284860: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x284860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x284864: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x284864u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x284868: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x284868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28486c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28486Cu;
    {
        const bool branch_taken_0x28486c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28486Cu;
            // 0x284870: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28486c) {
            ctx->pc = 0x2848BCu;
            goto label_2848bc;
        }
    }
    ctx->pc = 0x284874u;
    // 0x284874: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x284874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284878: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x284878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x28487c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x28487cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_284880:
    // 0x284880: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x284880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x284884: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x284884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x284888: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x284888u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x28488c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x28488cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x284890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x284890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x284894: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x284894u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x284898: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x284898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x28489c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28489Cu;
    {
        const bool branch_taken_0x28489c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28489Cu;
            // 0x2848a0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28489c) {
            ctx->pc = 0x284880u;
            runtime->cooperativeGuestYield();
            goto label_284880;
        }
    }
    ctx->pc = 0x2848A4u;
    // 0x2848a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2848A4u;
    {
        const bool branch_taken_0x2848a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2848A4u;
            // 0x2848a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848a4) {
            ctx->pc = 0x2848BCu;
            goto label_2848bc;
        }
    }
    ctx->pc = 0x2848ACu;
label_2848ac:
    // 0x2848ac: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x2848acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x2848b0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x2848b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2848b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2848b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848b8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x2848b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_2848bc:
    // 0x2848bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2848bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2848c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2848c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2848c4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2848c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2848c8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2848c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2848cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2848CCu;
    {
        const bool branch_taken_0x2848cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2848CCu;
            // 0x2848d0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848cc) {
            ctx->pc = 0x2848F0u;
            goto label_2848f0;
        }
    }
    ctx->pc = 0x2848D4u;
    // 0x2848d4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2848d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2848d8: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x2848d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x2848dc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2848dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2848e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2848e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2848e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2848e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2848e8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x2848e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x2848ec: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2848ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_2848f0:
    // 0x2848f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2848F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2848F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2848F0u;
            // 0x2848f4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2846CCu: goto label_2846cc;
            case 0x2846D4u: goto label_2846d4;
            case 0x2846E0u: goto label_2846e0;
            case 0x2846E8u: goto label_2846e8;
            case 0x284710u: goto label_284710;
            case 0x284754u: goto label_284754;
            case 0x284798u: goto label_284798;
            case 0x2847BCu: goto label_2847bc;
            case 0x2847C4u: goto label_2847c4;
            case 0x2847D0u: goto label_2847d0;
            case 0x2847F4u: goto label_2847f4;
            case 0x28480Cu: goto label_28480c;
            case 0x284818u: goto label_284818;
            case 0x28482Cu: goto label_28482c;
            case 0x284844u: goto label_284844;
            case 0x284854u: goto label_284854;
            case 0x284880u: goto label_284880;
            case 0x2848ACu: goto label_2848ac;
            case 0x2848BCu: goto label_2848bc;
            case 0x2848F0u: goto label_2848f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2848F8u;
}
