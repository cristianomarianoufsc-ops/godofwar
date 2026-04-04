#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276648
// Address: 0x276648 - 0x276928
void sub_00276648_0x276648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276648_0x276648");
#endif

    ctx->pc = 0x276648u;

    // 0x276648: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x276648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27664c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x276650: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x276650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x276654: 0x3c15002c  lui         $s5, 0x2C
    ctx->pc = 0x276654u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)44 << 16));
    // 0x276658: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x276658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27665c: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x27665cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x276660: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x276660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276664: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x276664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x276668: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x276668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27666c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27666cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276670: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x276670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x276674: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x276674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27667c: 0x0  nop
    ctx->pc = 0x27667cu;
    // NOP
label_276680:
    // 0x276680: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x276680u;
    SET_GPR_U32(ctx, 31, 0x276688u);
    ctx->pc = 0x276684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276680u;
            // 0x276684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276688u; }
        if (ctx->pc != 0x276688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276688u; }
        if (ctx->pc != 0x276688u) { return; }
    }
    ctx->pc = 0x276688u;
    // 0x276688: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x276688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27668c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27668cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276690: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x276690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x276694: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x276694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x276698: 0xae34082c  sw          $s4, 0x82C($s1)
    ctx->pc = 0x276698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 20));
    // 0x27669c: 0xc09da4a  jal         func_276928
    ctx->pc = 0x27669Cu;
    SET_GPR_U32(ctx, 31, 0x2766A4u);
    ctx->pc = 0x2766A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27669Cu;
            // 0x2766a0: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766A4u; }
        if (ctx->pc != 0x2766A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766A4u; }
        if (ctx->pc != 0x2766A4u) { return; }
    }
    ctx->pc = 0x2766A4u;
    // 0x2766a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2766a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2766a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2766ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2766acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2766b0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x2766b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x2766b4: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2766b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2766b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2766b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2766bc: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2766bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2766c0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2766c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2766c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2766c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2766c8: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2766C8u;
    {
        const bool branch_taken_0x2766c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2766CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766C8u;
            // 0x2766cc: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766c8) {
            ctx->pc = 0x2766E4u;
            goto label_2766e4;
        }
    }
    ctx->pc = 0x2766D0u;
    // 0x2766d0: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x2766d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2766d4: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x2766d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2766d8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2766d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2766dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2766DCu;
    {
        const bool branch_taken_0x2766dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2766E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766DCu;
            // 0x2766e0: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766dc) {
            ctx->pc = 0x2766E8u;
            goto label_2766e8;
        }
    }
    ctx->pc = 0x2766E4u;
label_2766e4:
    // 0x2766e4: 0xae33084c  sw          $s3, 0x84C($s1)
    ctx->pc = 0x2766e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 19));
label_2766e8:
    // 0x2766e8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x2766e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2766ec: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2766ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2766f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2766f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2766f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2766f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2766f8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2766f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2766fc: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2766fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x276700: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x276700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x276704: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x276704u;
    {
        const bool branch_taken_0x276704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x276708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276704u;
            // 0x276708: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276704) {
            ctx->pc = 0x276768u;
            goto label_276768;
        }
    }
    ctx->pc = 0x27670Cu;
    // 0x27670c: 0x2e020023  sltiu       $v0, $s0, 0x23
    ctx->pc = 0x27670cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x276710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276710u;
    {
        const bool branch_taken_0x276710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276710u;
            // 0x276714: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276710) {
            ctx->pc = 0x276728u;
            goto label_276728;
        }
    }
    ctx->pc = 0x276718u;
    // 0x276718: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x276718u;
    {
        const bool branch_taken_0x276718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27671Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276718u;
            // 0x27671c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276718) {
            ctx->pc = 0x27673Cu;
            goto label_27673c;
        }
    }
    ctx->pc = 0x276720u;
    // 0x276720: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x276720u;
    {
        const bool branch_taken_0x276720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276720u;
            // 0x276724: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276720) {
            ctx->pc = 0x276790u;
            goto label_276790;
        }
    }
    ctx->pc = 0x276728u;
