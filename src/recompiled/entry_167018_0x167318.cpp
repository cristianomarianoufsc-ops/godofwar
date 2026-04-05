#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_167018
// Address: 0x167018 - 0x167318
void entry_167018_0x167318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_167018_0x167318");
#endif

    ctx->pc = 0x167018u;

    // 0x167018: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x167018u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16701c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16701cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167020: 0x8da30014  lw          $v1, 0x14($t5)
    ctx->pc = 0x167020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x167024: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x167024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167028: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x167028u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16702c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x16702cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167030: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x167030u;
    {
        const bool branch_taken_0x167030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167030u;
            // 0x167034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167030) {
            ctx->pc = 0x16707Cu;
            goto label_16707c;
        }
    }
    ctx->pc = 0x167038u;
    // 0x167038: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x167038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x16703c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16703Cu;
    {
        const bool branch_taken_0x16703c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x167040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16703Cu;
            // 0x167040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16703c) {
            ctx->pc = 0x167054u;
            goto label_167054;
        }
    }
    ctx->pc = 0x167044u;
    // 0x167044: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x167044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x167048: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x167048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16704c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x16704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x167050: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x167050u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_167054:
    // 0x167054: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167054u;
    {
        const bool branch_taken_0x167054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x167054) {
            ctx->pc = 0x167064u;
            goto label_167064;
        }
    }
    ctx->pc = 0x16705Cu;
    // 0x16705c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16705Cu;
    {
        const bool branch_taken_0x16705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16705Cu;
            // 0x167060: 0x84840000  lh          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16705c) {
            ctx->pc = 0x16706Cu;
            goto label_16706c;
        }
    }
    ctx->pc = 0x167064u;
label_167064:
    // 0x167064: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x167064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x167068: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x167068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_16706c:
    // 0x16706c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x16706cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167070: 0x946e0020  lhu         $t6, 0x20($v1)
    ctx->pc = 0x167070u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x167074: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x167074u;
    {
        const bool branch_taken_0x167074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167074u;
            // 0x167078: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167074) {
            ctx->pc = 0x167088u;
            goto label_167088;
        }
    }
    ctx->pc = 0x16707Cu;
label_16707c:
    // 0x16707c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16707cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167080: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x167080u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167084: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x167084u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167088:
    // 0x167088: 0x31820004  andi        $v0, $t4, 0x4
    ctx->pc = 0x167088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4);
    // 0x16708c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16708Cu;
    {
        const bool branch_taken_0x16708c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16708Cu;
            // 0x167090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16708c) {
            ctx->pc = 0x1670A0u;
            goto label_1670a0;
        }
    }
    ctx->pc = 0x167094u;
    // 0x167094: 0x31820002  andi        $v0, $t4, 0x2
    ctx->pc = 0x167094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2);
    // 0x167098: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x167098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16709c: 0x2380b  movn        $a3, $zero, $v0
    ctx->pc = 0x16709cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1670a0:
    // 0x1670a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1670a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1670a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1670a8: 0x1821024  and         $v0, $t4, $v0
    ctx->pc = 0x1670a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x1670ac: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1670acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670b0: 0x2500a  movz        $t2, $zero, $v0
    ctx->pc = 0x1670b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
    // 0x1670b4: 0x8da60010  lw          $a2, 0x10($t5)
    ctx->pc = 0x1670b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1670b8: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x1670b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x1670bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1670BCu;
    {
        const bool branch_taken_0x1670bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670BCu;
            // 0x1670c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670bc) {
            ctx->pc = 0x1670D8u;
            goto label_1670d8;
        }
    }
    ctx->pc = 0x1670C4u;
    // 0x1670c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1670c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1670c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1670c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670cc: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x1670ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x1670d0: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1670d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1670d4: 0x0  nop
    ctx->pc = 0x1670d4u;
    // NOP
label_1670d8:
    // 0x1670d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1670D8u;
    {
        const bool branch_taken_0x1670d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1670d8) {
            ctx->pc = 0x1670E8u;
            goto label_1670e8;
        }
    }
    ctx->pc = 0x1670E0u;
    // 0x1670e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1670E0u;
    {
        const bool branch_taken_0x1670e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670E0u;
            // 0x1670e4: 0x84620000  lh          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670e0) {
            ctx->pc = 0x1670F0u;
            goto label_1670f0;
        }
    }
    ctx->pc = 0x1670E8u;
