#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106628
// Address: 0x106628 - 0x106b20
void sub_00106628_0x106628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106628_0x106628");
#endif

    ctx->pc = 0x106628u;

    // 0x106628: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x106628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10662c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x106630: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x106630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x106634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106638: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x106638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x10663c: 0x26340014  addiu       $s4, $s1, 0x14
    ctx->pc = 0x10663cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x106640: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x106640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x106644: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x106644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x106648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10664c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x106650: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x106650u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x106654: 0x12540016  beq         $s2, $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x106654u;
    {
        const bool branch_taken_0x106654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x106658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106654u;
            // 0x106658: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106654) {
            ctx->pc = 0x1066B0u;
            goto label_1066b0;
        }
    }
    ctx->pc = 0x10665Cu;
    // 0x10665c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x10665cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106660:
    // 0x106660: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x106660u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106664: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x106664u;
    {
        const bool branch_taken_0x106664 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x106668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106664u;
            // 0x106668: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106664) {
            ctx->pc = 0x106680u;
            goto label_106680;
        }
    }
    ctx->pc = 0x10666Cu;
    // 0x10666c: 0xc045f0a  jal         func_117C28
    ctx->pc = 0x10666Cu;
    SET_GPR_U32(ctx, 31, 0x106674u);
    ctx->pc = 0x106670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10666Cu;
            // 0x106670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117C28u;
    if (runtime->hasFunction(0x117C28u)) {
        auto targetFn = runtime->lookupFunction(0x117C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106674u; }
        if (ctx->pc != 0x106674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_117c28_0x117c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106674u; }
        if (ctx->pc != 0x106674u) { return; }
    }
    ctx->pc = 0x106674u;
    // 0x106674: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x106674u;
    {
        const bool branch_taken_0x106674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106674) {
            ctx->pc = 0x106678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106674u;
            // 0x106678: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106694u;
            goto label_106694;
        }
    }
    ctx->pc = 0x10667Cu;
    // 0x10667c: 0x0  nop
    ctx->pc = 0x10667cu;
    // NOP
label_106680:
    // 0x106680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106684: 0xc041ee4  jal         func_107B90
    ctx->pc = 0x106684u;
    SET_GPR_U32(ctx, 31, 0x10668Cu);
    ctx->pc = 0x106688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106684u;
            // 0x106688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107B90u;
    if (runtime->hasFunction(0x107B90u)) {
        auto targetFn = runtime->lookupFunction(0x107B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10668Cu; }
        if (ctx->pc != 0x10668Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B90_0x107b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10668Cu; }
        if (ctx->pc != 0x10668Cu) { return; }
    }
    ctx->pc = 0x10668Cu;
    // 0x10668c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10668Cu;
    {
        const bool branch_taken_0x10668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10668c) {
            ctx->pc = 0x1066A8u;
            goto label_1066a8;
        }
    }
    ctx->pc = 0x106694u;
label_106694:
    // 0x106694: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x106694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x106698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106698u;
    {
        const bool branch_taken_0x106698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106698) {
            ctx->pc = 0x1066A8u;
            goto label_1066a8;
        }
    }
    ctx->pc = 0x1066A0u;
    // 0x1066a0: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x1066A0u;
    SET_GPR_U32(ctx, 31, 0x1066A8u);
    ctx->pc = 0x1066A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1066A0u;
            // 0x1066a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (runtime->hasFunction(0x117BB8u)) {
        auto targetFn = runtime->lookupFunction(0x117BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1066A8u; }
        if (ctx->pc != 0x1066A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117BB8_0x117bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1066A8u; }
        if (ctx->pc != 0x1066A8u) { return; }
    }
    ctx->pc = 0x1066A8u;
label_1066a8:
    // 0x1066a8: 0x1674ffed  bne         $s3, $s4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1066A8u;
    {
        const bool branch_taken_0x1066a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x1066ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1066A8u;
            // 0x1066ac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066a8) {
            ctx->pc = 0x106660u;
            runtime->cooperativeGuestYield();
            goto label_106660;
        }
    }
    ctx->pc = 0x1066B0u;
label_1066b0:
    // 0x1066b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1066b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1066b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1066b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1066b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1066b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1066bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1066bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1066c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1066c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1066c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1066c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1066c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1066c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1066cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1066CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1066D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1066CCu;
            // 0x1066d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106660u: goto label_106660;
            case 0x106680u: goto label_106680;
            case 0x106694u: goto label_106694;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066B0u: goto label_1066b0;
            case 0x106708u: goto label_106708;
            case 0x106758u: goto label_106758;
            case 0x106768u: goto label_106768;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x1067F8u: goto label_1067f8;
            case 0x106818u: goto label_106818;
            case 0x106840u: goto label_106840;
            case 0x106848u: goto label_106848;
            case 0x10687Cu: goto label_10687c;
            case 0x106884u: goto label_106884;
            case 0x1068D0u: goto label_1068d0;
            case 0x1068E0u: goto label_1068e0;
            case 0x1068E8u: goto label_1068e8;
            case 0x1068F8u: goto label_1068f8;
            case 0x106928u: goto label_106928;
            case 0x106940u: goto label_106940;
            case 0x10694Cu: goto label_10694c;
            case 0x1069A8u: goto label_1069a8;
            case 0x1069D0u: goto label_1069d0;
            case 0x1069E8u: goto label_1069e8;
            case 0x106A08u: goto label_106a08;
            case 0x106A38u: goto label_106a38;
            case 0x106AB0u: goto label_106ab0;
            case 0x106AB8u: goto label_106ab8;
            case 0x106AC8u: goto label_106ac8;
            case 0x106AD0u: goto label_106ad0;
            case 0x106AF0u: goto label_106af0;
            case 0x106AF4u: goto label_106af4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1066D4u;
    // 0x1066d4: 0x0  nop
    ctx->pc = 0x1066d4u;
    // NOP
    // 0x1066d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1066d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1066dc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1066dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1066e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1066e4: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x1066e4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1066e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1066ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1066f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1066f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f4: 0x8d470008  lw          $a3, 0x8($t2)
    ctx->pc = 0x1066f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1066f8: 0x94e90012  lhu         $t1, 0x12($a3)
    ctx->pc = 0x1066f8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x1066fc: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1066FCu;
    {
        const bool branch_taken_0x1066fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x106700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1066FCu;
            // 0x106700: 0x3a0582d  daddu       $t3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066fc) {
            ctx->pc = 0x106774u;
            goto label_106774;
        }
    }
    ctx->pc = 0x106704u;
    // 0x106704: 0x0  nop
    ctx->pc = 0x106704u;
    // NOP
