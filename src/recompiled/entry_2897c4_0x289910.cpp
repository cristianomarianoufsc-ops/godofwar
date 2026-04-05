#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2897c4
// Address: 0x2897c4 - 0x289910
void entry_2897c4_0x289910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2897c4_0x289910");
#endif

    ctx->pc = 0x2897c4u;

    // 0x2897c4: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x2897c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2897c8: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x2897c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x2897cc: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2897CCu;
    {
        const bool branch_taken_0x2897cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2897cc) {
            ctx->pc = 0x2897D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2897CCu;
            // 0x2897d0: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2898FCu;
            goto label_2898fc;
        }
    }
    ctx->pc = 0x2897D4u;
    // 0x2897d4: 0x3109000f  andi        $t1, $t0, 0xF
    ctx->pc = 0x2897d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x2897d8: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x2897d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x2897dc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2897dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2897e0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x2897e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x2897e4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2897e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2897e8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x2897e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x2897ec: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x2897ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x2897f0: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x2897f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x2897f4: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x2897f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x2897f8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2897f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2897fc: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x2897fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x289800: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x289800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x289804: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x289804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x289808: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x289808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x28980c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x28980cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x289810: 0x1520001f  bnez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x289810u;
    {
        const bool branch_taken_0x289810 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x289814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289810u;
            // 0x289814: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289810) {
            ctx->pc = 0x289890u;
            goto label_289890;
        }
    }
    ctx->pc = 0x289818u;
    // 0x289818: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x289818u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28981c: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x28981cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x289820: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x289820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289824: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x289824u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x289828: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x289828u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x28982c: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x28982cu;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x289830: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x289830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x289834: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x289834u;
    {
        const bool branch_taken_0x289834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289834) {
            ctx->pc = 0x289838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289834u;
            // 0x289838: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2898FCu;
            goto label_2898fc;
        }
    }
    ctx->pc = 0x28983Cu;
    // 0x28983c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x28983cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289840: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x289840u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_289844:
    // 0x289844: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x289844u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x289848: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x289848u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x28984c: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x28984cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x289850: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x289850u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x289854: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x289854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x289858: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x289858u;
    {
        const bool branch_taken_0x289858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28985Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289858u;
            // 0x28985c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289858) {
            ctx->pc = 0x289868u;
            goto label_289868;
        }
    }
    ctx->pc = 0x289860u;
    // 0x289860: 0x3e00008  jr          $ra
    ctx->pc = 0x289860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289860u;
            // 0x289864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289844u: goto label_289844;
            case 0x289868u: goto label_289868;
            case 0x289890u: goto label_289890;
            case 0x2898A4u: goto label_2898a4;
            case 0x2898C0u: goto label_2898c0;
            case 0x2898DCu: goto label_2898dc;
            case 0x2898FCu: goto label_2898fc;
            case 0x289904u: goto label_289904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289868u;
label_289868:
    // 0x289868: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x289868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x28986c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x28986cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289870: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x289870u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289874: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x289874u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x289878: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x289878u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x28987c: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x28987cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x289880: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x289880u;
    {
        const bool branch_taken_0x289880 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x289880) {
            ctx->pc = 0x289884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289880u;
            // 0x289884: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289844u;
            runtime->cooperativeGuestYield();
            goto label_289844;
        }
    }
    ctx->pc = 0x289888u;
    // 0x289888: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x289888u;
    {
        const bool branch_taken_0x289888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28988Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289888u;
            // 0x28988c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289888) {
            ctx->pc = 0x2898FCu;
            goto label_2898fc;
        }
    }
    ctx->pc = 0x289890u;
label_289890:
    // 0x289890: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x289890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289894: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x289894u;
    {
        const bool branch_taken_0x289894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x289894) {
            ctx->pc = 0x289898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289894u;
            // 0x289898: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2898FCu;
            goto label_2898fc;
        }
    }
    ctx->pc = 0x28989Cu;
    // 0x28989c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x28989cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2898a0: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x2898a0u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2898a4:
    // 0x2898a4: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x2898a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x2898a8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2898a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2898ac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2898acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2898b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2898B0u;
    {
        const bool branch_taken_0x2898b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2898B0u;
            // 0x2898b4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898b0) {
            ctx->pc = 0x2898C0u;
            goto label_2898c0;
        }
    }
    ctx->pc = 0x2898B8u;
    // 0x2898b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2898B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2898BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2898B8u;
            // 0x2898bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289844u: goto label_289844;
            case 0x289868u: goto label_289868;
            case 0x289890u: goto label_289890;
            case 0x2898A4u: goto label_2898a4;
            case 0x2898C0u: goto label_2898c0;
            case 0x2898DCu: goto label_2898dc;
            case 0x2898FCu: goto label_2898fc;
            case 0x289904u: goto label_289904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2898C0u;
label_2898c0:
    // 0x2898c0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2898c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2898c4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2898c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2898c8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2898c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2898cc: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2898CCu;
    {
        const bool branch_taken_0x2898cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2898cc) {
            ctx->pc = 0x2898D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2898CCu;
            // 0x2898d0: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2898A4u;
            runtime->cooperativeGuestYield();
            goto label_2898a4;
        }
    }
    ctx->pc = 0x2898D4u;
    // 0x2898d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2898D4u;
    {
        const bool branch_taken_0x2898d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2898D4u;
            // 0x2898d8: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898d4) {
            ctx->pc = 0x2898FCu;
            goto label_2898fc;
        }
    }
    ctx->pc = 0x2898DCu;
label_2898dc:
    // 0x2898dc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2898dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2898e0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2898e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2898e4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2898e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2898e8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2898E8u;
    {
        const bool branch_taken_0x2898e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2898e8) {
            ctx->pc = 0x2898ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2898E8u;
            // 0x2898ec: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289904u;
            goto label_289904;
        }
    }
    ctx->pc = 0x2898F0u;
    // 0x2898f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2898f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2898f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2898f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2898f8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2898f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2898fc:
    // 0x2898fc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2898FCu;
    {
        const bool branch_taken_0x2898fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2898FCu;
            // 0x289900: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898fc) {
            ctx->pc = 0x2898DCu;
            runtime->cooperativeGuestYield();
            goto label_2898dc;
        }
    }
    ctx->pc = 0x289904u;
label_289904:
    // 0x289904: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x289904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289908: 0x3e00008  jr          $ra
    ctx->pc = 0x289908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289908u;
            // 0x28990c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289844u: goto label_289844;
            case 0x289868u: goto label_289868;
            case 0x289890u: goto label_289890;
            case 0x2898A4u: goto label_2898a4;
            case 0x2898C0u: goto label_2898c0;
            case 0x2898DCu: goto label_2898dc;
            case 0x2898FCu: goto label_2898fc;
            case 0x289904u: goto label_289904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289910u;
}