label_1670e8:
    // 0x1670e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1670e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1670ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1670ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1670f0:
    // 0x1670f0: 0x90c3002c  lbu         $v1, 0x2C($a2)
    ctx->pc = 0x1670f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1670f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1670f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1670f8: 0x94c50020  lhu         $a1, 0x20($a2)
    ctx->pc = 0x1670f8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1670fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1670fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x167100: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x167100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x167104: 0x90c40028  lbu         $a0, 0x28($a2)
    ctx->pc = 0x167104u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x167108: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16710c: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x16710cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x167110: 0x90c30029  lbu         $v1, 0x29($a2)
    ctx->pc = 0x167110u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
    // 0x167114: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x167114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x167118: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x167118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16711c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x16711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x167120: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x167120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x167124: 0x1820bc  dsll32      $a0, $t8, 2
    ctx->pc = 0x167124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 2));
    // 0x167128: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16712c: 0x718fc  dsll32      $v1, $a3, 3
    ctx->pc = 0x16712cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 3));
    // 0x167130: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x167130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x167134: 0x8217c  dsll32      $a0, $t0, 5
    ctx->pc = 0x167134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 5));
    // 0x167138: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16713c: 0xe1cfc  dsll32      $v1, $t6, 19
    ctx->pc = 0x16713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 19));
    // 0x167140: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x167140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x167144: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x167148: 0xf277c  dsll32      $a0, $t7, 29
    ctx->pc = 0x167148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) << (32 + 29));
    // 0x16714c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x16714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x167150: 0x8da30018  lw          $v1, 0x18($t5)
    ctx->pc = 0x167150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x167154: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x167154u;
    {
        const bool branch_taken_0x167154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167154u;
            // 0x167158: 0xfd220000  sd          $v0, 0x0($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167154) {
            ctx->pc = 0x1672C0u;
            goto label_1672c0;
        }
    }
    ctx->pc = 0x16715Cu;
    // 0x16715c: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x16715cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x167160: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x167160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167164: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x167164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_167168:
    // 0x167168: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16716c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x16716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x167170: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x167170u;
    {
        const bool branch_taken_0x167170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167170u;
            // 0x167174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167170) {
            ctx->pc = 0x167184u;
            goto label_167184;
        }
    }
    ctx->pc = 0x167178u;
    // 0x167178: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x167178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16717c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x16717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x167180: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x167180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_167184:
    // 0x167184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167184u;
    {
        const bool branch_taken_0x167184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167184) {
            ctx->pc = 0x167194u;
            goto label_167194;
        }
    }
    ctx->pc = 0x16718Cu;
    // 0x16718c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16718Cu;
    {
        const bool branch_taken_0x16718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16718Cu;
            // 0x167190: 0x84660000  lh          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16718c) {
            ctx->pc = 0x16719Cu;
            goto label_16719c;
        }
    }
    ctx->pc = 0x167194u;
label_167194:
    // 0x167194: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x167194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x167198: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x167198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_16719c:
    // 0x16719c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x16719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1671a0: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x1671a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1671a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1671a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1671a8: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x1671a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1671ac: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x1671acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1671b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1671b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1671b4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1671b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1671b8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1671b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1671bc: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1671bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1671c0: 0x8ce70018  lw          $a3, 0x18($a3)
    ctx->pc = 0x1671c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1671c4: 0xa2100a  movz        $v0, $a1, $v0
    ctx->pc = 0x1671c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1671c8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1671c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1671cc: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1671CCu;
    {
        const bool branch_taken_0x1671cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1671D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671CCu;
            // 0x1671d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671cc) {
            ctx->pc = 0x167168u;
            runtime->cooperativeGuestYield();
            goto label_167168;
        }
    }
    ctx->pc = 0x1671D4u;
    // 0x1671d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1671d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1671d8: 0x29670004  slti        $a3, $t3, 0x4
    ctx->pc = 0x1671d8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1671dc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1671dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1671e0: 0x9fa20000  lwu         $v0, 0x0($sp)
    ctx->pc = 0x1671e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1671e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1671e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1671e8: 0x31cba  dsrl        $v1, $v1, 18
    ctx->pc = 0x1671e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 18);
    // 0x1671ec: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1671ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1671f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1671f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1671f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1671f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1671f8: 0x9fa50010  lwu         $a1, 0x10($sp)
    ctx->pc = 0x1671f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1671fc: 0x4233a  dsrl        $a0, $a0, 12
    ctx->pc = 0x1671fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 12);
    // 0x167200: 0x9fa30014  lwu         $v1, 0x14($sp)
    ctx->pc = 0x167200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x167204: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x167204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x167208: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x167208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x16720c: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x16720cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x167210: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x167210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x167214: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x167214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x167218: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x167218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16721c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x167220: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x167220u;
    {
        const bool branch_taken_0x167220 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x167224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167220u;
            // 0x167224: 0xfd220018  sd          $v0, 0x18($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167220) {
            ctx->pc = 0x16726Cu;
            goto label_16726c;
        }
    }
    ctx->pc = 0x167228u;
    // 0x167228: 0x9fa3001c  lwu         $v1, 0x1C($sp)
    ctx->pc = 0x167228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x16722c: 0x9fa20018  lwu         $v0, 0x18($sp)
    ctx->pc = 0x16722cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167230: 0x9fa40020  lwu         $a0, 0x20($sp)
    ctx->pc = 0x167230u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167234: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x167234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x167238: 0x9fa60024  lwu         $a2, 0x24($sp)
    ctx->pc = 0x167238u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16723c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x167240: 0x9fa50028  lwu         $a1, 0x28($sp)
    ctx->pc = 0x167240u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167244: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x167244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x167248: 0x9fa3002c  lwu         $v1, 0x2C($sp)
    ctx->pc = 0x167248u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x16724c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x16724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x167250: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x167250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x167254: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x167254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x167258: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x167258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x16725c: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x16725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x167260: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x167260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x167264: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x167268: 0xfd220020  sd          $v0, 0x20($t1)
    ctx->pc = 0x167268u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 32), GPR_U64(ctx, 2));
