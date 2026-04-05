#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295568
// Address: 0x295568 - 0x296328
void sub_00295568_0x295568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295568_0x295568");
#endif

    ctx->pc = 0x295568u;

    // 0x295568: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x295568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x29556c: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x29556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x295570: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x295570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x295574: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x295574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x295578: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x295578u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29557c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x29557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x295580: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x295580u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295584: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x295584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
    // 0x295588: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x295588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x29558c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x29558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x295590: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x295590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x295594: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x295594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x295598: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x295598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x29559c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x29559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2955a0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2955a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2955a4: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x2955a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x2955a8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2955a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2955ac: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x2955acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2955b0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2955b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2955b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2955b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955b8: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
    ctx->pc = 0x2955B8u;
    {
        const bool branch_taken_0x2955b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2955B8u;
            // 0x2955bc: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955b8) {
            ctx->pc = 0x29622Cu;
            goto label_29622c;
        }
    }
    ctx->pc = 0x2955C0u;
    // 0x2955c0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2955c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2955c4: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x2955c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_2955c8:
    // 0x2955c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2955c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2955cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2955ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955d0: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x2955d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2955d4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2955d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2955d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2955d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955dc: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2955dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2955e0: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
    ctx->pc = 0x2955E0u;
    {
        const bool branch_taken_0x2955e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2955E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2955E0u;
            // 0x2955e4: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955e0) {
            ctx->pc = 0x2961E4u;
            goto label_2961e4;
        }
    }
    ctx->pc = 0x2955E8u;
label_2955e8:
    // 0x2955e8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2955e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2955ec: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x2955ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2955f0: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x2955f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x2955f4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2955f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2955f8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2955f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2955fc: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x2955fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x295600: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
    ctx->pc = 0x295600u;
    {
        const bool branch_taken_0x295600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295600u;
            // 0x295604: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295600) {
            ctx->pc = 0x295D34u;
            goto label_295d34;
        }
    }
    ctx->pc = 0x295608u;
    // 0x295608: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x295608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x29560c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x29560cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x295610: 0x244268e0  addiu       $v0, $v0, 0x68E0
    ctx->pc = 0x295610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26848));
    // 0x295614: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x295614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295618: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x295618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29561c: 0x800008  jr          $a0
    ctx->pc = 0x29561Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295684u: goto label_295684;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x2958CCu: goto label_2958cc;
            case 0x2959E4u: goto label_2959e4;
            case 0x295AA8u: goto label_295aa8;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295D34u: goto label_295d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x295624u;
label_295624:
    // 0x295624: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x295624u;
    {
        const bool branch_taken_0x295624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295624u;
            // 0x295628: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295624) {
            ctx->pc = 0x2955E8u;
            runtime->cooperativeGuestYield();
            goto label_2955e8;
        }
    }
    ctx->pc = 0x29562Cu;
label_29562c:
    // 0x29562c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x29562Cu;
    {
        const bool branch_taken_0x29562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29562Cu;
            // 0x295630: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29562c) {
            ctx->pc = 0x2955E8u;
            runtime->cooperativeGuestYield();
            goto label_2955e8;
        }
    }
    ctx->pc = 0x295634u;
label_295634:
    // 0x295634: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x295634u;
    {
        const bool branch_taken_0x295634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295634u;
            // 0x295638: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295634) {
            ctx->pc = 0x2955E8u;
            runtime->cooperativeGuestYield();
            goto label_2955e8;
        }
    }
    ctx->pc = 0x29563Cu;
label_29563c:
    // 0x29563c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29563cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295640: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x295640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295644: 0x0  nop
    ctx->pc = 0x295644u;
    // NOP
label_295648:
    // 0x295648: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x295648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x29564c: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x29564cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x295650: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x295650u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295654: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x295654u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x295658: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x295658u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x29565c: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x29565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x295660: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x295660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x295664: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x295664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x295668: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x295668u;
    {
        const bool branch_taken_0x295668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29566Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295668u;
            // 0x29566c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295668) {
            ctx->pc = 0x295648u;
            runtime->cooperativeGuestYield();
            goto label_295648;
        }
    }
    ctx->pc = 0x295670u;
    // 0x295670: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x295670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_295674:
    // 0x295674: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
    ctx->pc = 0x295674u;
    {
        const bool branch_taken_0x295674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x295678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295674u;
            // 0x295678: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295674) {
            ctx->pc = 0x296214u;
            goto label_296214;
        }
    }
    ctx->pc = 0x29567Cu;
    // 0x29567c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x29567Cu;
    {
        const bool branch_taken_0x29567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29567Cu;
            // 0x295680: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29567c) {
            ctx->pc = 0x2955E8u;
            runtime->cooperativeGuestYield();
            goto label_2955e8;
        }
    }
    ctx->pc = 0x295684u;
label_295684:
    // 0x295684: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x295684u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295688: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x295688u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
    // 0x29568c: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x29568cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x295690: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x295690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x295694: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x295694u;
    {
        const bool branch_taken_0x295694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x295698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295694u;
            // 0x295698: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295694) {
            ctx->pc = 0x2956B8u;
            goto label_2956b8;
        }
    }
    ctx->pc = 0x29569Cu;
    // 0x29569c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x29569cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x2956a0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2956a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2956a4: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x2956a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
    // 0x2956a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2956a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2956ac: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2956acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2956b0: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x2956B0u;
    {
        const bool branch_taken_0x2956b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2956B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2956B0u;
            // 0x2956b4: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956b0) {
            ctx->pc = 0x2955E8u;
            runtime->cooperativeGuestYield();
            goto label_2955e8;
        }
    }
    ctx->pc = 0x2956B8u;
label_2956b8:
    // 0x2956b8: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x2956b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x2956bc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2956bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2956c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2956C0u;
    {
        const bool branch_taken_0x2956c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2956C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2956C0u;
            // 0x2956c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956c0) {
            ctx->pc = 0x2956F8u;
            goto label_2956f8;
        }
    }
    ctx->pc = 0x2956C8u;
    // 0x2956c8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2956c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2956cc: 0x0  nop
    ctx->pc = 0x2956ccu;
    // NOP
label_2956d0:
    // 0x2956d0: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x2956d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2956d4: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x2956d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2956d8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2956d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2956dc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2956dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2956e0: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x2956e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2956e4: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x2956e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2956e8: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x2956e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x2956ec: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2956ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2956f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2956F0u;
    {
        const bool branch_taken_0x2956f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2956F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2956F0u;
            // 0x2956f4: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956f0) {
            ctx->pc = 0x2956D0u;
            runtime->cooperativeGuestYield();
            goto label_2956d0;
        }
    }
    ctx->pc = 0x2956F8u;
label_2956f8:
    // 0x2956f8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2956f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2956fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2956fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295700: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x295700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x295704: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x295704u;
    {
        const bool branch_taken_0x295704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295704u;
            // 0x295708: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295704) {
            ctx->pc = 0x295674u;
            runtime->cooperativeGuestYield();
            goto label_295674;
        }
    }
    ctx->pc = 0x29570Cu;
label_29570c:
    // 0x29570c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x29570Cu;
    {
        const bool branch_taken_0x29570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29570Cu;
            // 0x295710: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29570c) {
            ctx->pc = 0x2955E8u;
            runtime->cooperativeGuestYield();
            goto label_2955e8;
        }
    }
    ctx->pc = 0x295714u;
label_295714:
    // 0x295714: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x295714u;
    {
        const bool branch_taken_0x295714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295714u;
            // 0x295718: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295714) {
            ctx->pc = 0x2955E8u;
            runtime->cooperativeGuestYield();
            goto label_2955e8;
        }
    }
    ctx->pc = 0x29571Cu;
label_29571c:
    // 0x29571c: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x29571Cu;
    {
        const bool branch_taken_0x29571c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29571Cu;
            // 0x295720: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29571c) {
            ctx->pc = 0x2955E8u;
            runtime->cooperativeGuestYield();
            goto label_2955e8;
        }
    }
    ctx->pc = 0x295724u;
label_295724:
    // 0x295724: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x295724u;
    {
        const bool branch_taken_0x295724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295724u;
            // 0x295728: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295724) {
            ctx->pc = 0x2955E8u;
            runtime->cooperativeGuestYield();
            goto label_2955e8;
        }
    }
    ctx->pc = 0x29572Cu;
label_29572c:
    // 0x29572c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x29572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x295730: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295730u;
    {
        const bool branch_taken_0x295730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295730u;
            // 0x295734: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295730) {
            ctx->pc = 0x295744u;
            goto label_295744;
        }
    }
    ctx->pc = 0x295738u;
    // 0x295738: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x295738u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x29573c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29573Cu;
    {
        const bool branch_taken_0x29573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29573Cu;
            // 0x295740: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29573c) {
            ctx->pc = 0x295758u;
            goto label_295758;
        }
    }
    ctx->pc = 0x295744u;
label_295744:
    // 0x295744: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295744u;
    {
        const bool branch_taken_0x295744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295744u;
            // 0x295748: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295744) {
            ctx->pc = 0x295754u;
            goto label_295754;
        }
    }
    ctx->pc = 0x29574Cu;
    // 0x29574c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29574Cu;
    {
        const bool branch_taken_0x29574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29574Cu;
            // 0x295750: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29574c) {
            ctx->pc = 0x295758u;
            goto label_295758;
        }
    }
    ctx->pc = 0x295754u;
