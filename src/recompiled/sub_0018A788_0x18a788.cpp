#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A788
// Address: 0x18a788 - 0x18aaa8
void sub_0018A788_0x18a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A788_0x18a788");
#endif

    ctx->pc = 0x18a788u;

    // 0x18a788: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18a788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18a78c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18a790: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x18a790u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
    // 0x18a794: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18a794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18a798: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18a79c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18a7a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18a7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a7a8: 0x8e834f20  lw          $v1, 0x4F20($s4)
    ctx->pc = 0x18a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20256)));
    // 0x18a7ac: 0x8c620140  lw          $v0, 0x140($v1)
    ctx->pc = 0x18a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x18a7b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18a7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18a7b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18A7B4u;
    {
        const bool branch_taken_0x18a7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7B4u;
            // 0x18a7b8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7b4) {
            ctx->pc = 0x18A7E4u;
            goto label_18a7e4;
        }
    }
    ctx->pc = 0x18A7BCu;
    // 0x18a7bc: 0x8c63013c  lw          $v1, 0x13C($v1)
    ctx->pc = 0x18a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x18a7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a7c4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A7C4u;
    {
        const bool branch_taken_0x18a7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7C4u;
            // 0x18a7c8: 0x8e844f20  lw          $a0, 0x4F20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7c4) {
            ctx->pc = 0x18A7E8u;
            goto label_18a7e8;
        }
    }
    ctx->pc = 0x18A7CCu;
    // 0x18a7cc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18a7d0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18a7d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x18a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18a7d8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x18a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x18a7dc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x18a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x18a7e0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x18a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_18a7e4:
    // 0x18a7e4: 0x8e844f20  lw          $a0, 0x4F20($s4)
    ctx->pc = 0x18a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20256)));
label_18a7e8:
    // 0x18a7e8: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x18a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x18a7ec: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x18a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x18a7f0: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x18a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18a7f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A7F4u;
    {
        const bool branch_taken_0x18a7f4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18a7f4) {
            ctx->pc = 0x18A804u;
            goto label_18a804;
        }
    }
    ctx->pc = 0x18A7FCu;
    // 0x18a7fc: 0x8c8200ec  lw          $v0, 0xEC($a0)
    ctx->pc = 0x18a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x18a800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18a804:
    // 0x18a804: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A804u;
    {
        const bool branch_taken_0x18a804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a804) {
            ctx->pc = 0x18A808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A804u;
            // 0x18a808: 0x8e46000c  lw          $a2, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A81Cu;
            goto label_18a81c;
        }
    }
    ctx->pc = 0x18A80Cu;
    // 0x18a80c: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x18a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x18a810: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x18A810u;
    {
        const bool branch_taken_0x18a810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a810) {
            ctx->pc = 0x18A814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A810u;
            // 0x18a814: 0x8c8300ec  lw          $v1, 0xEC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A818u;
            goto label_18a818;
        }
    }
    ctx->pc = 0x18A818u;
