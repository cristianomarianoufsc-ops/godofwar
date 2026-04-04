#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298320
// Address: 0x298320 - 0x2984a0
void sub_00298320_0x298320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298320_0x298320");
#endif

    ctx->pc = 0x298320u;

    // 0x298320: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x298320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x298324: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x298324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x298328: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x298328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x29832c: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x29832cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x298330: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x298330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x298334: 0x26929340  addiu       $s2, $s4, -0x6CC0
    ctx->pc = 0x298334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939456));
    // 0x298338: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x298338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29833c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x29833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x298340: 0xc0a5e2e  jal         func_2978B8
    ctx->pc = 0x298340u;
    SET_GPR_U32(ctx, 31, 0x298348u);
    ctx->pc = 0x298344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298340u;
            // 0x298344: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2978B8u;
    if (runtime->hasFunction(0x2978B8u)) {
        auto targetFn = runtime->lookupFunction(0x2978B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298348u; }
        if (ctx->pc != 0x298348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002978B8_0x2978b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298348u; }
        if (ctx->pc != 0x298348u) { return; }
    }
    ctx->pc = 0x298348u;
    // 0x298348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29834c: 0xc0a5f4e  jal         func_297D38
    ctx->pc = 0x29834Cu;
    SET_GPR_U32(ctx, 31, 0x298354u);
    ctx->pc = 0x298350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29834Cu;
            // 0x298350: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D38u;
    if (runtime->hasFunction(0x297D38u)) {
        auto targetFn = runtime->lookupFunction(0x297D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298354u; }
        if (ctx->pc != 0x298354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297D38_0x297d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298354u; }
        if (ctx->pc != 0x298354u) { return; }
    }
    ctx->pc = 0x298354u;
    // 0x298354: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x298354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x298358: 0x8c624b44  lw          $v0, 0x4B44($v1)
    ctx->pc = 0x298358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19268)));
    // 0x29835c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29835Cu;
    {
        const bool branch_taken_0x29835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29835c) {
            ctx->pc = 0x298378u;
            goto label_298378;
        }
    }
    ctx->pc = 0x298364u;
    // 0x298364: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298364u;
    {
        const bool branch_taken_0x298364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x298364) {
            ctx->pc = 0x298378u;
            goto label_298378;
        }
    }
    ctx->pc = 0x29836Cu;
    // 0x29836c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x298370: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298370u;
    {
        const bool branch_taken_0x298370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298370u;
            // 0x298374: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298370) {
            ctx->pc = 0x298388u;
            goto label_298388;
        }
    }
    ctx->pc = 0x298378u;
label_298378:
    // 0x298378: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x298378u;
    SET_GPR_U32(ctx, 31, 0x298380u);
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298380u; }
        if (ctx->pc != 0x298380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298380u; }
        if (ctx->pc != 0x298380u) { return; }
    }
    ctx->pc = 0x298380u;
    // 0x298380: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x298380u;
    {
        const bool branch_taken_0x298380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298380u;
            // 0x298384: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298380) {
            ctx->pc = 0x298478u;
            goto label_298478;
        }
    }
    ctx->pc = 0x298388u;
