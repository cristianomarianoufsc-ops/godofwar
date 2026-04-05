#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B38A0
// Address: 0x1b38a0 - 0x1b3960
void sub_001B38A0_0x1b38a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B38A0_0x1b38a0");
#endif

    ctx->pc = 0x1b38a0u;

    // 0x1b38a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b38a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b38a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b38a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b38a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b38a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b38ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b38acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b38b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b38b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b38b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b38b8: 0xc06d28e  jal         func_1B4A38
    ctx->pc = 0x1B38B8u;
    SET_GPR_U32(ctx, 31, 0x1B38C0u);
    ctx->pc = 0x1B38BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38B8u;
            // 0x1b38bc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A38u;
    if (runtime->hasFunction(0x1B4A38u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38C0u; }
        if (ctx->pc != 0x1B38C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001b4a38_0x1b4a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38C0u; }
        if (ctx->pc != 0x1B38C0u) { return; }
    }
    ctx->pc = 0x1B38C0u;
    // 0x1b38c0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1b38c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1b38c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b38c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b38c8: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B38C8u;
    SET_GPR_U32(ctx, 31, 0x1B38D0u);
    ctx->pc = 0x1B38CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38C8u;
            // 0x1b38cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38D0u; }
        if (ctx->pc != 0x1B38D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38D0u; }
        if (ctx->pc != 0x1B38D0u) { return; }
    }
    ctx->pc = 0x1B38D0u;
    // 0x1b38d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b38d4: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1b38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1b38d8: 0x10500017  beq         $v0, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B38D8u;
    {
        const bool branch_taken_0x1b38d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B38DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38D8u;
            // 0x1b38dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38d8) {
            ctx->pc = 0x1B3938u;
            goto label_1b3938;
        }
    }
    ctx->pc = 0x1B38E0u;
    // 0x1b38e0: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x1b38e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b38e4: 0x0  nop
    ctx->pc = 0x1b38e4u;
    // NOP
label_1b38e8:
    // 0x1b38e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b38ec: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1b38ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b38f0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1b38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b38f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1B38F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B38FCu);
        ctx->pc = 0x1B38F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38F4u;
            // 0x1b38f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B38FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B38E8u: goto label_1b38e8;
            case 0x1B3928u: goto label_1b3928;
            case 0x1B3938u: goto label_1b3938;
            case 0x1B394Cu: goto label_1b394c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B38FCu; }
            if (ctx->pc != 0x1B38FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1B38FCu;
    // 0x1b38fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b3900: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3904: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3904u;
    {
        const bool branch_taken_0x1b3904 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3904u;
            // 0x1b3908: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3904) {
            ctx->pc = 0x1B3928u;
            goto label_1b3928;
        }
    }
    ctx->pc = 0x1B390Cu;
    // 0x1b390c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B390Cu;
    {
        const bool branch_taken_0x1b390c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B390Cu;
            // 0x1b3910: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b390c) {
            ctx->pc = 0x1B3928u;
            goto label_1b3928;
        }
    }
    ctx->pc = 0x1B3914u;
    // 0x1b3914: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b3918: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b3918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b391c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b3920: 0x40f809  jalr        $v0
    ctx->pc = 0x1B3920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3928u);
        ctx->pc = 0x1B3924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3920u;
            // 0x1b3924: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3928u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B38E8u: goto label_1b38e8;
            case 0x1B3928u: goto label_1b3928;
            case 0x1B3938u: goto label_1b3938;
            case 0x1B394Cu: goto label_1b394c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3928u; }
            if (ctx->pc != 0x1B3928u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3928u;
label_1b3928:
    // 0x1b3928: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b3928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b392c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3930: 0x1462ffed  bne         $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1B3930u;
    {
        const bool branch_taken_0x1b3930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3930u;
            // 0x1b3934: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3930) {
            ctx->pc = 0x1B38E8u;
            runtime->cooperativeGuestYield();
            goto label_1b38e8;
        }
    }
    ctx->pc = 0x1B3938u;
label_1b3938:
    // 0x1b3938: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3938u;
    {
        const bool branch_taken_0x1b3938 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3938) {
            ctx->pc = 0x1B393Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3938u;
            // 0x1b393c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B394Cu;
            goto label_1b394c;
        }
    }
    ctx->pc = 0x1B3940u;
    // 0x1b3940: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x1b3940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x1b3944: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x1b3944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x1b3948: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b3948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b394c:
    // 0x1b394c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b394cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3950: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b3950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b3954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3958: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B395Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3958u;
            // 0x1b395c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B38E8u: goto label_1b38e8;
            case 0x1B3928u: goto label_1b3928;
            case 0x1B3938u: goto label_1b3938;
            case 0x1B394Cu: goto label_1b394c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3960u;
}