label_18a818:
    // 0x18a818: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x18a818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18a81c:
    // 0x18a81c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x18a81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x18a820: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x18A820u;
    {
        const bool branch_taken_0x18a820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A820u;
            // 0x18a824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a820) {
            ctx->pc = 0x18A8D8u;
            goto label_18a8d8;
        }
    }
    ctx->pc = 0x18A828u;
    // 0x18a828: 0x8e824f20  lw          $v0, 0x4F20($s4)
    ctx->pc = 0x18a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20256)));
    // 0x18a82c: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x18a82cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x18a830: 0x8c4300e8  lw          $v1, 0xE8($v0)
    ctx->pc = 0x18a830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18a834: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x18a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x18a838: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x18a838u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18a83c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18a840: 0x629823  subu        $s3, $v1, $v0
    ctx->pc = 0x18a840u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a844: 0x1a600017  blez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x18A844u;
    {
        const bool branch_taken_0x18a844 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x18A848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A844u;
            // 0x18a848: 0x3c100fff  lui         $s0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a844) {
            ctx->pc = 0x18A8A4u;
            goto label_18a8a4;
        }
    }
    ctx->pc = 0x18A84Cu;
    // 0x18a84c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x18a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18a850: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x18a850u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x18a854: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x18a854u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x18a858: 0xf02024  and         $a0, $a3, $s0
    ctx->pc = 0x18a858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 16));
    // 0x18a85c: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x18a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x18a860: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x18A860u;
    SET_GPR_U32(ctx, 31, 0x18A868u);
    ctx->pc = 0x18A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A860u;
            // 0x18a864: 0x912025  or          $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A868u; }
        if (ctx->pc != 0x18A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A868u; }
        if (ctx->pc != 0x18A868u) { return; }
    }
    ctx->pc = 0x18A868u;
    // 0x18a868: 0x8e824f20  lw          $v0, 0x4F20($s4)
    ctx->pc = 0x18a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20256)));
    // 0x18a86c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18a86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a870: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x18a870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18a874: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x18a874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18a878: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18a87c: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x18a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x18a880: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x18a880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x18a884: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x18a884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x18a888: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x18A888u;
    SET_GPR_U32(ctx, 31, 0x18A890u);
    ctx->pc = 0x18A88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A888u;
            // 0x18a88c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A890u; }
        if (ctx->pc != 0x18A890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A890u; }
        if (ctx->pc != 0x18A890u) { return; }
    }
    ctx->pc = 0x18A890u;
    // 0x18a890: 0x8e834f20  lw          $v1, 0x4F20($s4)
    ctx->pc = 0x18a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20256)));
    // 0x18a894: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x18a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x18a898: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18a89c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18A89Cu;
    {
        const bool branch_taken_0x18a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A89Cu;
            // 0x18a8a0: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a89c) {
            ctx->pc = 0x18A8D4u;
            goto label_18a8d4;
        }
    }
    ctx->pc = 0x18A8A4u;
label_18a8a4:
    // 0x18a8a4: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x18a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x18a8a8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18a8ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x18a8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x18a8b0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x18a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18a8b4: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x18a8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x18a8b8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x18A8B8u;
    SET_GPR_U32(ctx, 31, 0x18A8C0u);
    ctx->pc = 0x18A8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8B8u;
            // 0x18a8bc: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8C0u; }
        if (ctx->pc != 0x18A8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8C0u; }
        if (ctx->pc != 0x18A8C0u) { return; }
    }
    ctx->pc = 0x18A8C0u;
    // 0x18a8c0: 0x8e844f20  lw          $a0, 0x4F20($s4)
    ctx->pc = 0x18a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20256)));
    // 0x18a8c4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18a8c8: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x18a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x18a8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a8d0: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x18a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
label_18a8d4:
    // 0x18a8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a8d8:
    // 0x18a8d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18a8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a8dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18a8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a8e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18a8e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a8e4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18a8e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a8e8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18a8e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8F0u;
            // 0x18a8f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A7E4u: goto label_18a7e4;
            case 0x18A7E8u: goto label_18a7e8;
            case 0x18A804u: goto label_18a804;
            case 0x18A818u: goto label_18a818;
            case 0x18A81Cu: goto label_18a81c;
            case 0x18A8A4u: goto label_18a8a4;
            case 0x18A8D4u: goto label_18a8d4;
            case 0x18A8D8u: goto label_18a8d8;
            case 0x18A99Cu: goto label_18a99c;
            case 0x18A9BCu: goto label_18a9bc;
            case 0x18A9E8u: goto label_18a9e8;
            case 0x18A9F4u: goto label_18a9f4;
            case 0x18AA54u: goto label_18aa54;
            case 0x18AA74u: goto label_18aa74;
            case 0x18AA88u: goto label_18aa88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A8F8u;
    // 0x18a8f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18a8fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a900: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18a904: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18a908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18a908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a90c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18a910: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x18a914: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a91c: 0x8e674f20  lw          $a3, 0x4F20($s3)
    ctx->pc = 0x18a91cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20256)));
    // 0x18a920: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x18a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18a924: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18a928: 0x2446fffc  addiu       $a2, $v0, -0x4
    ctx->pc = 0x18a928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x18a92c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x18a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x18a930: 0x8ce20144  lw          $v0, 0x144($a3)
    ctx->pc = 0x18a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 324)));
    // 0x18a934: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x18a934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x18a938: 0x10440020  beq         $v0, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18A938u;
    {
        const bool branch_taken_0x18a938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x18A93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A938u;
            // 0x18a93c: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a938) {
            ctx->pc = 0x18A9BCu;
            goto label_18a9bc;
        }
    }
    ctx->pc = 0x18A940u;
    // 0x18a940: 0x8ce40138  lw          $a0, 0x138($a3)
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 312)));
    // 0x18a944: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x18a944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x18a948: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18A948u;
    {
        const bool branch_taken_0x18a948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A948u;
            // 0x18a94c: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a948) {
            ctx->pc = 0x18A9BCu;
            goto label_18a9bc;
        }
    }
    ctx->pc = 0x18A950u;
    // 0x18a950: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x18a950u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x18a954: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x18a954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x18a958: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18A958u;
    {
        const bool branch_taken_0x18a958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A958u;
            // 0x18a95c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a958) {
            ctx->pc = 0x18A99Cu;
            goto label_18a99c;
        }
    }
    ctx->pc = 0x18A960u;
    // 0x18a960: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x18a960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a964: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x18A964u;
    SET_GPR_U32(ctx, 31, 0x18A96Cu);
    ctx->pc = 0x18A968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A964u;
            // 0x18a968: 0x2484010c  addiu       $a0, $a0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A96Cu; }
        if (ctx->pc != 0x18A96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A96Cu; }
        if (ctx->pc != 0x18A96Cu) { return; }
    }
    ctx->pc = 0x18A96Cu;
    // 0x18a96c: 0x8e654f20  lw          $a1, 0x4F20($s3)
    ctx->pc = 0x18a96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20256)));
    // 0x18a970: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x18a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18a974: 0x8ca40138  lw          $a0, 0x138($a1)
    ctx->pc = 0x18a974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 312)));
    // 0x18a978: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18a978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18a97c: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x18a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x18a980: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18a984: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x18a984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x18a988: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x18a988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x18a98c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a990: 0xacb00138  sw          $s0, 0x138($a1)
    ctx->pc = 0x18a990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 312), GPR_U32(ctx, 16));
    // 0x18a994: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18A994u;
    {
        const bool branch_taken_0x18a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A994u;
            // 0x18a998: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a994) {
            ctx->pc = 0x18A9BCu;
            goto label_18a9bc;
        }
    }
    ctx->pc = 0x18A99Cu;