label_16726c:
    // 0x16726c: 0x31828000  andi        $v0, $t4, 0x8000
    ctx->pc = 0x16726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32768);
    // 0x167270: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x167270u;
    {
        const bool branch_taken_0x167270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167270u;
            // 0x167274: 0xa1978  dsll        $v1, $t2, 5 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << 5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167270) {
            ctx->pc = 0x16729Cu;
            goto label_16729c;
        }
    }
    ctx->pc = 0x167278u;
    // 0x167278: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x167278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x16727c: 0x217ba  dsrl        $v0, $v0, 30
    ctx->pc = 0x16727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 30);
    // 0x167280: 0x9da40058  lwu         $a0, 0x58($t5)
    ctx->pc = 0x167280u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 13), 88)));
    // 0x167284: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x167288: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x167288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x16728c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x16728cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x167290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x167294: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x167294u;
    {
        const bool branch_taken_0x167294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167294u;
            // 0x167298: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167294) {
            ctx->pc = 0x1672D4u;
            goto label_1672d4;
        }
    }
    ctx->pc = 0x16729Cu;
label_16729c:
    // 0x16729c: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x16729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1672a0: 0x217ba  dsrl        $v0, $v0, 30
    ctx->pc = 0x1672a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 30);
    // 0x1672a4: 0x9da40058  lwu         $a0, 0x58($t5)
    ctx->pc = 0x1672a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 13), 88)));
    // 0x1672a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1672a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1672ac: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1672acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1672b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1672b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1672b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1672b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1672b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1672B8u;
    {
        const bool branch_taken_0x1672b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1672B8u;
            // 0x1672bc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672b8) {
            ctx->pc = 0x1672D4u;
            goto label_1672d4;
        }
    }
    ctx->pc = 0x1672C0u;
label_1672c0:
    // 0x1672c0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1672c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1672c4: 0xa1178  dsll        $v0, $t2, 5
    ctx->pc = 0x1672c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 5);
    // 0x1672c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1672c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1672cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1672ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1672d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1672d4:
    // 0x1672d4: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x1672d4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x1672d8: 0x3c0200c0  lui         $v0, 0xC0
    ctx->pc = 0x1672d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)192 << 16));
    // 0x1672dc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1672dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1672e0: 0x1821024  and         $v0, $t4, $v0
    ctx->pc = 0x1672e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x1672e4: 0x1831824  and         $v1, $t4, $v1
    ctx->pc = 0x1672e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x1672e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1672e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1672ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1672ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1672f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1672f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1672f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1672f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1672f8: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x1672f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
    // 0x1672fc: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x1672fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x167300: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x167300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x167304: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x167304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x167308: 0xfd230010  sd          $v1, 0x10($t1)
    ctx->pc = 0x167308u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 3));
    // 0x16730c: 0x3e00008  jr          $ra
    ctx->pc = 0x16730Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16730Cu;
            // 0x167310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167054u: goto label_167054;
            case 0x167064u: goto label_167064;
            case 0x16706Cu: goto label_16706c;
            case 0x16707Cu: goto label_16707c;
            case 0x167088u: goto label_167088;
            case 0x1670A0u: goto label_1670a0;
            case 0x1670D8u: goto label_1670d8;
            case 0x1670E8u: goto label_1670e8;
            case 0x1670F0u: goto label_1670f0;
            case 0x167168u: goto label_167168;
            case 0x167184u: goto label_167184;
            case 0x167194u: goto label_167194;
            case 0x16719Cu: goto label_16719c;
            case 0x16726Cu: goto label_16726c;
            case 0x16729Cu: goto label_16729c;
            case 0x1672C0u: goto label_1672c0;
            case 0x1672D4u: goto label_1672d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167314u;
    // 0x167314: 0x0  nop
    ctx->pc = 0x167314u;
    // NOP
}