label_295754:
    // 0x295754: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x295754u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_295758:
    // 0x295758: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x295758u;
    {
        const bool branch_taken_0x295758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295758u;
            // 0x29575c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295758) {
            ctx->pc = 0x295788u;
            goto label_295788;
        }
    }
    ctx->pc = 0x295760u;
    // 0x295760: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x295760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x295764: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295764u;
    {
        const bool branch_taken_0x295764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295764u;
            // 0x295768: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295764) {
            ctx->pc = 0x295774u;
            goto label_295774;
        }
    }
    ctx->pc = 0x29576Cu;
    // 0x29576c: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29576Cu;
    {
        const bool branch_taken_0x29576c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x295770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29576Cu;
            // 0x295770: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29576c) {
            ctx->pc = 0x2957CCu;
            goto label_2957cc;
        }
    }
    ctx->pc = 0x295774u;
label_295774:
    // 0x295774: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295774u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295778: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x295778u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29577c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x29577cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295780: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x295780u;
    {
        const bool branch_taken_0x295780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295780u;
            // 0x295784: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295780) {
            ctx->pc = 0x2957D0u;
            goto label_2957d0;
        }
    }
    ctx->pc = 0x295788u;
label_295788:
    // 0x295788: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295788u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x29578c: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x29578cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x295790: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295790u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295794: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295794u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_295798:
    // 0x295798: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x295798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x29579c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x29579cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2957a0: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x2957a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x2957a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2957a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2957a8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2957a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2957ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2957acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2957b0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2957B0u;
    {
        const bool branch_taken_0x2957b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2957b0) {
            ctx->pc = 0x295798u;
            runtime->cooperativeGuestYield();
            goto label_295798;
        }
    }
    ctx->pc = 0x2957B8u;
    // 0x2957b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2957B8u;
    {
        const bool branch_taken_0x2957b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2957BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2957B8u;
            // 0x2957bc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957b8) {
            ctx->pc = 0x2957D4u;
            goto label_2957d4;
        }
    }
    ctx->pc = 0x2957C0u;
    // 0x2957c0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2957c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2957c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2957C4u;
    {
        const bool branch_taken_0x2957c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2957C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2957C4u;
            // 0x2957c8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957c4) {
            ctx->pc = 0x2957D4u;
            goto label_2957d4;
        }
    }
    ctx->pc = 0x2957CCu;
label_2957cc:
    // 0x2957cc: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2957ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2957d0:
    // 0x2957d0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2957d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2957d4:
    // 0x2957d4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2957d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2957d8: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x2957D8u;
    {
        const bool branch_taken_0x2957d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2957DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2957D8u;
            // 0x2957dc: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957d8) {
            ctx->pc = 0x295D64u;
            goto label_295d64;
        }
    }
    ctx->pc = 0x2957E0u;
label_2957e0:
    // 0x2957e0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2957e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2957e4: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x2957e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x2957e8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2957E8u;
    {
        const bool branch_taken_0x2957e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2957ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2957E8u;
            // 0x2957ec: 0x244468b0  addiu       $a0, $v0, 0x68B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957e8) {
            ctx->pc = 0x295834u;
            goto label_295834;
        }
    }
    ctx->pc = 0x2957F0u;
    // 0x2957f0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2957f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2957f4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2957f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2957f8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x2957f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x2957fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2957fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295800: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x295800u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x295804: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x295804u;
    {
        const bool branch_taken_0x295804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295804u;
            // 0x295808: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295804) {
            ctx->pc = 0x295834u;
            goto label_295834;
        }
    }
    ctx->pc = 0x29580Cu;
label_29580c:
    // 0x29580c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x29580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x295810: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x295810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x295814: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x295814u;
    {
        const bool branch_taken_0x295814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295814u;
            // 0x295818: 0x244468c8  addiu       $a0, $v0, 0x68C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295814) {
            ctx->pc = 0x295834u;
            goto label_295834;
        }
    }
    ctx->pc = 0x29581Cu;
    // 0x29581c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x29581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295820: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x295820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x295824: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x295824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295828: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x295828u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x29582c: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x29582cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x295830: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x295830u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_295834:
    // 0x295834: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x295834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x295838: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295838u;
    {
        const bool branch_taken_0x295838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29583Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295838u;
            // 0x29583c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295838) {
            ctx->pc = 0x29584Cu;
            goto label_29584c;
        }
    }
    ctx->pc = 0x295840u;
    // 0x295840: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x295840u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x295844: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x295844u;
    {
        const bool branch_taken_0x295844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295844u;
            // 0x295848: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295844) {
            ctx->pc = 0x295860u;
            goto label_295860;
        }
    }
    ctx->pc = 0x29584Cu;
label_29584c:
    // 0x29584c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29584Cu;
    {
        const bool branch_taken_0x29584c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29584Cu;
            // 0x295850: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29584c) {
            ctx->pc = 0x29585Cu;
            goto label_29585c;
        }
    }
    ctx->pc = 0x295854u;
    // 0x295854: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295854u;
    {
        const bool branch_taken_0x295854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295854u;
            // 0x295858: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295854) {
            ctx->pc = 0x295860u;
            goto label_295860;
        }
    }
    ctx->pc = 0x29585Cu;
label_29585c:
    // 0x29585c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x29585cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_295860:
    // 0x295860: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x295860u;
    {
        const bool branch_taken_0x295860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295860u;
            // 0x295864: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295860) {
            ctx->pc = 0x295894u;
            goto label_295894;
        }
    }
    ctx->pc = 0x295868u;
    // 0x295868: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x295868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x29586c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29586Cu;
    {
        const bool branch_taken_0x29586c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29586Cu;
            // 0x295870: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29586c) {
            ctx->pc = 0x29587Cu;
            goto label_29587c;
        }
    }
    ctx->pc = 0x295874u;
    // 0x295874: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
    ctx->pc = 0x295874u;
    {
        const bool branch_taken_0x295874 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x295878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295874u;
            // 0x295878: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295874) {
            ctx->pc = 0x295A90u;
            goto label_295a90;
        }
    }
    ctx->pc = 0x29587Cu;
label_29587c:
    // 0x29587c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x29587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295880: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295880u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295884: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x295884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x295888: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295888u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x29588c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x29588Cu;
    {
        const bool branch_taken_0x29588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29588Cu;
            // 0x295890: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29588c) {
            ctx->pc = 0x295A94u;
            goto label_295a94;
        }
    }
    ctx->pc = 0x295894u;
label_295894:
    // 0x295894: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295894u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295898: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295898u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x29589c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x29589cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2958a0:
    // 0x2958a0: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x2958a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2958a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2958a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2958a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2958a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2958ac: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x2958acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x2958b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2958b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2958b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2958b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2958b8: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2958b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2958bc: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2958BCu;
    {
        const bool branch_taken_0x2958bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2958C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958BCu;
            // 0x2958c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958bc) {
            ctx->pc = 0x2958A0u;
            runtime->cooperativeGuestYield();
            goto label_2958a0;
        }
    }
    ctx->pc = 0x2958C4u;
    // 0x2958c4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2958C4u;
    {
        const bool branch_taken_0x2958c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958C4u;
            // 0x2958c8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958c4) {
            ctx->pc = 0x295A9Cu;
            goto label_295a9c;
        }
    }
    ctx->pc = 0x2958CCu;
label_2958cc:
    // 0x2958cc: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x2958ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x2958d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2958D0u;
    {
        const bool branch_taken_0x2958d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958D0u;
            // 0x2958d4: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958d0) {
            ctx->pc = 0x2958E4u;
            goto label_2958e4;
        }
    }
    ctx->pc = 0x2958D8u;
    // 0x2958d8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x2958d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x2958dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2958DCu;
    {
        const bool branch_taken_0x2958dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958DCu;
            // 0x2958e0: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958dc) {
            ctx->pc = 0x2958F8u;
            goto label_2958f8;
        }
    }
    ctx->pc = 0x2958E4u;
label_2958e4:
    // 0x2958e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2958E4u;
    {
        const bool branch_taken_0x2958e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958E4u;
            // 0x2958e8: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958e4) {
            ctx->pc = 0x2958F4u;
            goto label_2958f4;
        }
    }
    ctx->pc = 0x2958ECu;
    // 0x2958ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2958ECu;
    {
        const bool branch_taken_0x2958ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958ECu;
            // 0x2958f0: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958ec) {
            ctx->pc = 0x2958F8u;
            goto label_2958f8;
        }
    }
    ctx->pc = 0x2958F4u;
label_2958f4:
    // 0x2958f4: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x2958f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_2958f8:
    // 0x2958f8: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2958F8u;
    {
        const bool branch_taken_0x2958f8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2958FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958F8u;
            // 0x2958fc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958f8) {
            ctx->pc = 0x295930u;
            goto label_295930;
        }
    }
    ctx->pc = 0x295900u;
    // 0x295900: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x295900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x295904: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295904u;
    {
        const bool branch_taken_0x295904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295904u;
            // 0x295908: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295904) {
            ctx->pc = 0x295918u;
            goto label_295918;
        }
    }
    ctx->pc = 0x29590Cu;
    // 0x29590c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295910: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x295910u;
    {
        const bool branch_taken_0x295910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295910u;
            // 0x295914: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295910) {
            ctx->pc = 0x29593Cu;
            goto label_29593c;
        }
    }
    ctx->pc = 0x295918u;