label_106708:
    // 0x106708: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x106708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10670c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x10670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x106710: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x106710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x106714: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x106714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x106718: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x106718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x10671c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x10671cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x106720: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x106720u;
    {
        const bool branch_taken_0x106720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106720) {
            ctx->pc = 0x106724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106720u;
            // 0x106724: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106768u;
            goto label_106768;
        }
    }
    ctx->pc = 0x106728u;
    // 0x106728: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x106728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10672c: 0x31443  sra         $v0, $v1, 17
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 17));
    // 0x106730: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x106730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x106734: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106738: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x106738u;
    {
        const bool branch_taken_0x106738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106738u;
            // 0x10673c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106738) {
            ctx->pc = 0x106774u;
            goto label_106774;
        }
    }
    ctx->pc = 0x106740u;
    // 0x106740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106740u;
    {
        const bool branch_taken_0x106740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106740u;
            // 0x106744: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106740) {
            ctx->pc = 0x106758u;
            goto label_106758;
        }
    }
    ctx->pc = 0x106748u;
    // 0x106748: 0x55600003  bnel        $t3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x106748u;
    {
        const bool branch_taken_0x106748 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x106748) {
            ctx->pc = 0x10674Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106748u;
            // 0x10674c: 0xad660000  sw          $a2, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106758u;
            goto label_106758;
        }
    }
    ctx->pc = 0x106750u;
    // 0x106750: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x106750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x106754: 0x0  nop
    ctx->pc = 0x106754u;
    // NOP
label_106758:
    // 0x106758: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x106758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10675c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x10675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x106760: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x106760u;
    {
        const bool branch_taken_0x106760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106760u;
            // 0x106764: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106760) {
            ctx->pc = 0x106778u;
            goto label_106778;
        }
    }
    ctx->pc = 0x106768u;
label_106768:
    // 0x106768: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x106768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x10676c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10676Cu;
    {
        const bool branch_taken_0x10676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10676Cu;
            // 0x106770: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10676c) {
            ctx->pc = 0x106708u;
            runtime->cooperativeGuestYield();
            goto label_106708;
        }
    }
    ctx->pc = 0x106774u;
