#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_227520
// Address: 0x227520 - 0x227648
void entry_227520_0x227648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_227520_0x227648");
#endif

    ctx->pc = 0x227520u;

    // 0x227520: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x227520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x227524: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x227524u;
    {
        const bool branch_taken_0x227524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227524u;
            // 0x227528: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227524) {
            ctx->pc = 0x22756Cu;
            goto label_22756c;
        }
    }
    ctx->pc = 0x22752Cu;
    // 0x22752c: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x22752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x227530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x227530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227538: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x227538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x22753c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x22753Cu;
    {
        const bool branch_taken_0x22753c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22753Cu;
            // 0x227540: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22753c) {
            ctx->pc = 0x22756Cu;
            goto label_22756c;
        }
    }
    ctx->pc = 0x227544u;
    // 0x227544: 0x0  nop
    ctx->pc = 0x227544u;
    // NOP
label_227548:
    // 0x227548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22754c: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x22754cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x227550: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x227550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227554: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x227554u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x227558: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x227558u;
    {
        const bool branch_taken_0x227558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x227558) {
            ctx->pc = 0x22755Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227558u;
            // 0x22755c: 0xacc500d0  sw          $a1, 0xD0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227560u;
            goto label_227560;
        }
    }
    ctx->pc = 0x227560u;
label_227560:
    // 0x227560: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x227560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227564: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x227564u;
    {
        const bool branch_taken_0x227564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x227568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227564u;
            // 0x227568: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227564) {
            ctx->pc = 0x227548u;
            runtime->cooperativeGuestYield();
            goto label_227548;
        }
    }
    ctx->pc = 0x22756Cu;
label_22756c:
    // 0x22756c: 0x3e00008  jr          $ra
    ctx->pc = 0x22756Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227548u: goto label_227548;
            case 0x227560u: goto label_227560;
            case 0x22756Cu: goto label_22756c;
            case 0x2275B0u: goto label_2275b0;
            case 0x2275B4u: goto label_2275b4;
            case 0x2275E0u: goto label_2275e0;
            case 0x227620u: goto label_227620;
            case 0x227628u: goto label_227628;
            case 0x227640u: goto label_227640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227574u;
    // 0x227574: 0x0  nop
    ctx->pc = 0x227574u;
    // NOP
    // 0x227578: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x227578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22757c: 0x0  nop
    ctx->pc = 0x22757cu;
    // NOP
    // 0x227580: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x227580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x227584: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x227584u;
    {
        const bool branch_taken_0x227584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227584) {
            ctx->pc = 0x227640u;
            goto label_227640;
        }
    }
    ctx->pc = 0x22758Cu;
    // 0x22758c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x22758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x227590: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x227590u;
    {
        const bool branch_taken_0x227590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227590) {
            ctx->pc = 0x227594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x227590u;
            // 0x227594: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2275B4u;
            goto label_2275b4;
        }
    }
    ctx->pc = 0x227598u;
    // 0x227598: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x227598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22759c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22759cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2275a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2275A0u;
    {
        const bool branch_taken_0x2275a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2275A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2275A0u;
            // 0x2275a4: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275a0) {
            ctx->pc = 0x2275B0u;
            goto label_2275b0;
        }
    }
    ctx->pc = 0x2275A8u;
    // 0x2275a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2275a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2275ac: 0x0  nop
    ctx->pc = 0x2275acu;
    // NOP
label_2275b0:
    // 0x2275b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2275b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2275b4:
    // 0x2275b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2275b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2275b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2275B8u;
    {
        const bool branch_taken_0x2275b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2275BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2275B8u;
            // 0x2275bc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275b8) {
            ctx->pc = 0x227640u;
            goto label_227640;
        }
    }
    ctx->pc = 0x2275C0u;
    // 0x2275c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2275c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2275c4: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x2275c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x2275c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2275c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2275cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2275ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2275d0: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x2275d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2275d4: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2275D4u;
    {
        const bool branch_taken_0x2275d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2275D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2275D4u;
            // 0x2275d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275d4) {
            ctx->pc = 0x227628u;
            goto label_227628;
        }
    }
    ctx->pc = 0x2275DCu;
    // 0x2275dc: 0x24a2ffec  addiu       $v0, $a1, -0x14
    ctx->pc = 0x2275dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
label_2275e0:
    // 0x2275e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2275e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275e4: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x2275e4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2275e8: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2275e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2275ec: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x2275ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2275f0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2275F0u;
    {
        const bool branch_taken_0x2275f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2275f0) {
            ctx->pc = 0x2275F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2275F0u;
            // 0x2275f4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x227620u;
            goto label_227620;
        }
    }
    ctx->pc = 0x2275F8u;
    // 0x2275f8: 0x8c6600a8  lw          $a2, 0xA8($v1)
    ctx->pc = 0x2275f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x2275fc: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x2275fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
    // 0x227600: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x227600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x227604: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x227604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x227608: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x227608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x22760c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22760Cu;
    {
        const bool branch_taken_0x22760c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22760Cu;
            // 0x227610: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22760c) {
            ctx->pc = 0x227620u;
            goto label_227620;
        }
    }
    ctx->pc = 0x227614u;
    // 0x227614: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x227614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x227618: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x227618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x22761c: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x22761cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_227620:
    // 0x227620: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x227620u;
    {
        const bool branch_taken_0x227620 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x227624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227620u;
            // 0x227624: 0x24a2ffec  addiu       $v0, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227620) {
            ctx->pc = 0x2275E0u;
            runtime->cooperativeGuestYield();
            goto label_2275e0;
        }
    }
    ctx->pc = 0x227628u;
label_227628:
    // 0x227628: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x227628u;
    {
        const bool branch_taken_0x227628 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x227628) {
            ctx->pc = 0x227640u;
            goto label_227640;
        }
    }
    ctx->pc = 0x227630u;
    // 0x227630: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x227630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227634: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x227634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x227638: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x227638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22763c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22763cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_227640:
    // 0x227640: 0x3e00008  jr          $ra
    ctx->pc = 0x227640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227548u: goto label_227548;
            case 0x227560u: goto label_227560;
            case 0x22756Cu: goto label_22756c;
            case 0x2275B0u: goto label_2275b0;
            case 0x2275B4u: goto label_2275b4;
            case 0x2275E0u: goto label_2275e0;
            case 0x227620u: goto label_227620;
            case 0x227628u: goto label_227628;
            case 0x227640u: goto label_227640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227648u;
}
