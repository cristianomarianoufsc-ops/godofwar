#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B47E0
// Address: 0x1b47e0 - 0x1b4908
void sub_001B47E0_0x1b47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B47E0_0x1b47e0");
#endif

    ctx->pc = 0x1b47e0u;

    // 0x1b47e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b47e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b47e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b47e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b47e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b47ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b47ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b47f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b47f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b47f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b47fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b47fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4800: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b4800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b4804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4808: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b4808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b480c: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1b480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1b4810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4814: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b4814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b4818: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b4818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b481c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b481cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b4820: 0x40f809  jalr        $v0
    ctx->pc = 0x1B4820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4828u);
        ctx->pc = 0x1B4824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4820u;
            // 0x1b4824: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4828u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4858u: goto label_1b4858;
            case 0x1B488Cu: goto label_1b488c;
            case 0x1B4898u: goto label_1b4898;
            case 0x1B48E0u: goto label_1b48e0;
            case 0x1B48E4u: goto label_1b48e4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4828u; }
            if (ctx->pc != 0x1B4828u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4828u;
    // 0x1b4828: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1B4828u;
    SET_GPR_U32(ctx, 31, 0x1B4830u);
    ctx->pc = 0x1B482Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4828u;
            // 0x1b482c: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4830u; }
        if (ctx->pc != 0x1B4830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4830u; }
        if (ctx->pc != 0x1B4830u) { return; }
    }
    ctx->pc = 0x1B4830u;
    // 0x1b4830: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b4830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4834: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B4834u;
    {
        const bool branch_taken_0x1b4834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4834u;
            // 0x1b4838: 0x24720058  addiu       $s2, $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4834) {
            ctx->pc = 0x1B48E0u;
            goto label_1b48e0;
        }
    }
    ctx->pc = 0x1B483Cu;
    // 0x1b483c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b4840: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1b4840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1b4844: 0x94510024  lhu         $s1, 0x24($v0)
    ctx->pc = 0x1b4844u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b4848: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1b4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1b484c: 0x10520012  beq         $v0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B484Cu;
    {
        const bool branch_taken_0x1b484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B4850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B484Cu;
            // 0x1b4850: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b484c) {
            ctx->pc = 0x1B4898u;
            goto label_1b4898;
        }
    }
    ctx->pc = 0x1B4854u;
    // 0x1b4854: 0x0  nop
    ctx->pc = 0x1b4854u;
    // NOP
label_1b4858:
    // 0x1b4858: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b485c: 0x94a20014  lhu         $v0, 0x14($a1)
    ctx->pc = 0x1b485cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b4860: 0x5451000a  bnel        $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4860u;
    {
        const bool branch_taken_0x1b4860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b4860) {
            ctx->pc = 0x1B4864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4860u;
            // 0x1b4864: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B488Cu;
            goto label_1b488c;
        }
    }
    ctx->pc = 0x1B4868u;
    // 0x1b4868: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1b4868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1b486c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B486Cu;
    {
        const bool branch_taken_0x1b486c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B486Cu;
            // 0x1b4870: 0xacb3000c  sw          $s3, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b486c) {
            ctx->pc = 0x1B48E0u;
            goto label_1b48e0;
        }
    }
    ctx->pc = 0x1B4874u;
    // 0x1b4874: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b4874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4878: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x1b4878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x1b487c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1B487Cu;
    SET_GPR_U32(ctx, 31, 0x1B4884u);
    ctx->pc = 0x1B4880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B487Cu;
            // 0x1b4880: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4884u; }
        if (ctx->pc != 0x1B4884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4884u; }
        if (ctx->pc != 0x1B4884u) { return; }
    }
    ctx->pc = 0x1B4884u;
    // 0x1b4884: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B4884u;
    {
        const bool branch_taken_0x1b4884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4884u;
            // 0x1b4888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4884) {
            ctx->pc = 0x1B48E4u;
            goto label_1b48e4;
        }
    }
    ctx->pc = 0x1B488Cu;
label_1b488c:
    // 0x1b488c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4890: 0x1443fff1  bne         $v0, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B4890u;
    {
        const bool branch_taken_0x1b4890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4890u;
            // 0x1b4894: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4890) {
            ctx->pc = 0x1B4858u;
            runtime->cooperativeGuestYield();
            goto label_1b4858;
        }
    }
    ctx->pc = 0x1B4898u;
label_1b4898:
    // 0x1b4898: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1b4898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b489c: 0xc0695b4  jal         func_1A56D0
    ctx->pc = 0x1B489Cu;
    SET_GPR_U32(ctx, 31, 0x1B48A4u);
    ctx->pc = 0x1B48A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B489Cu;
            // 0x1b48a0: 0x3231ffff  andi        $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A56D0u;
    if (runtime->hasFunction(0x1A56D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A56D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48A4u; }
        if (ctx->pc != 0x1B48A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A56D0_0x1a56d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48A4u; }
        if (ctx->pc != 0x1B48A4u) { return; }
    }
    ctx->pc = 0x1B48A4u;
    // 0x1b48a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b48a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48a8: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B48A8u;
    SET_GPR_U32(ctx, 31, 0x1B48B0u);
    ctx->pc = 0x1B48ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48A8u;
            // 0x1b48ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48B0u; }
        if (ctx->pc != 0x1B48B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48B0u; }
        if (ctx->pc != 0x1B48B0u) { return; }
    }
    ctx->pc = 0x1B48B0u;
    // 0x1b48b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1b48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1b48b4: 0xa6110014  sh          $s1, 0x14($s0)
    ctx->pc = 0x1b48b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 17));
    // 0x1b48b8: 0x2442a908  addiu       $v0, $v0, -0x56F8
    ctx->pc = 0x1b48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945032));
    // 0x1b48bc: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x1b48bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x1b48c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b48c4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b48c8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b48cc: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1b48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x1b48d0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1b48d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1b48d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b48d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1b48d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b48d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b48dc: 0x0  nop
    ctx->pc = 0x1b48dcu;
    // NOP
label_1b48e0:
    // 0x1b48e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b48e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b48e4:
    // 0x1b48e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b48e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b48e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b48e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b48ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b48ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b48f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b48f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b48f4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b48f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b48f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b48f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b48fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B48FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48FCu;
            // 0x1b4900: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4858u: goto label_1b4858;
            case 0x1B488Cu: goto label_1b488c;
            case 0x1B4898u: goto label_1b4898;
            case 0x1B48E0u: goto label_1b48e0;
            case 0x1B48E4u: goto label_1b48e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4904u;
    // 0x1b4904: 0x0  nop
    ctx->pc = 0x1b4904u;
    // NOP
}
