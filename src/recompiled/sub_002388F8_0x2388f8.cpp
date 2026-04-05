#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002388F8
// Address: 0x2388f8 - 0x238ca0
void sub_002388F8_0x2388f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002388F8_0x2388f8");
#endif

    ctx->pc = 0x2388f8u;

    // 0x2388f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2388f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2388fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2388fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x238900: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x238900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x238904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23890c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23890cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238910: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x238910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238914: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x238914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x238918: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x238918u;
    {
        const bool branch_taken_0x238918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23891Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238918u;
            // 0x23891c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238918) {
            ctx->pc = 0x23894Cu;
            goto label_23894c;
        }
    }
    ctx->pc = 0x238920u;
    // 0x238920: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x238920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x238924: 0x0  nop
    ctx->pc = 0x238924u;
    // NOP
label_238928:
    // 0x238928: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x238928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23892c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23892cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x238930: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x238930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x238934: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x238934u;
    SET_GPR_U32(ctx, 31, 0x23893Cu);
    ctx->pc = 0x238938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238934u;
            // 0x238938: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23893Cu; }
        if (ctx->pc != 0x23893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23893Cu; }
        if (ctx->pc != 0x23893Cu) { return; }
    }
    ctx->pc = 0x23893Cu;
    // 0x23893c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x238940: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x238940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238944: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x238944u;
    {
        const bool branch_taken_0x238944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x238948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238944u;
            // 0x238948: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238944) {
            ctx->pc = 0x238928u;
            runtime->cooperativeGuestYield();
            goto label_238928;
        }
    }
    ctx->pc = 0x23894Cu;
label_23894c:
    // 0x23894c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x23894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x238950: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x238950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x238954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238954u;
    {
        const bool branch_taken_0x238954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238954u;
            // 0x238958: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238954) {
            ctx->pc = 0x238964u;
            goto label_238964;
        }
    }
    ctx->pc = 0x23895Cu;
    // 0x23895c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23895Cu;
    SET_GPR_U32(ctx, 31, 0x238964u);
    ctx->pc = 0x238960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23895Cu;
            // 0x238960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238964u; }
        if (ctx->pc != 0x238964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238964u; }
        if (ctx->pc != 0x238964u) { return; }
    }
    ctx->pc = 0x238964u;
label_238964:
    // 0x238964: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x238964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238968: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x238968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23896c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23896cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238970: 0x3e00008  jr          $ra
    ctx->pc = 0x238970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238970u;
            // 0x238974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238978u;
    // 0x238978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23897c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23897cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238980: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x238980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x238984: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x238984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x238988: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x238988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x23898c: 0x40f809  jalr        $v0
    ctx->pc = 0x23898Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238994u);
        ctx->pc = 0x238990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23898Cu;
            // 0x238990: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238994u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238994u; }
            if (ctx->pc != 0x238994u) { return; }
        }
        }
    }
    ctx->pc = 0x238994u;
    // 0x238994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238998: 0x3e00008  jr          $ra
    ctx->pc = 0x238998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23899Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238998u;
            // 0x23899c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2389A0u;
    // 0x2389a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2389a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2389a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2389a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2389a8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2389a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2389ac: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2389acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2389b0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2389b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2389b4: 0x40f809  jalr        $v0
    ctx->pc = 0x2389B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2389BCu);
        ctx->pc = 0x2389B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389B4u;
            // 0x2389b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2389BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2389BCu; }
            if (ctx->pc != 0x2389BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2389BCu;
    // 0x2389bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2389bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2389c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2389c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2389c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2389C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2389C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389C4u;
            // 0x2389c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2389CCu;
    // 0x2389cc: 0x0  nop
    ctx->pc = 0x2389ccu;
    // NOP
    // 0x2389d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2389d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2389d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2389d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2389d8: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x2389D8u;
    SET_GPR_U32(ctx, 31, 0x2389E0u);
    ctx->pc = 0x2389DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2389D8u;
            // 0x2389dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389E0u; }
        if (ctx->pc != 0x2389E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389E0u; }
        if (ctx->pc != 0x2389E0u) { return; }
    }
    ctx->pc = 0x2389E0u;
    // 0x2389e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2389e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2389e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2389E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2389E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389E4u;
            // 0x2389e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2389ECu;
    // 0x2389ec: 0x0  nop
    ctx->pc = 0x2389ecu;
    // NOP
    // 0x2389f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2389f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2389f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2389f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2389f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2389fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2389fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238a08: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x238a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x238a0c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x238a0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x238a10: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x238a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x238a14: 0x40f809  jalr        $v0
    ctx->pc = 0x238A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238A1Cu);
        ctx->pc = 0x238A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A14u;
            // 0x238a18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238A1Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238A1Cu; }
            if (ctx->pc != 0x238A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x238A1Cu;
    // 0x238a1c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x238a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x238a20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a28: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x238a28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x238a2c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x238a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x238a30: 0x40f809  jalr        $v0
    ctx->pc = 0x238A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238A38u);
        ctx->pc = 0x238A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A30u;
            // 0x238a34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238A38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238A38u; }
            if (ctx->pc != 0x238A38u) { return; }
        }
        }
    }
    ctx->pc = 0x238A38u;
    // 0x238a38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x238a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238a48: 0x3e00008  jr          $ra
    ctx->pc = 0x238A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A48u;
            // 0x238a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238A50u;
    // 0x238a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238a5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238a64: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x238a64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x238a68: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x238A68u;
    {
        const bool branch_taken_0x238a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238a68) {
            ctx->pc = 0x238A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238A68u;
            // 0x238a6c: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238AA0u;
            goto label_238aa0;
        }
    }
    ctx->pc = 0x238A70u;
    // 0x238a70: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x238a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x238a74: 0x0  nop
    ctx->pc = 0x238a74u;
    // NOP
