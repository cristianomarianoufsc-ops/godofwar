#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136990
// Address: 0x136990 - 0x136bd8
void sub_00136990_0x136990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136990_0x136990");
#endif

    ctx->pc = 0x136990u;

    // 0x136990: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x136990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x136994: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x136994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x136998: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x136998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x13699c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13699cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369a0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1369a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1369a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1369a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369a8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1369a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1369ac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1369acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1369b0: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x1369b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1369b4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1369B4u;
    {
        const bool branch_taken_0x1369b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1369B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1369B4u;
            // 0x1369b8: 0x8e320048  lw          $s2, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369b4) {
            ctx->pc = 0x136A10u;
            goto label_136a10;
        }
    }
    ctx->pc = 0x1369BCu;
    // 0x1369bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1369bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1369c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1369c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369c4: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1369c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1369c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1369c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1369cc: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1369ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1369d0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1369d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1369d4: 0x40f809  jalr        $v0
    ctx->pc = 0x1369D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1369DCu);
        ctx->pc = 0x1369D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1369D4u;
            // 0x1369d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1369DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136A10u: goto label_136a10;
            case 0x136A28u: goto label_136a28;
            case 0x136A44u: goto label_136a44;
            case 0x136A48u: goto label_136a48;
            case 0x136A78u: goto label_136a78;
            case 0x136B10u: goto label_136b10;
            case 0x136B2Cu: goto label_136b2c;
            case 0x136B88u: goto label_136b88;
            case 0x136BB8u: goto label_136bb8;
            case 0x136BBCu: goto label_136bbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1369DCu; }
            if (ctx->pc != 0x1369DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1369DCu;
    // 0x1369dc: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1369dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1369e0: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1369E0u;
    SET_GPR_U32(ctx, 31, 0x1369E8u);
    ctx->pc = 0x1369E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1369E0u;
            // 0x1369e4: 0x8c440074  lw          $a0, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1369E8u; }
        if (ctx->pc != 0x1369E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1369E8u; }
        if (ctx->pc != 0x1369E8u) { return; }
    }
    ctx->pc = 0x1369E8u;
    // 0x1369e8: 0x9630005c  lhu         $s0, 0x5C($s1)
    ctx->pc = 0x1369e8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1369ec: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1369ECu;
    SET_GPR_U32(ctx, 31, 0x1369F4u);
    ctx->pc = 0x1369F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1369ECu;
            // 0x1369f0: 0x108180  sll         $s0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1369F4u; }
        if (ctx->pc != 0x1369F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1369F4u; }
        if (ctx->pc != 0x1369F4u) { return; }
    }
    ctx->pc = 0x1369F4u;
    // 0x1369f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1369f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1369f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369fc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1369FCu;
    SET_GPR_U32(ctx, 31, 0x136A04u);
    ctx->pc = 0x136A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1369FCu;
            // 0x136a00: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A04u; }
        if (ctx->pc != 0x136A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A04u; }
        if (ctx->pc != 0x136A04u) { return; }
    }
    ctx->pc = 0x136A04u;
    // 0x136a04: 0xc04f860  jal         func_13E180
    ctx->pc = 0x136A04u;
    SET_GPR_U32(ctx, 31, 0x136A0Cu);
    ctx->pc = 0x136A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136A04u;
            // 0x136a08: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A0Cu; }
        if (ctx->pc != 0x136A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A0Cu; }
        if (ctx->pc != 0x136A0Cu) { return; }
    }
    ctx->pc = 0x136A0Cu;
    // 0x136a0c: 0x0  nop
    ctx->pc = 0x136a0cu;
    // NOP
label_136a10:
    // 0x136a10: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x136a10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x136a14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x136a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136a18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136A18u;
    {
        const bool branch_taken_0x136a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x136A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A18u;
            // 0x136a1c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a18) {
            ctx->pc = 0x136A28u;
            goto label_136a28;
        }
    }
    ctx->pc = 0x136A20u;
    // 0x136a20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136A20u;
    {
        const bool branch_taken_0x136a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A20u;
            // 0x136a24: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a20) {
            ctx->pc = 0x136A44u;
            goto label_136a44;
        }
    }
    ctx->pc = 0x136A28u;
label_136a28:
    // 0x136a28: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x136a28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x136a2c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x136a2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x136a30: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136A30u;
    {
        const bool branch_taken_0x136a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x136A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A30u;
            // 0x136a34: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a30) {
            ctx->pc = 0x136A48u;
            goto label_136a48;
        }
    }
    ctx->pc = 0x136A38u;
    // 0x136a38: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x136A38u;
    SET_GPR_U32(ctx, 31, 0x136A40u);
    ctx->pc = 0x136A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136A38u;
            // 0x136a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A40u; }
        if (ctx->pc != 0x136A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A40u; }
        if (ctx->pc != 0x136A40u) { return; }
    }
    ctx->pc = 0x136A40u;
    // 0x136a40: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x136a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_136a44:
    // 0x136a44: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x136a44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
