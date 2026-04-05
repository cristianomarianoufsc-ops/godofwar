#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223910
// Address: 0x223910 - 0x223c00
void sub_00223910_0x223910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223910_0x223910");
#endif

    ctx->pc = 0x223910u;

    // 0x223910: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x223910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x223914: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x223914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
    // 0x223918: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x223918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
    // 0x22391c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22391cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223920: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x223920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
    // 0x223924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x223924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223928: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x223928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
    // 0x22392c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x22392cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223930: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x223930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
    // 0x223934: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x223934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
    // 0x223938: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x223938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
    // 0x22393c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x22393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x223940: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x223940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x223944: 0x8042012c  lb          $v0, 0x12C($v0)
    ctx->pc = 0x223944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x223948: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x223948u;
    {
        const bool branch_taken_0x223948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22394Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223948u;
            // 0x22394c: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223948) {
            ctx->pc = 0x223BD8u;
            goto label_223bd8;
        }
    }
    ctx->pc = 0x223950u;
    // 0x223950: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223954: 0x2453e848  addiu       $s3, $v0, -0x17B8
    ctx->pc = 0x223954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x223958: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x223958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x22395c: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x22395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x223960: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x223960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x223964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x223964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x223968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22396c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x22396cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223970: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x223970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x223974: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x223974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223978: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x223978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x22397c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x22397cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x223980: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x223980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x223984: 0x40f809  jalr        $v0
    ctx->pc = 0x223984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22398Cu);
        ctx->pc = 0x223988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223984u;
            // 0x223988: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22398Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2239E8u: goto label_2239e8;
            case 0x223A70u: goto label_223a70;
            case 0x223B70u: goto label_223b70;
            case 0x223BB4u: goto label_223bb4;
            case 0x223BD8u: goto label_223bd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22398Cu; }
            if (ctx->pc != 0x22398Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22398Cu;
    // 0x22398c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x22398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x223990: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x223990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x223994: 0x10b02b  sltu        $s6, $zero, $s0
    ctx->pc = 0x223994u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x223998: 0x52c00013  beql        $s6, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x223998u;
    {
        const bool branch_taken_0x223998 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x223998) {
            ctx->pc = 0x22399Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223998u;
            // 0x22399c: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2239E8u;
            goto label_2239e8;
        }
    }
    ctx->pc = 0x2239A0u;
    // 0x2239a0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2239a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2239a4: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x2239a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2239a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2239a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2239ac: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x2239acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2239b0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x2239b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2239b4: 0x40f809  jalr        $v0
    ctx->pc = 0x2239B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2239BCu);
        ctx->pc = 0x2239B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2239B4u;
            // 0x2239b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2239BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2239E8u: goto label_2239e8;
            case 0x223A70u: goto label_223a70;
            case 0x223B70u: goto label_223b70;
            case 0x223BB4u: goto label_223bb4;
            case 0x223BD8u: goto label_223bd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2239BCu; }
            if (ctx->pc != 0x2239BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2239BCu;
    // 0x2239bc: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x2239bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2239c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2239c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2239c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2239c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2239c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2239c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2239cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2239ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2239d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2239d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2239d4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2239d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2239d8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2239d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2239dc: 0x40f809  jalr        $v0
    ctx->pc = 0x2239DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2239E4u);
        ctx->pc = 0x2239E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2239DCu;
            // 0x2239e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2239E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2239E8u: goto label_2239e8;
            case 0x223A70u: goto label_223a70;
            case 0x223B70u: goto label_223b70;
            case 0x223BB4u: goto label_223bb4;
            case 0x223BD8u: goto label_223bd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2239E4u; }
            if (ctx->pc != 0x2239E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2239E4u;
    // 0x2239e4: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2239e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2239e8:
    // 0x2239e8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2239e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2239ec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2239ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2239f0: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2239F0u;
    {
        const bool branch_taken_0x2239f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2239f0) {
            ctx->pc = 0x223B70u;
            goto label_223b70;
        }
    }
    ctx->pc = 0x2239F8u;
    // 0x2239f8: 0xc089990  jal         func_226640
    ctx->pc = 0x2239F8u;
    SET_GPR_U32(ctx, 31, 0x223A00u);
    ctx->pc = 0x2239FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2239F8u;
            // 0x2239fc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A00u; }
        if (ctx->pc != 0x223A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A00u; }
        if (ctx->pc != 0x223A00u) { return; }
    }
    ctx->pc = 0x223A00u;
    // 0x223a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x223a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a04: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x223a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x223a08: 0x7a2a0000  lq          $t2, 0x0($s1)
    ctx->pc = 0x223a08u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x223a0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x223a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a10: 0x7a290010  lq          $t1, 0x10($s1)
    ctx->pc = 0x223a10u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x223a14: 0x24a5012c  addiu       $a1, $a1, 0x12C
    ctx->pc = 0x223a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x223a18: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x223a18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x223a1c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x223a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a20: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x223a20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x223a24: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x223a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a28: 0x7faa0000  sq          $t2, 0x0($sp)
    ctx->pc = 0x223a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    // 0x223a2c: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x223a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x223a30: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x223a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x223a34: 0xc089df8  jal         func_2277E0
    ctx->pc = 0x223A34u;
    SET_GPR_U32(ctx, 31, 0x223A3Cu);
    ctx->pc = 0x223A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A34u;
            // 0x223a38: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2277E0u;
    if (runtime->hasFunction(0x2277E0u)) {
        auto targetFn = runtime->lookupFunction(0x2277E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A3Cu; }
        if (ctx->pc != 0x223A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002277E0_0x2277e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A3Cu; }
        if (ctx->pc != 0x223A3Cu) { return; }
    }
    ctx->pc = 0x223A3Cu;
    // 0x223a3c: 0x1280005d  beqz        $s4, . + 4 + (0x5D << 2)
    ctx->pc = 0x223A3Cu;
    {
        const bool branch_taken_0x223a3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A3Cu;
            // 0x223a40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a3c) {
            ctx->pc = 0x223BB4u;
            goto label_223bb4;
        }
    }
    ctx->pc = 0x223A44u;
    // 0x223a44: 0x8e900104  lw          $s0, 0x104($s4)
    ctx->pc = 0x223a44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x223a48: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x223A48u;
    {
        const bool branch_taken_0x223a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a48) {
            ctx->pc = 0x223BB4u;
            goto label_223bb4;
        }
    }
    ctx->pc = 0x223A50u;
    // 0x223a50: 0x6a00058  bltz        $s5, . + 4 + (0x58 << 2)
    ctx->pc = 0x223A50u;
    {
        const bool branch_taken_0x223a50 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x223A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A50u;
            // 0x223a54: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a50) {
            ctx->pc = 0x223BB4u;
            goto label_223bb4;
        }
    }
    ctx->pc = 0x223A58u;
    // 0x223a58: 0xde85bdf8  ld          $a1, -0x4208($s4)
    ctx->pc = 0x223a58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 4294950392)));
    // 0x223a5c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x223a5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x223a60: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223A60u;
    {
        const bool branch_taken_0x223a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x223A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A60u;
            // 0x223a64: 0x27b20080  addiu       $s2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a60) {
            ctx->pc = 0x223A70u;
            goto label_223a70;
        }
    }
    ctx->pc = 0x223A68u;
    // 0x223a68: 0xc04da64  jal         func_136990
    ctx->pc = 0x223A68u;
    SET_GPR_U32(ctx, 31, 0x223A70u);
    ctx->pc = 0x223A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A68u;
            // 0x223a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A70u; }
        if (ctx->pc != 0x223A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A70u; }
        if (ctx->pc != 0x223A70u) { return; }
    }
    ctx->pc = 0x223A70u;