label_276728:
    // 0x276728: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x276728u;
    {
        const bool branch_taken_0x276728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x276728) {
            ctx->pc = 0x27672Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276728u;
            // 0x27672c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276790u;
            goto label_276790;
        }
    }
    ctx->pc = 0x276730u;
    // 0x276730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276734: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x276734u;
    {
        const bool branch_taken_0x276734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276734u;
            // 0x276738: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276734) {
            ctx->pc = 0x276794u;
            goto label_276794;
        }
    }
    ctx->pc = 0x27673Cu;
label_27673c:
    // 0x27673c: 0xc09dae4  jal         func_276B90
    ctx->pc = 0x27673Cu;
    SET_GPR_U32(ctx, 31, 0x276744u);
    ctx->pc = 0x276740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27673Cu;
            // 0x276740: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B90u;
    if (runtime->hasFunction(0x276B90u)) {
        auto targetFn = runtime->lookupFunction(0x276B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276744u; }
        if (ctx->pc != 0x276744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B90_0x276b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276744u; }
        if (ctx->pc != 0x276744u) { return; }
    }
    ctx->pc = 0x276744u;
    // 0x276744: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x276744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276748: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x276748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x27674c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27674Cu;
    {
        const bool branch_taken_0x27674c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27674Cu;
            // 0x276750: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27674c) {
            ctx->pc = 0x276770u;
            goto label_276770;
        }
    }
    ctx->pc = 0x276754u;
    // 0x276754: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276754u;
    {
        const bool branch_taken_0x276754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x276758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276754u;
            // 0x276758: 0x26a54660  addiu       $a1, $s5, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 18016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276754) {
            ctx->pc = 0x276774u;
            goto label_276774;
        }
    }
    ctx->pc = 0x27675Cu;
    // 0x27675c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27675cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276760: 0xc09db3c  jal         func_276CF0
    ctx->pc = 0x276760u;
    SET_GPR_U32(ctx, 31, 0x276768u);
    ctx->pc = 0x276764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276760u;
            // 0x276764: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CF0u;
    if (runtime->hasFunction(0x276CF0u)) {
        auto targetFn = runtime->lookupFunction(0x276CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276768u; }
        if (ctx->pc != 0x276768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cf0_0x276cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276768u; }
        if (ctx->pc != 0x276768u) { return; }
    }
    ctx->pc = 0x276768u;
label_276768:
    // 0x276768: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x276768u;
    {
        const bool branch_taken_0x276768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276768u;
            // 0x27676c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276768) {
            ctx->pc = 0x276794u;
            goto label_276794;
        }
    }
    ctx->pc = 0x276770u;
label_276770:
    // 0x276770: 0x26a54660  addiu       $a1, $s5, 0x4660
    ctx->pc = 0x276770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 18016));
label_276774:
    // 0x276774: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x276774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276778: 0xc09d0fc  jal         func_2743F0
    ctx->pc = 0x276778u;
    SET_GPR_U32(ctx, 31, 0x276780u);
    ctx->pc = 0x27677Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276778u;
            // 0x27677c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2743F0u;
    if (runtime->hasFunction(0x2743F0u)) {
        auto targetFn = runtime->lookupFunction(0x2743F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276780u; }
        if (ctx->pc != 0x276780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002743F0_0x2743f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276780u; }
        if (ctx->pc != 0x276780u) { return; }
    }
    ctx->pc = 0x276780u;
    // 0x276780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x276780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x276788u;
    {
        const bool branch_taken_0x276788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276788u;
            // 0x27678c: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276788) {
            ctx->pc = 0x27679Cu;
            goto label_27679c;
        }
    }
    ctx->pc = 0x276790u;
label_276790:
    // 0x276790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276794:
    // 0x276794: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x276794u;
    {
        const bool branch_taken_0x276794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276794u;
            // 0x276798: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276794) {
            ctx->pc = 0x276680u;
            runtime->cooperativeGuestYield();
            goto label_276680;
        }
    }
    ctx->pc = 0x27679Cu;