label_238a78:
    // 0x238a78: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x238a78u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x238a7c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x238a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x238a80: 0x84430060  lh          $v1, 0x60($v0)
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x238a84: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x238a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x238a88: 0x40f809  jalr        $v0
    ctx->pc = 0x238A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238A90u);
        ctx->pc = 0x238A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A88u;
            // 0x238a8c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238A90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238A90u; }
            if (ctx->pc != 0x238A90u) { return; }
        }
        }
    }
    ctx->pc = 0x238A90u;
    // 0x238a90: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x238a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238a94: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x238A94u;
    {
        const bool branch_taken_0x238a94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x238a94) {
            ctx->pc = 0x238A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238A94u;
            // 0x238a98: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238A78u;
            runtime->cooperativeGuestYield();
            goto label_238a78;
        }
    }
    ctx->pc = 0x238A9Cu;
    // 0x238a9c: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x238a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_238aa0:
    // 0x238aa0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x238aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x238aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238aa8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ab4: 0xac62ec50  sw          $v0, -0x13B0($v1)
    ctx->pc = 0x238ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962256), GPR_U32(ctx, 2));
    // 0x238ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x238AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238AB8u;
            // 0x238abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238AC0u;
    // 0x238ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238acc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ad0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238ad4: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x238ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x238ad8: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x238AD8u;
    {
        const bool branch_taken_0x238ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238ad8) {
            ctx->pc = 0x238ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238AD8u;
            // 0x238adc: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238B10u;
            goto label_238b10;
        }
    }
    ctx->pc = 0x238AE0u;
    // 0x238ae0: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x238ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x238ae4: 0x0  nop
    ctx->pc = 0x238ae4u;
    // NOP
