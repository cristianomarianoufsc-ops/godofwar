#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014AE30
// Address: 0x14ae30 - 0x14b160
void sub_0014AE30_0x14ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AE30_0x14ae30");
#endif

    ctx->pc = 0x14ae30u;

    // 0x14ae30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ae34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ae38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ae3c: 0xc0543e0  jal         func_150F80
    ctx->pc = 0x14AE3Cu;
    SET_GPR_U32(ctx, 31, 0x14AE44u);
    ctx->pc = 0x14AE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE3Cu;
            // 0x14ae40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150F80u;
    if (runtime->hasFunction(0x150F80u)) {
        auto targetFn = runtime->lookupFunction(0x150F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE44u; }
        if (ctx->pc != 0x14AE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150F80_0x150f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE44u; }
        if (ctx->pc != 0x14AE44u) { return; }
    }
    ctx->pc = 0x14AE44u;
    // 0x14ae44: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x14ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x14ae48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14ae48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae4c: 0x2463f6b0  addiu       $v1, $v1, -0x950
    ctx->pc = 0x14ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964912));
    // 0x14ae50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ae54: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x14ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x14ae58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ae58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ae5c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE5Cu;
            // 0x14ae60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AEACu: goto label_14aeac;
            case 0x14AED8u: goto label_14aed8;
            case 0x14AF08u: goto label_14af08;
            case 0x14AF20u: goto label_14af20;
            case 0x14AF48u: goto label_14af48;
            case 0x14AF4Cu: goto label_14af4c;
            case 0x14AF80u: goto label_14af80;
            case 0x14AF94u: goto label_14af94;
            case 0x14AF98u: goto label_14af98;
            case 0x14AFB0u: goto label_14afb0;
            case 0x14AFC0u: goto label_14afc0;
            case 0x14AFE8u: goto label_14afe8;
            case 0x14B000u: goto label_14b000;
            case 0x14B028u: goto label_14b028;
            case 0x14B02Cu: goto label_14b02c;
            case 0x14B060u: goto label_14b060;
            case 0x14B074u: goto label_14b074;
            case 0x14B078u: goto label_14b078;
            case 0x14B08Cu: goto label_14b08c;
            case 0x14B0A0u: goto label_14b0a0;
            case 0x14B120u: goto label_14b120;
            case 0x14B150u: goto label_14b150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14AE64u;
    // 0x14ae64: 0x0  nop
    ctx->pc = 0x14ae64u;
    // NOP
    // 0x14ae68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14ae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14ae6c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x14ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x14ae70: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x14ae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x14ae74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14ae74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae78: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14ae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x14ae7c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14ae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14ae80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14ae80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14ae84: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x14ae84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x14ae88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14ae8c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x14ae8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14ae90: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x14ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x14ae94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AE94u;
    {
        const bool branch_taken_0x14ae94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE94u;
            // 0x14ae98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae94) {
            ctx->pc = 0x14AEACu;
            goto label_14aeac;
        }
    }
    ctx->pc = 0x14AE9Cu;
    // 0x14ae9c: 0x34625000  ori         $v0, $v1, 0x5000
    ctx->pc = 0x14ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x14aea0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x14aea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aea4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14AEA4u;
    {
        const bool branch_taken_0x14aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEA4u;
            // 0x14aea8: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aea4) {
            ctx->pc = 0x14AED8u;
            goto label_14aed8;
        }
    }
    ctx->pc = 0x14AEACu;
