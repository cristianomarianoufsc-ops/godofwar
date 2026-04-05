#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154518
// Address: 0x154518 - 0x154740
void sub_00154518_0x154518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154518_0x154518");
#endif

    ctx->pc = 0x154518u;

    // 0x154518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15451c: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x15451cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x154520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x154524: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x154524u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x154528: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x154528u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15452c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15452cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154530: 0xdd820000  ld          $v0, 0x0($t4)
    ctx->pc = 0x154530u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x154534: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x154534u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154538: 0x2529bb98  addiu       $t1, $t1, -0x4468
    ctx->pc = 0x154538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949784));
    // 0x15453c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x15453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x154540: 0xdd820008  ld          $v0, 0x8($t4)
    ctx->pc = 0x154540u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x154544: 0x3a0602d  daddu       $t4, $sp, $zero
    ctx->pc = 0x154544u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154548: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x154548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x15454c: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x15454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x154550: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x154550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154554: 0x8c03c  dsll32      $t8, $t0, 0
    ctx->pc = 0x154554u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 8) << (32 + 0));
    // 0x154558: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x154558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15455c: 0x18103e  dsrl32      $v0, $t8, 0
    ctx->pc = 0x15455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) >> (32 + 0));
    // 0x154560: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x154560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x154564: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x154564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x154568: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x154568u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15456c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15456cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x154570: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x154570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x154574: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x154574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154578: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x154578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x15457c: 0xdd220630  ld          $v0, 0x630($t1)
    ctx->pc = 0x15457cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 1584)));
    // 0x154580: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x154580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x154584: 0xfd2404f0  sd          $a0, 0x4F0($t1)
    ctx->pc = 0x154584u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 1264), GPR_U64(ctx, 4));
    // 0x154588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x154588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15458c: 0x15050006  bne         $t0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15458Cu;
    {
        const bool branch_taken_0x15458c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x154590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15458Cu;
            // 0x154590: 0xfd220630  sd          $v0, 0x630($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 1584), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15458c) {
            ctx->pc = 0x1545A8u;
            goto label_1545a8;
        }
    }
    ctx->pc = 0x154594u;
    // 0x154594: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x154594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154598: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x154598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x15459c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15459cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1545a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1545A0u;
    {
        const bool branch_taken_0x1545a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1545A0u;
            // 0x1545a4: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545a0) {
            ctx->pc = 0x1545D0u;
            goto label_1545d0;
        }
    }
    ctx->pc = 0x1545A8u;
