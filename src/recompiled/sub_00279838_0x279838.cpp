#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279838
// Address: 0x279838 - 0x2799c8
void sub_00279838_0x279838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279838_0x279838");
#endif

    ctx->pc = 0x279838u;

    // 0x279838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x279838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27983c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x27983cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x279840: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x279840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x279844: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x279844u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x279848: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x279848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27984c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x27984cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x279850: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x279850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x279854: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x279854u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x279858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x279858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27985c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x27985cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x279860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279864: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x279864u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x279868: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x279868u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x27986c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279870: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x279870u;
    {
        const bool branch_taken_0x279870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x279874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279870u;
            // 0x279874: 0x79c03  sra         $s3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279870) {
            ctx->pc = 0x279938u;
            goto label_279938;
        }
    }
    ctx->pc = 0x279878u;
    // 0x279878: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x279878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27987c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27987Cu;
    {
        const bool branch_taken_0x27987c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27987c) {
            ctx->pc = 0x279880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27987Cu;
            // 0x279880: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x279894u;
            goto label_279894;
        }
    }
    ctx->pc = 0x279884u;
    // 0x279884: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x279884u;
    {
        const bool branch_taken_0x279884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x279888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279884u;
            // 0x279888: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279884) {
            ctx->pc = 0x2798A4u;
            goto label_2798a4;
        }
    }
    ctx->pc = 0x27988Cu;
    // 0x27988c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x27988Cu;
    {
        const bool branch_taken_0x27988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27988Cu;
            // 0x279890: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27988c) {
            ctx->pc = 0x2799B4u;
            goto label_2799b4;
        }
    }
    ctx->pc = 0x279894u;
label_279894:
    // 0x279894: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x279894u;
    {
        const bool branch_taken_0x279894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x279898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279894u;
            // 0x279898: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279894) {
            ctx->pc = 0x279950u;
            goto label_279950;
        }
    }
    ctx->pc = 0x27989Cu;
    // 0x27989c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x27989Cu;
    {
        const bool branch_taken_0x27989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27989Cu;
            // 0x2798a0: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27989c) {
            ctx->pc = 0x2799B4u;
            goto label_2799b4;
        }
    }
    ctx->pc = 0x2798A4u;
