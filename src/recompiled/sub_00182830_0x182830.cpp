#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182830
// Address: 0x182830 - 0x182970
void sub_00182830_0x182830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182830_0x182830");
#endif

    ctx->pc = 0x182830u;

    // 0x182830: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x182830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x182834: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x182834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x182838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18283c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x182840: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x182840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x182844: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x182844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x182848: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x182848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18284c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182850: 0x24a52d78  addiu       $a1, $a1, 0x2D78
    ctx->pc = 0x182850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11640));
    // 0x182854: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x182854u;
    SET_GPR_U32(ctx, 31, 0x18285Cu);
    ctx->pc = 0x182858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182854u;
            // 0x182858: 0x26260012  addiu       $a2, $s1, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18285Cu; }
        if (ctx->pc != 0x18285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18285Cu; }
        if (ctx->pc != 0x18285Cu) { return; }
    }
    ctx->pc = 0x18285Cu;
    // 0x18285c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x18285cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x182860: 0x96260010  lhu         $a2, 0x10($s1)
    ctx->pc = 0x182860u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x182864: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x182864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x182868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x182868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18286c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18286Cu;
    SET_GPR_U32(ctx, 31, 0x182874u);
    ctx->pc = 0x182870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18286Cu;
            // 0x182870: 0x24a52d90  addiu       $a1, $a1, 0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182874u; }
        if (ctx->pc != 0x182874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182874u; }
        if (ctx->pc != 0x182874u) { return; }
    }
    ctx->pc = 0x182874u;
    // 0x182874: 0x96250010  lhu         $a1, 0x10($s1)
    ctx->pc = 0x182874u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x182878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18287c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18287Cu;
    SET_GPR_U32(ctx, 31, 0x182884u);
    ctx->pc = 0x182880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18287Cu;
            // 0x182880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182884u; }
        if (ctx->pc != 0x182884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182884u; }
        if (ctx->pc != 0x182884u) { return; }
    }
    ctx->pc = 0x182884u;
    // 0x182884: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x182884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x182888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x182888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18288c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18288cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182894: 0xc05ff44  jal         func_17FD10
    ctx->pc = 0x182894u;
    SET_GPR_U32(ctx, 31, 0x18289Cu);
    ctx->pc = 0x182898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182894u;
            // 0x182898: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    if (runtime->hasFunction(0x17FD10u)) {
        auto targetFn = runtime->lookupFunction(0x17FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18289Cu; }
        if (ctx->pc != 0x18289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FD10_0x17fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18289Cu; }
        if (ctx->pc != 0x18289Cu) { return; }
    }
    ctx->pc = 0x18289Cu;
    // 0x18289c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18289Cu;
    {
        const bool branch_taken_0x18289c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1828A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18289Cu;
            // 0x1828a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18289c) {
            ctx->pc = 0x182908u;
            goto label_182908;
        }
    }
    ctx->pc = 0x1828A4u;
    // 0x1828a4: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1828A4u;
    {
        const bool branch_taken_0x1828a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1828A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1828A4u;
            // 0x1828a8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1828a4) {
            ctx->pc = 0x1828E8u;
            goto label_1828e8;
        }
    }
    ctx->pc = 0x1828ACu;
    // 0x1828ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1828acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828b0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1828b4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1828b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1828b8: 0x40f809  jalr        $v0
    ctx->pc = 0x1828B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1828C0u);
        ctx->pc = 0x1828BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1828B8u;
            // 0x1828bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1828C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1828E8u: goto label_1828e8;
            case 0x182908u: goto label_182908;
            case 0x182940u: goto label_182940;
            case 0x182944u: goto label_182944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1828C0u; }
            if (ctx->pc != 0x1828C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1828C0u;
    // 0x1828c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1828c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1828c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1828c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1828c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1828ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828d0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1828d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1828d4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1828d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1828d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1828D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1828E0u);
        ctx->pc = 0x1828DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1828D8u;
            // 0x1828dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1828E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1828E8u: goto label_1828e8;
            case 0x182908u: goto label_182908;
            case 0x182940u: goto label_182940;
            case 0x182944u: goto label_182944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1828E0u; }
            if (ctx->pc != 0x1828E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1828E0u;
    // 0x1828e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1828E0u;
    {
        const bool branch_taken_0x1828e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1828E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1828E0u;
            // 0x1828e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1828e0) {
            ctx->pc = 0x182944u;
            goto label_182944;
        }
    }
    ctx->pc = 0x1828E8u;
