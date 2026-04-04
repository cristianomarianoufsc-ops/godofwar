#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155668
// Address: 0x155668 - 0x1558f0
void sub_00155668_0x155668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155668_0x155668");
#endif

    ctx->pc = 0x155668u;

    // 0x155668: 0x27bdcfc0  addiu       $sp, $sp, -0x3040
    ctx->pc = 0x155668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294954944));
    // 0x15566c: 0x7fb13020  sq          $s1, 0x3020($sp)
    ctx->pc = 0x15566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12320), GPR_VEC(ctx, 17));
    // 0x155670: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x155670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155674: 0x7fb03030  sq          $s0, 0x3030($sp)
    ctx->pc = 0x155674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12336), GPR_VEC(ctx, 16));
    // 0x155678: 0x226102b  sltu        $v0, $s1, $a2
    ctx->pc = 0x155678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15567c: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x15567Cu;
    {
        const bool branch_taken_0x15567c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15567Cu;
            // 0x155680: 0xffbf3010  sd          $ra, 0x3010($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 12304), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15567c) {
            ctx->pc = 0x1558D8u;
            goto label_1558d8;
        }
    }
    ctx->pc = 0x155684u;
    // 0x155684: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x155684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155688: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15568c: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x15568cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
label_155690:
    // 0x155690: 0x30eb7fff  andi        $t3, $a3, 0x7FFF
    ctx->pc = 0x155690u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32767);
    // 0x155694: 0x258339a8  addiu       $v1, $t4, 0x39A8
    ctx->pc = 0x155694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 14760));
    // 0x155698: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x155698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x15569c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1556a0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1556a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1556a4: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1556A4u;
    {
        const bool branch_taken_0x1556a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556A4u;
            // 0x1556a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556a4) {
            ctx->pc = 0x155710u;
            goto label_155710;
        }
    }
    ctx->pc = 0x1556ACu;
    // 0x1556ac: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1556acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1556b0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1556b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1556b4: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1556b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1556b8: 0x85250040  lh          $a1, 0x40($t1)
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x1556bc: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x1556bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1556c0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1556c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1556c4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1556C4u;
    {
        const bool branch_taken_0x1556c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556C4u;
            // 0x1556c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556c4) {
            ctx->pc = 0x1556FCu;
            goto label_1556fc;
        }
    }
    ctx->pc = 0x1556CCu;
    // 0x1556cc: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x1556ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1556d0:
    // 0x1556d0: 0x12a1021  addu        $v0, $t1, $t2
    ctx->pc = 0x1556d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1556d4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1556d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1556d8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1556d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1556dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1556DCu;
    {
        const bool branch_taken_0x1556dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556DCu;
            // 0x1556e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556dc) {
            ctx->pc = 0x1556F0u;
            goto label_1556f0;
        }
    }
    ctx->pc = 0x1556E4u;
    // 0x1556e4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1556e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1556e8: 0x10a1021  addu        $v0, $t0, $t2
    ctx->pc = 0x1556e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1556ec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1556ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1556f0:
    // 0x1556f0: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1556f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1556f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1556F4u;
    {
        const bool branch_taken_0x1556f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1556F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556F4u;
            // 0x1556f8: 0x45080  sll         $t2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556f4) {
            ctx->pc = 0x1556D0u;
            runtime->cooperativeGuestYield();
            goto label_1556d0;
        }
    }
    ctx->pc = 0x1556FCu;
