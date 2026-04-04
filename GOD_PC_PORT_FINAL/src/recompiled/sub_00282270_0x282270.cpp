#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282270
// Address: 0x282270 - 0x282448
void sub_00282270_0x282270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282270_0x282270");
#endif

    ctx->pc = 0x282270u;

    // 0x282270: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x282270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x282274: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x282274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282278: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x282278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x28227c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28227cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282280: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x282280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x282284: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x282284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x282288: 0x3c1e0032  lui         $fp, 0x32
    ctx->pc = 0x282288u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)50 << 16));
    // 0x28228c: 0x27c22748  addiu       $v0, $fp, 0x2748
    ctx->pc = 0x28228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 10056));
    // 0x282290: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x282290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x282294: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x282294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x282298: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x282298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28229c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x28229cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2822a0: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x2822a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2822a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2822a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2822a8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2822a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2822ac: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2822acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2822b0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2822b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2822b4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2822b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2822b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2822b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2822bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2822bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2822c0: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x2822C0u;
    SET_GPR_U32(ctx, 31, 0x2822C8u);
    ctx->pc = 0x2822C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2822C0u;
            // 0x2822c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2822C8u; }
        if (ctx->pc != 0x2822C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2822C8u; }
        if (ctx->pc != 0x2822C8u) { return; }
    }
    ctx->pc = 0x2822C8u;
    // 0x2822c8: 0x10570028  beq         $v0, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x2822C8u;
    {
        const bool branch_taken_0x2822c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x2822CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2822C8u;
            // 0x2822cc: 0x3c130032  lui         $s3, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822c8) {
            ctx->pc = 0x28236Cu;
            goto label_28236c;
        }
    }
    ctx->pc = 0x2822D0u;
    // 0x2822d0: 0x24032080  addiu       $v1, $zero, 0x2080
    ctx->pc = 0x2822d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2822d4: 0x266227c0  addiu       $v0, $s3, 0x27C0
    ctx->pc = 0x2822d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x2822d8: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x2822d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x2822dc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2822dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2822e0: 0x26104840  addiu       $s0, $s0, 0x4840
    ctx->pc = 0x2822e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18496));
    // 0x2822e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2822e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2822e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2822e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822ec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2822ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2822f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2822f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2822f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2822f8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2822f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2822fc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2822fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x282300: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x282300u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x282304: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x282304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x282308: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x282308u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
    // 0x28230c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x28230cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x282310: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x282310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282314: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x282314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x282318: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x282318u;
    SET_GPR_U32(ctx, 31, 0x282320u);
    ctx->pc = 0x28231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282318u;
            // 0x28231c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282320u; }
        if (ctx->pc != 0x282320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282320u; }
        if (ctx->pc != 0x282320u) { return; }
    }
    ctx->pc = 0x282320u;
    // 0x282320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282324: 0xc0a5118  jal         func_294460
    ctx->pc = 0x282324u;
    SET_GPR_U32(ctx, 31, 0x28232Cu);
    ctx->pc = 0x282328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282324u;
            // 0x282328: 0x248500ff  addiu       $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28232Cu; }
        if (ctx->pc != 0x28232Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28232Cu; }
        if (ctx->pc != 0x28232Cu) { return; }
    }
    ctx->pc = 0x28232Cu;
    // 0x28232c: 0xae373624  sw          $s7, 0x3624($s1)
    ctx->pc = 0x28232cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13860), GPR_U32(ctx, 23));
    // 0x282330: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x282330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282334: 0x0  nop
    ctx->pc = 0x282334u;
    // NOP
