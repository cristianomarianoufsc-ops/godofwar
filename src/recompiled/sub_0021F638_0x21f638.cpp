#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F638
// Address: 0x21f638 - 0x21f730
void sub_0021F638_0x21f638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F638_0x21f638");
#endif

    ctx->pc = 0x21f638u;

    // 0x21f638: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x21f638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x21f63c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f63cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f640: 0x3c058b04  lui         $a1, 0x8B04
    ctx->pc = 0x21f640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35588 << 16));
    // 0x21f644: 0x2484d9c0  addiu       $a0, $a0, -0x2640
    ctx->pc = 0x21f644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957504));
    // 0x21f648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f64c: 0x34a54410  ori         $a1, $a1, 0x4410
    ctx->pc = 0x21f64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17424);
    // 0x21f650: 0xc05eff4  jal         func_17BFD0
    ctx->pc = 0x21F650u;
    SET_GPR_U32(ctx, 31, 0x21F658u);
    ctx->pc = 0x21F654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F650u;
            // 0x21f654: 0x248401c0  addiu       $a0, $a0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BFD0u;
    if (runtime->hasFunction(0x17BFD0u)) {
        auto targetFn = runtime->lookupFunction(0x17BFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F658u; }
        if (ctx->pc != 0x21F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bfd0_0x17bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F658u; }
        if (ctx->pc != 0x21F658u) { return; }
    }
    ctx->pc = 0x21F658u;
    // 0x21f658: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F658u;
    {
        const bool branch_taken_0x21f658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f658) {
            ctx->pc = 0x21F678u;
            goto label_21f678;
        }
    }
    ctx->pc = 0x21F660u;
    // 0x21f660: 0xc08bd2c  jal         func_22F4B0
    ctx->pc = 0x21F660u;
    SET_GPR_U32(ctx, 31, 0x21F668u);
    ctx->pc = 0x21F664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F660u;
            // 0x21f664: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F4B0u;
    if (runtime->hasFunction(0x22F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F668u; }
        if (ctx->pc != 0x21F668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22f4b0_0x22f4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F668u; }
        if (ctx->pc != 0x21F668u) { return; }
    }
    ctx->pc = 0x21F668u;
    // 0x21f668: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f66c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f670: 0xc07627c  jal         func_1D89F0
    ctx->pc = 0x21F670u;
    SET_GPR_U32(ctx, 31, 0x21F678u);
    ctx->pc = 0x21F674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F670u;
            // 0x21f674: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89F0u;
    if (runtime->hasFunction(0x1D89F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F678u; }
        if (ctx->pc != 0x21F678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89F0_0x1d89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F678u; }
        if (ctx->pc != 0x21F678u) { return; }
    }
    ctx->pc = 0x21F678u;
label_21f678:
    // 0x21f678: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21F678u;
    SET_GPR_U32(ctx, 31, 0x21F680u);
    ctx->pc = 0x21F67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F678u;
            // 0x21f67c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F680u; }
        if (ctx->pc != 0x21F680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F680u; }
        if (ctx->pc != 0x21F680u) { return; }
    }
    ctx->pc = 0x21F680u;
    // 0x21f680: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f684: 0x8c45cb94  lw          $a1, -0x346C($v0)
    ctx->pc = 0x21f684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21f688: 0x8ca20280  lw          $v0, 0x280($a1)
    ctx->pc = 0x21f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x21f68c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x21F68Cu;
    {
        const bool branch_taken_0x21f68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F68Cu;
            // 0x21f690: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f68c) {
            ctx->pc = 0x21F720u;
            goto label_21f720;
        }
    }
    ctx->pc = 0x21F694u;
    // 0x21f694: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x21f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x21f698: 0x8c42e594  lw          $v0, -0x1A6C($v0)
    ctx->pc = 0x21f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960532)));
    // 0x21f69c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21f69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f6a0: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21F6A0u;
    {
        const bool branch_taken_0x21f6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x21F6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6A0u;
            // 0x21f6a4: 0xaca201bc  sw          $v0, 0x1BC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6a0) {
            ctx->pc = 0x21F6F8u;
            goto label_21f6f8;
        }
    }
    ctx->pc = 0x21F6A8u;
    // 0x21f6a8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x21f6a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21f6ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F6ACu;
    {
        const bool branch_taken_0x21f6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f6ac) {
            ctx->pc = 0x21F6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6ACu;
            // 0x21f6b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F6C4u;
            goto label_21f6c4;
        }
    }
    ctx->pc = 0x21F6B4u;
    // 0x21f6b4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21F6B4u;
    {
        const bool branch_taken_0x21f6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6B4u;
            // 0x21f6b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6b4) {
            ctx->pc = 0x21F6DCu;
            goto label_21f6dc;
        }
    }
    ctx->pc = 0x21F6BCu;
    // 0x21f6bc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x21F6BCu;
    {
        const bool branch_taken_0x21f6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f6bc) {
            ctx->pc = 0x21F724u;
            goto label_21f724;
        }
    }
    ctx->pc = 0x21F6C4u;