label_295918:
    // 0x295918: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x295918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x29591c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29591Cu;
    {
        const bool branch_taken_0x29591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29591Cu;
            // 0x295920: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29591c) {
            ctx->pc = 0x295940u;
            goto label_295940;
        }
    }
    ctx->pc = 0x295924u;
    // 0x295924: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x295924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295928: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295928u;
    {
        const bool branch_taken_0x295928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29592Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295928u;
            // 0x29592c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295928) {
            ctx->pc = 0x29593Cu;
            goto label_29593c;
        }
    }
    ctx->pc = 0x295930u;
label_295930:
    // 0x295930: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x295930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x295934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295938: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x295938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_29593c:
    // 0x29593c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x29593cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_295940:
    // 0x295940: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x295940u;
    {
        const bool branch_taken_0x295940 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295940u;
            // 0x295944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295940) {
            ctx->pc = 0x295974u;
            goto label_295974;
        }
    }
    ctx->pc = 0x295948u;
    // 0x295948: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x295948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x29594c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29594Cu;
    {
        const bool branch_taken_0x29594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29594Cu;
            // 0x295950: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29594c) {
            ctx->pc = 0x29595Cu;
            goto label_29595c;
        }
    }
    ctx->pc = 0x295954u;
    // 0x295954: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x295954u;
    {
        const bool branch_taken_0x295954 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x295958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295954u;
            // 0x295958: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295954) {
            ctx->pc = 0x2959D0u;
            goto label_2959d0;
        }
    }
    ctx->pc = 0x29595Cu;
label_29595c:
    // 0x29595c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x29595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295960: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295960u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295964: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295964u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295968: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x295968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29596c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29596Cu;
    {
        const bool branch_taken_0x29596c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29596Cu;
            // 0x295970: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29596c) {
            ctx->pc = 0x2959D4u;
            goto label_2959d4;
        }
    }
    ctx->pc = 0x295974u;
label_295974:
    // 0x295974: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x295974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x295978: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x295978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29597c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x29597cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x295980: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x295980u;
    {
        const bool branch_taken_0x295980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x295984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295980u;
            // 0x295984: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295980) {
            ctx->pc = 0x2959D0u;
            goto label_2959d0;
        }
    }
    ctx->pc = 0x295988u;
    // 0x295988: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295988u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x29598c: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x29598cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_295990:
    // 0x295990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295994: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x295994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295998: 0xc0a6bf4  jal         func_29AFD0
    ctx->pc = 0x295998u;
    SET_GPR_U32(ctx, 31, 0x2959A0u);
    ctx->pc = 0x29599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295998u;
            // 0x29599c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AFD0u;
    if (runtime->hasFunction(0x29AFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29AFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959A0u; }
        if (ctx->pc != 0x2959A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29afd0_0x29b638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959A0u; }
        if (ctx->pc != 0x2959A0u) { return; }
    }
    ctx->pc = 0x2959A0u;
    // 0x2959a0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2959a0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2959a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2959a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2959a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2959ac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2959acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2959b0: 0xc0a0de4  jal         func_283790
    ctx->pc = 0x2959B0u;
    SET_GPR_U32(ctx, 31, 0x2959B8u);
    ctx->pc = 0x2959B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2959B0u;
            // 0x2959b4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283790u;
    if (runtime->hasFunction(0x283790u)) {
        auto targetFn = runtime->lookupFunction(0x283790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959B8u; }
        if (ctx->pc != 0x2959B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283790_0x283e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2959B8u; }
        if (ctx->pc != 0x2959B8u) { return; }
    }
    ctx->pc = 0x2959B8u;
    // 0x2959b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2959b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2959bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2959bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959c0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2959C0u;
    {
        const bool branch_taken_0x2959c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2959C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959C0u;
            // 0x2959c4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959c0) {
            ctx->pc = 0x295990u;
            runtime->cooperativeGuestYield();
            goto label_295990;
        }
    }
    ctx->pc = 0x2959C8u;
    // 0x2959c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2959C8u;
    {
        const bool branch_taken_0x2959c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959C8u;
            // 0x2959cc: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959c8) {
            ctx->pc = 0x2959DCu;
            goto label_2959dc;
        }
    }
    ctx->pc = 0x2959D0u;
label_2959d0:
    // 0x2959d0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x2959d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_2959d4:
    // 0x2959d4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x2959d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2959d8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2959d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2959dc:
    // 0x2959dc: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2959DCu;
    {
        const bool branch_taken_0x2959dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959DCu;
            // 0x2959e0: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959dc) {
            ctx->pc = 0x295D64u;
            goto label_295d64;
        }
    }
    ctx->pc = 0x2959E4u;
label_2959e4:
    // 0x2959e4: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x2959e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x2959e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2959E8u;
    {
        const bool branch_taken_0x2959e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959E8u;
            // 0x2959ec: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959e8) {
            ctx->pc = 0x2959FCu;
            goto label_2959fc;
        }
    }
    ctx->pc = 0x2959F0u;
    // 0x2959f0: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x2959f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x2959f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2959F4u;
    {
        const bool branch_taken_0x2959f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959F4u;
            // 0x2959f8: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959f4) {
            ctx->pc = 0x295A10u;
            goto label_295a10;
        }
    }
    ctx->pc = 0x2959FCu;
label_2959fc:
    // 0x2959fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2959FCu;
    {
        const bool branch_taken_0x2959fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959FCu;
            // 0x295a00: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959fc) {
            ctx->pc = 0x295A0Cu;
            goto label_295a0c;
        }
    }
    ctx->pc = 0x295A04u;
    // 0x295a04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295A04u;
    {
        const bool branch_taken_0x295a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A04u;
            // 0x295a08: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a04) {
            ctx->pc = 0x295A10u;
            goto label_295a10;
        }
    }
    ctx->pc = 0x295A0Cu;
label_295a0c:
    // 0x295a0c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x295a0cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_295a10:
    // 0x295a10: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x295A10u;
    {
        const bool branch_taken_0x295a10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A10u;
            // 0x295a14: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a10) {
            ctx->pc = 0x295A40u;
            goto label_295a40;
        }
    }
    ctx->pc = 0x295A18u;
    // 0x295a18: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x295a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x295a1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295A1Cu;
    {
        const bool branch_taken_0x295a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A1Cu;
            // 0x295a20: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a1c) {
            ctx->pc = 0x295A2Cu;
            goto label_295a2c;
        }
    }
    ctx->pc = 0x295A24u;
    // 0x295a24: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x295A24u;
    {
        const bool branch_taken_0x295a24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A24u;
            // 0x295a28: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a24) {
            ctx->pc = 0x295A90u;
            goto label_295a90;
        }
    }
    ctx->pc = 0x295A2Cu;
label_295a2c:
    // 0x295a2c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295a2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295a30: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x295a30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x295a34: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295a34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295a38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x295A38u;
    {
        const bool branch_taken_0x295a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A38u;
            // 0x295a3c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a38) {
            ctx->pc = 0x295A94u;
            goto label_295a94;
        }
    }
    ctx->pc = 0x295A40u;
label_295a40:
    // 0x295a40: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295a40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295a44: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295a44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295a48: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295a48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x295a4c: 0x0  nop
    ctx->pc = 0x295a4cu;
    // NOP
label_295a50:
    // 0x295a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a54: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x295a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295a58: 0xc0a6d8e  jal         func_29B638
    ctx->pc = 0x295A58u;
    SET_GPR_U32(ctx, 31, 0x295A60u);
    ctx->pc = 0x295A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295A58u;
            // 0x295a5c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B638u;
    if (runtime->hasFunction(0x29B638u)) {
        auto targetFn = runtime->lookupFunction(0x29B638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A60u; }
        if (ctx->pc != 0x295A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B638_0x29b638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A60u; }
        if (ctx->pc != 0x295A60u) { return; }
    }
    ctx->pc = 0x295A60u;
    // 0x295a60: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x295a60u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x295a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x295a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x295a6c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x295a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295a70: 0xc0a0fc6  jal         func_283F18
    ctx->pc = 0x295A70u;
    SET_GPR_U32(ctx, 31, 0x295A78u);
    ctx->pc = 0x295A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295A70u;
            // 0x295a74: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283F18u;
    if (runtime->hasFunction(0x283F18u)) {
        auto targetFn = runtime->lookupFunction(0x283F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A78u; }
        if (ctx->pc != 0x295A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283f18_0x2844e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A78u; }
        if (ctx->pc != 0x295A78u) { return; }
    }
    ctx->pc = 0x295A78u;
    // 0x295a78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x295a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x295a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a80: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x295A80u;
    {
        const bool branch_taken_0x295a80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A80u;
            // 0x295a84: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a80) {
            ctx->pc = 0x295A50u;
            runtime->cooperativeGuestYield();
            goto label_295a50;
        }
    }
    ctx->pc = 0x295A88u;
    // 0x295a88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295A88u;
    {
        const bool branch_taken_0x295a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A88u;
            // 0x295a8c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a88) {
            ctx->pc = 0x295A9Cu;
            goto label_295a9c;
        }
    }
    ctx->pc = 0x295A90u;