label_14aeac:
    // 0x14aeac: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14AEACu;
    SET_GPR_U32(ctx, 31, 0x14AEB4u);
    ctx->pc = 0x14AEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEACu;
            // 0x14aeb0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEB4u; }
        if (ctx->pc != 0x14AEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEB4u; }
        if (ctx->pc != 0x14AEB4u) { return; }
    }
    ctx->pc = 0x14AEB4u;
    // 0x14aeb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14aeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aeb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14aeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aebc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x14AEBCu;
    SET_GPR_U32(ctx, 31, 0x14AEC4u);
    ctx->pc = 0x14AEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEBCu;
            // 0x14aec0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEC4u; }
        if (ctx->pc != 0x14AEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEC4u; }
        if (ctx->pc != 0x14AEC4u) { return; }
    }
    ctx->pc = 0x14AEC4u;
    // 0x14aec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14aec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aec8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x14aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14aecc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14aeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aed0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x14AED0u;
    SET_GPR_U32(ctx, 31, 0x14AED8u);
    ctx->pc = 0x14AED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AED0u;
            // 0x14aed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AED8u; }
        if (ctx->pc != 0x14AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AED8u; }
        if (ctx->pc != 0x14AED8u) { return; }
    }
    ctx->pc = 0x14AED8u;
label_14aed8:
    // 0x14aed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14aedc: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x14aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x14aee0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x14aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x14aee4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14aee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aee8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x14aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x14aeec: 0xc052f16  jal         func_14BC58
    ctx->pc = 0x14AEECu;
    SET_GPR_U32(ctx, 31, 0x14AEF4u);
    ctx->pc = 0x14AEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEECu;
            // 0x14aef0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14BC58u;
    if (runtime->hasFunction(0x14BC58u)) {
        auto targetFn = runtime->lookupFunction(0x14BC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEF4u; }
        if (ctx->pc != 0x14AEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014BC58_0x14bc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEF4u; }
        if (ctx->pc != 0x14AEF4u) { return; }
    }
    ctx->pc = 0x14AEF4u;
    // 0x14aef4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aef8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x14aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14aefc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14AEFCu;
    {
        const bool branch_taken_0x14aefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEFCu;
            // 0x14af00: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aefc) {
            ctx->pc = 0x14AFB0u;
            goto label_14afb0;
        }
    }
    ctx->pc = 0x14AF04u;
    // 0x14af04: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x14af04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_14af08:
    // 0x14af08: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x14af08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x14af0c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x14af0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14af10: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x14af10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14af14: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14AF14u;
    {
        const bool branch_taken_0x14af14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF14u;
            // 0x14af18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af14) {
            ctx->pc = 0x14AF94u;
            goto label_14af94;
        }
    }
    ctx->pc = 0x14AF1Cu;
    // 0x14af1c: 0x0  nop
    ctx->pc = 0x14af1cu;
    // NOP
label_14af20:
    // 0x14af20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14af24: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x14af24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14af28: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x14af28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14af2c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x14af2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14af30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14af30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14af34: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AF34u;
    {
        const bool branch_taken_0x14af34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14AF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF34u;
            // 0x14af38: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af34) {
            ctx->pc = 0x14AF48u;
            goto label_14af48;
        }
    }
    ctx->pc = 0x14AF3Cu;
    // 0x14af3c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x14af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x14af40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14AF40u;
    {
        const bool branch_taken_0x14af40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF40u;
            // 0x14af44: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af40) {
            ctx->pc = 0x14AF4Cu;
            goto label_14af4c;
        }
    }
    ctx->pc = 0x14AF48u;