label_106774:
    // 0x106774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106778:
    // 0x106778: 0x8d42005c  lw          $v0, 0x5C($t2)
    ctx->pc = 0x106778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x10677c: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x10677cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106780: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x106780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106784: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106788: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x106788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x10678c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x10678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x106790: 0x40f809  jalr        $v0
    ctx->pc = 0x106790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106798u);
        ctx->pc = 0x106794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106790u;
            // 0x106794: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x106798u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106660u: goto label_106660;
            case 0x106680u: goto label_106680;
            case 0x106694u: goto label_106694;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066B0u: goto label_1066b0;
            case 0x106708u: goto label_106708;
            case 0x106758u: goto label_106758;
            case 0x106768u: goto label_106768;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x1067F8u: goto label_1067f8;
            case 0x106818u: goto label_106818;
            case 0x106840u: goto label_106840;
            case 0x106848u: goto label_106848;
            case 0x10687Cu: goto label_10687c;
            case 0x106884u: goto label_106884;
            case 0x1068D0u: goto label_1068d0;
            case 0x1068E0u: goto label_1068e0;
            case 0x1068E8u: goto label_1068e8;
            case 0x1068F8u: goto label_1068f8;
            case 0x106928u: goto label_106928;
            case 0x106940u: goto label_106940;
            case 0x10694Cu: goto label_10694c;
            case 0x1069A8u: goto label_1069a8;
            case 0x1069D0u: goto label_1069d0;
            case 0x1069E8u: goto label_1069e8;
            case 0x106A08u: goto label_106a08;
            case 0x106A38u: goto label_106a38;
            case 0x106AB0u: goto label_106ab0;
            case 0x106AB8u: goto label_106ab8;
            case 0x106AC8u: goto label_106ac8;
            case 0x106AD0u: goto label_106ad0;
            case 0x106AF0u: goto label_106af0;
            case 0x106AF4u: goto label_106af4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x106798u; }
            if (ctx->pc != 0x106798u) { return; }
        }
        }
    }
    ctx->pc = 0x106798u;
    // 0x106798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10679c: 0x3e00008  jr          $ra
    ctx->pc = 0x10679Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1067A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10679Cu;
            // 0x1067a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106660u: goto label_106660;
            case 0x106680u: goto label_106680;
            case 0x106694u: goto label_106694;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066B0u: goto label_1066b0;
            case 0x106708u: goto label_106708;
            case 0x106758u: goto label_106758;
            case 0x106768u: goto label_106768;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x1067F8u: goto label_1067f8;
            case 0x106818u: goto label_106818;
            case 0x106840u: goto label_106840;
            case 0x106848u: goto label_106848;
            case 0x10687Cu: goto label_10687c;
            case 0x106884u: goto label_106884;
            case 0x1068D0u: goto label_1068d0;
            case 0x1068E0u: goto label_1068e0;
            case 0x1068E8u: goto label_1068e8;
            case 0x1068F8u: goto label_1068f8;
            case 0x106928u: goto label_106928;
            case 0x106940u: goto label_106940;
            case 0x10694Cu: goto label_10694c;
            case 0x1069A8u: goto label_1069a8;
            case 0x1069D0u: goto label_1069d0;
            case 0x1069E8u: goto label_1069e8;
            case 0x106A08u: goto label_106a08;
            case 0x106A38u: goto label_106a38;
            case 0x106AB0u: goto label_106ab0;
            case 0x106AB8u: goto label_106ab8;
            case 0x106AC8u: goto label_106ac8;
            case 0x106AD0u: goto label_106ad0;
            case 0x106AF0u: goto label_106af0;
            case 0x106AF4u: goto label_106af4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1067A4u;
    // 0x1067a4: 0x0  nop
    ctx->pc = 0x1067a4u;
    // NOP
    // 0x1067a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1067a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1067ac: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1067acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1067b0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1067b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1067b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1067b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067b8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1067b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1067bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1067bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1067c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1067c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1067c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1067c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1067cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1067ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067d0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1067d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1067d4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1067d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067d8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1067d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1067dc: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1067dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067e0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1067e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1067e4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1067e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1067e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1067e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1067ec: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1067ECu;
    {
        const bool branch_taken_0x1067ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1067ECu;
            // 0x1067f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067ec) {
            ctx->pc = 0x1067F8u;
            goto label_1067f8;
        }
    }
    ctx->pc = 0x1067F4u;
    // 0x1067f4: 0x12282b  sltu        $a1, $zero, $s2
    ctx->pc = 0x1067f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1067f8:
    // 0x1067f8: 0x14a00022  bnez        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1067F8u;
    {
        const bool branch_taken_0x1067f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1067f8) {
            ctx->pc = 0x106884u;
            goto label_106884;
        }
    }
    ctx->pc = 0x106800u;
    // 0x106800: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x106800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x106804: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x106804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x106808: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x106808u;
    {
        const bool branch_taken_0x106808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106808u;
            // 0x10680c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106808) {
            ctx->pc = 0x106848u;
            goto label_106848;
        }
    }
    ctx->pc = 0x106810u;
    // 0x106810: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x106810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x106814: 0x0  nop
    ctx->pc = 0x106814u;
    // NOP
label_106818:
    // 0x106818: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x106818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10681c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x10681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x106820: 0x433818  mult        $a3, $v0, $v1
    ctx->pc = 0x106820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x106824: 0xf31021  addu        $v0, $a3, $s3
    ctx->pc = 0x106824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x106828: 0x94420066  lhu         $v0, 0x66($v0)
    ctx->pc = 0x106828u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 102)));
    // 0x10682c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10682Cu;
    {
        const bool branch_taken_0x10682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10682Cu;
            // 0x106830: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10682c) {
            ctx->pc = 0x10687Cu;
            goto label_10687c;
        }
    }
    ctx->pc = 0x106834u;
    // 0x106834: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x106834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x106838: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x106838u;
    {
        const bool branch_taken_0x106838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106838) {
            ctx->pc = 0x10683Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106838u;
            // 0x10683c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106818u;
            runtime->cooperativeGuestYield();
            goto label_106818;
        }
    }
    ctx->pc = 0x106840u;
label_106840:
    // 0x106840: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x106840u;
    {
        const bool branch_taken_0x106840 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x106840) {
            ctx->pc = 0x106884u;
            goto label_106884;
        }
    }
    ctx->pc = 0x106848u;