label_295a90:
    // 0x295a90: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295a90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_295a94:
    // 0x295a94: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295a94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x295a98: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x295a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_295a9c:
    // 0x295a9c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x295a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x295aa0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x295AA0u;
    {
        const bool branch_taken_0x295aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295AA0u;
            // 0x295aa4: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295aa0) {
            ctx->pc = 0x295D68u;
            goto label_295d68;
        }
    }
    ctx->pc = 0x295AA8u;
label_295aa8:
    // 0x295aa8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x295aa8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x295aac: 0xc0a1454  jal         func_285150
    ctx->pc = 0x295AACu;
    SET_GPR_U32(ctx, 31, 0x295AB4u);
    ctx->pc = 0x295AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295AACu;
            // 0x295ab0: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AB4u; }
        if (ctx->pc != 0x295AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285150_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AB4u; }
        if (ctx->pc != 0x295AB4u) { return; }
    }
    ctx->pc = 0x295AB4u;
    // 0x295ab4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x295ab4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x295ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x295ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295abc: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x295abcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295ac0: 0x0  nop
    ctx->pc = 0x295ac0u;
    // NOP
    // 0x295ac4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x295AC4u;
    {
        const bool branch_taken_0x295ac4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x295AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295AC4u;
            // 0x295ac8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ac4) {
            ctx->pc = 0x295ADCu;
            goto label_295adc;
        }
    }
    ctx->pc = 0x295ACCu;
    // 0x295acc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x295accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295ad0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x295ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295ad4: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x295AD4u;
    {
        const bool branch_taken_0x295ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295AD4u;
            // 0x295ad8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ad4) {
            ctx->pc = 0x2961F4u;
            goto label_2961f4;
        }
    }
    ctx->pc = 0x295ADCu;
label_295adc:
    // 0x295adc: 0xc0a1510  jal         func_285440
    ctx->pc = 0x295ADCu;
    SET_GPR_U32(ctx, 31, 0x295AE4u);
    ctx->pc = 0x295AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295ADCu;
            // 0x295ae0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285440u;
    if (runtime->hasFunction(0x285440u)) {
        auto targetFn = runtime->lookupFunction(0x285440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AE4u; }
        if (ctx->pc != 0x295AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285440_0x285440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AE4u; }
        if (ctx->pc != 0x295AE4u) { return; }
    }
    ctx->pc = 0x295AE4u;
    // 0x295ae4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x295ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295ae8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x295ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295aec: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x295aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295af0: 0xc0a54e4  jal         func_295390
    ctx->pc = 0x295AF0u;
    SET_GPR_U32(ctx, 31, 0x295AF8u);
    ctx->pc = 0x295AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295AF0u;
            // 0x295af4: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295390u;
    if (runtime->hasFunction(0x295390u)) {
        auto targetFn = runtime->lookupFunction(0x295390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AF8u; }
        if (ctx->pc != 0x295AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295390_0x295390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AF8u; }
        if (ctx->pc != 0x295AF8u) { return; }
    }
    ctx->pc = 0x295AF8u;
    // 0x295af8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x295af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295afc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x295afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x295b00: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x295b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_295b04:
    // 0x295b04: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x295B04u;
    {
        const bool branch_taken_0x295b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B04u;
            // 0x295b08: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b04) {
            ctx->pc = 0x296214u;
            goto label_296214;
        }
    }
    ctx->pc = 0x295B0Cu;
label_295b0c:
    // 0x295b0c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x295b0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x295b10: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x295b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
    // 0x295b14: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x295B14u;
    {
        const bool branch_taken_0x295b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B14u;
            // 0x295b18: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b14) {
            ctx->pc = 0x295BA0u;
            goto label_295ba0;
        }
    }
    ctx->pc = 0x295B1Cu;
    // 0x295b1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295b20: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x295b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x295b24: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x295b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295b28: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295b2c: 0x60f809  jalr        $v1
    ctx->pc = 0x295B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295B34u);
        ctx->pc = 0x295B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B2Cu;
            // 0x295b30: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295B34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295B34u; }
            if (ctx->pc != 0x295B34u) { return; }
        }
        }
    }
    ctx->pc = 0x295B34u;
    // 0x295b34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295b38: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x295b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x295b3c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295b40: 0x60f809  jalr        $v1
    ctx->pc = 0x295B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295B48u);
        ctx->pc = 0x295B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B40u;
            // 0x295b44: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295B48u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295B48u; }
            if (ctx->pc != 0x295B48u) { return; }
        }
        }
    }
    ctx->pc = 0x295B48u;
    // 0x295b48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295b4c: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x295b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x295b50: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295b54: 0x60f809  jalr        $v1
    ctx->pc = 0x295B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295B5Cu);
        ctx->pc = 0x295B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B54u;
            // 0x295b58: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295B5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295B5Cu; }
            if (ctx->pc != 0x295B5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x295B5Cu;
    // 0x295b5c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295b60: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x295b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x295b64: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295b68: 0x60f809  jalr        $v1
    ctx->pc = 0x295B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295B70u);
        ctx->pc = 0x295B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B68u;
            // 0x295b6c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295B70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295B70u; }
            if (ctx->pc != 0x295B70u) { return; }
        }
        }
    }
    ctx->pc = 0x295B70u;
    // 0x295b70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295b74: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x295b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x295b78: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295b7c: 0x60f809  jalr        $v1
    ctx->pc = 0x295B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295B84u);
        ctx->pc = 0x295B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B7Cu;
            // 0x295b80: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295B84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295B84u; }
            if (ctx->pc != 0x295B84u) { return; }
        }
        }
    }
    ctx->pc = 0x295B84u;
    // 0x295b84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295b88: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x295b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x295b8c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295b90: 0x60f809  jalr        $v1
    ctx->pc = 0x295B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295B98u);
        ctx->pc = 0x295B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B90u;
            // 0x295b94: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295B98u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295B98u; }
            if (ctx->pc != 0x295B98u) { return; }
        }
        }
    }
    ctx->pc = 0x295B98u;
    // 0x295b98: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x295B98u;
    {
        const bool branch_taken_0x295b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B98u;
            // 0x295b9c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b98) {
            ctx->pc = 0x296214u;
            goto label_296214;
        }
    }
    ctx->pc = 0x295BA0u;
label_295ba0:
    // 0x295ba0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x295BA0u;
    {
        const bool branch_taken_0x295ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295BA0u;
            // 0x295ba4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ba0) {
            ctx->pc = 0x295C00u;
            goto label_295c00;
        }
    }
    ctx->pc = 0x295BA8u;
    // 0x295ba8: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x295BA8u;
    {
        const bool branch_taken_0x295ba8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x295BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295BA8u;
            // 0x295bac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ba8) {
            ctx->pc = 0x295BECu;
            goto label_295bec;
        }
    }
    ctx->pc = 0x295BB0u;
    // 0x295bb0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x295bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295bb4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x295BB4u;
    {
        const bool branch_taken_0x295bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295BB4u;
            // 0x295bb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bb4) {
            ctx->pc = 0x295BECu;
            goto label_295bec;
        }
    }
    ctx->pc = 0x295BBCu;
    // 0x295bbc: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295bbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295bc0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295bc0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295bc4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295bc4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_295bc8:
    // 0x295bc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x295bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x295bcc: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x295bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x295bd0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x295BD0u;
    {
        const bool branch_taken_0x295bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295BD0u;
            // 0x295bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bd0) {
            ctx->pc = 0x295C48u;
            goto label_295c48;
        }
    }
    ctx->pc = 0x295BD8u;
    // 0x295bd8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x295bd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295bdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x295BDCu;
    {
        const bool branch_taken_0x295bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295BDCu;
            // 0x295be0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bdc) {
            ctx->pc = 0x295BC8u;
            runtime->cooperativeGuestYield();
            goto label_295bc8;
        }
    }
    ctx->pc = 0x295BE4u;
    // 0x295be4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x295BE4u;
    {
        const bool branch_taken_0x295be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295BE4u;
            // 0x295be8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295be4) {
            ctx->pc = 0x295D68u;
            goto label_295d68;
        }
    }
    ctx->pc = 0x295BECu;
label_295bec:
    // 0x295bec: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295becu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295bf0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295bf0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295bf4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295bf4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x295bf8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x295BF8u;
    {
        const bool branch_taken_0x295bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295BF8u;
            // 0x295bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295bf8) {
            ctx->pc = 0x295C48u;
            goto label_295c48;
        }
    }
    ctx->pc = 0x295C00u;
label_295c00:
    // 0x295c00: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x295c00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295c04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x295C04u;
    {
        const bool branch_taken_0x295c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295C04u;
            // 0x295c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c04) {
            ctx->pc = 0x295C3Cu;
            goto label_295c3c;
        }
    }
    ctx->pc = 0x295C0Cu;
    // 0x295c0c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295c0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295c10: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295c10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295c14: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295c14u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_295c18:
    // 0x295c18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x295c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x295c1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x295c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x295c20: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x295c20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295c24: 0x0  nop
    ctx->pc = 0x295c24u;
    // NOP
    // 0x295c28: 0x0  nop
    ctx->pc = 0x295c28u;
    // NOP
    // 0x295c2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x295C2Cu;
    {
        const bool branch_taken_0x295c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295c2c) {
            ctx->pc = 0x295C18u;
            runtime->cooperativeGuestYield();
            goto label_295c18;
        }
    }
    ctx->pc = 0x295C34u;
    // 0x295c34: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x295C34u;
    {
        const bool branch_taken_0x295c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295C34u;
            // 0x295c38: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c34) {
            ctx->pc = 0x295D68u;
            goto label_295d68;
        }
    }
    ctx->pc = 0x295C3Cu;