label_298388:
    // 0x298388: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29838c: 0x2442a840  addiu       $v0, $v0, -0x57C0
    ctx->pc = 0x29838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944832));
    // 0x298390: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x298390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x298394: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x298394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x298398: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x298398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x29839c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x29839cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2983a0: 0x24636b38  addiu       $v1, $v1, 0x6B38
    ctx->pc = 0x2983a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27448));
    // 0x2983a4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2983a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2983a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2983a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2983ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2983acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2983b0: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x2983b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x2983b4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2983b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2983b8: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x2983B8u;
    SET_GPR_U32(ctx, 31, 0x2983C0u);
    ctx->pc = 0x2983BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2983B8u;
            // 0x2983bc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983C0u; }
        if (ctx->pc != 0x2983C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983C0u; }
        if (ctx->pc != 0x2983C0u) { return; }
    }
    ctx->pc = 0x2983C0u;
    // 0x2983c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2983c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983c4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2983c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2983c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2983c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2983cc: 0xae919340  sw          $s1, -0x6CC0($s4)
    ctx->pc = 0x2983ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294939456), GPR_U32(ctx, 17));
    // 0x2983d0: 0x24539f80  addiu       $s3, $v0, -0x6080
    ctx->pc = 0x2983d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
    // 0x2983d4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2983d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2983d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2983d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2983dc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2983dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x2983e0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2983e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2983e4: 0x2484aa40  addiu       $a0, $a0, -0x55C0
    ctx->pc = 0x2983e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945344));
    // 0x2983e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2983e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2983ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2983f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2983f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2983f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2983f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2983f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2983fc: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2983fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x298400: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x298400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298404: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x298404u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298408: 0xc0a5df2  jal         func_2977C8
    ctx->pc = 0x298408u;
    SET_GPR_U32(ctx, 31, 0x298410u);
    ctx->pc = 0x29840Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298408u;
            // 0x29840c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2977C8u;
    if (runtime->hasFunction(0x2977C8u)) {
        auto targetFn = runtime->lookupFunction(0x2977C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298410u; }
        if (ctx->pc != 0x298410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002977C8_0x2977c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298410u; }
        if (ctx->pc != 0x298410u) { return; }
    }
    ctx->pc = 0x298410u;
    // 0x298410: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298410u;
    {
        const bool branch_taken_0x298410 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x298410) {
            ctx->pc = 0x298414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298410u;
            // 0x298414: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298430u;
            goto label_298430;
        }
    }
    ctx->pc = 0x298418u;
    // 0x298418: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x298418u;
    SET_GPR_U32(ctx, 31, 0x298420u);
    ctx->pc = 0x29841Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298418u;
            // 0x29841c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298420u; }
        if (ctx->pc != 0x298420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298420u; }
        if (ctx->pc != 0x298420u) { return; }
    }
    ctx->pc = 0x298420u;
    // 0x298420: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x298420u;
    SET_GPR_U32(ctx, 31, 0x298428u);
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298428u; }
        if (ctx->pc != 0x298428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298428u; }
        if (ctx->pc != 0x298428u) { return; }
    }
    ctx->pc = 0x298428u;
    // 0x298428: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x298428u;
    {
        const bool branch_taken_0x298428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298428u;
            // 0x29842c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298428) {
            ctx->pc = 0x298478u;
            goto label_298478;
        }
    }
    ctx->pc = 0x298430u;
label_298430:
    // 0x298430: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x298430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x298434: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x298434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x298438: 0xc0a5f5a  jal         func_297D68
    ctx->pc = 0x298438u;
    SET_GPR_U32(ctx, 31, 0x298440u);
    ctx->pc = 0x29843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298438u;
            // 0x29843c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D68u;
    if (runtime->hasFunction(0x297D68u)) {
        auto targetFn = runtime->lookupFunction(0x297D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298440u; }
        if (ctx->pc != 0x298440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297d68_0x297dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298440u; }
        if (ctx->pc != 0x298440u) { return; }
    }
    ctx->pc = 0x298440u;
    // 0x298440: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298440u;
    {
        const bool branch_taken_0x298440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x298440) {
            ctx->pc = 0x298458u;
            goto label_298458;
        }
    }
    ctx->pc = 0x298448u;
    // 0x298448: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x298448u;
    SET_GPR_U32(ctx, 31, 0x298450u);
    ctx->pc = 0x29844Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298448u;
            // 0x29844c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298450u; }
        if (ctx->pc != 0x298450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298450u; }
        if (ctx->pc != 0x298450u) { return; }
    }
    ctx->pc = 0x298450u;
    // 0x298450: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x298450u;
    {
        const bool branch_taken_0x298450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298450u;
            // 0x298454: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298450) {
            ctx->pc = 0x298478u;
            goto label_298478;
        }
    }
    ctx->pc = 0x298458u;
label_298458:
    // 0x298458: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x298458u;
    SET_GPR_U32(ctx, 31, 0x298460u);
    ctx->pc = 0x29845Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298458u;
            // 0x29845c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298460u; }
        if (ctx->pc != 0x298460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298460u; }
        if (ctx->pc != 0x298460u) { return; }
    }
    ctx->pc = 0x298460u;
    // 0x298460: 0xc0a4f0c  jal         func_293C30
    ctx->pc = 0x298460u;
    SET_GPR_U32(ctx, 31, 0x298468u);
    ctx->pc = 0x298464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298460u;
            // 0x298464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C30u;
    if (runtime->hasFunction(0x293C30u)) {
        auto targetFn = runtime->lookupFunction(0x293C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298468u; }
        if (ctx->pc != 0x298468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c30_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298468u; }
        if (ctx->pc != 0x298468u) { return; }
    }
    ctx->pc = 0x298468u;
    // 0x298468: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x298468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29846c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298470: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x298470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x298474: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x298474u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_298478:
    // 0x298478: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x298478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29847c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x29847cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298480: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x298480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298484: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x298484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298488: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x298488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29848c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x29848cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298490: 0x3e00008  jr          $ra
    ctx->pc = 0x298490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298490u;
            // 0x298494: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298378u: goto label_298378;
            case 0x298388u: goto label_298388;
            case 0x298430u: goto label_298430;
            case 0x298458u: goto label_298458;
            case 0x298478u: goto label_298478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298498u;
    // 0x298498: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x298498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29849c: 0x0  nop
    ctx->pc = 0x29849cu;
    // NOP
}