label_106848:
    // 0x106848: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10684c: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x10684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x106850: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x106850u;
    {
        const bool branch_taken_0x106850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106850u;
            // 0x106854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106850) {
            ctx->pc = 0x106AF0u;
            goto label_106af0;
        }
    }
    ctx->pc = 0x106858u;
    // 0x106858: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x106858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x10685c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10685cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106860: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x106860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106864: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x106864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x106868: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x106868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x10686c: 0x40f809  jalr        $v0
    ctx->pc = 0x10686Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106874u);
        ctx->pc = 0x106870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10686Cu;
            // 0x106870: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x106874u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106660u: goto label_106660;
            case 0x106680u: goto label_106680;
            case 0x106694u: goto label_106694;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066B0u: goto label_1066b0;
            case 0x106708u: goto label_106708;
            case 0x106758u: goto label_106758;
            case 0x106768u: goto label_106768;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x1067F8u: goto label_1067f8;
            case 0x106818u: goto label_106818;
            case 0x106840u: goto label_106840;
            case 0x106848u: goto label_106848;
            case 0x10687Cu: goto label_10687c;
            case 0x106884u: goto label_106884;
            case 0x1068D0u: goto label_1068d0;
            case 0x1068E0u: goto label_1068e0;
            case 0x1068E8u: goto label_1068e8;
            case 0x1068F8u: goto label_1068f8;
            case 0x106928u: goto label_106928;
            case 0x106940u: goto label_106940;
            case 0x10694Cu: goto label_10694c;
            case 0x1069A8u: goto label_1069a8;
            case 0x1069D0u: goto label_1069d0;
            case 0x1069E8u: goto label_1069e8;
            case 0x106A08u: goto label_106a08;
            case 0x106A38u: goto label_106a38;
            case 0x106AB0u: goto label_106ab0;
            case 0x106AB8u: goto label_106ab8;
            case 0x106AC8u: goto label_106ac8;
            case 0x106AD0u: goto label_106ad0;
            case 0x106AF0u: goto label_106af0;
            case 0x106AF4u: goto label_106af4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x106874u; }
            if (ctx->pc != 0x106874u) { return; }
        }
        }
    }
    ctx->pc = 0x106874u;
    // 0x106874: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x106874u;
    {
        const bool branch_taken_0x106874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106874u;
            // 0x106878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106874) {
            ctx->pc = 0x106AF0u;
            goto label_106af0;
        }
    }
    ctx->pc = 0x10687Cu;
label_10687c:
    // 0x10687c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x10687Cu;
    {
        const bool branch_taken_0x10687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10687Cu;
            // 0x106880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10687c) {
            ctx->pc = 0x106840u;
            runtime->cooperativeGuestYield();
            goto label_106840;
        }
    }
    ctx->pc = 0x106884u;
label_106884:
    // 0x106884: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x106884u;
    {
        const bool branch_taken_0x106884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x106884) {
            ctx->pc = 0x106888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106884u;
            // 0x106888: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1068F8u;
            goto label_1068f8;
        }
    }
    ctx->pc = 0x10688Cu;
    // 0x10688c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x106890: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x106890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x106894: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x106894u;
    {
        const bool branch_taken_0x106894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106894) {
            ctx->pc = 0x106898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106894u;
            // 0x106898: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1068F8u;
            goto label_1068f8;
        }
    }
    ctx->pc = 0x10689Cu;
    // 0x10689c: 0x52400016  beql        $s2, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x10689Cu;
    {
        const bool branch_taken_0x10689c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x10689c) {
            ctx->pc = 0x1068A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10689Cu;
            // 0x1068a0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1068F8u;
            goto label_1068f8;
        }
    }
    ctx->pc = 0x1068A4u;
    // 0x1068a4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1068a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1068a8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1068a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1068ac: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1068acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1068b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1068B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1068B8u);
        ctx->pc = 0x1068B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1068B0u;
            // 0x1068b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1068B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106660u: goto label_106660;
            case 0x106680u: goto label_106680;
            case 0x106694u: goto label_106694;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066B0u: goto label_1066b0;
            case 0x106708u: goto label_106708;
            case 0x106758u: goto label_106758;
            case 0x106768u: goto label_106768;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x1067F8u: goto label_1067f8;
            case 0x106818u: goto label_106818;
            case 0x106840u: goto label_106840;
            case 0x106848u: goto label_106848;
            case 0x10687Cu: goto label_10687c;
            case 0x106884u: goto label_106884;
            case 0x1068D0u: goto label_1068d0;
            case 0x1068E0u: goto label_1068e0;
            case 0x1068E8u: goto label_1068e8;
            case 0x1068F8u: goto label_1068f8;
            case 0x106928u: goto label_106928;
            case 0x106940u: goto label_106940;
            case 0x10694Cu: goto label_10694c;
            case 0x1069A8u: goto label_1069a8;
            case 0x1069D0u: goto label_1069d0;
            case 0x1069E8u: goto label_1069e8;
            case 0x106A08u: goto label_106a08;
            case 0x106A38u: goto label_106a38;
            case 0x106AB0u: goto label_106ab0;
            case 0x106AB8u: goto label_106ab8;
            case 0x106AC8u: goto label_106ac8;
            case 0x106AD0u: goto label_106ad0;
            case 0x106AF0u: goto label_106af0;
            case 0x106AF4u: goto label_106af4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1068B8u; }
            if (ctx->pc != 0x1068B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1068B8u;
    // 0x1068b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1068B8u;
    {
        const bool branch_taken_0x1068b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1068B8u;
            // 0x1068bc: 0x26230014  addiu       $v1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068b8) {
            ctx->pc = 0x1068E0u;
            goto label_1068e0;
        }
    }
    ctx->pc = 0x1068C0u;
    // 0x1068c0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1068c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1068c4: 0x10a30042  beq         $a1, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1068C4u;
    {
        const bool branch_taken_0x1068c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1068c4) {
            ctx->pc = 0x1069D0u;
            goto label_1069d0;
        }
    }
    ctx->pc = 0x1068CCu;
    // 0x1068cc: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1068ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1068d0:
    // 0x1068d0: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1068D0u;
    {
        const bool branch_taken_0x1068d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1068d0) {
            ctx->pc = 0x1068D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1068D0u;
            // 0x1068d4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1068E8u;
            goto label_1068e8;
        }
    }
    ctx->pc = 0x1068D8u;
    // 0x1068d8: 0xc041ee4  jal         func_107B90
    ctx->pc = 0x1068D8u;
    SET_GPR_U32(ctx, 31, 0x1068E0u);
    ctx->pc = 0x1068DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1068D8u;
            // 0x1068dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107B90u;
    if (runtime->hasFunction(0x107B90u)) {
        auto targetFn = runtime->lookupFunction(0x107B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1068E0u; }
        if (ctx->pc != 0x1068E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B90_0x107b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1068E0u; }
        if (ctx->pc != 0x1068E0u) { return; }
    }
    ctx->pc = 0x1068E0u;