label_295c3c:
    // 0x295c3c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295c3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295c40: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295c40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295c44: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295c44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_295c48:
    // 0x295c48: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x295C48u;
    {
        const bool branch_taken_0x295c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295C48u;
            // 0x295c4c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c48) {
            ctx->pc = 0x295D68u;
            goto label_295d68;
        }
    }
    ctx->pc = 0x295C50u;
label_295c50:
    // 0x295c50: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x295c50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x295c54: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x295c54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x295c58: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x295c58u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
    // 0x295c5c: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x295c5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
    // 0x295c60: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x295c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295c64: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295c64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295c68: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x295c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x295c6c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295c6cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295c70: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x295c70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x295c74: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295c74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x295c78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x295c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x295c7c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x295c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x295c80: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x295C80u;
    {
        const bool branch_taken_0x295c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295C80u;
            // 0x295c84: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c80) {
            ctx->pc = 0x295D64u;
            goto label_295d64;
        }
    }
    ctx->pc = 0x295C88u;
label_295c88:
    // 0x295c88: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x295c88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x295c8c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x295c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x295c90: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x295c90u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
    // 0x295c94: 0x244468b0  addiu       $a0, $v0, 0x68B0
    ctx->pc = 0x295c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
    // 0x295c98: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x295C98u;
    {
        const bool branch_taken_0x295c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295C98u;
            // 0x295c9c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295c98) {
            ctx->pc = 0x295CC8u;
            goto label_295cc8;
        }
    }
    ctx->pc = 0x295CA0u;
    // 0x295ca0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x295ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x295ca4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295CA4u;
    {
        const bool branch_taken_0x295ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295CA4u;
            // 0x295ca8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ca4) {
            ctx->pc = 0x295CB4u;
            goto label_295cb4;
        }
    }
    ctx->pc = 0x295CACu;
    // 0x295cac: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x295CACu;
    {
        const bool branch_taken_0x295cac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x295CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295CACu;
            // 0x295cb0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cac) {
            ctx->pc = 0x295D04u;
            goto label_295d04;
        }
    }
    ctx->pc = 0x295CB4u;
label_295cb4:
    // 0x295cb4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295cb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295cb8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x295cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x295cbc: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295cbcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295cc0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x295CC0u;
    {
        const bool branch_taken_0x295cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295CC0u;
            // 0x295cc4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cc0) {
            ctx->pc = 0x295D08u;
            goto label_295d08;
        }
    }
    ctx->pc = 0x295CC8u;
label_295cc8:
    // 0x295cc8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295cc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295ccc: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295cccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295cd0: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295cd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x295cd4: 0x0  nop
    ctx->pc = 0x295cd4u;
    // NOP
label_295cd8:
    // 0x295cd8: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x295cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x295cdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x295cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295ce0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x295ce0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x295ce4: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x295ce4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x295ce8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x295ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x295cec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x295cecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295cf0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x295cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x295cf4: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x295CF4u;
    {
        const bool branch_taken_0x295cf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295CF4u;
            // 0x295cf8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cf4) {
            ctx->pc = 0x295CD8u;
            runtime->cooperativeGuestYield();
            goto label_295cd8;
        }
    }
    ctx->pc = 0x295CFCu;
    // 0x295cfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295CFCu;
    {
        const bool branch_taken_0x295cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295CFCu;
            // 0x295d00: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295cfc) {
            ctx->pc = 0x295D10u;
            goto label_295d10;
        }
    }
    ctx->pc = 0x295D04u;
label_295d04:
    // 0x295d04: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295d04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_295d08:
    // 0x295d08: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295d08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x295d0c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x295d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_295d10:
    // 0x295d10: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x295d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x295d14: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x295d14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x295d18: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x295d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x295d1c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x295d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x295d20: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x295d20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x295d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295d28: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x295d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x295d2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x295D2Cu;
    {
        const bool branch_taken_0x295d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D2Cu;
            // 0x295d30: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d2c) {
            ctx->pc = 0x295D68u;
            goto label_295d68;
        }
    }
    ctx->pc = 0x295D34u;
label_295d34:
    // 0x295d34: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x295d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x295d38: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x295D38u;
    {
        const bool branch_taken_0x295d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D38u;
            // 0x295d3c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d38) {
            ctx->pc = 0x296210u;
            goto label_296210;
        }
    }
    ctx->pc = 0x295D40u;
    // 0x295d40: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x295d40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
    // 0x295d44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x295d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295d48: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x295d48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x295d4c: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x295d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x295d50: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x295d50u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x295d54: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x295d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x295d58: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x295d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x295d5c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x295d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x295d60: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x295d60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_295d64:
    // 0x295d64: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x295d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_295d68:
    // 0x295d68: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x295d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d6c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x295d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295d70: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x295d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295d74: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x295d74u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x295d78: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x295d78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x295d7c: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x295d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x295d80: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x295d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x295d84: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x295d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x295d88: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x295d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295d8c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x295d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x295d90: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x295D90u;
    {
        const bool branch_taken_0x295d90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x295D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D90u;
            // 0x295d94: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d90) {
            ctx->pc = 0x295DB4u;
            goto label_295db4;
        }
    }
    ctx->pc = 0x295D98u;
    // 0x295d98: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x295d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x295d9c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x295D9Cu;
    {
        const bool branch_taken_0x295d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295D9Cu;
            // 0x295da0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295d9c) {
            ctx->pc = 0x295DD4u;
            goto label_295dd4;
        }
    }
    ctx->pc = 0x295DA4u;
    // 0x295da4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x295da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295da8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x295da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295dac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x295DACu;
    {
        const bool branch_taken_0x295dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295DACu;
            // 0x295db0: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295dac) {
            ctx->pc = 0x295DD0u;
            goto label_295dd0;
        }
    }
    ctx->pc = 0x295DB4u;
label_295db4:
    // 0x295db4: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x295db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
    // 0x295db8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x295db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x295dbc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295DBCu;
    {
        const bool branch_taken_0x295dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x295DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295DBCu;
            // 0x295dc0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295dbc) {
            ctx->pc = 0x295DD4u;
            goto label_295dd4;
        }
    }
    ctx->pc = 0x295DC4u;
    // 0x295dc4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x295dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295dc8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x295dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295dcc: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x295dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_295dd0:
    // 0x295dd0: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x295dd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_295dd4:
    // 0x295dd4: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x295DD4u;
    {
        const bool branch_taken_0x295dd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295DD4u;
            // 0x295dd8: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295dd4) {
            ctx->pc = 0x295EE0u;
            goto label_295ee0;
        }
    }
    ctx->pc = 0x295DDCu;
    // 0x295ddc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x295DDCu;
    {
        const bool branch_taken_0x295ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295DDCu;
            // 0x295de0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ddc) {
            ctx->pc = 0x295E34u;
            goto label_295e34;
        }
    }
    ctx->pc = 0x295DE4u;
    // 0x295de4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x295de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x295de8: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x295de8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x295dec: 0x0  nop
    ctx->pc = 0x295decu;
    // NOP
label_295df0:
    // 0x295df0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x295df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x295df4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295df8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x295df8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295dfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x295dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x295e00: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x295e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295e04: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295e08: 0x60f809  jalr        $v1
    ctx->pc = 0x295E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295E10u);
        ctx->pc = 0x295E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E08u;
            // 0x295e0c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295E10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295E10u; }
            if (ctx->pc != 0x295E10u) { return; }
        }
        }
    }
    ctx->pc = 0x295E10u;
    // 0x295e10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x295e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295e14: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x295e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x295e18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x295e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x295e1c: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x295e1cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295e20: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x295e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x295e24: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x295E24u;
    {
        const bool branch_taken_0x295e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E24u;
            // 0x295e28: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e24) {
            ctx->pc = 0x295DF0u;
            runtime->cooperativeGuestYield();
            goto label_295df0;
        }
    }
    ctx->pc = 0x295E2Cu;
    // 0x295e2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295E2Cu;
    {
        const bool branch_taken_0x295e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e2c) {
            ctx->pc = 0x295E38u;
            goto label_295e38;
        }
    }
    ctx->pc = 0x295E34u;
label_295e34:
    // 0x295e34: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x295e34u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_295e38:
    // 0x295e38: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x295E38u;
    {
        const bool branch_taken_0x295e38 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x295e38) {
            ctx->pc = 0x295E70u;
            goto label_295e70;
        }
    }
    ctx->pc = 0x295E40u;
    // 0x295e40: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x295e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e44: 0x0  nop
    ctx->pc = 0x295e44u;
    // NOP
label_295e48:
    // 0x295e48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295e4c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x295e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295e50: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x295e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295e54: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295e58: 0x60f809  jalr        $v1
    ctx->pc = 0x295E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295E60u);
        ctx->pc = 0x295E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E58u;
            // 0x295e5c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295E60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295E60u; }
            if (ctx->pc != 0x295E60u) { return; }
        }
        }
    }
    ctx->pc = 0x295E60u;
    // 0x295e60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x295e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295e64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x295e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x295e68: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x295E68u;
    {
        const bool branch_taken_0x295e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E68u;
            // 0x295e6c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e68) {
            ctx->pc = 0x295E48u;
            runtime->cooperativeGuestYield();
            goto label_295e48;
        }
    }
    ctx->pc = 0x295E70u;