label_14af48:
    // 0x14af48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14af48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14af4c:
    // 0x14af4c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14AF4Cu;
    {
        const bool branch_taken_0x14af4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF4Cu;
            // 0x14af50: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af4c) {
            ctx->pc = 0x14AF80u;
            goto label_14af80;
        }
    }
    ctx->pc = 0x14AF54u;
    // 0x14af54: 0xc05e996  jal         func_17A658
    ctx->pc = 0x14AF54u;
    SET_GPR_U32(ctx, 31, 0x14AF5Cu);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF5Cu; }
        if (ctx->pc != 0x14AF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF5Cu; }
        if (ctx->pc != 0x14AF5Cu) { return; }
    }
    ctx->pc = 0x14AF5Cu;
    // 0x14af5c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14af60: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x14af60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14af64: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x14af64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14af68: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x14af68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14af6c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14AF6Cu;
    {
        const bool branch_taken_0x14af6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF6Cu;
            // 0x14af70: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af6c) {
            ctx->pc = 0x14AF20u;
            runtime->cooperativeGuestYield();
            goto label_14af20;
        }
    }
    ctx->pc = 0x14AF74u;
    // 0x14af74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14AF74u;
    {
        const bool branch_taken_0x14af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF74u;
            // 0x14af78: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af74) {
            ctx->pc = 0x14AF98u;
            goto label_14af98;
        }
    }
    ctx->pc = 0x14AF7Cu;
    // 0x14af7c: 0x0  nop
    ctx->pc = 0x14af7cu;
    // NOP
label_14af80:
    // 0x14af80: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x14af80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14af84: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x14af84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14af88: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14af88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14af8c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x14AF8Cu;
    {
        const bool branch_taken_0x14af8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF8Cu;
            // 0x14af90: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af8c) {
            ctx->pc = 0x14AF20u;
            runtime->cooperativeGuestYield();
            goto label_14af20;
        }
    }
    ctx->pc = 0x14AF94u;
label_14af94:
    // 0x14af94: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14af94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14af98:
    // 0x14af98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14af98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14af9c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x14af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14afa0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x14afa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14afa4: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x14AFA4u;
    {
        const bool branch_taken_0x14afa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14afa4) {
            ctx->pc = 0x14AFA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFA4u;
            // 0x14afa8: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AF08u;
            runtime->cooperativeGuestYield();
            goto label_14af08;
        }
    }
    ctx->pc = 0x14AFACu;
    // 0x14afac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14afacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14afb0:
    // 0x14afb0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x14afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x14afb4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x14AFB4u;
    {
        const bool branch_taken_0x14afb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFB4u;
            // 0x14afb8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afb4) {
            ctx->pc = 0x14B0A0u;
            goto label_14b0a0;
        }
    }
    ctx->pc = 0x14AFBCu;
    // 0x14afbc: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x14afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_14afc0:
    // 0x14afc0: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x14afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14afc4: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x14afc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14afc8: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x14afc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14afcc: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x14afccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x14afd0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14AFD0u;
    {
        const bool branch_taken_0x14afd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFD0u;
            // 0x14afd4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afd0) {
            ctx->pc = 0x14B08Cu;
            goto label_14b08c;
        }
    }
    ctx->pc = 0x14AFD8u;
    // 0x14afd8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14afdc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x14AFDCu;
    {
        const bool branch_taken_0x14afdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFDCu;
            // 0x14afe0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afdc) {
            ctx->pc = 0x14B08Cu;
            goto label_14b08c;
        }
    }
    ctx->pc = 0x14AFE4u;
    // 0x14afe4: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x14afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_14afe8:
    // 0x14afe8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x14afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x14afec: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x14afecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14aff0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x14aff0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14aff4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14AFF4u;
    {
        const bool branch_taken_0x14aff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFF4u;
            // 0x14aff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aff4) {
            ctx->pc = 0x14B074u;
            goto label_14b074;
        }
    }
    ctx->pc = 0x14AFFCu;
    // 0x14affc: 0x0  nop
    ctx->pc = 0x14affcu;
    // NOP
label_14b000:
    // 0x14b000: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b004: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x14b004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14b008: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x14b008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14b00c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x14b00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b010: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14b010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14b014: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B014u;
    {
        const bool branch_taken_0x14b014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x14B018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B014u;
            // 0x14b018: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b014) {
            ctx->pc = 0x14B028u;
            goto label_14b028;
        }
    }
    ctx->pc = 0x14B01Cu;
    // 0x14b01c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x14b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x14b020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B020u;
    {
        const bool branch_taken_0x14b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B020u;
            // 0x14b024: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b020) {
            ctx->pc = 0x14B02Cu;
            goto label_14b02c;
        }
    }
    ctx->pc = 0x14B028u;