label_1828e8:
    // 0x1828e8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1828e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1828ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1828ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1828f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1828F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1828F8u);
        ctx->pc = 0x1828F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1828F0u;
            // 0x1828f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1828F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1828E8u: goto label_1828e8;
            case 0x182908u: goto label_182908;
            case 0x182940u: goto label_182940;
            case 0x182944u: goto label_182944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1828F8u; }
            if (ctx->pc != 0x1828F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1828F8u;
    // 0x1828f8: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x1828f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1828fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1828fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182900: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x182900u;
    {
        const bool branch_taken_0x182900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182900u;
            // 0x182904: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182900) {
            ctx->pc = 0x182940u;
            goto label_182940;
        }
    }
    ctx->pc = 0x182908u;
label_182908:
    // 0x182908: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x182908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18290c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18290cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182910: 0x96270010  lhu         $a3, 0x10($s1)
    ctx->pc = 0x182910u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x182914: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x182914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182918: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x182918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18291c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x18291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x182920: 0x40f809  jalr        $v0
    ctx->pc = 0x182920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182928u);
        ctx->pc = 0x182924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182920u;
            // 0x182924: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x182928u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1828E8u: goto label_1828e8;
            case 0x182908u: goto label_182908;
            case 0x182940u: goto label_182940;
            case 0x182944u: goto label_182944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x182928u; }
            if (ctx->pc != 0x182928u) { return; }
        }
        }
    }
    ctx->pc = 0x182928u;
    // 0x182928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18292c: 0x96260010  lhu         $a2, 0x10($s1)
    ctx->pc = 0x18292cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x182930: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x182930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x182934: 0xc05db16  jal         func_176C58
    ctx->pc = 0x182934u;
    SET_GPR_U32(ctx, 31, 0x18293Cu);
    ctx->pc = 0x182938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182934u;
            // 0x182938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176C58u;
    if (runtime->hasFunction(0x176C58u)) {
        auto targetFn = runtime->lookupFunction(0x176C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18293Cu; }
        if (ctx->pc != 0x18293Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176C58_0x176c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18293Cu; }
        if (ctx->pc != 0x18293Cu) { return; }
    }
    ctx->pc = 0x18293Cu;
    // 0x18293c: 0x0  nop
    ctx->pc = 0x18293cu;
    // NOP
label_182940:
    // 0x182940: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x182940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_182944:
    // 0x182944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x182944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182948: 0x8c44c74c  lw          $a0, -0x38B4($v0)
    ctx->pc = 0x182948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952780)));
    // 0x18294c: 0xc05fb9c  jal         func_17EE70
    ctx->pc = 0x18294Cu;
    SET_GPR_U32(ctx, 31, 0x182954u);
    ctx->pc = 0x182950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18294Cu;
            // 0x182950: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EE70u;
    if (runtime->hasFunction(0x17EE70u)) {
        auto targetFn = runtime->lookupFunction(0x17EE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182954u; }
        if (ctx->pc != 0x182954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EE70_0x17ee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182954u; }
        if (ctx->pc != 0x182954u) { return; }
    }
    ctx->pc = 0x182954u;
    // 0x182954: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182958: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x182958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18295c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18295cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182960: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x182960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182964: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x182964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182968: 0x3e00008  jr          $ra
    ctx->pc = 0x182968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18296Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182968u;
            // 0x18296c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1828E8u: goto label_1828e8;
            case 0x182908u: goto label_182908;
            case 0x182940u: goto label_182940;
            case 0x182944u: goto label_182944;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182970u;
}
