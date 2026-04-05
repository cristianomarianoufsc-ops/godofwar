#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B45B0
// Address: 0x1b45b0 - 0x1b46d8
void sub_001B45B0_0x1b45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B45B0_0x1b45b0");
#endif

    ctx->pc = 0x1b45b0u;

    // 0x1b45b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b45b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b45b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b45b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b45b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b45b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b45bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b45bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b45c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b45c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b45c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b45c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b45cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b45ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b45d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b45d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b45d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b45d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b45dc: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1b45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1b45e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b45e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b45e8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b45e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b45ec: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b45f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B45F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B45F8u);
        ctx->pc = 0x1B45F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45F0u;
            // 0x1b45f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B45F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4628u: goto label_1b4628;
            case 0x1B465Cu: goto label_1b465c;
            case 0x1B4668u: goto label_1b4668;
            case 0x1B46B0u: goto label_1b46b0;
            case 0x1B46B4u: goto label_1b46b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B45F8u; }
            if (ctx->pc != 0x1B45F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B45F8u;
    // 0x1b45f8: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1B45F8u;
    SET_GPR_U32(ctx, 31, 0x1B4600u);
    ctx->pc = 0x1B45FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45F8u;
            // 0x1b45fc: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4600u; }
        if (ctx->pc != 0x1B4600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4600u; }
        if (ctx->pc != 0x1B4600u) { return; }
    }
    ctx->pc = 0x1B4600u;
    // 0x1b4600: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b4600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4604: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B4604u;
    {
        const bool branch_taken_0x1b4604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4604u;
            // 0x1b4608: 0x24720048  addiu       $s2, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4604) {
            ctx->pc = 0x1B46B0u;
            goto label_1b46b0;
        }
    }
    ctx->pc = 0x1B460Cu;
    // 0x1b460c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b4610: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1b4610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1b4614: 0x94510024  lhu         $s1, 0x24($v0)
    ctx->pc = 0x1b4614u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b4618: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1b461c: 0x10520012  beq         $v0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B461Cu;
    {
        const bool branch_taken_0x1b461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B4620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B461Cu;
            // 0x1b4620: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b461c) {
            ctx->pc = 0x1B4668u;
            goto label_1b4668;
        }
    }
    ctx->pc = 0x1B4624u;
    // 0x1b4624: 0x0  nop
    ctx->pc = 0x1b4624u;
    // NOP
label_1b4628:
    // 0x1b4628: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1b4628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b462c: 0x94a20014  lhu         $v0, 0x14($a1)
    ctx->pc = 0x1b462cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b4630: 0x5451000a  bnel        $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4630u;
    {
        const bool branch_taken_0x1b4630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b4630) {
            ctx->pc = 0x1B4634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4630u;
            // 0x1b4634: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B465Cu;
            goto label_1b465c;
        }
    }
    ctx->pc = 0x1B4638u;
    // 0x1b4638: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1b4638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1b463c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B463Cu;
    {
        const bool branch_taken_0x1b463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B463Cu;
            // 0x1b4640: 0xacb3000c  sw          $s3, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b463c) {
            ctx->pc = 0x1B46B0u;
            goto label_1b46b0;
        }
    }
    ctx->pc = 0x1B4644u;
    // 0x1b4644: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b4644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4648: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x1b4648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x1b464c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1B464Cu;
    SET_GPR_U32(ctx, 31, 0x1B4654u);
    ctx->pc = 0x1B4650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B464Cu;
            // 0x1b4650: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4654u; }
        if (ctx->pc != 0x1B4654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4654u; }
        if (ctx->pc != 0x1B4654u) { return; }
    }
    ctx->pc = 0x1B4654u;
    // 0x1b4654: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B4654u;
    {
        const bool branch_taken_0x1b4654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4654u;
            // 0x1b4658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4654) {
            ctx->pc = 0x1B46B4u;
            goto label_1b46b4;
        }
    }
    ctx->pc = 0x1B465Cu;
label_1b465c:
    // 0x1b465c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b465cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4660: 0x1443fff1  bne         $v0, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B4660u;
    {
        const bool branch_taken_0x1b4660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4660u;
            // 0x1b4664: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4660) {
            ctx->pc = 0x1B4628u;
            runtime->cooperativeGuestYield();
            goto label_1b4628;
        }
    }
    ctx->pc = 0x1B4668u;
label_1b4668:
    // 0x1b4668: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1b4668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1b466c: 0xc069510  jal         func_1A5440
    ctx->pc = 0x1B466Cu;
    SET_GPR_U32(ctx, 31, 0x1B4674u);
    ctx->pc = 0x1B4670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B466Cu;
            // 0x1b4670: 0x3231ffff  andi        $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5440u;
    if (runtime->hasFunction(0x1A5440u)) {
        auto targetFn = runtime->lookupFunction(0x1A5440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4674u; }
        if (ctx->pc != 0x1B4674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5440_0x1a5440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4674u; }
        if (ctx->pc != 0x1B4674u) { return; }
    }
    ctx->pc = 0x1B4674u;
    // 0x1b4674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4678: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1B4678u;
    SET_GPR_U32(ctx, 31, 0x1B4680u);
    ctx->pc = 0x1B467Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4678u;
            // 0x1b467c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4680u; }
        if (ctx->pc != 0x1B4680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4680u; }
        if (ctx->pc != 0x1B4680u) { return; }
    }
    ctx->pc = 0x1B4680u;
    // 0x1b4680: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1b4680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1b4684: 0xa6110014  sh          $s1, 0x14($s0)
    ctx->pc = 0x1b4684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 17));
    // 0x1b4688: 0x2442a9a8  addiu       $v0, $v0, -0x5658
    ctx->pc = 0x1b4688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945192));
    // 0x1b468c: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x1b468cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x1b4690: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b4690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b4694: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b4694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b4698: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b4698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b469c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1b469cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x1b46a0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1b46a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1b46a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b46a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1b46a8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b46a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b46ac: 0x0  nop
    ctx->pc = 0x1b46acu;
    // NOP
label_1b46b0:
    // 0x1b46b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b46b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b46b4:
    // 0x1b46b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b46b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b46b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b46b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b46bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b46bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b46c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b46c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b46c4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b46c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b46c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b46c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b46cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B46CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B46D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46CCu;
            // 0x1b46d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4628u: goto label_1b4628;
            case 0x1B465Cu: goto label_1b465c;
            case 0x1B4668u: goto label_1b4668;
            case 0x1B46B0u: goto label_1b46b0;
            case 0x1B46B4u: goto label_1b46b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B46D4u;
    // 0x1b46d4: 0x0  nop
    ctx->pc = 0x1b46d4u;
    // NOP
}