label_1068e0:
    // 0x1068e0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1068E0u;
    {
        const bool branch_taken_0x1068e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1068E0u;
            // 0x1068e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068e0) {
            ctx->pc = 0x106AF0u;
            goto label_106af0;
        }
    }
    ctx->pc = 0x1068E8u;
label_1068e8:
    // 0x1068e8: 0x54a3fff9  bnel        $a1, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1068E8u;
    {
        const bool branch_taken_0x1068e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1068e8) {
            ctx->pc = 0x1068ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1068E8u;
            // 0x1068ec: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1068D0u;
            runtime->cooperativeGuestYield();
            goto label_1068d0;
        }
    }
    ctx->pc = 0x1068F0u;
    // 0x1068f0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1068F0u;
    {
        const bool branch_taken_0x1068f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1068f0) {
            ctx->pc = 0x1069D0u;
            goto label_1069d0;
        }
    }
    ctx->pc = 0x1068F8u;
label_1068f8:
    // 0x1068f8: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x1068f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x1068fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1068FCu;
    {
        const bool branch_taken_0x1068fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1068fc) {
            ctx->pc = 0x106940u;
            goto label_106940;
        }
    }
    ctx->pc = 0x106904u;
    // 0x106904: 0xc041f04  jal         func_107C10
    ctx->pc = 0x106904u;
    SET_GPR_U32(ctx, 31, 0x10690Cu);
    ctx->pc = 0x106908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106904u;
            // 0x106908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107C10u;
    if (runtime->hasFunction(0x107C10u)) {
        auto targetFn = runtime->lookupFunction(0x107C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10690Cu; }
        if (ctx->pc != 0x10690Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107c10_0x107c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10690Cu; }
        if (ctx->pc != 0x10690Cu) { return; }
    }
    ctx->pc = 0x10690Cu;
    // 0x10690c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10690Cu;
    {
        const bool branch_taken_0x10690c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10690c) {
            ctx->pc = 0x106940u;
            goto label_106940;
        }
    }
    ctx->pc = 0x106914u;
    // 0x106914: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106914u;
    {
        const bool branch_taken_0x106914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x106914) {
            ctx->pc = 0x106918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106914u;
            // 0x106918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106928u;
            goto label_106928;
        }
    }
    ctx->pc = 0x10691Cu;
    // 0x10691c: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10691Cu;
    {
        const bool branch_taken_0x10691c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x10691c) {
            ctx->pc = 0x106920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10691Cu;
            // 0x106920: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x10694Cu;
            goto label_10694c;
        }
    }
    ctx->pc = 0x106924u;
    // 0x106924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106928:
    // 0x106928: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x106928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10692c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x10692cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106930: 0xc041dcc  jal         func_107730
    ctx->pc = 0x106930u;
    SET_GPR_U32(ctx, 31, 0x106938u);
    ctx->pc = 0x106934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106930u;
            // 0x106934: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107730u;
    if (runtime->hasFunction(0x107730u)) {
        auto targetFn = runtime->lookupFunction(0x107730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106938u; }
        if (ctx->pc != 0x106938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107730_0x107730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106938u; }
        if (ctx->pc != 0x106938u) { return; }
    }
    ctx->pc = 0x106938u;
    // 0x106938: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x106938u;
    {
        const bool branch_taken_0x106938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10693Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106938u;
            // 0x10693c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106938) {
            ctx->pc = 0x106AF4u;
            goto label_106af4;
        }
    }
    ctx->pc = 0x106940u;
