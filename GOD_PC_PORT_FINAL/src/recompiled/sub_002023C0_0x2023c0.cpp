#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002023C0
// Address: 0x2023c0 - 0x202510
void sub_002023C0_0x2023c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002023C0_0x2023c0");
#endif

    ctx->pc = 0x2023c0u;

    // 0x2023c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2023c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2023c4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2023c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2023c8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2023c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2023cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2023ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023d0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2023d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2023d4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2023d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2023d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2023d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2023dc: 0xc08235e  jal         func_208D78
    ctx->pc = 0x2023DCu;
    SET_GPR_U32(ctx, 31, 0x2023E4u);
    ctx->pc = 0x2023E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2023DCu;
            // 0x2023e0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2023E4u; }
        if (ctx->pc != 0x2023E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2023E4u; }
        if (ctx->pc != 0x2023E4u) { return; }
    }
    ctx->pc = 0x2023E4u;
    // 0x2023e4: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2023e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2023e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2023e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2023ec: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x2023ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x2023f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2023f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2023f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2023f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2023f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2023fc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2023fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x202400: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x202400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x202404: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x202404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x202408: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x202408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x20240c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x20240cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x202410: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x202410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x202414: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x202414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x202418: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x202418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x20241c: 0xc047b36  jal         func_11ECD8
    ctx->pc = 0x20241Cu;
    SET_GPR_U32(ctx, 31, 0x202424u);
    ctx->pc = 0x202420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20241Cu;
            // 0x202420: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ECD8u;
    if (runtime->hasFunction(0x11ECD8u)) {
        auto targetFn = runtime->lookupFunction(0x11ECD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202424u; }
        if (ctx->pc != 0x202424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ecd8_0x11ed88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202424u; }
        if (ctx->pc != 0x202424u) { return; }
    }
    ctx->pc = 0x202424u;
    // 0x202424: 0x922201c7  lbu         $v0, 0x1C7($s1)
    ctx->pc = 0x202424u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 455)));
    // 0x202428: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x202428u;
    {
        const bool branch_taken_0x202428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202428) {
            ctx->pc = 0x20242Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202428u;
            // 0x20242c: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202448u;
            goto label_202448;
        }
    }
    ctx->pc = 0x202430u;
    // 0x202430: 0x8e2401c0  lw          $a0, 0x1C0($s1)
    ctx->pc = 0x202430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x202434: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x202434u;
    {
        const bool branch_taken_0x202434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x202434) {
            ctx->pc = 0x202438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x202434u;
            // 0x202438: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202448u;
            goto label_202448;
        }
    }
    ctx->pc = 0x20243Cu;
    // 0x20243c: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x20243Cu;
    SET_GPR_U32(ctx, 31, 0x202444u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202444u; }
        if (ctx->pc != 0x202444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202444u; }
        if (ctx->pc != 0x202444u) { return; }
    }
    ctx->pc = 0x202444u;
    // 0x202444: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x202444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_202448:
    // 0x202448: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x202448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20244c: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x20244cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x202450: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x202450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x202454: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x202454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x202458: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x202458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x20245c: 0x5050000c  beql        $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x20245Cu;
    {
        const bool branch_taken_0x20245c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x20245c) {
            ctx->pc = 0x202460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20245Cu;
            // 0x202460: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202490u;
            goto label_202490;
        }
    }
    ctx->pc = 0x202464u;
    // 0x202464: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x202464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_202468:
    // 0x202468: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x202468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20246c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x20246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x202470: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x202470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202474: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x202474u;
    SET_GPR_U32(ctx, 31, 0x20247Cu);
    ctx->pc = 0x202478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202474u;
            // 0x202478: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20247Cu; }
        if (ctx->pc != 0x20247Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20247Cu; }
        if (ctx->pc != 0x20247Cu) { return; }
    }
    ctx->pc = 0x20247Cu;
    // 0x20247c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x20247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x202480: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x202480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202484: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x202484u;
    {
        const bool branch_taken_0x202484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202484u;
            // 0x202488: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202484) {
            ctx->pc = 0x202468u;
            runtime->cooperativeGuestYield();
            goto label_202468;
        }
    }
    ctx->pc = 0x20248Cu;
    // 0x20248c: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x20248cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
label_202490:
    // 0x202490: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x202490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x202494: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x202494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x202498: 0x26300088  addiu       $s0, $s1, 0x88
    ctx->pc = 0x202498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x20249c: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x20249cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x2024a0: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x2024a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2024a4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2024a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2024a8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x2024a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2024ac: 0x5050000c  beql        $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2024ACu;
    {
        const bool branch_taken_0x2024ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2024ac) {
            ctx->pc = 0x2024B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2024ACu;
            // 0x2024b0: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2024E0u;
            goto label_2024e0;
        }
    }
    ctx->pc = 0x2024B4u;
    // 0x2024b4: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2024b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2024b8:
    // 0x2024b8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2024b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2024bc: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x2024bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x2024c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2024c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2024c4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2024C4u;
    SET_GPR_U32(ctx, 31, 0x2024CCu);
    ctx->pc = 0x2024C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2024C4u;
            // 0x2024c8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2024CCu; }
        if (ctx->pc != 0x2024CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2024CCu; }
        if (ctx->pc != 0x2024CCu) { return; }
    }
    ctx->pc = 0x2024CCu;
    // 0x2024cc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2024ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2024d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2024d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2024d4: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2024D4u;
    {
        const bool branch_taken_0x2024d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2024D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2024D4u;
            // 0x2024d8: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024d4) {
            ctx->pc = 0x2024B8u;
            runtime->cooperativeGuestYield();
            goto label_2024b8;
        }
    }
    ctx->pc = 0x2024DCu;
    // 0x2024dc: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x2024dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
label_2024e0:
    // 0x2024e0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2024e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2024e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2024E4u;
    {
        const bool branch_taken_0x2024e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2024E4u;
            // 0x2024e8: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024e4) {
            ctx->pc = 0x2024F4u;
            goto label_2024f4;
        }
    }
    ctx->pc = 0x2024ECu;
    // 0x2024ec: 0xc0806bc  jal         func_201AF0
    ctx->pc = 0x2024ECu;
    SET_GPR_U32(ctx, 31, 0x2024F4u);
    ctx->pc = 0x2024F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2024ECu;
            // 0x2024f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201AF0u;
    if (runtime->hasFunction(0x201AF0u)) {
        auto targetFn = runtime->lookupFunction(0x201AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2024F4u; }
        if (ctx->pc != 0x2024F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_201af0_0x201b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2024F4u; }
        if (ctx->pc != 0x2024F4u) { return; }
    }
    ctx->pc = 0x2024F4u;
label_2024f4:
    // 0x2024f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2024f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2024f8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2024f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2024fc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2024fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202500: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x202500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202504: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x202504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202508: 0x3e00008  jr          $ra
    ctx->pc = 0x202508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202508u;
            // 0x20250c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202448u: goto label_202448;
            case 0x202468u: goto label_202468;
            case 0x202490u: goto label_202490;
            case 0x2024B8u: goto label_2024b8;
            case 0x2024E0u: goto label_2024e0;
            case 0x2024F4u: goto label_2024f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202510u;
}