label_1556fc:
    // 0x1556fc: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x1556fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x155700: 0x258339a8  addiu       $v1, $t4, 0x39A8
    ctx->pc = 0x155700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 14760));
    // 0x155704: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x155704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x155708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15570c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15570cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_155710:
    // 0x155710: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x155710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x155714: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x155714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155718: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x155718u;
    {
        const bool branch_taken_0x155718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155718u;
            // 0x15571c: 0x3c0c0033  lui         $t4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155718) {
            ctx->pc = 0x155690u;
            runtime->cooperativeGuestYield();
            goto label_155690;
        }
    }
    ctx->pc = 0x155720u;
    // 0x155720: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x155720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x155724: 0x11d1823  subu        $v1, $t0, $sp
    ctx->pc = 0x155724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x155728: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x155728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x15572c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15572cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155730: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x155734: 0x12000068  beqz        $s0, . + 4 + (0x68 << 2)
    ctx->pc = 0x155734u;
    {
        const bool branch_taken_0x155734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x155738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155734u;
            // 0x155738: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155734) {
            ctx->pc = 0x1558D8u;
            goto label_1558d8;
        }
    }
    ctx->pc = 0x15573Cu;
    // 0x15573c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x15573cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x155740: 0x24e75658  addiu       $a3, $a3, 0x5658
    ctx->pc = 0x155740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22104));
    // 0x155744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155748: 0xc0a2dba  jal         func_28B6E8
    ctx->pc = 0x155748u;
    SET_GPR_U32(ctx, 31, 0x155750u);
    ctx->pc = 0x15574Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155748u;
            // 0x15574c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B6E8u;
    if (runtime->hasFunction(0x28B6E8u)) {
        auto targetFn = runtime->lookupFunction(0x28B6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155750u; }
        if (ctx->pc != 0x155750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B6E8_0x28b6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155750u; }
        if (ctx->pc != 0x155750u) { return; }
    }
    ctx->pc = 0x155750u;
    // 0x155750: 0x260affff  addiu       $t2, $s0, -0x1
    ctx->pc = 0x155750u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x155754: 0x11400048  beqz        $t2, . + 4 + (0x48 << 2)
    ctx->pc = 0x155754u;
    {
        const bool branch_taken_0x155754 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x155758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155754u;
            // 0x155758: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155754) {
            ctx->pc = 0x155878u;
            goto label_155878;
        }
    }
    ctx->pc = 0x15575Cu;
    // 0x15575c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_155760:
    // 0x155760: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x155760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x155764: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x155764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155768: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x155768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x15576c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x155770: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155770u;
    {
        const bool branch_taken_0x155770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155770u;
            // 0x155774: 0x8c480008  lw          $t0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155770) {
            ctx->pc = 0x155780u;
            goto label_155780;
        }
    }
    ctx->pc = 0x155778u;
    // 0x155778: 0x1100003c  beqz        $t0, . + 4 + (0x3C << 2)
    ctx->pc = 0x155778u;
    {
        const bool branch_taken_0x155778 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x15577Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155778u;
            // 0x15577c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155778) {
            ctx->pc = 0x15586Cu;
            goto label_15586c;
        }
    }
    ctx->pc = 0x155780u;
label_155780:
    // 0x155780: 0xb0482b  sltu        $t1, $a1, $s0
    ctx->pc = 0x155780u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x155784: 0x11200038  beqz        $t1, . + 4 + (0x38 << 2)
    ctx->pc = 0x155784u;
    {
        const bool branch_taken_0x155784 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x155788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155784u;
            // 0x155788: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155784) {
            ctx->pc = 0x155868u;
            goto label_155868;
        }
    }
    ctx->pc = 0x15578Cu;
    // 0x15578c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_155790:
    // 0x155790: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x155790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x155794: 0x9d3821  addu        $a3, $a0, $sp
    ctx->pc = 0x155794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x155798: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x155798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15579c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15579Cu;
    {
        const bool branch_taken_0x15579c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15579Cu;
            // 0x1557a0: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15579c) {
            ctx->pc = 0x1557C4u;
            goto label_1557c4;
        }
    }
    ctx->pc = 0x1557A4u;
    // 0x1557a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1557A4u;
    {
        const bool branch_taken_0x1557a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557a4) {
            ctx->pc = 0x1557B4u;
            goto label_1557b4;
        }
    }
    ctx->pc = 0x1557ACu;
    // 0x1557ac: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1557ACu;
    {
        const bool branch_taken_0x1557ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1557ac) {
            ctx->pc = 0x1557ECu;
            goto label_1557ec;
        }
    }
    ctx->pc = 0x1557B4u;