label_27679c:
    // 0x27679c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2767a0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2767a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2767a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2767a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2767a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2767a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2767ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2767acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2767b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2767b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2767b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2767b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2767b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2767B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2767BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2767B8u;
            // 0x2767bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276680u: goto label_276680;
            case 0x2766E4u: goto label_2766e4;
            case 0x2766E8u: goto label_2766e8;
            case 0x276728u: goto label_276728;
            case 0x27673Cu: goto label_27673c;
            case 0x276768u: goto label_276768;
            case 0x276770u: goto label_276770;
            case 0x276774u: goto label_276774;
            case 0x276790u: goto label_276790;
            case 0x276794u: goto label_276794;
            case 0x27679Cu: goto label_27679c;
            case 0x276848u: goto label_276848;
            case 0x276884u: goto label_276884;
            case 0x276888u: goto label_276888;
            case 0x2768B4u: goto label_2768b4;
            case 0x2768D4u: goto label_2768d4;
            case 0x2768E4u: goto label_2768e4;
            case 0x2768F8u: goto label_2768f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2767C0u;
    // 0x2767c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2767c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2767c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2767c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2767c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2767c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2767cc: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x2767ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x2767d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2767d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2767d4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2767d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2767d8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2767d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2767dc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x2767dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x2767e0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2767e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2767e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2767e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767e8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2767e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2767ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2767ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767f0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2767f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2767f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2767f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2767f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2767f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2767fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2767fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276800: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x276800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x276804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x276804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276808: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x276808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27680c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x27680cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x276810: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x276810u;
    {
        const bool branch_taken_0x276810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276810) {
            ctx->pc = 0x276814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276810u;
            // 0x276814: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2768F8u;
            goto label_2768f8;
        }
    }
    ctx->pc = 0x276818u;
    // 0x276818: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x276818u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x27681c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x27681cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x276820: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x276820u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x276824: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x276824u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x276828: 0x36942020  ori         $s4, $s4, 0x2020
    ctx->pc = 0x276828u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8224);
    // 0x27682c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x27682cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x276830: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x276830u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x276834: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x276834u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x276838: 0x3673b420  ori         $s3, $s3, 0xB420
    ctx->pc = 0x276838u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46112);
    // 0x27683c: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x27683cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x276840: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x276840u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x276844: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x276844u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_276848:
    // 0x276848: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x276848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27684c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x27684cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x276850: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x276850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x276854: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x276854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x276858: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x276858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x27685c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x27685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x276860: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x276860u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x276864: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x276864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276868: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x276868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x27686c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x27686Cu;
    {
        const bool branch_taken_0x27686c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x276870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27686Cu;
            // 0x276870: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27686c) {
            ctx->pc = 0x276884u;
            goto label_276884;
        }
    }
    ctx->pc = 0x276874u;
    // 0x276874: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x276874u;
    {
        const bool branch_taken_0x276874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x276874) {
            ctx->pc = 0x276878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276874u;
            // 0x276878: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x276888u;
            goto label_276888;
        }
    }
    ctx->pc = 0x27687Cu;
    // 0x27687c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x27687Cu;
    {
        const bool branch_taken_0x27687c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x27687c) {
            ctx->pc = 0x276880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27687Cu;
            // 0x276880: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2768B4u;
            goto label_2768b4;
        }
    }
    ctx->pc = 0x276884u;