label_106940:
    // 0x106940: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x106940u;
    {
        const bool branch_taken_0x106940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x106940) {
            ctx->pc = 0x1069A8u;
            goto label_1069a8;
        }
    }
    ctx->pc = 0x106948u;
    // 0x106948: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x106948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10694c:
    // 0x10694c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10694cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106950: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x106950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106954: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x106954u;
    {
        const bool branch_taken_0x106954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x106954) {
            ctx->pc = 0x1069A8u;
            goto label_1069a8;
        }
    }
    ctx->pc = 0x10695Cu;
    // 0x10695c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x10695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x106960: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x106960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x106964: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x106964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x106968: 0x40f809  jalr        $v0
    ctx->pc = 0x106968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106970u);
        ctx->pc = 0x10696Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106968u;
            // 0x10696c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x106970u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106660u: goto label_106660;
            case 0x106680u: goto label_106680;
            case 0x106694u: goto label_106694;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066B0u: goto label_1066b0;
            case 0x106708u: goto label_106708;
            case 0x106758u: goto label_106758;
            case 0x106768u: goto label_106768;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x1067F8u: goto label_1067f8;
            case 0x106818u: goto label_106818;
            case 0x106840u: goto label_106840;
            case 0x106848u: goto label_106848;
            case 0x10687Cu: goto label_10687c;
            case 0x106884u: goto label_106884;
            case 0x1068D0u: goto label_1068d0;
            case 0x1068E0u: goto label_1068e0;
            case 0x1068E8u: goto label_1068e8;
            case 0x1068F8u: goto label_1068f8;
            case 0x106928u: goto label_106928;
            case 0x106940u: goto label_106940;
            case 0x10694Cu: goto label_10694c;
            case 0x1069A8u: goto label_1069a8;
            case 0x1069D0u: goto label_1069d0;
            case 0x1069E8u: goto label_1069e8;
            case 0x106A08u: goto label_106a08;
            case 0x106A38u: goto label_106a38;
            case 0x106AB0u: goto label_106ab0;
            case 0x106AB8u: goto label_106ab8;
            case 0x106AC8u: goto label_106ac8;
            case 0x106AD0u: goto label_106ad0;
            case 0x106AF0u: goto label_106af0;
            case 0x106AF4u: goto label_106af4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x106970u; }
            if (ctx->pc != 0x106970u) { return; }
        }
        }
    }
    ctx->pc = 0x106970u;
    // 0x106970: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x106970u;
    {
        const bool branch_taken_0x106970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106970) {
            ctx->pc = 0x1069A8u;
            goto label_1069a8;
        }
    }
    ctx->pc = 0x106978u;
    // 0x106978: 0xc041f04  jal         func_107C10
    ctx->pc = 0x106978u;
    SET_GPR_U32(ctx, 31, 0x106980u);
    ctx->pc = 0x10697Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106978u;
            // 0x10697c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107C10u;
    if (runtime->hasFunction(0x107C10u)) {
        auto targetFn = runtime->lookupFunction(0x107C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106980u; }
        if (ctx->pc != 0x106980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107c10_0x107c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106980u; }
        if (ctx->pc != 0x106980u) { return; }
    }
    ctx->pc = 0x106980u;
    // 0x106980: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x106980u;
    {
        const bool branch_taken_0x106980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106980u;
            // 0x106984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106980) {
            ctx->pc = 0x1069A8u;
            goto label_1069a8;
        }
    }
    ctx->pc = 0x106988u;
    // 0x106988: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x106988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10698c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10698cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106990: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x106990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106994: 0xc041e4a  jal         func_107928
    ctx->pc = 0x106994u;
    SET_GPR_U32(ctx, 31, 0x10699Cu);
    ctx->pc = 0x106998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106994u;
            // 0x106998: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107928u;
    if (runtime->hasFunction(0x107928u)) {
        auto targetFn = runtime->lookupFunction(0x107928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10699Cu; }
        if (ctx->pc != 0x10699Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107928_0x107928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10699Cu; }
        if (ctx->pc != 0x10699Cu) { return; }
    }
    ctx->pc = 0x10699Cu;
    // 0x10699c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x10699Cu;
    {
        const bool branch_taken_0x10699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10699Cu;
            // 0x1069a0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10699c) {
            ctx->pc = 0x106AF4u;
            goto label_106af4;
        }
    }
    ctx->pc = 0x1069A4u;
    // 0x1069a4: 0x0  nop
    ctx->pc = 0x1069a4u;
    // NOP
label_1069a8:
    // 0x1069a8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1069A8u;
    {
        const bool branch_taken_0x1069a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1069a8) {
            ctx->pc = 0x1069E8u;
            goto label_1069e8;
        }
    }
    ctx->pc = 0x1069B0u;
    // 0x1069b0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1069B0u;
    {
        const bool branch_taken_0x1069b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1069B0u;
            // 0x1069b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069b0) {
            ctx->pc = 0x1069E8u;
            goto label_1069e8;
        }
    }
    ctx->pc = 0x1069B8u;
    // 0x1069b8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1069b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1069bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1069bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1069c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1069c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1069c4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1069c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1069c8: 0x40f809  jalr        $v0
    ctx->pc = 0x1069C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1069D0u);
        ctx->pc = 0x1069CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1069C8u;
            // 0x1069cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1069D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106660u: goto label_106660;
            case 0x106680u: goto label_106680;
            case 0x106694u: goto label_106694;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066B0u: goto label_1066b0;
            case 0x106708u: goto label_106708;
            case 0x106758u: goto label_106758;
            case 0x106768u: goto label_106768;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x1067F8u: goto label_1067f8;
            case 0x106818u: goto label_106818;
            case 0x106840u: goto label_106840;
            case 0x106848u: goto label_106848;
            case 0x10687Cu: goto label_10687c;
            case 0x106884u: goto label_106884;
            case 0x1068D0u: goto label_1068d0;
            case 0x1068E0u: goto label_1068e0;
            case 0x1068E8u: goto label_1068e8;
            case 0x1068F8u: goto label_1068f8;
            case 0x106928u: goto label_106928;
            case 0x106940u: goto label_106940;
            case 0x10694Cu: goto label_10694c;
            case 0x1069A8u: goto label_1069a8;
            case 0x1069D0u: goto label_1069d0;
            case 0x1069E8u: goto label_1069e8;
            case 0x106A08u: goto label_106a08;
            case 0x106A38u: goto label_106a38;
            case 0x106AB0u: goto label_106ab0;
            case 0x106AB8u: goto label_106ab8;
            case 0x106AC8u: goto label_106ac8;
            case 0x106AD0u: goto label_106ad0;
            case 0x106AF0u: goto label_106af0;
            case 0x106AF4u: goto label_106af4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1069D0u; }
            if (ctx->pc != 0x1069D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1069D0u;
label_1069d0:
    // 0x1069d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1069d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1069d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1069d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069d8: 0xc041e1e  jal         func_107878
    ctx->pc = 0x1069D8u;
    SET_GPR_U32(ctx, 31, 0x1069E0u);
    ctx->pc = 0x1069DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1069D8u;
            // 0x1069dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107878u;
    if (runtime->hasFunction(0x107878u)) {
        auto targetFn = runtime->lookupFunction(0x107878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1069E0u; }
        if (ctx->pc != 0x1069E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107878_0x107878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1069E0u; }
        if (ctx->pc != 0x1069E0u) { return; }
    }
    ctx->pc = 0x1069E0u;
    // 0x1069e0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1069E0u;
    {
        const bool branch_taken_0x1069e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1069E0u;
            // 0x1069e4: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069e0) {
            ctx->pc = 0x106AF0u;
            goto label_106af0;
        }
    }
    ctx->pc = 0x1069E8u;