label_1557b4:
    // 0x1557b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1557B4u;
    {
        const bool branch_taken_0x1557b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557b4) {
            ctx->pc = 0x1557C4u;
            goto label_1557c4;
        }
    }
    ctx->pc = 0x1557BCu;
    // 0x1557bc: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1557BCu;
    {
        const bool branch_taken_0x1557bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1557bc) {
            ctx->pc = 0x1557ECu;
            goto label_1557ec;
        }
    }
    ctx->pc = 0x1557C4u;
label_1557c4:
    // 0x1557c4: 0x51000023  beql        $t0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1557C4u;
    {
        const bool branch_taken_0x1557c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557c4) {
            ctx->pc = 0x1557C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1557C4u;
            // 0x1557c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155854u;
            goto label_155854;
        }
    }
    ctx->pc = 0x1557CCu;
    // 0x1557cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1557CCu;
    {
        const bool branch_taken_0x1557cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557cc) {
            ctx->pc = 0x1557DCu;
            goto label_1557dc;
        }
    }
    ctx->pc = 0x1557D4u;
    // 0x1557d4: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1557D4u;
    {
        const bool branch_taken_0x1557d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1557d4) {
            ctx->pc = 0x1557ECu;
            goto label_1557ec;
        }
    }
    ctx->pc = 0x1557DCu;
label_1557dc:
    // 0x1557dc: 0x5080001d  beql        $a0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1557DCu;
    {
        const bool branch_taken_0x1557dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557dc) {
            ctx->pc = 0x1557E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1557DCu;
            // 0x1557e0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155854u;
            goto label_155854;
        }
    }
    ctx->pc = 0x1557E4u;
    // 0x1557e4: 0x5504001b  bnel        $t0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1557E4u;
    {
        const bool branch_taken_0x1557e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x1557e4) {
            ctx->pc = 0x1557E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1557E4u;
            // 0x1557e8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155854u;
            goto label_155854;
        }
    }
    ctx->pc = 0x1557ECu;
label_1557ec:
    // 0x1557ec: 0x10c50017  beq         $a2, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1557ECu;
    {
        const bool branch_taken_0x1557ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1557F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557ECu;
            // 0x1557f0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557ec) {
            ctx->pc = 0x15584Cu;
            goto label_15584c;
        }
    }
    ctx->pc = 0x1557F4u;
    // 0x1557f4: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x1557f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1557f8: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x1557f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1557fc: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x1557fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x155800: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x155804: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x155804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x155808: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x155808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x15580c: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x15580cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x155810: 0xb3a63007  sdl         $a2, 0x3007($sp)
    ctx->pc = 0x155810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155814: 0xb7a63000  sdr         $a2, 0x3000($sp)
    ctx->pc = 0x155814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155818: 0xafa83008  sw          $t0, 0x3008($sp)
    ctx->pc = 0x155818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12296), GPR_U32(ctx, 8));
    // 0x15581c: 0x68e60007  ldl         $a2, 0x7($a3)
    ctx->pc = 0x15581cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x155820: 0x6ce60000  ldr         $a2, 0x0($a3)
    ctx->pc = 0x155820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x155824: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x155824u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x155828: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x155828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15582c: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x15582cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155830: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x155830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x155834: 0x6ba63007  ldl         $a2, 0x3007($sp)
    ctx->pc = 0x155834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x155838: 0x6fa63000  ldr         $a2, 0x3000($sp)
    ctx->pc = 0x155838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x15583c: 0x8fa73008  lw          $a3, 0x3008($sp)
    ctx->pc = 0x15583cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12296)));
    // 0x155840: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x155840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155844: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x155844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x155848: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x155848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_15584c:
    // 0x15584c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15584Cu;
    {
        const bool branch_taken_0x15584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15584Cu;
            // 0x155850: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15584c) {
            ctx->pc = 0x155868u;
            goto label_155868;
        }
    }
    ctx->pc = 0x155854u;
