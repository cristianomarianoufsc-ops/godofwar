#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270350
// Address: 0x270350 - 0x2705e0
void sub_00270350_0x270350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270350_0x270350");
#endif

    ctx->pc = 0x270350u;

    // 0x270350: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x270350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x270354: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x270354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x270358: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x270358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27035c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x270360: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x270360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x270364: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x270364u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270368: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x270368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x27036c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x270370: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x270370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x270374: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x270374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x270378: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x270378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27037c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27037cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x270380: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x270380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x270384: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x270384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x270388: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x270388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27038c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x27038cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270390: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x270390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x270394: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x270394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x270398: 0x8cc50184  lw          $a1, 0x184($a2)
    ctx->pc = 0x270398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x27039c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x27039cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2703a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2703a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2703a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2703a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2703a8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2703A8u;
    {
        const bool branch_taken_0x2703a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2703ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2703A8u;
            // 0x2703ac: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703a8) {
            ctx->pc = 0x2703C4u;
            goto label_2703c4;
        }
    }
    ctx->pc = 0x2703B0u;
    // 0x2703b0: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x2703b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x2703b4: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2703B4u;
    {
        const bool branch_taken_0x2703b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2703B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2703B4u;
            // 0x2703b8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703b4) {
            ctx->pc = 0x2703FCu;
            goto label_2703fc;
        }
    }
    ctx->pc = 0x2703BCu;
    // 0x2703bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2703BCu;
    {
        const bool branch_taken_0x2703bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2703BCu;
            // 0x2703c0: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703bc) {
            ctx->pc = 0x2703D0u;
            goto label_2703d0;
        }
    }
    ctx->pc = 0x2703C4u;
label_2703c4:
    // 0x2703c4: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2703c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2703c8: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x2703c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x2703cc: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2703ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2703d0:
    // 0x2703d0: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x2703d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2703d4: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x2703d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x2703d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2703D8u;
    {
        const bool branch_taken_0x2703d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2703D8u;
            // 0x2703dc: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703d8) {
            ctx->pc = 0x2703ECu;
            goto label_2703ec;
        }
    }
    ctx->pc = 0x2703E0u;
    // 0x2703e0: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x2703e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2703e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2703E4u;
    {
        const bool branch_taken_0x2703e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2703E4u;
            // 0x2703e8: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703e4) {
            ctx->pc = 0x2703F0u;
            goto label_2703f0;
        }
    }
    ctx->pc = 0x2703ECu;
label_2703ec:
    // 0x2703ec: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x2703ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2703f0:
    // 0x2703f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2703f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2703f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2703F4u;
    {
        const bool branch_taken_0x2703f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2703F4u;
            // 0x2703f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703f4) {
            ctx->pc = 0x270424u;
            goto label_270424;
        }
    }
    ctx->pc = 0x2703FCu;
label_2703fc:
    // 0x2703fc: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2703fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x270400: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x270400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x270404: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x270404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x270408: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x270408u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x27040c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x27040cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x270410: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x270410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x270414: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x270414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x270418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x270418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27041c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x27041cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x270420: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x270420u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_270424:
    // 0x270424: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x270424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x270428: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x270428u;
    {
        const bool branch_taken_0x270428 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270428u;
            // 0x27042c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270428) {
            ctx->pc = 0x2705B0u;
            goto label_2705b0;
        }
    }
    ctx->pc = 0x270430u;
    // 0x270430: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x270430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x270434: 0x0  nop
    ctx->pc = 0x270434u;
    // NOP
label_270438:
    // 0x270438: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x270438u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27043c: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x27043Cu;
    {
        const bool branch_taken_0x27043c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x270440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27043Cu;
            // 0x270440: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27043c) {
            ctx->pc = 0x27057Cu;
            goto label_27057c;
        }
    }
    ctx->pc = 0x270444u;
    // 0x270444: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x270444u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_270448:
    // 0x270448: 0xc0a648c  jal         func_299230
    ctx->pc = 0x270448u;
    SET_GPR_U32(ctx, 31, 0x270450u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270450u; }
        if (ctx->pc != 0x270450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270450u; }
        if (ctx->pc != 0x270450u) { return; }
    }
    ctx->pc = 0x270450u;
    // 0x270450: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x270450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x270454: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x270454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x270458: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x270458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x27045c: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x27045cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x270460: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x270460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x270464: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x270464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x270468: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x270468u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
    // 0x27046c: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x27046cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x270470: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x270470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x270474: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x270474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x270478: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x270478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x27047c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x27047cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x270480: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x270480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x270484: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270484u;
    {
        const bool branch_taken_0x270484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270484u;
            // 0x270488: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270484) {
            ctx->pc = 0x270498u;
            goto label_270498;
        }
    }
    ctx->pc = 0x27048Cu;
    // 0x27048c: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x27048Cu;
    SET_GPR_U32(ctx, 31, 0x270494u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270494u; }
        if (ctx->pc != 0x270494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270494u; }
        if (ctx->pc != 0x270494u) { return; }
    }
    ctx->pc = 0x270494u;
    // 0x270494: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x270494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_270498:
    // 0x270498: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x270498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x27049c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27049cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2704a0: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x2704a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x2704a4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x2704a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_2704a8:
    // 0x2704a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2704a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2704ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2704acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2704b0: 0x0  nop
    ctx->pc = 0x2704b0u;
    // NOP
    // 0x2704b4: 0x0  nop
    ctx->pc = 0x2704b4u;
    // NOP
    // 0x2704b8: 0x0  nop
    ctx->pc = 0x2704b8u;
    // NOP
    // 0x2704bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2704BCu;
    {
        const bool branch_taken_0x2704bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2704bc) {
            ctx->pc = 0x2704A8u;
            runtime->cooperativeGuestYield();
            goto label_2704a8;
        }
    }
    ctx->pc = 0x2704C4u;
    // 0x2704c4: 0xc0a648c  jal         func_299230
    ctx->pc = 0x2704C4u;
    SET_GPR_U32(ctx, 31, 0x2704CCu);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2704CCu; }
        if (ctx->pc != 0x2704CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2704CCu; }
        if (ctx->pc != 0x2704CCu) { return; }
    }
    ctx->pc = 0x2704CCu;
    // 0x2704cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2704ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2704d0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2704d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2704d4: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x2704d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x2704d8: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x2704d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x2704dc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2704dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2704e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2704e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2704e4: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x2704e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x2704e8: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x2704e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x2704ec: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2704ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2704f0: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x2704f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x2704f4: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x2704f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x2704f8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2704f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2704fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2704fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x270500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270500u;
    {
        const bool branch_taken_0x270500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270500u;
            // 0x270504: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270500) {
            ctx->pc = 0x270514u;
            goto label_270514;
        }
    }
    ctx->pc = 0x270508u;
    // 0x270508: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x270508u;
    SET_GPR_U32(ctx, 31, 0x270510u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270510u; }
        if (ctx->pc != 0x270510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270510u; }
        if (ctx->pc != 0x270510u) { return; }
    }
    ctx->pc = 0x270510u;
    // 0x270510: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x270510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_270514:
    // 0x270514: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x270514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x270518: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x270518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x27051c: 0x0  nop
    ctx->pc = 0x27051cu;
    // NOP