label_1069e8:
    // 0x1069e8: 0xc04196a  jal         func_1065A8
    ctx->pc = 0x1069E8u;
    SET_GPR_U32(ctx, 31, 0x1069F0u);
    ctx->pc = 0x1069ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1069E8u;
            // 0x1069ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1065A8u;
    if (runtime->hasFunction(0x1065A8u)) {
        auto targetFn = runtime->lookupFunction(0x1065A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1069F0u; }
        if (ctx->pc != 0x1069F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001065A8_0x1065a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1069F0u; }
        if (ctx->pc != 0x1069F0u) { return; }
    }
    ctx->pc = 0x1069F0u;
    // 0x1069f0: 0x26370014  addiu       $s7, $s1, 0x14
    ctx->pc = 0x1069f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1069f4: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x1069f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1069f8: 0x12570035  beq         $s2, $s7, . + 4 + (0x35 << 2)
    ctx->pc = 0x1069F8u;
    {
        const bool branch_taken_0x1069f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        ctx->pc = 0x1069FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1069F8u;
            // 0x1069fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069f8) {
            ctx->pc = 0x106AD0u;
            goto label_106ad0;
        }
    }
    ctx->pc = 0x106A00u;
    // 0x106a00: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x106a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x106a04: 0x0  nop
    ctx->pc = 0x106a04u;
    // NOP
label_106a08:
    // 0x106a08: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x106a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x106a0c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x106A0Cu;
    {
        const bool branch_taken_0x106a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106a0c) {
            ctx->pc = 0x106A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106A0Cu;
            // 0x106a10: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106AC8u;
            goto label_106ac8;
        }
    }
    ctx->pc = 0x106A14u;
    // 0x106a14: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x106a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x106a18: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x106A18u;
    {
        const bool branch_taken_0x106a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106a18) {
            ctx->pc = 0x106A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106A18u;
            // 0x106a1c: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106AC8u;
            goto label_106ac8;
        }
    }
    ctx->pc = 0x106A20u;
    // 0x106a20: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x106a20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x106a24: 0x26550008  addiu       $s5, $s2, 0x8
    ctx->pc = 0x106a24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x106a28: 0x52150027  beql        $s0, $s5, . + 4 + (0x27 << 2)
    ctx->pc = 0x106A28u;
    {
        const bool branch_taken_0x106a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x106a28) {
            ctx->pc = 0x106A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106A28u;
            // 0x106a2c: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106AC8u;
            goto label_106ac8;
        }
    }
    ctx->pc = 0x106A30u;
    // 0x106a30: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x106a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x106a34: 0x0  nop
    ctx->pc = 0x106a34u;
    // NOP
label_106a38:
    // 0x106a38: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x106a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x106a3c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x106A3Cu;
    {
        const bool branch_taken_0x106a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106A3Cu;
            // 0x106a40: 0x8e1e0000  lw          $fp, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a3c) {
            ctx->pc = 0x106AB8u;
            goto label_106ab8;
        }
    }
    ctx->pc = 0x106A44u;
    // 0x106a44: 0x1680001a  bnez        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x106A44u;
    {
        const bool branch_taken_0x106a44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x106A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106A44u;
            // 0x106a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a44) {
            ctx->pc = 0x106AB0u;
            goto label_106ab0;
        }
    }
    ctx->pc = 0x106A4Cu;
    // 0x106a4c: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x106a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106a50: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x106a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x106a54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x106a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106a64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x106a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x106a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x106a6c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x106a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x106a70: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x106a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x106a74: 0xae130038  sw          $s3, 0x38($s0)
    ctx->pc = 0x106a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 19));
    // 0x106a78: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x106a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x106a7c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x106a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x106a80: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x106a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x106a84: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x106a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x106a88: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x106a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x106a8c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x106a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x106a90: 0xc045d58  jal         func_117560
    ctx->pc = 0x106A90u;
    SET_GPR_U32(ctx, 31, 0x106A98u);
    ctx->pc = 0x106A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106A90u;
            // 0x106a94: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x117560u;
    if (runtime->hasFunction(0x117560u)) {
        auto targetFn = runtime->lookupFunction(0x117560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106A98u; }
        if (ctx->pc != 0x106A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117560_0x117560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106A98u; }
        if (ctx->pc != 0x106A98u) { return; }
    }
    ctx->pc = 0x106A98u;
    // 0x106a98: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x106a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x106a9c: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x106a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106aa0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x106aa0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x106aa4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x106aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x106AA8u;
    {
        const bool branch_taken_0x106aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106AA8u;
            // 0x106aac: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106aa8) {
            ctx->pc = 0x106AB8u;
            goto label_106ab8;
        }
    }
    ctx->pc = 0x106AB0u;