label_295e70:
    // 0x295e70: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x295E70u;
    {
        const bool branch_taken_0x295e70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E70u;
            // 0x295e74: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e70) {
            ctx->pc = 0x295EA8u;
            goto label_295ea8;
        }
    }
    ctx->pc = 0x295E78u;
label_295e78:
    // 0x295e78: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x295e78u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295e7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295e80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x295e80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x295e84: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295e88: 0x60f809  jalr        $v1
    ctx->pc = 0x295E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295E90u);
        ctx->pc = 0x295E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E88u;
            // 0x295e8c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295E90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295E90u; }
            if (ctx->pc != 0x295E90u) { return; }
        }
        }
    }
    ctx->pc = 0x295E90u;
    // 0x295e90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x295e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295e94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x295e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x295e98: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x295e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x295e9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x295E9Cu;
    {
        const bool branch_taken_0x295e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E9Cu;
            // 0x295ea0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e9c) {
            ctx->pc = 0x295E78u;
            runtime->cooperativeGuestYield();
            goto label_295e78;
        }
    }
    ctx->pc = 0x295EA4u;
    // 0x295ea4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x295ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_295ea8:
    // 0x295ea8: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
    ctx->pc = 0x295EA8u;
    {
        const bool branch_taken_0x295ea8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x295EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295EA8u;
            // 0x295eac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ea8) {
            ctx->pc = 0x295B04u;
            runtime->cooperativeGuestYield();
            goto label_295b04;
        }
    }
    ctx->pc = 0x295EB0u;
label_295eb0:
    // 0x295eb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295eb4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x295eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x295eb8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x295eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295ebc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295ec0: 0x60f809  jalr        $v1
    ctx->pc = 0x295EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295EC8u);
        ctx->pc = 0x295EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295EC0u;
            // 0x295ec4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295EC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295EC8u; }
            if (ctx->pc != 0x295EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x295EC8u;
    // 0x295ec8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x295ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295ecc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x295eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x295ed0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x295ED0u;
    {
        const bool branch_taken_0x295ed0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295ED0u;
            // 0x295ed4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ed0) {
            ctx->pc = 0x295EB0u;
            runtime->cooperativeGuestYield();
            goto label_295eb0;
        }
    }
    ctx->pc = 0x295ED8u;
    // 0x295ed8: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x295ED8u;
    {
        const bool branch_taken_0x295ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295ED8u;
            // 0x295edc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ed8) {
            ctx->pc = 0x296214u;
            goto label_296214;
        }
    }
    ctx->pc = 0x295EE0u;
label_295ee0:
    // 0x295ee0: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x295ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x295ee4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x295EE4u;
    {
        const bool branch_taken_0x295ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295EE4u;
            // 0x295ee8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ee4) {
            ctx->pc = 0x2960C4u;
            goto label_2960c4;
        }
    }
    ctx->pc = 0x295EECu;
    // 0x295eec: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x295EECu;
    {
        const bool branch_taken_0x295eec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x295EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295EECu;
            // 0x295ef0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295eec) {
            ctx->pc = 0x295FA8u;
            goto label_295fa8;
        }
    }
    ctx->pc = 0x295EF4u;
    // 0x295ef4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x295ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x295ef8: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x295EF8u;
    {
        const bool branch_taken_0x295ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x295EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295EF8u;
            // 0x295efc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ef8) {
            ctx->pc = 0x295F54u;
            goto label_295f54;
        }
    }
    ctx->pc = 0x295F00u;
    // 0x295f00: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x295f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x295f04: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x295f04u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_295f08:
    // 0x295f08: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x295f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x295f0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295f10: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x295f10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295f14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x295f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x295f18: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x295f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295f1c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295f20: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x295f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x295f24: 0x60f809  jalr        $v1
    ctx->pc = 0x295F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295F2Cu);
        ctx->pc = 0x295F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295F24u;
            // 0x295f28: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295F2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295F2Cu; }
            if (ctx->pc != 0x295F2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x295F2Cu;
    // 0x295f2c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x295f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295f30: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x295f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x295f34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x295f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x295f38: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x295f38u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295f3c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x295f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x295f40: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x295f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x295f44: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x295F44u;
    {
        const bool branch_taken_0x295f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295F44u;
            // 0x295f48: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f44) {
            ctx->pc = 0x295F08u;
            runtime->cooperativeGuestYield();
            goto label_295f08;
        }
    }
    ctx->pc = 0x295F4Cu;
    // 0x295f4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x295F4Cu;
    {
        const bool branch_taken_0x295f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295F4Cu;
            // 0x295f50: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f4c) {
            ctx->pc = 0x295F5Cu;
            goto label_295f5c;
        }
    }
    ctx->pc = 0x295F54u;
label_295f54:
    // 0x295f54: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x295f54u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x295f58: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x295f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_295f5c:
    // 0x295f5c: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x295F5Cu;
    {
        const bool branch_taken_0x295f5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x295f5c) {
            ctx->pc = 0x296054u;
            goto label_296054;
        }
    }
    ctx->pc = 0x295F64u;
    // 0x295f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295f68:
    // 0x295f68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295f6c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x295f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f70: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x295f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295f74: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x295f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x295f78: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295f7c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x295f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x295f80: 0x60f809  jalr        $v1
    ctx->pc = 0x295F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295F88u);
        ctx->pc = 0x295F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295F80u;
            // 0x295f84: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295F88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295F88u; }
            if (ctx->pc != 0x295F88u) { return; }
        }
        }
    }
    ctx->pc = 0x295F88u;
    // 0x295f88: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x295f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295f8c: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x295f8cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295f90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x295f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x295f94: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x295f94u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295f98: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x295F98u;
    {
        const bool branch_taken_0x295f98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x295F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295F98u;
            // 0x295f9c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f98) {
            ctx->pc = 0x295F68u;
            runtime->cooperativeGuestYield();
            goto label_295f68;
        }
    }
    ctx->pc = 0x295FA0u;
    // 0x295fa0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x295FA0u;
    {
        const bool branch_taken_0x295fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295fa0) {
            ctx->pc = 0x296054u;
            goto label_296054;
        }
    }
    ctx->pc = 0x295FA8u;
label_295fa8:
    // 0x295fa8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x295FA8u;
    {
        const bool branch_taken_0x295fa8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x295FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295FA8u;
            // 0x295fac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fa8) {
            ctx->pc = 0x296000u;
            goto label_296000;
        }
    }
    ctx->pc = 0x295FB0u;
    // 0x295fb0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x295fb0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x295fb4: 0x0  nop
    ctx->pc = 0x295fb4u;
    // NOP
label_295fb8:
    // 0x295fb8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x295fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295fbc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x295fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295fc0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x295fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295fc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x295fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x295fc8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x295fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x295fcc: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x295fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x295fd0: 0x60f809  jalr        $v1
    ctx->pc = 0x295FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295FD8u);
        ctx->pc = 0x295FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295FD0u;
            // 0x295fd4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295FD8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295FD8u; }
            if (ctx->pc != 0x295FD8u) { return; }
        }
        }
    }
    ctx->pc = 0x295FD8u;
    // 0x295fd8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x295fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295fdc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x295fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295fe0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x295fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x295fe4: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x295fe4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295fe8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x295fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x295fec: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x295fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x295ff0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x295FF0u;
    {
        const bool branch_taken_0x295ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295FF0u;
            // 0x295ff4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ff0) {
            ctx->pc = 0x295FB8u;
            runtime->cooperativeGuestYield();
            goto label_295fb8;
        }
    }
    ctx->pc = 0x295FF8u;
    // 0x295ff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x295FF8u;
    {
        const bool branch_taken_0x295ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295FF8u;
            // 0x295ffc: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ff8) {
            ctx->pc = 0x296008u;
            goto label_296008;
        }
    }
    ctx->pc = 0x296000u;
label_296000:
    // 0x296000: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x296000u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x296004: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x296004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_296008:
    // 0x296008: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x296008u;
    {
        const bool branch_taken_0x296008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29600Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296008u;
            // 0x29600c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296008) {
            ctx->pc = 0x296054u;
            goto label_296054;
        }
    }
    ctx->pc = 0x296010u;
    // 0x296010: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x296010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x296014: 0x0  nop
    ctx->pc = 0x296014u;
    // NOP
label_296018:
    // 0x296018: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x296018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x29601c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x29601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x296020: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x296020u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296024: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x296028: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x296028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x29602c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x29602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x296030: 0x60f809  jalr        $v1
    ctx->pc = 0x296030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x296038u);
        ctx->pc = 0x296034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296030u;
            // 0x296034: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x296038u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x296038u; }
            if (ctx->pc != 0x296038u) { return; }
        }
        }
    }
    ctx->pc = 0x296038u;
    // 0x296038: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x296038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29603c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x29603cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x296040: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x296040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x296044: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x296044u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296048: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x296048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29604c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x29604Cu;
    {
        const bool branch_taken_0x29604c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29604Cu;
            // 0x296050: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29604c) {
            ctx->pc = 0x296018u;
            runtime->cooperativeGuestYield();
            goto label_296018;
        }
    }
    ctx->pc = 0x296054u;