label_18a99c:
    // 0x18a99c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x18A99Cu;
    SET_GPR_U32(ctx, 31, 0x18A9A4u);
    ctx->pc = 0x18A9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A99Cu;
            // 0x18a9a0: 0x2484010c  addiu       $a0, $a0, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A9A4u; }
        if (ctx->pc != 0x18A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A9A4u; }
        if (ctx->pc != 0x18A9A4u) { return; }
    }
    ctx->pc = 0x18A9A4u;
    // 0x18a9a4: 0x8e644f20  lw          $a0, 0x4F20($s3)
    ctx->pc = 0x18a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20256)));
    // 0x18a9a8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x18a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18a9ac: 0x8c820138  lw          $v0, 0x138($a0)
    ctx->pc = 0x18a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x18a9b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a9b4: 0xac820138  sw          $v0, 0x138($a0)
    ctx->pc = 0x18a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 2));
    // 0x18a9b8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x18a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_18a9bc:
    // 0x18a9bc: 0x8e644f20  lw          $a0, 0x4F20($s3)
    ctx->pc = 0x18a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20256)));
    // 0x18a9c0: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x18a9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18a9c4: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x18a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x18a9c8: 0x8c860100  lw          $a2, 0x100($a0)
    ctx->pc = 0x18a9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x18a9cc: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x18a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18a9d0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x18a9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18a9d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A9D4u;
    {
        const bool branch_taken_0x18a9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9D4u;
            // 0x18a9d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9d4) {
            ctx->pc = 0x18A9E8u;
            goto label_18a9e8;
        }
    }
    ctx->pc = 0x18A9DCu;
    // 0x18a9dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a9e0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x18A9E0u;
    {
        const bool branch_taken_0x18a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9E0u;
            // 0x18a9e4: 0xac830134  sw          $v1, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9e0) {
            ctx->pc = 0x18AA88u;
            goto label_18aa88;
        }
    }
    ctx->pc = 0x18A9E8u;
label_18a9e8:
    // 0x18a9e8: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x18a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x18a9ec: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18A9ECu;
    {
        const bool branch_taken_0x18a9ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a9ec) {
            ctx->pc = 0x18A9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9ECu;
            // 0x18a9f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A9F4u;
            goto label_18a9f4;
        }
    }
    ctx->pc = 0x18A9F4u;