label_14b028:
    // 0x14b028: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14b028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b02c:
    // 0x14b02c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B02Cu;
    {
        const bool branch_taken_0x14b02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B02Cu;
            // 0x14b030: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b02c) {
            ctx->pc = 0x14B060u;
            goto label_14b060;
        }
    }
    ctx->pc = 0x14B034u;
    // 0x14b034: 0xc05e996  jal         func_17A658
    ctx->pc = 0x14B034u;
    SET_GPR_U32(ctx, 31, 0x14B03Cu);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B03Cu; }
        if (ctx->pc != 0x14B03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B03Cu; }
        if (ctx->pc != 0x14B03Cu) { return; }
    }
    ctx->pc = 0x14B03Cu;
    // 0x14b03c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14b040: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x14b040u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14b044: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x14b044u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14b048: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x14b048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14b04c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14B04Cu;
    {
        const bool branch_taken_0x14b04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B04Cu;
            // 0x14b050: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b04c) {
            ctx->pc = 0x14B000u;
            runtime->cooperativeGuestYield();
            goto label_14b000;
        }
    }
    ctx->pc = 0x14B054u;
    // 0x14b054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B054u;
    {
        const bool branch_taken_0x14b054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B054u;
            // 0x14b058: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b054) {
            ctx->pc = 0x14B078u;
            goto label_14b078;
        }
    }
    ctx->pc = 0x14B05Cu;
    // 0x14b05c: 0x0  nop
    ctx->pc = 0x14b05cu;
    // NOP
label_14b060:
    // 0x14b060: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x14b060u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x14b064: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x14b064u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14b068: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14b068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b06c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x14B06Cu;
    {
        const bool branch_taken_0x14b06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B06Cu;
            // 0x14b070: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b06c) {
            ctx->pc = 0x14B000u;
            runtime->cooperativeGuestYield();
            goto label_14b000;
        }
    }
    ctx->pc = 0x14B074u;
label_14b074:
    // 0x14b074: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14b078:
    // 0x14b078: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14b078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14b07c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x14b07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b080: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x14B080u;
    {
        const bool branch_taken_0x14b080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b080) {
            ctx->pc = 0x14B084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B080u;
            // 0x14b084: 0x8e830014  lw          $v1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AFE8u;
            runtime->cooperativeGuestYield();
            goto label_14afe8;
        }
    }
    ctx->pc = 0x14B088u;
    // 0x14b088: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14b08c:
    // 0x14b08c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14b08cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14b090: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x14b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x14b094: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x14b094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b098: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x14B098u;
    {
        const bool branch_taken_0x14b098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B098u;
            // 0x14b09c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b098) {
            ctx->pc = 0x14AFC0u;
            runtime->cooperativeGuestYield();
            goto label_14afc0;
        }
    }
    ctx->pc = 0x14B0A0u;