label_296054:
    // 0x296054: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x296054u;
    {
        const bool branch_taken_0x296054 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x296054) {
            ctx->pc = 0x296088u;
            goto label_296088;
        }
    }
    ctx->pc = 0x29605Cu;
    // 0x29605c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x29605cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_296060:
    // 0x296060: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x296060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x296064: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x296064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x296068: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x296068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x29606c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x29606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x296070: 0x60f809  jalr        $v1
    ctx->pc = 0x296070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x296078u);
        ctx->pc = 0x296074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296070u;
            // 0x296074: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x296078u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x296078u; }
            if (ctx->pc != 0x296078u) { return; }
        }
        }
    }
    ctx->pc = 0x296078u;
    // 0x296078: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x296078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29607c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x296080: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x296080u;
    {
        const bool branch_taken_0x296080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x296084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296080u;
            // 0x296084: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296080) {
            ctx->pc = 0x296060u;
            runtime->cooperativeGuestYield();
            goto label_296060;
        }
    }
    ctx->pc = 0x296088u;
label_296088:
    // 0x296088: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x296088u;
    {
        const bool branch_taken_0x296088 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x296088) {
            ctx->pc = 0x29608Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x296088u;
            // 0x29608c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x296214u;
            goto label_296214;
        }
    }
    ctx->pc = 0x296090u;
label_296090:
    // 0x296090: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x296090u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x296094: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x296094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x296098: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x296098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29609c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x29609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2960a0: 0x60f809  jalr        $v1
    ctx->pc = 0x2960A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2960A8u);
        ctx->pc = 0x2960A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2960A0u;
            // 0x2960a4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2960A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2960A8u; }
            if (ctx->pc != 0x2960A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2960A8u;
    // 0x2960a8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2960a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2960ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2960acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2960b0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x2960b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2960b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2960B4u;
    {
        const bool branch_taken_0x2960b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2960B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2960B4u;
            // 0x2960b8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960b4) {
            ctx->pc = 0x296090u;
            runtime->cooperativeGuestYield();
            goto label_296090;
        }
    }
    ctx->pc = 0x2960BCu;
    // 0x2960bc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2960BCu;
    {
        const bool branch_taken_0x2960bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2960C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2960BCu;
            // 0x2960c0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960bc) {
            ctx->pc = 0x296214u;
            goto label_296214;
        }
    }
    ctx->pc = 0x2960C4u;
label_2960c4:
    // 0x2960c4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2960c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2960c8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2960C8u;
    {
        const bool branch_taken_0x2960c8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2960CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2960C8u;
            // 0x2960cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960c8) {
            ctx->pc = 0x296120u;
            goto label_296120;
        }
    }
    ctx->pc = 0x2960D0u;
    // 0x2960d0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x2960d0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2960d4: 0x0  nop
    ctx->pc = 0x2960d4u;
    // NOP
label_2960d8:
    // 0x2960d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2960d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2960dc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2960dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960e0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x2960e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2960e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2960e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2960e8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2960e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2960ec: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x2960ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x2960f0: 0x60f809  jalr        $v1
    ctx->pc = 0x2960F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2960F8u);
        ctx->pc = 0x2960F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2960F0u;
            // 0x2960f4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2960F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2960F8u; }
            if (ctx->pc != 0x2960F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2960F8u;
    // 0x2960f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2960fc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2960fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296100: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x296100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x296104: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x296104u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296108: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x296108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x29610c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x29610cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x296110: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x296110u;
    {
        const bool branch_taken_0x296110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296110u;
            // 0x296114: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296110) {
            ctx->pc = 0x2960D8u;
            runtime->cooperativeGuestYield();
            goto label_2960d8;
        }
    }
    ctx->pc = 0x296118u;
    // 0x296118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x296118u;
    {
        const bool branch_taken_0x296118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296118u;
            // 0x29611c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296118) {
            ctx->pc = 0x296128u;
            goto label_296128;
        }
    }
    ctx->pc = 0x296120u;
label_296120:
    // 0x296120: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x296120u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x296124: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x296124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_296128:
    // 0x296128: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x296128u;
    {
        const bool branch_taken_0x296128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296128u;
            // 0x29612c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296128) {
            ctx->pc = 0x296174u;
            goto label_296174;
        }
    }
    ctx->pc = 0x296130u;
    // 0x296130: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x296130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x296134: 0x0  nop
    ctx->pc = 0x296134u;
    // NOP
label_296138:
    // 0x296138: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x296138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x29613c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x29613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x296140: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x296140u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x296148: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x296148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x29614c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x29614cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x296150: 0x60f809  jalr        $v1
    ctx->pc = 0x296150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x296158u);
        ctx->pc = 0x296154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296150u;
            // 0x296154: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x296158u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x296158u; }
            if (ctx->pc != 0x296158u) { return; }
        }
        }
    }
    ctx->pc = 0x296158u;
    // 0x296158: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x296158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29615c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x29615cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x296160: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x296160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x296164: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x296164u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296168: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x296168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29616c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x29616Cu;
    {
        const bool branch_taken_0x29616c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29616Cu;
            // 0x296170: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29616c) {
            ctx->pc = 0x296138u;
            runtime->cooperativeGuestYield();
            goto label_296138;
        }
    }
    ctx->pc = 0x296174u;
label_296174:
    // 0x296174: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x296174u;
    {
        const bool branch_taken_0x296174 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x296174) {
            ctx->pc = 0x2961A8u;
            goto label_2961a8;
        }
    }
    ctx->pc = 0x29617Cu;
    // 0x29617c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x29617cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_296180:
    // 0x296180: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x296180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x296184: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x296184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x296188: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x296188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x29618c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x29618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x296190: 0x60f809  jalr        $v1
    ctx->pc = 0x296190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x296198u);
        ctx->pc = 0x296194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296190u;
            // 0x296194: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x296198u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x296198u; }
            if (ctx->pc != 0x296198u) { return; }
        }
        }
    }
    ctx->pc = 0x296198u;
    // 0x296198: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x296198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29619c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29619cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2961a0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2961A0u;
    {
        const bool branch_taken_0x2961a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2961A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2961A0u;
            // 0x2961a4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961a0) {
            ctx->pc = 0x296180u;
            runtime->cooperativeGuestYield();
            goto label_296180;
        }
    }
    ctx->pc = 0x2961A8u;
label_2961a8:
    // 0x2961a8: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2961A8u;
    {
        const bool branch_taken_0x2961a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2961a8) {
            ctx->pc = 0x2961ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2961A8u;
            // 0x2961ac: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x296214u;
            goto label_296214;
        }
    }
    ctx->pc = 0x2961B0u;
label_2961b0:
    // 0x2961b0: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x2961b0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2961b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2961b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2961b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2961b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2961bc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2961bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2961c0: 0x60f809  jalr        $v1
    ctx->pc = 0x2961C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2961C8u);
        ctx->pc = 0x2961C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2961C0u;
            // 0x2961c4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2961C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2961C8u; }
            if (ctx->pc != 0x2961C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2961C8u;
    // 0x2961c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2961c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2961cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2961ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2961d0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x2961d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2961d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2961D4u;
    {
        const bool branch_taken_0x2961d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2961D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2961D4u;
            // 0x2961d8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961d4) {
            ctx->pc = 0x2961B0u;
            runtime->cooperativeGuestYield();
            goto label_2961b0;
        }
    }
    ctx->pc = 0x2961DCu;
    // 0x2961dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2961DCu;
    {
        const bool branch_taken_0x2961dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2961E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2961DCu;
            // 0x2961e0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961dc) {
            ctx->pc = 0x296214u;
            goto label_296214;
        }
    }
    ctx->pc = 0x2961E4u;
label_2961e4:
    // 0x2961e4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2961E4u;
    {
        const bool branch_taken_0x2961e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2961E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2961E4u;
            // 0x2961e8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2961e4) {
            ctx->pc = 0x296210u;
            goto label_296210;
        }
    }
    ctx->pc = 0x2961ECu;
    // 0x2961ec: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x2961ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2961f0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x2961f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2961f4:
    // 0x2961f4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2961f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2961f8: 0x60f809  jalr        $v1
    ctx->pc = 0x2961F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x296200u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x296200u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x296200u; }
            if (ctx->pc != 0x296200u) { return; }
        }
        }
    }
    ctx->pc = 0x296200u;
    // 0x296200: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x296200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x296204: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x296204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x296208: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
    ctx->pc = 0x296208u;
    {
        const bool branch_taken_0x296208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296208u;
            // 0x29620c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296208) {
            ctx->pc = 0x295B04u;
            runtime->cooperativeGuestYield();
            goto label_295b04;
        }
    }
    ctx->pc = 0x296210u;
label_296210:
    // 0x296210: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x296210u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_296214:
    // 0x296214: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x296214u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 23));
    // 0x296218: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x296218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x29621c: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
    ctx->pc = 0x29621Cu;
    {
        const bool branch_taken_0x29621c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29621Cu;
            // 0x296220: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29621c) {
            ctx->pc = 0x2955C8u;
            runtime->cooperativeGuestYield();
            goto label_2955c8;
        }
    }
    ctx->pc = 0x296224u;
    // 0x296224: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x296224u;
    {
        const bool branch_taken_0x296224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296224u;
            // 0x296228: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296224) {
            ctx->pc = 0x296238u;
            goto label_296238;
        }
    }
    ctx->pc = 0x29622Cu;