label_155854:
    // 0x155854: 0xd0102b  sltu        $v0, $a2, $s0
    ctx->pc = 0x155854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x155858: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155858u;
    {
        const bool branch_taken_0x155858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15585Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155858u;
            // 0x15585c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155858) {
            ctx->pc = 0x15586Cu;
            goto label_15586c;
        }
    }
    ctx->pc = 0x155860u;
    // 0x155860: 0x1520ffcb  bnez        $t1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x155860u;
    {
        const bool branch_taken_0x155860 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x155864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155860u;
            // 0x155864: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155860) {
            ctx->pc = 0x155790u;
            runtime->cooperativeGuestYield();
            goto label_155790;
        }
    }
    ctx->pc = 0x155868u;
label_155868:
    // 0x155868: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x155868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15586c:
    // 0x15586c: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x15586cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x155870: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x155870u;
    {
        const bool branch_taken_0x155870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155870u;
            // 0x155874: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155870) {
            ctx->pc = 0x155760u;
            runtime->cooperativeGuestYield();
            goto label_155760;
        }
    }
    ctx->pc = 0x155878u;
label_155878:
    // 0x155878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15587c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15587Cu;
    {
        const bool branch_taken_0x15587c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x155880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15587Cu;
            // 0x155880: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15587c) {
            ctx->pc = 0x1558D8u;
            goto label_1558d8;
        }
    }
    ctx->pc = 0x155884u;
    // 0x155884: 0x0  nop
    ctx->pc = 0x155884u;
    // NOP
label_155888:
    // 0x155888: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15588c: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x15588cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155890: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x155890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x155894: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x155894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155898: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x155898u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x15589c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1558a0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1558a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1558a4: 0xa482003c  sh          $v0, 0x3C($a0)
    ctx->pc = 0x1558a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x1558a8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1558a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1558ac: 0x30a27fff  andi        $v0, $a1, 0x7FFF
    ctx->pc = 0x1558acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1558b0: 0x246339a8  addiu       $v1, $v1, 0x39A8
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14760));
    // 0x1558b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1558b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1558b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1558b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1558bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1558bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1558c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1558c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1558c4: 0xf0182b  sltu        $v1, $a3, $s0
    ctx->pc = 0x1558c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1558c8: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x1558c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1558cc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1558CCu;
    {
        const bool branch_taken_0x1558cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1558D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558CCu;
            // 0x1558d0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558cc) {
            ctx->pc = 0x155888u;
            runtime->cooperativeGuestYield();
            goto label_155888;
        }
    }
    ctx->pc = 0x1558D4u;
    // 0x1558d4: 0x0  nop
    ctx->pc = 0x1558d4u;
    // NOP
label_1558d8:
    // 0x1558d8: 0x7bb03030  lq          $s0, 0x3030($sp)
    ctx->pc = 0x1558d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 12336)));
    // 0x1558dc: 0x7bb13020  lq          $s1, 0x3020($sp)
    ctx->pc = 0x1558dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 12320)));
    // 0x1558e0: 0xdfbf3010  ld          $ra, 0x3010($sp)
    ctx->pc = 0x1558e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 12304)));
    // 0x1558e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1558E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558E4u;
            // 0x1558e8: 0x27bd3040  addiu       $sp, $sp, 0x3040 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155690u: goto label_155690;
            case 0x1556D0u: goto label_1556d0;
            case 0x1556F0u: goto label_1556f0;
            case 0x1556FCu: goto label_1556fc;
            case 0x155710u: goto label_155710;
            case 0x155760u: goto label_155760;
            case 0x155780u: goto label_155780;
            case 0x155790u: goto label_155790;
            case 0x1557B4u: goto label_1557b4;
            case 0x1557C4u: goto label_1557c4;
            case 0x1557DCu: goto label_1557dc;
            case 0x1557ECu: goto label_1557ec;
            case 0x15584Cu: goto label_15584c;
            case 0x155854u: goto label_155854;
            case 0x155868u: goto label_155868;
            case 0x15586Cu: goto label_15586c;
            case 0x155878u: goto label_155878;
            case 0x155888u: goto label_155888;
            case 0x1558D8u: goto label_1558d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1558ECu;
    // 0x1558ec: 0x0  nop
    ctx->pc = 0x1558ecu;
    // NOP
}