label_14b0a0:
    // 0x14b0a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b0a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x14b0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14b0a8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x14b0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b0ac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x14b0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b0b0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14b0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b0b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14b0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b0b8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x14b0b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b0bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14b0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0C0u;
            // 0x14b0c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AEACu: goto label_14aeac;
            case 0x14AED8u: goto label_14aed8;
            case 0x14AF08u: goto label_14af08;
            case 0x14AF20u: goto label_14af20;
            case 0x14AF48u: goto label_14af48;
            case 0x14AF4Cu: goto label_14af4c;
            case 0x14AF80u: goto label_14af80;
            case 0x14AF94u: goto label_14af94;
            case 0x14AF98u: goto label_14af98;
            case 0x14AFB0u: goto label_14afb0;
            case 0x14AFC0u: goto label_14afc0;
            case 0x14AFE8u: goto label_14afe8;
            case 0x14B000u: goto label_14b000;
            case 0x14B028u: goto label_14b028;
            case 0x14B02Cu: goto label_14b02c;
            case 0x14B060u: goto label_14b060;
            case 0x14B074u: goto label_14b074;
            case 0x14B078u: goto label_14b078;
            case 0x14B08Cu: goto label_14b08c;
            case 0x14B0A0u: goto label_14b0a0;
            case 0x14B120u: goto label_14b120;
            case 0x14B150u: goto label_14b150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B0C8u;
    // 0x14b0c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b0cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b0d4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14B0D4u;
    SET_GPR_U32(ctx, 31, 0x14B0DCu);
    ctx->pc = 0x14B0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0D4u;
            // 0x14b0d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0DCu; }
        if (ctx->pc != 0x14B0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0DCu; }
        if (ctx->pc != 0x14B0DCu) { return; }
    }
    ctx->pc = 0x14B0DCu;
    // 0x14b0dc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14b0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14b0e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14b0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0e4: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x14B0E4u;
    SET_GPR_U32(ctx, 31, 0x14B0ECu);
    ctx->pc = 0x14B0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0E4u;
            // 0x14b0e8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0ECu; }
        if (ctx->pc != 0x14B0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0ECu; }
        if (ctx->pc != 0x14B0ECu) { return; }
    }
    ctx->pc = 0x14B0ECu;
    // 0x14b0ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0f0: 0xc0528a4  jal         func_14A290
    ctx->pc = 0x14B0F0u;
    SET_GPR_U32(ctx, 31, 0x14B0F8u);
    ctx->pc = 0x14B0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0F0u;
            // 0x14b0f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A290u;
    if (runtime->hasFunction(0x14A290u)) {
        auto targetFn = runtime->lookupFunction(0x14A290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0F8u; }
        if (ctx->pc != 0x14B0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14a290_0x14a470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0F8u; }
        if (ctx->pc != 0x14B0F8u) { return; }
    }
    ctx->pc = 0x14B0F8u;
    // 0x14b0f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14b0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b0fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b100: 0x3e00008  jr          $ra
    ctx->pc = 0x14B100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B100u;
            // 0x14b104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AEACu: goto label_14aeac;
            case 0x14AED8u: goto label_14aed8;
            case 0x14AF08u: goto label_14af08;
            case 0x14AF20u: goto label_14af20;
            case 0x14AF48u: goto label_14af48;
            case 0x14AF4Cu: goto label_14af4c;
            case 0x14AF80u: goto label_14af80;
            case 0x14AF94u: goto label_14af94;
            case 0x14AF98u: goto label_14af98;
            case 0x14AFB0u: goto label_14afb0;
            case 0x14AFC0u: goto label_14afc0;
            case 0x14AFE8u: goto label_14afe8;
            case 0x14B000u: goto label_14b000;
            case 0x14B028u: goto label_14b028;
            case 0x14B02Cu: goto label_14b02c;
            case 0x14B060u: goto label_14b060;
            case 0x14B074u: goto label_14b074;
            case 0x14B078u: goto label_14b078;
            case 0x14B08Cu: goto label_14b08c;
            case 0x14B0A0u: goto label_14b0a0;
            case 0x14B120u: goto label_14b120;
            case 0x14B150u: goto label_14b150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B108u;
    // 0x14b108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b10c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14b10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b110: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B110u;
    {
        const bool branch_taken_0x14b110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B110u;
            // 0x14b114: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b110) {
            ctx->pc = 0x14B120u;
            goto label_14b120;
        }
    }
    ctx->pc = 0x14B118u;
    // 0x14b118: 0xc05291c  jal         func_14A470
    ctx->pc = 0x14B118u;
    SET_GPR_U32(ctx, 31, 0x14B120u);
    ctx->pc = 0x14B11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B118u;
            // 0x14b11c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A470u;
    if (runtime->hasFunction(0x14A470u)) {
        auto targetFn = runtime->lookupFunction(0x14A470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B120u; }
        if (ctx->pc != 0x14B120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A470_0x14a470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B120u; }
        if (ctx->pc != 0x14B120u) { return; }
    }
    ctx->pc = 0x14B120u;