label_2798a4:
    // 0x2798a4: 0xc09e672  jal         func_2799C8
    ctx->pc = 0x2798A4u;
    SET_GPR_U32(ctx, 31, 0x2798ACu);
    ctx->pc = 0x2799C8u;
    if (runtime->hasFunction(0x2799C8u)) {
        auto targetFn = runtime->lookupFunction(0x2799C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798ACu; }
        if (ctx->pc != 0x2798ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2799c8_0x2799d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798ACu; }
        if (ctx->pc != 0x2798ACu) { return; }
    }
    ctx->pc = 0x2798ACu;
    // 0x2798ac: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x2798acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x2798b0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x2798b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2798b4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2798b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2798b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2798b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798bc: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2798bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2798c0: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x2798c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2798c4: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x2798c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2798c8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2798c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2798cc: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x2798ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x2798d0: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x2798d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x2798d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2798d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2798d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2798d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2798dc: 0xc0a4fd8  jal         func_293F60
    ctx->pc = 0x2798DCu;
    SET_GPR_U32(ctx, 31, 0x2798E4u);
    ctx->pc = 0x2798E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2798DCu;
            // 0x2798e0: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293F60u;
    if (runtime->hasFunction(0x293F60u)) {
        auto targetFn = runtime->lookupFunction(0x293F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798E4u; }
        if (ctx->pc != 0x2798E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293f60_0x293f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798E4u; }
        if (ctx->pc != 0x2798E4u) { return; }
    }
    ctx->pc = 0x2798E4u;
    // 0x2798e4: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x2798e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2798e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2798e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2798ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2798ECu;
    {
        const bool branch_taken_0x2798ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2798ECu;
            // 0x2798f0: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798ec) {
            ctx->pc = 0x279910u;
            goto label_279910;
        }
    }
    ctx->pc = 0x2798F4u;
    // 0x2798f4: 0xc0a518a  jal         func_294628
    ctx->pc = 0x2798F4u;
    SET_GPR_U32(ctx, 31, 0x2798FCu);
    ctx->pc = 0x2798F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2798F4u;
            // 0x2798f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294628u;
    if (runtime->hasFunction(0x294628u)) {
        auto targetFn = runtime->lookupFunction(0x294628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798FCu; }
        if (ctx->pc != 0x2798FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294628_0x294628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2798FCu; }
        if (ctx->pc != 0x2798FCu) { return; }
    }
    ctx->pc = 0x2798FCu;
    // 0x2798fc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2798fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x279900: 0xc0a4e48  jal         func_293920
    ctx->pc = 0x279900u;
    SET_GPR_U32(ctx, 31, 0x279908u);
    ctx->pc = 0x279904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279900u;
            // 0x279904: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293920u;
    if (runtime->hasFunction(0x293920u)) {
        auto targetFn = runtime->lookupFunction(0x293920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279908u; }
        if (ctx->pc != 0x279908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293920_0x293930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279908u; }
        if (ctx->pc != 0x279908u) { return; }
    }
    ctx->pc = 0x279908u;
    // 0x279908: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x279908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x27990c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x27990cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_279910:
    // 0x279910: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x279910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x279914: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x279914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x279918: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x279918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x27991c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27991cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279920: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x279920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279924: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x279924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279928: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x279928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27992c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27992cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279930: 0x80a4e08  j           func_293820
    ctx->pc = 0x279930u;
    ctx->pc = 0x279934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279930u;
            // 0x279934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293820u;
    if (runtime->hasFunction(0x293820u)) {
        auto targetFn = runtime->lookupFunction(0x293820u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_293820_0x293840(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x279938u;
label_279938:
    // 0x279938: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x279938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x27993c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x27993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x279940: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x279940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x279944: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x279944u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x279948: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x279948u;
    {
        const bool branch_taken_0x279948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279948u;
            // 0x27994c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279948) {
            ctx->pc = 0x2799B0u;
            goto label_2799b0;
        }
    }
    ctx->pc = 0x279950u;
label_279950:
    // 0x279950: 0xc09e672  jal         func_2799C8
    ctx->pc = 0x279950u;
    SET_GPR_U32(ctx, 31, 0x279958u);
    ctx->pc = 0x2799C8u;
    if (runtime->hasFunction(0x2799C8u)) {
        auto targetFn = runtime->lookupFunction(0x2799C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279958u; }
        if (ctx->pc != 0x279958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2799c8_0x2799d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279958u; }
        if (ctx->pc != 0x279958u) { return; }
    }
    ctx->pc = 0x279958u;
    // 0x279958: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x279958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x27995c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27995cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279960: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x279960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x279964: 0x13302b  sltu        $a2, $zero, $s3
    ctx->pc = 0x279964u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x279968: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x279968u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27996c: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x27996cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x279970: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x279970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x279974: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x279974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x279978: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x279978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x27997c: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x27997cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x279980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x279980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x279984: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x279984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x279988: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x279988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27998c: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x27998cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x279990: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x279990u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x279994: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x279994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279998: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x279998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27999c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27999cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2799a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2799a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2799a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2799a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2799a8: 0x80a4e08  j           func_293820
    ctx->pc = 0x2799A8u;
    ctx->pc = 0x2799ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2799A8u;
            // 0x2799ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293820u;
    if (runtime->hasFunction(0x293820u)) {
        auto targetFn = runtime->lookupFunction(0x293820u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_293820_0x293840(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2799B0u;
label_2799b0:
    // 0x2799b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2799b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2799b4:
    // 0x2799b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2799b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2799b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2799b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2799bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2799bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2799c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2799C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2799C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2799C0u;
            // 0x2799c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279894u: goto label_279894;
            case 0x2798A4u: goto label_2798a4;
            case 0x279910u: goto label_279910;
            case 0x279938u: goto label_279938;
            case 0x279950u: goto label_279950;
            case 0x2799B0u: goto label_2799b0;
            case 0x2799B4u: goto label_2799b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2799C8u;
}