label_223a70:
    // 0x223a70: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x223a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x223a74: 0x152980  sll         $a1, $s5, 6
    ctx->pc = 0x223a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x223a78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a7c: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x223A7Cu;
    SET_GPR_U32(ctx, 31, 0x223A84u);
    ctx->pc = 0x223A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A7Cu;
            // 0x223a80: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A84u; }
        if (ctx->pc != 0x223A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A84u; }
        if (ctx->pc != 0x223A84u) { return; }
    }
    ctx->pc = 0x223A84u;
    // 0x223a84: 0xdba50080  lqc2        $vf5, 0x80($sp)
    ctx->pc = 0x223a84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x223a88: 0xdba60090  lqc2        $vf6, 0x90($sp)
    ctx->pc = 0x223a88u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x223a8c: 0xdba700a0  lqc2        $vf7, 0xA0($sp)
    ctx->pc = 0x223a8cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x223a90: 0xdba800b0  lqc2        $vf8, 0xB0($sp)
    ctx->pc = 0x223a90u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x223a94: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x223a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x223a98: 0xfba60050  sqc2        $vf6, 0x50($sp)
    ctx->pc = 0x223a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x223a9c: 0xfba70060  sqc2        $vf7, 0x60($sp)
    ctx->pc = 0x223a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x223aa0: 0xfba80070  sqc2        $vf8, 0x70($sp)
    ctx->pc = 0x223aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x223aa4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x223aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x223aa8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x223aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x223aac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x223aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x223ab0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x223AB0u;
    {
        const bool branch_taken_0x223ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223ab0) {
            ctx->pc = 0x223BB4u;
            goto label_223bb4;
        }
    }
    ctx->pc = 0x223AB8u;
    // 0x223ab8: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x223ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x223abc: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x223abcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x223ac0: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x223ac0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x223ac4: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x223ac4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x223ac8: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x223ac8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x223acc: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x223accu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x223ad0: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x223ad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223ad4: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x223ad4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223ad8: 0x4be340cb  vmaddw.xyzw $vf3, $vf8, $vf3w
    ctx->pc = 0x223ad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x223adc: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x223adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x223ae0: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x223ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x223ae4: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x223ae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223ae8: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x223ae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223aec: 0x4be1404b  vmaddw.xyzw $vf1, $vf8, $vf1w
    ctx->pc = 0x223aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x223af0: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x223af0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x223af4: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x223af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x223af8: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x223af8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223afc: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x223afcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223b00: 0x4be2408b  vmaddw.xyzw $vf2, $vf8, $vf2w
    ctx->pc = 0x223b00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x223b04: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x223b04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x223b08: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x223b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x223b0c: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x223b0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223b10: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x223b10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223b14: 0x4be4410b  vmaddw.xyzw $vf4, $vf8, $vf4w
    ctx->pc = 0x223b14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x223b18: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x223b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223b1c: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x223b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x223b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b24: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x223b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x223b28: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x223b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x223b2c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x223b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223b30: 0xf8a30020  sqc2        $vf3, 0x20($a1)
    ctx->pc = 0x223b30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x223b34: 0xde84bdf8  ld          $a0, -0x4208($s4)
    ctx->pc = 0x223b34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294950392)));
    // 0x223b38: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x223b38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x223b3c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x223b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x223b40: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x223b40u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x223b44: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x223b44u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x223b48: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x223b48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x223b4c: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x223b4cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x223b50: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x223b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b54: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x223b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x223b58: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x223b58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x223b5c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x223b5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x223b60: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x223b60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x223b64: 0xfe84bdf8  sd          $a0, -0x4208($s4)
    ctx->pc = 0x223b64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294950392), GPR_U64(ctx, 4));
    // 0x223b68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x223B68u;
    {
        const bool branch_taken_0x223b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223B68u;
            // 0x223b6c: 0xfca30068  sd          $v1, 0x68($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b68) {
            ctx->pc = 0x223BB4u;
            goto label_223bb4;
        }
    }
    ctx->pc = 0x223B70u;