label_14b120:
    // 0x14b120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b124: 0x3e00008  jr          $ra
    ctx->pc = 0x14B124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B124u;
            // 0x14b128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AEACu: goto label_14aeac;
            case 0x14AED8u: goto label_14aed8;
            case 0x14AF08u: goto label_14af08;
            case 0x14AF20u: goto label_14af20;
            case 0x14AF48u: goto label_14af48;
            case 0x14AF4Cu: goto label_14af4c;
            case 0x14AF80u: goto label_14af80;
            case 0x14AF94u: goto label_14af94;
            case 0x14AF98u: goto label_14af98;
            case 0x14AFB0u: goto label_14afb0;
            case 0x14AFC0u: goto label_14afc0;
            case 0x14AFE8u: goto label_14afe8;
            case 0x14B000u: goto label_14b000;
            case 0x14B028u: goto label_14b028;
            case 0x14B02Cu: goto label_14b02c;
            case 0x14B060u: goto label_14b060;
            case 0x14B074u: goto label_14b074;
            case 0x14B078u: goto label_14b078;
            case 0x14B08Cu: goto label_14b08c;
            case 0x14B0A0u: goto label_14b0a0;
            case 0x14B120u: goto label_14b120;
            case 0x14B150u: goto label_14b150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B12Cu;
    // 0x14b12c: 0x0  nop
    ctx->pc = 0x14b12cu;
    // NOP
    // 0x14b130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b138: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x14b138u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b13c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14b13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14b140: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B140u;
    {
        const bool branch_taken_0x14b140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B140u;
            // 0x14b144: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b140) {
            ctx->pc = 0x14B150u;
            goto label_14b150;
        }
    }
    ctx->pc = 0x14B148u;
    // 0x14b148: 0xc052958  jal         func_14A560
    ctx->pc = 0x14B148u;
    SET_GPR_U32(ctx, 31, 0x14B150u);
    ctx->pc = 0x14A560u;
    if (runtime->hasFunction(0x14A560u)) {
        auto targetFn = runtime->lookupFunction(0x14A560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B150u; }
        if (ctx->pc != 0x14B150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A560_0x14a560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B150u; }
        if (ctx->pc != 0x14B150u) { return; }
    }
    ctx->pc = 0x14B150u;
label_14b150:
    // 0x14b150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b154: 0x3e00008  jr          $ra
    ctx->pc = 0x14B154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B154u;
            // 0x14b158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AEACu: goto label_14aeac;
            case 0x14AED8u: goto label_14aed8;
            case 0x14AF08u: goto label_14af08;
            case 0x14AF20u: goto label_14af20;
            case 0x14AF48u: goto label_14af48;
            case 0x14AF4Cu: goto label_14af4c;
            case 0x14AF80u: goto label_14af80;
            case 0x14AF94u: goto label_14af94;
            case 0x14AF98u: goto label_14af98;
            case 0x14AFB0u: goto label_14afb0;
            case 0x14AFC0u: goto label_14afc0;
            case 0x14AFE8u: goto label_14afe8;
            case 0x14B000u: goto label_14b000;
            case 0x14B028u: goto label_14b028;
            case 0x14B02Cu: goto label_14b02c;
            case 0x14B060u: goto label_14b060;
            case 0x14B074u: goto label_14b074;
            case 0x14B078u: goto label_14b078;
            case 0x14B08Cu: goto label_14b08c;
            case 0x14B0A0u: goto label_14b0a0;
            case 0x14B120u: goto label_14b120;
            case 0x14B150u: goto label_14b150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B15Cu;
    // 0x14b15c: 0x0  nop
    ctx->pc = 0x14b15cu;
    // NOP
}