label_136a48:
    // 0x136a48: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x136a48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x136a4c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x136a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x136a50: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x136A50u;
    {
        const bool branch_taken_0x136a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A50u;
            // 0x136a54: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a50) {
            ctx->pc = 0x136BBCu;
            goto label_136bbc;
        }
    }
    ctx->pc = 0x136A58u;
    // 0x136a58: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x136a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x136a5c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x136a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x136a60: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136A60u;
    {
        const bool branch_taken_0x136a60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x136A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A60u;
            // 0x136a64: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a60) {
            ctx->pc = 0x136A78u;
            goto label_136a78;
        }
    }
    ctx->pc = 0x136A68u;
    // 0x136a68: 0x96220086  lhu         $v0, 0x86($s1)
    ctx->pc = 0x136a68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 134)));
    // 0x136a6c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x136a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x136a70: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x136a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x136a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x136a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_136a78:
    // 0x136a78: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x136a78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x136a7c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x136a7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136a80: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x136a80u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x136a84: 0xd8880020  lqc2        $vf8, 0x20($a0)
    ctx->pc = 0x136a84u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x136a88: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x136a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136a8c: 0xd8660030  lqc2        $vf6, 0x30($v1)
    ctx->pc = 0x136a8cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x136a90: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x136a90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x136a94: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x136a94u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x136a98: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x136a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136a9c: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x136a9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136aa0: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x136aa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136aa4: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x136aa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136aa8: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x136aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136aac: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x136aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136ab0: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x136ab0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136ab4: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x136ab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136ab8: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x136ab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136abc: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x136abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136ac0: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x136ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136ac4: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x136ac4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136ac8: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x136ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136acc: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x136accu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136ad0: 0x4be629bc  vmulax.xyzw $ACC, $vf5, $vf6x
    ctx->pc = 0x136ad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x136ad4: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x136ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136ad8: 0x4be638bd  vmadday.xyzw $ACC, $vf7, $vf6y
    ctx->pc = 0x136ad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136adc: 0x4be640be  vmaddaz.xyzw $ACC, $vf8, $vf6z
    ctx->pc = 0x136adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x136ae0: 0x4be6210b  vmaddw.xyzw $vf4, $vf4, $vf6w
    ctx->pc = 0x136ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136ae4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x136ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136ae8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x136ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136aec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x136aecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136af0: 0x96220084  lhu         $v0, 0x84($s1)
    ctx->pc = 0x136af0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x136af4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x136af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136af8: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x136af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136afc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x136AFCu;
    {
        const bool branch_taken_0x136afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136AFCu;
            // 0x136b00: 0xfba40030  sqc2        $vf4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136afc) {
            ctx->pc = 0x136B2Cu;
            goto label_136b2c;
        }
    }
    ctx->pc = 0x136B04u;
    // 0x136b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x136b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x136b0c: 0x0  nop
    ctx->pc = 0x136b0cu;
    // NOP
label_136b10:
    // 0x136b10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x136b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x136b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x136b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x136b18: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x136b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x136b1c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x136b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x136b20: 0x0  nop
    ctx->pc = 0x136b20u;
    // NOP
    // 0x136b24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x136B24u;
    {
        const bool branch_taken_0x136b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B24u;
            // 0x136b28: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b24) {
            ctx->pc = 0x136B10u;
            runtime->cooperativeGuestYield();
            goto label_136b10;
        }
    }
    ctx->pc = 0x136B2Cu;
label_136b2c:
    // 0x136b2c: 0x96230086  lhu         $v1, 0x86($s1)
    ctx->pc = 0x136b2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 134)));
    // 0x136b30: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x136b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x136b34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136b38: 0x8e260058  lw          $a2, 0x58($s1)
    ctx->pc = 0x136b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x136b3c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x136b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x136b40: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x136b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136b48: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x136b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x136b4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x136b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x136b50: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x136b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x136b54: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x136b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136b58: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x136b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x136b5c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x136b60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x136b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x136b64: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x136b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x136b68: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x136b6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136B6Cu;
    {
        const bool branch_taken_0x136b6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x136B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B6Cu;
            // 0x136b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b6c) {
            ctx->pc = 0x136B88u;
            goto label_136b88;
        }
    }
    ctx->pc = 0x136B74u;
    // 0x136b74: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x136b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x136b78: 0xc04e042  jal         func_138108
    ctx->pc = 0x136B78u;
    SET_GPR_U32(ctx, 31, 0x136B80u);
    ctx->pc = 0x136B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136B78u;
            // 0x136b7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138108u;
    if (runtime->hasFunction(0x138108u)) {
        auto targetFn = runtime->lookupFunction(0x138108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B80u; }
        if (ctx->pc != 0x136B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138108_0x138108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B80u; }
        if (ctx->pc != 0x136B80u) { return; }
    }
    ctx->pc = 0x136B80u;
    // 0x136b80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x136B80u;
    {
        const bool branch_taken_0x136b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B80u;
            // 0x136b84: 0xfe330040  sd          $s3, 0x40($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b80) {
            ctx->pc = 0x136BB8u;
            goto label_136bb8;
        }
    }
    ctx->pc = 0x136B88u;
label_136b88:
    // 0x136b88: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x136b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x136b8c: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x136b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x136b90: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x136b90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136b98: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x136b98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x136b9c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x136b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136ba0: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x136ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x136ba4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x136ba4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136ba8: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x136ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x136bac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x136bacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136bb0: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x136bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x136bb4: 0xfe330040  sd          $s3, 0x40($s1)
    ctx->pc = 0x136bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 19));
label_136bb8:
    // 0x136bb8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x136bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_136bbc:
    // 0x136bbc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x136bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x136bc0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x136bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x136bc4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x136bc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x136bc8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x136bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x136bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x136BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136BCCu;
            // 0x136bd0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136A10u: goto label_136a10;
            case 0x136A28u: goto label_136a28;
            case 0x136A44u: goto label_136a44;
            case 0x136A48u: goto label_136a48;
            case 0x136A78u: goto label_136a78;
            case 0x136B10u: goto label_136b10;
            case 0x136B2Cu: goto label_136b2c;
            case 0x136B88u: goto label_136b88;
            case 0x136BB8u: goto label_136bb8;
            case 0x136BBCu: goto label_136bbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x136BD4u;
    // 0x136bd4: 0x0  nop
    ctx->pc = 0x136bd4u;
    // NOP
}
