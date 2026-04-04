#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002212E0
// Address: 0x2212e0 - 0x2213f0
void sub_002212E0_0x2212e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002212E0_0x2212e0");
#endif

    ctx->pc = 0x2212e0u;

    // 0x2212e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2212e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2212e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2212e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2212e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2212e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2212ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2212ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2212f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2212f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2212f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2212f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2212fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2212fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221300: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x221300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x221304: 0x7007a4a9  por         $s4, $zero, $a3
    ctx->pc = 0x221304u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x221308: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x221308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x22130c: 0x7008aca9  por         $s5, $zero, $t0
    ctx->pc = 0x22130cu;
    SET_GPR_VEC(ctx, 21, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x221310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221314: 0xc0882bc  jal         func_220AF0
    ctx->pc = 0x221314u;
    SET_GPR_U32(ctx, 31, 0x22131Cu);
    ctx->pc = 0x221318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221314u;
            // 0x221318: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220AF0u;
    if (runtime->hasFunction(0x220AF0u)) {
        auto targetFn = runtime->lookupFunction(0x220AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22131Cu; }
        if (ctx->pc != 0x22131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220AF0_0x220af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22131Cu; }
        if (ctx->pc != 0x22131Cu) { return; }
    }
    ctx->pc = 0x22131Cu;
    // 0x22131c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22131cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221320: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x221320u;
    {
        const bool branch_taken_0x221320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x221324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221320u;
            // 0x221324: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221320) {
            ctx->pc = 0x221344u;
            goto label_221344;
        }
    }
    ctx->pc = 0x221328u;
    // 0x221328: 0x8e1001a0  lw          $s0, 0x1A0($s0)
    ctx->pc = 0x221328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x22132c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22132cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221330: 0xc05c472  jal         func_1711C8
    ctx->pc = 0x221330u;
    SET_GPR_U32(ctx, 31, 0x221338u);
    ctx->pc = 0x221334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221330u;
            // 0x221334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C8u;
    if (runtime->hasFunction(0x1711C8u)) {
        auto targetFn = runtime->lookupFunction(0x1711C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221338u; }
        if (ctx->pc != 0x221338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221338u; }
        if (ctx->pc != 0x221338u) { return; }
    }
    ctx->pc = 0x221338u;
    // 0x221338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22133c: 0xc05c294  jal         func_170A50
    ctx->pc = 0x22133Cu;
    SET_GPR_U32(ctx, 31, 0x221344u);
    ctx->pc = 0x221340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22133Cu;
            // 0x221340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221344u; }
        if (ctx->pc != 0x221344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221344u; }
        if (ctx->pc != 0x221344u) { return; }
    }
    ctx->pc = 0x221344u;
label_221344:
    // 0x221344: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x221344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x221348: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x221348u;
    {
        const bool branch_taken_0x221348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221348u;
            // 0x22134c: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221348) {
            ctx->pc = 0x2213CCu;
            goto label_2213cc;
        }
    }
    ctx->pc = 0x221350u;
    // 0x221350: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x221350u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x221354: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x221354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x221358: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x221358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22135c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x221360: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x221360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221364: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x221364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221368: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x221368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22136c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x22136cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x221370: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x221370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x221374: 0x40f809  jalr        $v0
    ctx->pc = 0x221374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22137Cu);
        ctx->pc = 0x221378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221374u;
            // 0x221378: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22137Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221344u: goto label_221344;
            case 0x2213B8u: goto label_2213b8;
            case 0x2213CCu: goto label_2213cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22137Cu; }
            if (ctx->pc != 0x22137Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22137Cu;
    // 0x22137c: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x22137Cu;
    SET_GPR_U32(ctx, 31, 0x221384u);
    ctx->pc = 0x221380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22137Cu;
            // 0x221380: 0x8e64002c  lw          $a0, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221384u; }
        if (ctx->pc != 0x221384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221384u; }
        if (ctx->pc != 0x221384u) { return; }
    }
    ctx->pc = 0x221384u;
    // 0x221384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221388: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x221388u;
    {
        const bool branch_taken_0x221388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x221388) {
            ctx->pc = 0x22138Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221388u;
            // 0x22138c: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2213B8u;
            goto label_2213b8;
        }
    }
    ctx->pc = 0x221390u;
    // 0x221390: 0xc089990  jal         func_226640
    ctx->pc = 0x221390u;
    SET_GPR_U32(ctx, 31, 0x221398u);
    ctx->pc = 0x221394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221390u;
            // 0x221394: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221398u; }
        if (ctx->pc != 0x221398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221398u; }
        if (ctx->pc != 0x221398u) { return; }
    }
    ctx->pc = 0x221398u;
    // 0x221398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x221398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22139c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22139cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213a0: 0x701434a9  por         $a2, $zero, $s4
    ctx->pc = 0x2213a0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x2213a4: 0x70153ca9  por         $a3, $zero, $s5
    ctx->pc = 0x2213a4u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 21)));
    // 0x2213a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2213a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213ac: 0xc089e64  jal         func_227990
    ctx->pc = 0x2213ACu;
    SET_GPR_U32(ctx, 31, 0x2213B4u);
    ctx->pc = 0x2213B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2213ACu;
            // 0x2213b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227990u;
    if (runtime->hasFunction(0x227990u)) {
        auto targetFn = runtime->lookupFunction(0x227990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213B4u; }
        if (ctx->pc != 0x2213B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227990_0x227990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213B4u; }
        if (ctx->pc != 0x2213B4u) { return; }
    }
    ctx->pc = 0x2213B4u;
    // 0x2213b4: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x2213b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_2213b8:
    // 0x2213b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2213b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2213bc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2213bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2213c0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2213c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2213c4: 0x40f809  jalr        $v0
    ctx->pc = 0x2213C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2213CCu);
        ctx->pc = 0x2213C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2213C4u;
            // 0x2213c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2213CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221344u: goto label_221344;
            case 0x2213B8u: goto label_2213b8;
            case 0x2213CCu: goto label_2213cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2213CCu; }
            if (ctx->pc != 0x2213CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2213CCu;
label_2213cc:
    // 0x2213cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2213ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2213d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2213d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2213d4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2213d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2213d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2213d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2213dc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2213dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2213e0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2213e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2213e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2213e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2213e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2213E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2213ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2213E8u;
            // 0x2213ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221344u: goto label_221344;
            case 0x2213B8u: goto label_2213b8;
            case 0x2213CCu: goto label_2213cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2213F0u;
}