label_21f6c4:
    // 0x21f6c4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21F6C4u;
    {
        const bool branch_taken_0x21f6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6C4u;
            // 0x21f6c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6c4) {
            ctx->pc = 0x21F708u;
            goto label_21f708;
        }
    }
    ctx->pc = 0x21F6CCu;
    // 0x21f6cc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21F6CCu;
    {
        const bool branch_taken_0x21f6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6CCu;
            // 0x21f6d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6cc) {
            ctx->pc = 0x21F718u;
            goto label_21f718;
        }
    }
    ctx->pc = 0x21F6D4u;
    // 0x21f6d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21F6D4u;
    {
        const bool branch_taken_0x21f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f6d4) {
            ctx->pc = 0x21F724u;
            goto label_21f724;
        }
    }
    ctx->pc = 0x21F6DCu;
label_21f6dc:
    // 0x21f6dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f6e0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x21f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21f6e4: 0x8c44e598  lw          $a0, -0x1A68($v0)
    ctx->pc = 0x21f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960536)));
    // 0x21f6e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f6ec: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
    // 0x21f6f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21F6F0u;
    {
        const bool branch_taken_0x21f6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6F0u;
            // 0x21f6f4: 0xaca40278  sw          $a0, 0x278($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 632), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6f0) {
            ctx->pc = 0x21F720u;
            goto label_21f720;
        }
    }
    ctx->pc = 0x21F6F8u;
label_21f6f8:
    // 0x21f6f8: 0xc087602  jal         func_21D808
    ctx->pc = 0x21F6F8u;
    SET_GPR_U32(ctx, 31, 0x21F700u);
    ctx->pc = 0x21D808u;
    if (runtime->hasFunction(0x21D808u)) {
        auto targetFn = runtime->lookupFunction(0x21D808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F700u; }
        if (ctx->pc != 0x21F700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D808_0x21d808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F700u; }
        if (ctx->pc != 0x21F700u) { return; }
    }
    ctx->pc = 0x21F700u;
    // 0x21f700: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21F700u;
    {
        const bool branch_taken_0x21f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F700u;
            // 0x21f704: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f700) {
            ctx->pc = 0x21F724u;
            goto label_21f724;
        }
    }
    ctx->pc = 0x21F708u;
label_21f708:
    // 0x21f708: 0xc08761a  jal         func_21D868
    ctx->pc = 0x21F708u;
    SET_GPR_U32(ctx, 31, 0x21F710u);
    ctx->pc = 0x21F70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F708u;
            // 0x21f70c: 0xaca001a8  sw          $zero, 0x1A8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D868u;
    if (runtime->hasFunction(0x21D868u)) {
        auto targetFn = runtime->lookupFunction(0x21D868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F710u; }
        if (ctx->pc != 0x21F710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D868_0x21d868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F710u; }
        if (ctx->pc != 0x21F710u) { return; }
    }
    ctx->pc = 0x21F710u;
    // 0x21f710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21F710u;
    {
        const bool branch_taken_0x21f710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F710u;
            // 0x21f714: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f710) {
            ctx->pc = 0x21F724u;
            goto label_21f724;
        }
    }
    ctx->pc = 0x21F718u;
label_21f718:
    // 0x21f718: 0xc08761a  jal         func_21D868
    ctx->pc = 0x21F718u;
    SET_GPR_U32(ctx, 31, 0x21F720u);
    ctx->pc = 0x21F71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F718u;
            // 0x21f71c: 0xaca401a8  sw          $a0, 0x1A8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D868u;
    if (runtime->hasFunction(0x21D868u)) {
        auto targetFn = runtime->lookupFunction(0x21D868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F720u; }
        if (ctx->pc != 0x21F720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D868_0x21d868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F720u; }
        if (ctx->pc != 0x21F720u) { return; }
    }
    ctx->pc = 0x21F720u;
label_21f720:
    // 0x21f720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f724:
    // 0x21f724: 0x3e00008  jr          $ra
    ctx->pc = 0x21F724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F724u;
            // 0x21f728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F678u: goto label_21f678;
            case 0x21F6C4u: goto label_21f6c4;
            case 0x21F6DCu: goto label_21f6dc;
            case 0x21F6F8u: goto label_21f6f8;
            case 0x21F708u: goto label_21f708;
            case 0x21F718u: goto label_21f718;
            case 0x21F720u: goto label_21f720;
            case 0x21F724u: goto label_21f724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F72Cu;
    // 0x21f72c: 0x0  nop
    ctx->pc = 0x21f72cu;
    // NOP
}