label_223b70:
    // 0x223b70: 0xc089990  jal         func_226640
    ctx->pc = 0x223B70u;
    SET_GPR_U32(ctx, 31, 0x223B78u);
    ctx->pc = 0x223B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B70u;
            // 0x223b74: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B78u; }
        if (ctx->pc != 0x223B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B78u; }
        if (ctx->pc != 0x223B78u) { return; }
    }
    ctx->pc = 0x223B78u;
    // 0x223b78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x223b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b7c: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x223b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x223b80: 0x7a2a0030  lq          $t2, 0x30($s1)
    ctx->pc = 0x223b80u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x223b84: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x223b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x223b88: 0x7a290000  lq          $t1, 0x0($s1)
    ctx->pc = 0x223b88u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x223b8c: 0x24a5012c  addiu       $a1, $a1, 0x12C
    ctx->pc = 0x223b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
    // 0x223b90: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x223b90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x223b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x223b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b98: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x223b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x223b9c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x223b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223ba0: 0x7fa90140  sq          $t1, 0x140($sp)
    ctx->pc = 0x223ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 9));
    // 0x223ba4: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x223ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
    // 0x223ba8: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x223ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x223bac: 0xc089df8  jal         func_2277E0
    ctx->pc = 0x223BACu;
    SET_GPR_U32(ctx, 31, 0x223BB4u);
    ctx->pc = 0x223BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223BACu;
            // 0x223bb0: 0x7faa0170  sq          $t2, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2277E0u;
    if (runtime->hasFunction(0x2277E0u)) {
        auto targetFn = runtime->lookupFunction(0x2277E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BB4u; }
        if (ctx->pc != 0x223BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002277E0_0x2277e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BB4u; }
        if (ctx->pc != 0x223BB4u) { return; }
    }
    ctx->pc = 0x223BB4u;
label_223bb4:
    // 0x223bb4: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x223BB4u;
    {
        const bool branch_taken_0x223bb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223BB4u;
            // 0x223bb8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bb4) {
            ctx->pc = 0x223BD8u;
            goto label_223bd8;
        }
    }
    ctx->pc = 0x223BBCu;
    // 0x223bbc: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x223bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x223bc0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x223bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223bc4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x223bc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x223bc8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x223bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x223bcc: 0x40f809  jalr        $v0
    ctx->pc = 0x223BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223BD4u);
        ctx->pc = 0x223BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223BCCu;
            // 0x223bd0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223BD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2239E8u: goto label_2239e8;
            case 0x223A70u: goto label_223a70;
            case 0x223B70u: goto label_223b70;
            case 0x223BB4u: goto label_223bb4;
            case 0x223BD8u: goto label_223bd8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223BD4u; }
            if (ctx->pc != 0x223BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x223BD4u;
    // 0x223bd4: 0x0  nop
    ctx->pc = 0x223bd4u;
    // NOP
label_223bd8:
    // 0x223bd8: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x223bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x223bdc: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x223bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x223be0: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x223be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x223be4: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x223be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x223be8: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x223be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x223bec: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x223becu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x223bf0: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x223bf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x223bf4: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x223bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x223bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x223BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223BF8u;
            // 0x223bfc: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2239E8u: goto label_2239e8;
            case 0x223A70u: goto label_223a70;
            case 0x223B70u: goto label_223b70;
            case 0x223BB4u: goto label_223bb4;
            case 0x223BD8u: goto label_223bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223C00u;
}
