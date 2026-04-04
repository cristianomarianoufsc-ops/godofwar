#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8878
// Address: 0x1a8878 - 0x1a8960
void sub_001A8878_0x1a8878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8878_0x1a8878");
#endif

    ctx->pc = 0x1a8878u;

    // 0x1a8878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a887c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a887cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a8880: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a8880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a8884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a8888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a888c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a8890: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1a8890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8898: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1a889c: 0x10720009  beq         $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A889Cu;
    {
        const bool branch_taken_0x1a889c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A88A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A889Cu;
            // 0x1a88a0: 0x261100b0  addiu       $s1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a889c) {
            ctx->pc = 0x1A88C4u;
            goto label_1a88c4;
        }
    }
    ctx->pc = 0x1A88A4u;
    // 0x1a88a4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1a88a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a88a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a88ac: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1a88acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1a88b0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a88b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a88b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a88b8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A88B8u;
    SET_GPR_U32(ctx, 31, 0x1A88C0u);
    ctx->pc = 0x1A88BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88B8u;
            // 0x1a88bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88C0u; }
        if (ctx->pc != 0x1A88C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88C0u; }
        if (ctx->pc != 0x1A88C0u) { return; }
    }
    ctx->pc = 0x1A88C0u;
    // 0x1a88c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a88c4:
    // 0x1a88c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a88c8: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1a88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1a88cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a88ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a88d0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A88D0u;
    {
        const bool branch_taken_0x1a88d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A88D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88D0u;
            // 0x1a88d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88d0) {
            ctx->pc = 0x1A8940u;
            goto label_1a8940;
        }
    }
    ctx->pc = 0x1A88D8u;
    // 0x1a88d8: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x1a88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a88dc: 0x10720009  beq         $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A88DCu;
    {
        const bool branch_taken_0x1a88dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A88E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88DCu;
            // 0x1a88e0: 0x261100d0  addiu       $s1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88dc) {
            ctx->pc = 0x1A8904u;
            goto label_1a8904;
        }
    }
    ctx->pc = 0x1A88E4u;
    // 0x1a88e4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1a88e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a88e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a88ec: 0xac50cac8  sw          $s0, -0x3538($v0)
    ctx->pc = 0x1a88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 16));
    // 0x1a88f0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a88f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a88f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a88f8: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A88F8u;
    SET_GPR_U32(ctx, 31, 0x1A8900u);
    ctx->pc = 0x1A88FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88F8u;
            // 0x1a88fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8900u; }
        if (ctx->pc != 0x1A8900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8900u; }
        if (ctx->pc != 0x1A8900u) { return; }
    }
    ctx->pc = 0x1A8900u;
    // 0x1a8900: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a8900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a8904:
    // 0x1a8904: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8908: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1a8908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a890c: 0x8c44c874  lw          $a0, -0x378C($v0)
    ctx->pc = 0x1a890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953076)));
    // 0x1a8910: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1A8910u;
    SET_GPR_U32(ctx, 31, 0x1A8918u);
    ctx->pc = 0x1A8914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8910u;
            // 0x1a8914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8918u; }
        if (ctx->pc != 0x1A8918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8918u; }
        if (ctx->pc != 0x1A8918u) { return; }
    }
    ctx->pc = 0x1A8918u;
    // 0x1a8918: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A8918u;
    {
        const bool branch_taken_0x1a8918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8918) {
            ctx->pc = 0x1A891Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8918u;
            // 0x1a891c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8944u;
            goto label_1a8944;
        }
    }
    ctx->pc = 0x1A8920u;
    // 0x1a8920: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1a8920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1a8924: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8924u;
    {
        const bool branch_taken_0x1a8924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8924u;
            // 0x1a8928: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8924) {
            ctx->pc = 0x1A8944u;
            goto label_1a8944;
        }
    }
    ctx->pc = 0x1A892Cu;
    // 0x1a892c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1A892Cu;
    SET_GPR_U32(ctx, 31, 0x1A8934u);
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8934u; }
        if (ctx->pc != 0x1A8934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8934u; }
        if (ctx->pc != 0x1A8934u) { return; }
    }
    ctx->pc = 0x1A8934u;
    // 0x1a8934: 0xc04c9ca  jal         func_132728
    ctx->pc = 0x1A8934u;
    SET_GPR_U32(ctx, 31, 0x1A893Cu);
    ctx->pc = 0x1A8938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8934u;
            // 0x1a8938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132728u;
    if (runtime->hasFunction(0x132728u)) {
        auto targetFn = runtime->lookupFunction(0x132728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A893Cu; }
        if (ctx->pc != 0x1A893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132728_0x132728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A893Cu; }
        if (ctx->pc != 0x1A893Cu) { return; }
    }
    ctx->pc = 0x1A893Cu;
    // 0x1a893c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a893cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8940:
    // 0x1a8940: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1a8940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8944:
    // 0x1a8944: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a8944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8948: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a8948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a894c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a894cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8950: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a8950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8958: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8958u;
            // 0x1a895c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A88C4u: goto label_1a88c4;
            case 0x1A8904u: goto label_1a8904;
            case 0x1A8940u: goto label_1a8940;
            case 0x1A8944u: goto label_1a8944;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8960u;
}