label_270520:
    // 0x270520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x270520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270524: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x270524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x270528: 0x0  nop
    ctx->pc = 0x270528u;
    // NOP
    // 0x27052c: 0x0  nop
    ctx->pc = 0x27052cu;
    // NOP
    // 0x270530: 0x0  nop
    ctx->pc = 0x270530u;
    // NOP
    // 0x270534: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x270534u;
    {
        const bool branch_taken_0x270534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270534) {
            ctx->pc = 0x270520u;
            runtime->cooperativeGuestYield();
            goto label_270520;
        }
    }
    ctx->pc = 0x27053Cu;
    // 0x27053c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27053cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x270540: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x270540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x270544: 0x0  nop
    ctx->pc = 0x270544u;
    // NOP
label_270548:
    // 0x270548: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x270548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27054c: 0x0  nop
    ctx->pc = 0x27054cu;
    // NOP
    // 0x270550: 0x0  nop
    ctx->pc = 0x270550u;
    // NOP
    // 0x270554: 0x0  nop
    ctx->pc = 0x270554u;
    // NOP
    // 0x270558: 0x0  nop
    ctx->pc = 0x270558u;
    // NOP
    // 0x27055c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27055Cu;
    {
        const bool branch_taken_0x27055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27055c) {
            ctx->pc = 0x270548u;
            runtime->cooperativeGuestYield();
            goto label_270548;
        }
    }
    ctx->pc = 0x270564u;
    // 0x270564: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x270564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270568: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x270568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x27056c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x27056Cu;
    {
        const bool branch_taken_0x27056c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27056Cu;
            // 0x270570: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27056c) {
            ctx->pc = 0x270448u;
            runtime->cooperativeGuestYield();
            goto label_270448;
        }
    }
    ctx->pc = 0x270574u;
    // 0x270574: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270574u;
    {
        const bool branch_taken_0x270574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270574u;
            // 0x270578: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270574) {
            ctx->pc = 0x270584u;
            goto label_270584;
        }
    }
    ctx->pc = 0x27057Cu;
label_27057c:
    // 0x27057c: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x27057cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x270580: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x270580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_270584:
    // 0x270584: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x270584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270588: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x270588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x27058c: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x27058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x270590: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x270590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x270594: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x270594u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x270598: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x270598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27059c: 0xe00013  mtlo        $a3
    ctx->pc = 0x27059cu;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x2705a0: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x2705a0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2705a4: 0x3812  mflo        $a3
    ctx->pc = 0x2705a4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2705a8: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x2705A8u;
    {
        const bool branch_taken_0x2705a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2705ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2705A8u;
            // 0x2705ac: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705a8) {
            ctx->pc = 0x270438u;
            runtime->cooperativeGuestYield();
            goto label_270438;
        }
    }
    ctx->pc = 0x2705B0u;
label_2705b0:
    // 0x2705b0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2705b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2705b4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2705b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2705b8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2705b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2705bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2705bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2705c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2705c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2705c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2705c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2705c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2705c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2705cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2705ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2705d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2705d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2705d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2705d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2705d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2705D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2705DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2705D8u;
            // 0x2705dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2703C4u: goto label_2703c4;
            case 0x2703D0u: goto label_2703d0;
            case 0x2703ECu: goto label_2703ec;
            case 0x2703F0u: goto label_2703f0;
            case 0x2703FCu: goto label_2703fc;
            case 0x270424u: goto label_270424;
            case 0x270438u: goto label_270438;
            case 0x270448u: goto label_270448;
            case 0x270498u: goto label_270498;
            case 0x2704A8u: goto label_2704a8;
            case 0x270514u: goto label_270514;
            case 0x270520u: goto label_270520;
            case 0x270548u: goto label_270548;
            case 0x27057Cu: goto label_27057c;
            case 0x270584u: goto label_270584;
            case 0x2705B0u: goto label_2705b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2705E0u;
}