label_1545a8:
    // 0x1545a8: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x1545a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1545ac: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1545acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1545b0: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x1545b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1545b4: 0x3c04fff7  lui         $a0, 0xFFF7
    ctx->pc = 0x1545b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65527 << 16));
    // 0x1545b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1545b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1545bc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1545bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1545c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1545c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1545c4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1545c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1545c8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1545c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1545cc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1545ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1545d0:
    // 0x1545d0: 0xdd820000  ld          $v0, 0x0($t4)
    ctx->pc = 0x1545d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1545d4: 0x9c63f19c  lwu         $v1, -0xE64($v1)
    ctx->pc = 0x1545d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963612)));
    // 0x1545d8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1545d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1545dc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1545e0: 0x9c86f1a0  lwu         $a2, -0xE60($a0)
    ctx->pc = 0x1545e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4294963616)));
    // 0x1545e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1545e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1545e8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1545e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1545ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1545ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1545f0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1545f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1545f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1545f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1545f8: 0x25e3004e  addiu       $v1, $t7, 0x4E
    ctx->pc = 0x1545f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 78));
    // 0x1545fc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1545fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x154600: 0x32982  srl         $a1, $v1, 6
    ctx->pc = 0x154600u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x154604: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x154604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x154608: 0x252a0630  addiu       $t2, $t1, 0x630
    ctx->pc = 0x154608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1584));
    // 0x15460c: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x15460cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x154610: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x154610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x154614: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x154614u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x154618: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x154618u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15461c: 0x4e1014  dsllv       $v0, $t6, $v0
    ctx->pc = 0x15461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x154620: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x154620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x154624: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x154624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x154628: 0x25280318  addiu       $t0, $t1, 0x318
    ctx->pc = 0x154628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 792));
    // 0x15462c: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x15462cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x154630: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x154630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x154634: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x154634u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x154638: 0x25e20042  addiu       $v0, $t7, 0x42
    ctx->pc = 0x154638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 66));
    // 0x15463c: 0x91860003  lbu         $a2, 0x3($t4)
    ctx->pc = 0x15463cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x154640: 0xd83025  or          $a2, $a2, $t8
    ctx->pc = 0x154640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 24));
    // 0x154644: 0x22982  srl         $a1, $v0, 6
    ctx->pc = 0x154644u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x154648: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x154648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15464c: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x15464cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154650: 0x1a52821  addu        $a1, $t5, $a1
    ctx->pc = 0x154650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x154654: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x154654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x154658: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x154658u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15465c: 0x6e1814  dsllv       $v1, $t6, $v1
    ctx->pc = 0x15465cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x154660: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x154660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x154664: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x154664u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154668: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x154668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15466c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x15466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x154670: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x154670u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x154674: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x154674u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x154678: 0xdd820000  ld          $v0, 0x0($t4)
    ctx->pc = 0x154678u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x15467c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x154680: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x154680u;
    {
        const bool branch_taken_0x154680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154680u;
            // 0x154684: 0x25e20047  addiu       $v0, $t7, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154680) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154688u;
    // 0x154688: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x154688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x15468c: 0x34c6360b  ori         $a2, $a2, 0x360B
    ctx->pc = 0x15468cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13835);
    // 0x154690: 0x22182  srl         $a0, $v0, 6
    ctx->pc = 0x154690u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x154694: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x154694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x154698: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x154698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15469c: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x15469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1546a0: 0xae2814  dsllv       $a1, $t6, $a1
    ctx->pc = 0x1546a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1546a4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1546a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1546a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1546a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1546ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1546ACu;
    {
        const bool branch_taken_0x1546ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1546ACu;
            // 0x1546b0: 0x1621021  addu        $v0, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546ac) {
            ctx->pc = 0x1546E0u;
            goto label_1546e0;
        }
    }
    ctx->pc = 0x1546B4u;
    // 0x1546b4: 0x0  nop
    ctx->pc = 0x1546b4u;
    // NOP
label_1546b8:
    // 0x1546b8: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x1546b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x1546bc: 0x22182  srl         $a0, $v0, 6
    ctx->pc = 0x1546bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1546c0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1546c4: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x1546c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1546c8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1546c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1546cc: 0xae2814  dsllv       $a1, $t6, $a1
    ctx->pc = 0x1546ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1546d0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1546d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1546d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1546d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1546d8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1546d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1546dc: 0x0  nop
    ctx->pc = 0x1546dcu;
    // NOP
label_1546e0:
    // 0x1546e0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1546e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1546e4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1546e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1546e8: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x1546e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x1546ec: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1546ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1546f0: 0x19103c  dsll32      $v0, $t9, 0
    ctx->pc = 0x1546f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) << (32 + 0));
    // 0x1546f4: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x1546f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x1546f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1546f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1546fc: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x1546fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x154700: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x154700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x154704: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x154704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x154708: 0x182a3a  dsrl        $a1, $t8, 8
    ctx->pc = 0x154708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) >> 8);
    // 0x15470c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15470cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x154710: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x154710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x154714: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x154714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x154718: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x154718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15471c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15471cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x154720: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x154720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154724: 0xdd220630  ld          $v0, 0x630($t1)
    ctx->pc = 0x154724u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 1584)));
    // 0x154728: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15472c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x15472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x154730: 0xfd230320  sd          $v1, 0x320($t1)
    ctx->pc = 0x154730u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 800), GPR_U64(ctx, 3));
    // 0x154734: 0xfd220630  sd          $v0, 0x630($t1)
    ctx->pc = 0x154734u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 1584), GPR_U64(ctx, 2));
    // 0x154738: 0x3e00008  jr          $ra
    ctx->pc = 0x154738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154738u;
            // 0x15473c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1545A8u: goto label_1545a8;
            case 0x1545D0u: goto label_1545d0;
            case 0x1546B8u: goto label_1546b8;
            case 0x1546E0u: goto label_1546e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154740u;
}