label_238ae8:
    // 0x238ae8: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x238ae8u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x238aec: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x238aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x238af0: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x238af0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x238af4: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x238af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x238af8: 0x40f809  jalr        $v0
    ctx->pc = 0x238AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238B00u);
        ctx->pc = 0x238AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238AF8u;
            // 0x238afc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238B00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238B00u; }
            if (ctx->pc != 0x238B00u) { return; }
        }
        }
    }
    ctx->pc = 0x238B00u;
    // 0x238b00: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x238b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238b04: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x238B04u;
    {
        const bool branch_taken_0x238b04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x238b04) {
            ctx->pc = 0x238B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238B04u;
            // 0x238b08: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238AE8u;
            runtime->cooperativeGuestYield();
            goto label_238ae8;
        }
    }
    ctx->pc = 0x238B0Cu;
    // 0x238b0c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x238b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_238b10:
    // 0x238b10: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x238b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x238b14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238b20: 0xac40ec50  sw          $zero, -0x13B0($v0)
    ctx->pc = 0x238b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962256), GPR_U32(ctx, 0));
    // 0x238b24: 0x3e00008  jr          $ra
    ctx->pc = 0x238B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B24u;
            // 0x238b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238928u: goto label_238928;
            case 0x23894Cu: goto label_23894c;
            case 0x238964u: goto label_238964;
            case 0x238A78u: goto label_238a78;
            case 0x238AA0u: goto label_238aa0;
            case 0x238AE8u: goto label_238ae8;
            case 0x238B10u: goto label_238b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238B2Cu;
    // 0x238b2c: 0x0  nop
    ctx->pc = 0x238b2cu;
    // NOP
    // 0x238b30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x238b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x238b34: 0x0  nop
    ctx->pc = 0x238b34u;
    // NOP
    // 0x238b38: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x238b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x238b3c: 0x0  nop
    ctx->pc = 0x238b3cu;
    // NOP
    // 0x238b40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x238b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x238b44: 0x0  nop
    ctx->pc = 0x238b44u;
    // NOP
    // 0x238b48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x238b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238b4c: 0x0  nop
    ctx->pc = 0x238b4cu;
    // NOP
    // 0x238b50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238b54: 0x0  nop
    ctx->pc = 0x238b54u;
    // NOP
    // 0x238b58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238b5c: 0x0  nop
    ctx->pc = 0x238b5cu;
    // NOP
    // 0x238b60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238b64: 0x0  nop
    ctx->pc = 0x238b64u;
    // NOP
    // 0x238b68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238b6c: 0x0  nop
    ctx->pc = 0x238b6cu;
    // NOP
    // 0x238b70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238b74: 0x0  nop
    ctx->pc = 0x238b74u;
    // NOP
    // 0x238b78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238b7c: 0x0  nop
    ctx->pc = 0x238b7cu;
    // NOP
    // 0x238b80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x238b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238b84: 0x0  nop
    ctx->pc = 0x238b84u;
    // NOP
    // 0x238b88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x238b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x238b8c: 0x0  nop
    ctx->pc = 0x238b8cu;
    // NOP
    // 0x238b90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238b94: 0x0  nop
    ctx->pc = 0x238b94u;
    // NOP
    // 0x238b98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238b9c: 0x0  nop
    ctx->pc = 0x238b9cu;
    // NOP
    // 0x238ba0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238ba4: 0x0  nop
    ctx->pc = 0x238ba4u;
    // NOP
    // 0x238ba8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x238ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x238bac: 0x0  nop
    ctx->pc = 0x238bacu;
    // NOP
    // 0x238bb0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x238bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x238bb4: 0x0  nop
    ctx->pc = 0x238bb4u;
    // NOP
    // 0x238bb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x238bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238bbc: 0x0  nop
    ctx->pc = 0x238bbcu;
    // NOP
    // 0x238bc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238bc4: 0x0  nop
    ctx->pc = 0x238bc4u;
    // NOP
    // 0x238bc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x238bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x238bcc: 0x0  nop
    ctx->pc = 0x238bccu;
    // NOP
    // 0x238bd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x238bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238bd4: 0x0  nop
    ctx->pc = 0x238bd4u;
    // NOP
    // 0x238bd8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x238bdc: 0x0  nop
    ctx->pc = 0x238bdcu;
    // NOP
    // 0x238be0: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x238be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x238be4: 0x0  nop
    ctx->pc = 0x238be4u;
    // NOP
    // 0x238be8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x238be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x238bec: 0x0  nop
    ctx->pc = 0x238becu;
    // NOP
    // 0x238bf0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x238bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x238bf4: 0x0  nop
    ctx->pc = 0x238bf4u;
    // NOP
    // 0x238bf8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x238bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x238bfc: 0x0  nop
    ctx->pc = 0x238bfcu;
    // NOP
    // 0x238c00: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x238c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x238c04: 0x0  nop
    ctx->pc = 0x238c04u;
    // NOP
    // 0x238c08: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x238c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x238c0c: 0x0  nop
    ctx->pc = 0x238c0cu;
    // NOP
    // 0x238c10: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x238c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x238c14: 0x0  nop
    ctx->pc = 0x238c14u;
    // NOP
    // 0x238c18: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x238c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x238c1c: 0x0  nop
    ctx->pc = 0x238c1cu;
    // NOP
    // 0x238c20: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x238c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x238c24: 0x0  nop
    ctx->pc = 0x238c24u;
    // NOP
    // 0x238c28: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x238c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x238c2c: 0x0  nop
    ctx->pc = 0x238c2cu;
    // NOP
    // 0x238c30: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x238c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x238c34: 0x0  nop
    ctx->pc = 0x238c34u;
    // NOP
    // 0x238c38: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x238c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x238c3c: 0x0  nop
    ctx->pc = 0x238c3cu;
    // NOP
    // 0x238c40: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x238c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x238c44: 0x0  nop
    ctx->pc = 0x238c44u;
    // NOP
    // 0x238c48: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x238c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x238c4c: 0x0  nop
    ctx->pc = 0x238c4cu;
    // NOP
    // 0x238c50: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x238c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x238c54: 0x0  nop
    ctx->pc = 0x238c54u;
    // NOP
    // 0x238c58: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x238c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x238c5c: 0x0  nop
    ctx->pc = 0x238c5cu;
    // NOP
    // 0x238c60: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x238c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x238c64: 0x0  nop
    ctx->pc = 0x238c64u;
    // NOP
    // 0x238c68: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x238c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x238c6c: 0x0  nop
    ctx->pc = 0x238c6cu;
    // NOP
    // 0x238c70: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x238c74: 0x0  nop
    ctx->pc = 0x238c74u;
    // NOP
    // 0x238c78: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x238c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x238c7c: 0x0  nop
    ctx->pc = 0x238c7cu;
    // NOP
    // 0x238c80: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x238c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x238c84: 0x0  nop
    ctx->pc = 0x238c84u;
    // NOP
    // 0x238c88: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x238c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x238c8c: 0x0  nop
    ctx->pc = 0x238c8cu;
    // NOP
    // 0x238c90: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x238c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x238c94: 0x0  nop
    ctx->pc = 0x238c94u;
    // NOP
    // 0x238c98: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x238c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x238c9c: 0x0  nop
    ctx->pc = 0x238c9cu;
    // NOP
}