label_276884:
    // 0x276884: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x276884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_276888:
    // 0x276888: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x276888u;
    {
        const bool branch_taken_0x276888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27688Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276888u;
            // 0x27688c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276888) {
            ctx->pc = 0x2768B4u;
            goto label_2768b4;
        }
    }
    ctx->pc = 0x276890u;
    // 0x276890: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x276890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x276894: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276894u;
    {
        const bool branch_taken_0x276894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276894u;
            // 0x276898: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276894) {
            ctx->pc = 0x2768B4u;
            goto label_2768b4;
        }
    }
    ctx->pc = 0x27689Cu;
    // 0x27689c: 0xc09c012  jal         func_270048
    ctx->pc = 0x27689Cu;
    SET_GPR_U32(ctx, 31, 0x2768A4u);
    ctx->pc = 0x2768A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27689Cu;
            // 0x2768a0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270048u;
    if (runtime->hasFunction(0x270048u)) {
        auto targetFn = runtime->lookupFunction(0x270048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768A4u; }
        if (ctx->pc != 0x2768A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270048_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768A4u; }
        if (ctx->pc != 0x2768A4u) { return; }
    }
    ctx->pc = 0x2768A4u;
    // 0x2768a4: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x2768a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x2768a8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2768A8u;
    {
        const bool branch_taken_0x2768a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2768ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2768A8u;
            // 0x2768ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768a8) {
            ctx->pc = 0x2768D4u;
            goto label_2768d4;
        }
    }
    ctx->pc = 0x2768B0u;
    // 0x2768b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2768b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2768b4:
    // 0x2768b4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x2768b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x2768b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2768B8u;
    {
        const bool branch_taken_0x2768b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2768BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2768B8u;
            // 0x2768bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768b8) {
            ctx->pc = 0x2768E4u;
            goto label_2768e4;
        }
    }
    ctx->pc = 0x2768C0u;
    // 0x2768c0: 0xc09c012  jal         func_270048
    ctx->pc = 0x2768C0u;
    SET_GPR_U32(ctx, 31, 0x2768C8u);
    ctx->pc = 0x2768C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2768C0u;
            // 0x2768c4: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270048u;
    if (runtime->hasFunction(0x270048u)) {
        auto targetFn = runtime->lookupFunction(0x270048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768C8u; }
        if (ctx->pc != 0x2768C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270048_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768C8u; }
        if (ctx->pc != 0x2768C8u) { return; }
    }
    ctx->pc = 0x2768C8u;
    // 0x2768c8: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x2768c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x2768cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2768CCu;
    {
        const bool branch_taken_0x2768cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2768CCu;
            // 0x2768d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768cc) {
            ctx->pc = 0x2768E4u;
            goto label_2768e4;
        }
    }
    ctx->pc = 0x2768D4u;
label_2768d4:
    // 0x2768d4: 0xc09d08c  jal         func_274230
    ctx->pc = 0x2768D4u;
    SET_GPR_U32(ctx, 31, 0x2768DCu);
    ctx->pc = 0x274230u;
    if (runtime->hasFunction(0x274230u)) {
        auto targetFn = runtime->lookupFunction(0x274230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768DCu; }
        if (ctx->pc != 0x2768DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_274230_0x2742d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768DCu; }
        if (ctx->pc != 0x2768DCu) { return; }
    }
    ctx->pc = 0x2768DCu;
    // 0x2768dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2768DCu;
    {
        const bool branch_taken_0x2768dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2768DCu;
            // 0x2768e0: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768dc) {
            ctx->pc = 0x2768F8u;
            goto label_2768f8;
        }
    }
    ctx->pc = 0x2768E4u;
label_2768e4:
    // 0x2768e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2768e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2768e8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2768e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2768ec: 0x1055ffd6  beq         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2768ECu;
    {
        const bool branch_taken_0x2768ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2768ec) {
            ctx->pc = 0x276848u;
            runtime->cooperativeGuestYield();
            goto label_276848;
        }
    }
    ctx->pc = 0x2768F4u;
    // 0x2768f4: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x2768f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_2768f8:
    // 0x2768f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2768f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2768fc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2768fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x276900: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x276900u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276904: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x276904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276908: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x276908u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27690c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27690cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276910: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x276910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276914: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x276914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276918: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x276918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27691c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27691cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276920: 0x3e00008  jr          $ra
    ctx->pc = 0x276920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276920u;
            // 0x276924: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276680u: goto label_276680;
            case 0x2766E4u: goto label_2766e4;
            case 0x2766E8u: goto label_2766e8;
            case 0x276728u: goto label_276728;
            case 0x27673Cu: goto label_27673c;
            case 0x276768u: goto label_276768;
            case 0x276770u: goto label_276770;
            case 0x276774u: goto label_276774;
            case 0x276790u: goto label_276790;
            case 0x276794u: goto label_276794;
            case 0x27679Cu: goto label_27679c;
            case 0x276848u: goto label_276848;
            case 0x276884u: goto label_276884;
            case 0x276888u: goto label_276888;
            case 0x2768B4u: goto label_2768b4;
            case 0x2768D4u: goto label_2768d4;
            case 0x2768E4u: goto label_2768e4;
            case 0x2768F8u: goto label_2768f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276928u;
}