label_106ab0:
    // 0x106ab0: 0xc045e74  jal         func_1179D0
    ctx->pc = 0x106AB0u;
    SET_GPR_U32(ctx, 31, 0x106AB8u);
    ctx->pc = 0x106AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106AB0u;
            // 0x106ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179D0u;
    if (runtime->hasFunction(0x1179D0u)) {
        auto targetFn = runtime->lookupFunction(0x1179D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106AB8u; }
        if (ctx->pc != 0x106AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001179D0_0x1179d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106AB8u; }
        if (ctx->pc != 0x106AB8u) { return; }
    }
    ctx->pc = 0x106AB8u;
label_106ab8:
    // 0x106ab8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x106ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106abc: 0x5615ffde  bnel        $s0, $s5, . + 4 + (-0x22 << 2)
    ctx->pc = 0x106ABCu;
    {
        const bool branch_taken_0x106abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x106abc) {
            ctx->pc = 0x106AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106ABCu;
            // 0x106ac0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106A38u;
            runtime->cooperativeGuestYield();
            goto label_106a38;
        }
    }
    ctx->pc = 0x106AC4u;
    // 0x106ac4: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x106ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_106ac8:
    // 0x106ac8: 0x5657ffcf  bnel        $s2, $s7, . + 4 + (-0x31 << 2)
    ctx->pc = 0x106AC8u;
    {
        const bool branch_taken_0x106ac8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        if (branch_taken_0x106ac8) {
            ctx->pc = 0x106ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106AC8u;
            // 0x106acc: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106A08u;
            runtime->cooperativeGuestYield();
            goto label_106a08;
        }
    }
    ctx->pc = 0x106AD0u;
label_106ad0:
    // 0x106ad0: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x106AD0u;
    {
        const bool branch_taken_0x106ad0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x106AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106AD0u;
            // 0x106ad4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ad0) {
            ctx->pc = 0x106AF0u;
            goto label_106af0;
        }
    }
    ctx->pc = 0x106AD8u;
    // 0x106ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106adc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x106adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ae0: 0xc041d66  jal         func_107598
    ctx->pc = 0x106AE0u;
    SET_GPR_U32(ctx, 31, 0x106AE8u);
    ctx->pc = 0x106AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106AE0u;
            // 0x106ae4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107598u;
    if (runtime->hasFunction(0x107598u)) {
        auto targetFn = runtime->lookupFunction(0x107598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106AE8u; }
        if (ctx->pc != 0x106AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107598_0x107628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106AE8u; }
        if (ctx->pc != 0x106AE8u) { return; }
    }
    ctx->pc = 0x106AE8u;
    // 0x106ae8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106AE8u;
    {
        const bool branch_taken_0x106ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106AE8u;
            // 0x106aec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ae8) {
            ctx->pc = 0x106AF4u;
            goto label_106af4;
        }
    }
    ctx->pc = 0x106AF0u;
label_106af0:
    // 0x106af0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x106af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_106af4:
    // 0x106af4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x106af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106af8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x106af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106afc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x106afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106b00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x106b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106b04: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x106b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106b08: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x106b08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106b0c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x106b0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b10: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x106b10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106b18: 0x3e00008  jr          $ra
    ctx->pc = 0x106B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106B18u;
            // 0x106b1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106660u: goto label_106660;
            case 0x106680u: goto label_106680;
            case 0x106694u: goto label_106694;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066B0u: goto label_1066b0;
            case 0x106708u: goto label_106708;
            case 0x106758u: goto label_106758;
            case 0x106768u: goto label_106768;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x1067F8u: goto label_1067f8;
            case 0x106818u: goto label_106818;
            case 0x106840u: goto label_106840;
            case 0x106848u: goto label_106848;
            case 0x10687Cu: goto label_10687c;
            case 0x106884u: goto label_106884;
            case 0x1068D0u: goto label_1068d0;
            case 0x1068E0u: goto label_1068e0;
            case 0x1068E8u: goto label_1068e8;
            case 0x1068F8u: goto label_1068f8;
            case 0x106928u: goto label_106928;
            case 0x106940u: goto label_106940;
            case 0x10694Cu: goto label_10694c;
            case 0x1069A8u: goto label_1069a8;
            case 0x1069D0u: goto label_1069d0;
            case 0x1069E8u: goto label_1069e8;
            case 0x106A08u: goto label_106a08;
            case 0x106A38u: goto label_106a38;
            case 0x106AB0u: goto label_106ab0;
            case 0x106AB8u: goto label_106ab8;
            case 0x106AC8u: goto label_106ac8;
            case 0x106AD0u: goto label_106ad0;
            case 0x106AF0u: goto label_106af0;
            case 0x106AF4u: goto label_106af4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106B20u;
}