label_18a9f4:
    // 0x18a9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a9f8: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x18a9f8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18a9fc: 0x1810  mfhi        $v1
    ctx->pc = 0x18a9fcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18aa00: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x18aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18aa04: 0x469023  subu        $s2, $v0, $a2
    ctx->pc = 0x18aa04u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18aa08: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x18AA08u;
    {
        const bool branch_taken_0x18aa08 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x18AA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA08u;
            // 0x18aa0c: 0x3c102000  lui         $s0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa08) {
            ctx->pc = 0x18AA54u;
            goto label_18aa54;
        }
    }
    ctx->pc = 0x18AA10u;
    // 0x18aa10: 0x8c8400fc  lw          $a0, 0xFC($a0)
    ctx->pc = 0x18aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x18aa14: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x18aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18aa18: 0xf23023  subu        $a2, $a3, $s2
    ctx->pc = 0x18aa18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x18aa1c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18aa20: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x18AA20u;
    SET_GPR_U32(ctx, 31, 0x18AA28u);
    ctx->pc = 0x18AA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA20u;
            // 0x18aa24: 0x902025  or          $a0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA28u; }
        if (ctx->pc != 0x18AA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA28u; }
        if (ctx->pc != 0x18AA28u) { return; }
    }
    ctx->pc = 0x18AA28u;
    // 0x18aa28: 0x8e624f20  lw          $v0, 0x4F20($s3)
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20256)));
    // 0x18aa2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18aa2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa30: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x18aa30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18aa34: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x18aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x18aa38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18aa3c: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x18aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x18aa40: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x18aa40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x18aa44: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x18AA44u;
    SET_GPR_U32(ctx, 31, 0x18AA4Cu);
    ctx->pc = 0x18AA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA44u;
            // 0x18aa48: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA4Cu; }
        if (ctx->pc != 0x18AA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA4Cu; }
        if (ctx->pc != 0x18AA4Cu) { return; }
    }
    ctx->pc = 0x18AA4Cu;
    // 0x18aa4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18AA4Cu;
    {
        const bool branch_taken_0x18aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA4Cu;
            // 0x18aa50: 0x8e654f20  lw          $a1, 0x4F20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa4c) {
            ctx->pc = 0x18AA74u;
            goto label_18aa74;
        }
    }
    ctx->pc = 0x18AA54u;
label_18aa54:
    // 0x18aa54: 0x8c8400fc  lw          $a0, 0xFC($a0)
    ctx->pc = 0x18aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x18aa58: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18aa5c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x18aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18aa60: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18aa60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18aa68: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x18AA68u;
    SET_GPR_U32(ctx, 31, 0x18AA70u);
    ctx->pc = 0x18AA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA68u;
            // 0x18aa6c: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA70u; }
        if (ctx->pc != 0x18AA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA70u; }
        if (ctx->pc != 0x18AA70u) { return; }
    }
    ctx->pc = 0x18AA70u;
    // 0x18aa70: 0x8e654f20  lw          $a1, 0x4F20($s3)
    ctx->pc = 0x18aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20256)));
label_18aa74:
    // 0x18aa74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aa78: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x18aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18aa7c: 0x8ca30108  lw          $v1, 0x108($a1)
    ctx->pc = 0x18aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x18aa80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aa84: 0xaca30108  sw          $v1, 0x108($a1)
    ctx->pc = 0x18aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 3));
label_18aa88:
    // 0x18aa88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18aa88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18aa8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18aa8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18aa90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18aa90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18aa94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18aa94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aa98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18aa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x18AA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA9Cu;
            // 0x18aaa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A7E4u: goto label_18a7e4;
            case 0x18A7E8u: goto label_18a7e8;
            case 0x18A804u: goto label_18a804;
            case 0x18A818u: goto label_18a818;
            case 0x18A81Cu: goto label_18a81c;
            case 0x18A8A4u: goto label_18a8a4;
            case 0x18A8D4u: goto label_18a8d4;
            case 0x18A8D8u: goto label_18a8d8;
            case 0x18A99Cu: goto label_18a99c;
            case 0x18A9BCu: goto label_18a9bc;
            case 0x18A9E8u: goto label_18a9e8;
            case 0x18A9F4u: goto label_18a9f4;
            case 0x18AA54u: goto label_18aa54;
            case 0x18AA74u: goto label_18aa74;
            case 0x18AA88u: goto label_18aa88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AAA4u;
    // 0x18aaa4: 0x0  nop
    ctx->pc = 0x18aaa4u;
    // NOP
}