label_29622c:
    // 0x29622c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x296230: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x296230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
    // 0x296234: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x296234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_296238:
    // 0x296238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29623c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x29623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x296240: 0x60f809  jalr        $v1
    ctx->pc = 0x296240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x296248u);
        ctx->pc = 0x296244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296240u;
            // 0x296244: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x296248u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x296248u; }
            if (ctx->pc != 0x296248u) { return; }
        }
        }
    }
    ctx->pc = 0x296248u;
    // 0x296248: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x296248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29624c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x29624cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x296250: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x296250u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x296254: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x296254u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x296258: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x296258u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29625c: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x29625cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x296260: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x296260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296264: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x296264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x296268: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x296268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29626c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x29626cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x296270: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x296270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296274: 0x3e00008  jr          $ra
    ctx->pc = 0x296274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296274u;
            // 0x296278: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29627Cu;
    // 0x29627c: 0x0  nop
    ctx->pc = 0x29627cu;
    // NOP
    // 0x296280: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x296280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x296284: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296284u;
    {
        const bool branch_taken_0x296284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296284u;
            // 0x296288: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296284) {
            ctx->pc = 0x296294u;
            goto label_296294;
        }
    }
    ctx->pc = 0x29628Cu;
    // 0x29628c: 0x3e00008  jr          $ra
    ctx->pc = 0x29628Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29628Cu;
            // 0x296290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296294u;
label_296294:
    // 0x296294: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x296294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x296298: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x296298u;
    {
        const bool branch_taken_0x296298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296298) {
            ctx->pc = 0x29629Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x296298u;
            // 0x29629c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2962CCu;
            goto label_2962cc;
        }
    }
    ctx->pc = 0x2962A0u;
    // 0x2962a0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2962a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2962a4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2962a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2962a8: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x2962a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x2962ac: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2962acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2962b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2962b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2962b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2962b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2962b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2962b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2962bc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x2962bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x2962c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2962c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2962c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2962C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2962C4u;
            // 0x2962c8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2962CCu;
label_2962cc:
    // 0x2962cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2962ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2962D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2962D0u;
            // 0x2962d4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2962D8u;
    // 0x2962d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2962d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2962dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2962dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2962E0u;
    {
        const bool branch_taken_0x2962e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2962E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2962E0u;
            // 0x2962e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962e0) {
            ctx->pc = 0x2962F0u;
            goto label_2962f0;
        }
    }
    ctx->pc = 0x2962E8u;
    // 0x2962e8: 0xc0a5486  jal         func_295218
    ctx->pc = 0x2962E8u;
    SET_GPR_U32(ctx, 31, 0x2962F0u);
    ctx->pc = 0x295218u;
    if (runtime->hasFunction(0x295218u)) {
        auto targetFn = runtime->lookupFunction(0x295218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962F0u; }
        if (ctx->pc != 0x2962F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295218_0x295218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962F0u; }
        if (ctx->pc != 0x2962F0u) { return; }
    }
    ctx->pc = 0x2962F0u;
label_2962f0:
    // 0x2962f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2962f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2962f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2962f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2962f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2962F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2962F8u;
            // 0x2962fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296300u;
    // 0x296300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296304: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x296304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296308: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296308u;
    {
        const bool branch_taken_0x296308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296308u;
            // 0x29630c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296308) {
            ctx->pc = 0x296318u;
            goto label_296318;
        }
    }
    ctx->pc = 0x296310u;
    // 0x296310: 0xc0a54b2  jal         func_2952C8
    ctx->pc = 0x296310u;
    SET_GPR_U32(ctx, 31, 0x296318u);
    ctx->pc = 0x2952C8u;
    if (runtime->hasFunction(0x2952C8u)) {
        auto targetFn = runtime->lookupFunction(0x2952C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296318u; }
        if (ctx->pc != 0x296318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002952C8_0x2952c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296318u; }
        if (ctx->pc != 0x296318u) { return; }
    }
    ctx->pc = 0x296318u;
label_296318:
    // 0x296318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29631c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296320: 0x3e00008  jr          $ra
    ctx->pc = 0x296320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296320u;
            // 0x296324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2955C8u: goto label_2955c8;
            case 0x2955E8u: goto label_2955e8;
            case 0x295624u: goto label_295624;
            case 0x29562Cu: goto label_29562c;
            case 0x295634u: goto label_295634;
            case 0x29563Cu: goto label_29563c;
            case 0x295648u: goto label_295648;
            case 0x295674u: goto label_295674;
            case 0x295684u: goto label_295684;
            case 0x2956B8u: goto label_2956b8;
            case 0x2956D0u: goto label_2956d0;
            case 0x2956F8u: goto label_2956f8;
            case 0x29570Cu: goto label_29570c;
            case 0x295714u: goto label_295714;
            case 0x29571Cu: goto label_29571c;
            case 0x295724u: goto label_295724;
            case 0x29572Cu: goto label_29572c;
            case 0x295744u: goto label_295744;
            case 0x295754u: goto label_295754;
            case 0x295758u: goto label_295758;
            case 0x295774u: goto label_295774;
            case 0x295788u: goto label_295788;
            case 0x295798u: goto label_295798;
            case 0x2957CCu: goto label_2957cc;
            case 0x2957D0u: goto label_2957d0;
            case 0x2957D4u: goto label_2957d4;
            case 0x2957E0u: goto label_2957e0;
            case 0x29580Cu: goto label_29580c;
            case 0x295834u: goto label_295834;
            case 0x29584Cu: goto label_29584c;
            case 0x29585Cu: goto label_29585c;
            case 0x295860u: goto label_295860;
            case 0x29587Cu: goto label_29587c;
            case 0x295894u: goto label_295894;
            case 0x2958A0u: goto label_2958a0;
            case 0x2958CCu: goto label_2958cc;
            case 0x2958E4u: goto label_2958e4;
            case 0x2958F4u: goto label_2958f4;
            case 0x2958F8u: goto label_2958f8;
            case 0x295918u: goto label_295918;
            case 0x295930u: goto label_295930;
            case 0x29593Cu: goto label_29593c;
            case 0x295940u: goto label_295940;
            case 0x29595Cu: goto label_29595c;
            case 0x295974u: goto label_295974;
            case 0x295990u: goto label_295990;
            case 0x2959D0u: goto label_2959d0;
            case 0x2959D4u: goto label_2959d4;
            case 0x2959DCu: goto label_2959dc;
            case 0x2959E4u: goto label_2959e4;
            case 0x2959FCu: goto label_2959fc;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A10u: goto label_295a10;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A50u: goto label_295a50;
            case 0x295A90u: goto label_295a90;
            case 0x295A94u: goto label_295a94;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AA8u: goto label_295aa8;
            case 0x295ADCu: goto label_295adc;
            case 0x295B04u: goto label_295b04;
            case 0x295B0Cu: goto label_295b0c;
            case 0x295BA0u: goto label_295ba0;
            case 0x295BC8u: goto label_295bc8;
            case 0x295BECu: goto label_295bec;
            case 0x295C00u: goto label_295c00;
            case 0x295C18u: goto label_295c18;
            case 0x295C3Cu: goto label_295c3c;
            case 0x295C48u: goto label_295c48;
            case 0x295C50u: goto label_295c50;
            case 0x295C88u: goto label_295c88;
            case 0x295CB4u: goto label_295cb4;
            case 0x295CC8u: goto label_295cc8;
            case 0x295CD8u: goto label_295cd8;
            case 0x295D04u: goto label_295d04;
            case 0x295D08u: goto label_295d08;
            case 0x295D10u: goto label_295d10;
            case 0x295D34u: goto label_295d34;
            case 0x295D64u: goto label_295d64;
            case 0x295D68u: goto label_295d68;
            case 0x295DB4u: goto label_295db4;
            case 0x295DD0u: goto label_295dd0;
            case 0x295DD4u: goto label_295dd4;
            case 0x295DF0u: goto label_295df0;
            case 0x295E34u: goto label_295e34;
            case 0x295E38u: goto label_295e38;
            case 0x295E48u: goto label_295e48;
            case 0x295E70u: goto label_295e70;
            case 0x295E78u: goto label_295e78;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EB0u: goto label_295eb0;
            case 0x295EE0u: goto label_295ee0;
            case 0x295F08u: goto label_295f08;
            case 0x295F54u: goto label_295f54;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F68u: goto label_295f68;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB8u: goto label_295fb8;
            case 0x296000u: goto label_296000;
            case 0x296008u: goto label_296008;
            case 0x296018u: goto label_296018;
            case 0x296054u: goto label_296054;
            case 0x296060u: goto label_296060;
            case 0x296088u: goto label_296088;
            case 0x296090u: goto label_296090;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960D8u: goto label_2960d8;
            case 0x296120u: goto label_296120;
            case 0x296128u: goto label_296128;
            case 0x296138u: goto label_296138;
            case 0x296174u: goto label_296174;
            case 0x296180u: goto label_296180;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B0u: goto label_2961b0;
            case 0x2961E4u: goto label_2961e4;
            case 0x2961F4u: goto label_2961f4;
            case 0x296210u: goto label_296210;
            case 0x296214u: goto label_296214;
            case 0x29622Cu: goto label_29622c;
            case 0x296238u: goto label_296238;
            case 0x296294u: goto label_296294;
            case 0x2962CCu: goto label_2962cc;
            case 0x2962F0u: goto label_2962f0;
            case 0x296318u: goto label_296318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296328u;
}