label_282338:
    // 0x282338: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x282338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28233c: 0x8e253624  lw          $a1, 0x3624($s1)
    ctx->pc = 0x28233cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13860)));
    // 0x282340: 0x266727c0  addiu       $a3, $s3, 0x27C0
    ctx->pc = 0x282340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x282344: 0xc09ed5a  jal         func_27B568
    ctx->pc = 0x282344u;
    SET_GPR_U32(ctx, 31, 0x28234Cu);
    ctx->pc = 0x282348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282344u;
            // 0x282348: 0x26a82118  addiu       $t0, $s5, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B568u;
    if (runtime->hasFunction(0x27B568u)) {
        auto targetFn = runtime->lookupFunction(0x27B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28234Cu; }
        if (ctx->pc != 0x28234Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B568_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28234Cu; }
        if (ctx->pc != 0x28234Cu) { return; }
    }
    ctx->pc = 0x28234Cu;
    // 0x28234c: 0x5454fffa  bnel        $v0, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28234Cu;
    {
        const bool branch_taken_0x28234c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x28234c) {
            ctx->pc = 0x282350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28234Cu;
            // 0x282350: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282338u;
            runtime->cooperativeGuestYield();
            goto label_282338;
        }
    }
    ctx->pc = 0x282354u;
    // 0x282354: 0xc0a07fc  jal         func_281FF0
    ctx->pc = 0x282354u;
    SET_GPR_U32(ctx, 31, 0x28235Cu);
    ctx->pc = 0x281FF0u;
    if (runtime->hasFunction(0x281FF0u)) {
        auto targetFn = runtime->lookupFunction(0x281FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28235Cu; }
        if (ctx->pc != 0x28235Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FF0_0x281ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28235Cu; }
        if (ctx->pc != 0x28235Cu) { return; }
    }
    ctx->pc = 0x28235Cu;
    // 0x28235c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x28235cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282360: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x282360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x282364: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282364u;
    {
        const bool branch_taken_0x282364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282364u;
            // 0x282368: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282364) {
            ctx->pc = 0x282374u;
            goto label_282374;
        }
    }
    ctx->pc = 0x28236Cu;
label_28236c:
    // 0x28236c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x28236Cu;
    {
        const bool branch_taken_0x28236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28236Cu;
            // 0x282370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28236c) {
            ctx->pc = 0x282414u;
            goto label_282414;
        }
    }
    ctx->pc = 0x282374u;
label_282374:
    // 0x282374: 0x9182000d  lbu         $v0, 0xD($t4)
    ctx->pc = 0x282374u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x282378: 0x2c73818  mult        $a3, $s6, $a3
    ctx->pc = 0x282378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x28237c: 0x9183000c  lbu         $v1, 0xC($t4)
    ctx->pc = 0x28237cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x282380: 0x27c42748  addiu       $a0, $fp, 0x2748
    ctx->pc = 0x282380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10056));
    // 0x282384: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x282384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x282388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x282388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28238c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x28238cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282394: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x282394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x282398: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x282398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x28239c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x28239cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2823a0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2823a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823a4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2823a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823a8: 0x9183000f  lbu         $v1, 0xF($t4)
    ctx->pc = 0x2823a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x2823ac: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2823acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823b0: 0x9184000e  lbu         $a0, 0xE($t4)
    ctx->pc = 0x2823b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x2823b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2823b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2823b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2823b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2823bc: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x2823bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x2823c0: 0x91860011  lbu         $a2, 0x11($t4)
    ctx->pc = 0x2823c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 17)));
    // 0x2823c4: 0x91850013  lbu         $a1, 0x13($t4)
    ctx->pc = 0x2823c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 19)));
    // 0x2823c8: 0x91840012  lbu         $a0, 0x12($t4)
    ctx->pc = 0x2823c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 18)));
    // 0x2823cc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2823ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2823d0: 0x91830010  lbu         $v1, 0x10($t4)
    ctx->pc = 0x2823d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2823d4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2823d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2823d8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2823d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2823dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2823dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2823e0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2823e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2823e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2823e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2823e8: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x2823e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x2823ec: 0xad4b0014  sw          $t3, 0x14($t2)
    ctx->pc = 0x2823ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 11));
    // 0x2823f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2823f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2823f4: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x2823f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2823f8: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x2823f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2823fc: 0x68e50017  ldl         $a1, 0x17($a3)
    ctx->pc = 0x2823fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x282400: 0x6ce50010  ldr         $a1, 0x10($a3)
    ctx->pc = 0x282400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x282404: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x282404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282408: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x282408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28240c: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x28240cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x282410: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x282410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_282414:
    // 0x282414: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x282414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282418: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x282418u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28241c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x28241cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282420: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x282420u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282424: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x282424u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282428: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x282428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28242c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x28242cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282430: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x282430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282434: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x282434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282438: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x282438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28243c: 0x3e00008  jr          $ra
    ctx->pc = 0x28243Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28243Cu;
            // 0x282440: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282338u: goto label_282338;
            case 0x28236Cu: goto label_28236c;
            case 0x282374u: goto label_282374;
            case 0x282414u: goto label_282414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282444u;
    // 0x282444: 0x0  nop
    ctx->pc = 0x282444u;
    // NOP
}
