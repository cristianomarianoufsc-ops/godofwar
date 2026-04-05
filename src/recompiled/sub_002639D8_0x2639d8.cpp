#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002639D8
// Address: 0x2639d8 - 0x263d08
void sub_002639D8_0x2639d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002639D8_0x2639d8");
#endif

    ctx->pc = 0x2639d8u;

    // 0x2639d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2639d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2639dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2639dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2639e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2639e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2639e4: 0x2442ebc0  addiu       $v0, $v0, -0x1440
    ctx->pc = 0x2639e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962112));
    // 0x2639e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2639e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2639ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2639ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639f0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2639f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2639f4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2639F4u;
    {
        const bool branch_taken_0x2639f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2639F4u;
            // 0x2639f8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639f4) {
            ctx->pc = 0x263A10u;
            goto label_263a10;
        }
    }
    ctx->pc = 0x2639FCu;
    // 0x2639fc: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x2639FCu;
    SET_GPR_U32(ctx, 31, 0x263A04u);
    ctx->pc = 0x263A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2639FCu;
            // 0x263a00: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A04u; }
        if (ctx->pc != 0x263A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A04u; }
        if (ctx->pc != 0x263A04u) { return; }
    }
    ctx->pc = 0x263A04u;
    // 0x263a04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a08: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x263A08u;
    SET_GPR_U32(ctx, 31, 0x263A10u);
    ctx->pc = 0x263A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263A08u;
            // 0x263a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A10u; }
        if (ctx->pc != 0x263A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A10u; }
        if (ctx->pc != 0x263A10u) { return; }
    }
    ctx->pc = 0x263A10u;
label_263a10:
    // 0x263a10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x263a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263a18: 0x3e00008  jr          $ra
    ctx->pc = 0x263A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A18u;
            // 0x263a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263A10u: goto label_263a10;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A80u: goto label_263a80;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE4u: goto label_263ae4;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B40u: goto label_263b40;
            case 0x263B84u: goto label_263b84;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BF4u: goto label_263bf4;
            case 0x263C10u: goto label_263c10;
            case 0x263C20u: goto label_263c20;
            case 0x263C28u: goto label_263c28;
            case 0x263C38u: goto label_263c38;
            case 0x263C64u: goto label_263c64;
            case 0x263C90u: goto label_263c90;
            case 0x263CC8u: goto label_263cc8;
            case 0x263CE4u: goto label_263ce4;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263A20u;
    // 0x263a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263a24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x263a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263a2c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x263a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x263a30: 0x1048000a  beq         $v0, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x263A30u;
    {
        const bool branch_taken_0x263a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x263A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A30u;
            // 0x263a34: 0x8cc30030  lw          $v1, 0x30($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a30) {
            ctx->pc = 0x263A5Cu;
            goto label_263a5c;
        }
    }
    ctx->pc = 0x263A38u;
    // 0x263a38: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x263a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x263a3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x263a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x263a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x263a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263a44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x263a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263a48: 0xe440016c  swc1        $f0, 0x16C($v0)
    ctx->pc = 0x263a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
    // 0x263a4c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x263a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x263a50: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x263a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x263a54: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x263a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x263a58: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x263a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_263a5c:
    // 0x263a5c: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x263A5Cu;
    {
        const bool branch_taken_0x263a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x263A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A5Cu;
            // 0x263a60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a5c) {
            ctx->pc = 0x263A80u;
            goto label_263a80;
        }
    }
    ctx->pc = 0x263A64u;
    // 0x263a64: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x263a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x263a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263a6c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x263a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263a70: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x263a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263a74: 0x40f809  jalr        $v0
    ctx->pc = 0x263A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263A7Cu);
        ctx->pc = 0x263A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A74u;
            // 0x263a78: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263A7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263A10u: goto label_263a10;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A80u: goto label_263a80;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE4u: goto label_263ae4;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B40u: goto label_263b40;
            case 0x263B84u: goto label_263b84;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BF4u: goto label_263bf4;
            case 0x263C10u: goto label_263c10;
            case 0x263C20u: goto label_263c20;
            case 0x263C28u: goto label_263c28;
            case 0x263C38u: goto label_263c38;
            case 0x263C64u: goto label_263c64;
            case 0x263C90u: goto label_263c90;
            case 0x263CC8u: goto label_263cc8;
            case 0x263CE4u: goto label_263ce4;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263A7Cu; }
            if (ctx->pc != 0x263A7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x263A7Cu;
    // 0x263a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_263a80:
    // 0x263a80: 0x3e00008  jr          $ra
    ctx->pc = 0x263A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A80u;
            // 0x263a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263A10u: goto label_263a10;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A80u: goto label_263a80;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE4u: goto label_263ae4;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B40u: goto label_263b40;
            case 0x263B84u: goto label_263b84;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BF4u: goto label_263bf4;
            case 0x263C10u: goto label_263c10;
            case 0x263C20u: goto label_263c20;
            case 0x263C28u: goto label_263c28;
            case 0x263C38u: goto label_263c38;
            case 0x263C64u: goto label_263c64;
            case 0x263C90u: goto label_263c90;
            case 0x263CC8u: goto label_263cc8;
            case 0x263CE4u: goto label_263ce4;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263A88u;
    // 0x263a88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x263a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x263a8c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x263a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x263a90: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x263a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x263a94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x263a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x263a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x263a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x263aa0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x263aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263aa4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x263aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x263aa8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x263aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263ab0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x263ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x263ab4: 0x8e530030  lw          $s3, 0x30($s2)
    ctx->pc = 0x263ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x263ab8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x263ab8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x263abc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263ABCu;
    {
        const bool branch_taken_0x263abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263ABCu;
            // 0x263ac0: 0x26740010  addiu       $s4, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263abc) {
            ctx->pc = 0x263AE4u;
            goto label_263ae4;
        }
    }
    ctx->pc = 0x263AC4u;
    // 0x263ac4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x263ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x263ac8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x263accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x263ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x263ad4: 0xc07584c  jal         func_1D6130
    ctx->pc = 0x263AD4u;
    SET_GPR_U32(ctx, 31, 0x263ADCu);
    ctx->pc = 0x263AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263AD4u;
            // 0x263ad8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6130u;
    if (runtime->hasFunction(0x1D6130u)) {
        auto targetFn = runtime->lookupFunction(0x1D6130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263ADCu; }
        if (ctx->pc != 0x263ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6130_0x1d6130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263ADCu; }
        if (ctx->pc != 0x263ADCu) { return; }
    }
    ctx->pc = 0x263ADCu;
label_263adc:
    // 0x263adc: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x263ADCu;
    {
        const bool branch_taken_0x263adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263ADCu;
            // 0x263ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263adc) {
            ctx->pc = 0x263CE4u;
            goto label_263ce4;
        }
    }
    ctx->pc = 0x263AE4u;
label_263ae4:
    // 0x263ae4: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x263ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x263ae8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x263AE8u;
    {
        const bool branch_taken_0x263ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263AE8u;
            // 0x263aec: 0x24020414  addiu       $v0, $zero, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ae8) {
            ctx->pc = 0x263B40u;
            goto label_263b40;
        }
    }
    ctx->pc = 0x263AF0u;
    // 0x263af0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x263af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x263af4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x263af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x263af8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x263AF8u;
    {
        const bool branch_taken_0x263af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x263af8) {
            ctx->pc = 0x263AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263AF8u;
            // 0x263afc: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263B1Cu;
            goto label_263b1c;
        }
    }
    ctx->pc = 0x263B00u;
    // 0x263b00: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x263b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x263b04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263b08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x263b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x263b0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x263b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263b10: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x263b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x263b14: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x263B14u;
    {
        const bool branch_taken_0x263b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B14u;
            // 0x263b18: 0xe440016c  swc1        $f0, 0x16C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b14) {
            ctx->pc = 0x263ADCu;
            runtime->cooperativeGuestYield();
            goto label_263adc;
        }
    }
    ctx->pc = 0x263B1Cu;
label_263b1c:
    // 0x263b1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x263b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x263b20: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x263b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x263b24: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x263b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x263b28: 0x40f809  jalr        $v0
    ctx->pc = 0x263B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263B30u);
        ctx->pc = 0x263B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B28u;
            // 0x263b2c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263B30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263A10u: goto label_263a10;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A80u: goto label_263a80;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE4u: goto label_263ae4;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B40u: goto label_263b40;
            case 0x263B84u: goto label_263b84;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BF4u: goto label_263bf4;
            case 0x263C10u: goto label_263c10;
            case 0x263C20u: goto label_263c20;
            case 0x263C28u: goto label_263c28;
            case 0x263C38u: goto label_263c38;
            case 0x263C64u: goto label_263c64;
            case 0x263C90u: goto label_263c90;
            case 0x263CC8u: goto label_263cc8;
            case 0x263CE4u: goto label_263ce4;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263B30u; }
            if (ctx->pc != 0x263B30u) { return; }
        }
        }
    }
    ctx->pc = 0x263B30u;
    // 0x263b30: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x263b30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x263b34: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x263b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x263b38: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x263B38u;
    {
        const bool branch_taken_0x263b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B38u;
            // 0x263b3c: 0xa0430016  sb          $v1, 0x16($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b38) {
            ctx->pc = 0x263ADCu;
            runtime->cooperativeGuestYield();
            goto label_263adc;
        }
    }
    ctx->pc = 0x263B40u;
label_263b40:
    // 0x263b40: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x263B40u;
    {
        const bool branch_taken_0x263b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B40u;
            // 0x263b44: 0x24020407  addiu       $v0, $zero, 0x407 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b40) {
            ctx->pc = 0x263B84u;
            goto label_263b84;
        }
    }
    ctx->pc = 0x263B48u;
    // 0x263b48: 0x8e14000c  lw          $s4, 0xC($s0)
    ctx->pc = 0x263b48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x263b4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x263b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263b50: 0x16820064  bne         $s4, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x263B50u;
    {
        const bool branch_taken_0x263b50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x263B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B50u;
            // 0x263b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b50) {
            ctx->pc = 0x263CE4u;
            goto label_263ce4;
        }
    }
    ctx->pc = 0x263B58u;
    // 0x263b58: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x263b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x263b5c: 0xc047086  jal         func_11C218
    ctx->pc = 0x263B5Cu;
    SET_GPR_U32(ctx, 31, 0x263B64u);
    ctx->pc = 0x263B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263B5Cu;
            // 0x263b60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C218u;
    if (runtime->hasFunction(0x11C218u)) {
        auto targetFn = runtime->lookupFunction(0x11C218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B64u; }
        if (ctx->pc != 0x263B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C218_0x11c218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B64u; }
        if (ctx->pc != 0x263B64u) { return; }
    }
    ctx->pc = 0x263B64u;
    // 0x263b64: 0x1054ffdd  beq         $v0, $s4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x263B64u;
    {
        const bool branch_taken_0x263b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x263B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B64u;
            // 0x263b68: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b64) {
            ctx->pc = 0x263ADCu;
            runtime->cooperativeGuestYield();
            goto label_263adc;
        }
    }
    ctx->pc = 0x263B6Cu;
    // 0x263b6c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x263b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x263b70: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x263b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x263b74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x263b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x263b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x263b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263b7c: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x263B7Cu;
    {
        const bool branch_taken_0x263b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B7Cu;
            // 0x263b80: 0xe440016c  swc1        $f0, 0x16C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b7c) {
            ctx->pc = 0x263ADCu;
            runtime->cooperativeGuestYield();
            goto label_263adc;
        }
    }
    ctx->pc = 0x263B84u;
label_263b84:
    // 0x263b84: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x263B84u;
    {
        const bool branch_taken_0x263b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263b84) {
            ctx->pc = 0x263B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263B84u;
            // 0x263b88: 0x240203fb  addiu       $v0, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263BD4u;
            goto label_263bd4;
        }
    }
    ctx->pc = 0x263B8Cu;
    // 0x263b8c: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x263b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x263b90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x263b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263ba0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x263ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263ba4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x263ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263ba8: 0x40f809  jalr        $v0
    ctx->pc = 0x263BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263BB0u);
        ctx->pc = 0x263BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BA8u;
            // 0x263bac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263BB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263A10u: goto label_263a10;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A80u: goto label_263a80;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE4u: goto label_263ae4;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B40u: goto label_263b40;
            case 0x263B84u: goto label_263b84;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BF4u: goto label_263bf4;
            case 0x263C10u: goto label_263c10;
            case 0x263C20u: goto label_263c20;
            case 0x263C28u: goto label_263c28;
            case 0x263C38u: goto label_263c38;
            case 0x263C64u: goto label_263c64;
            case 0x263C90u: goto label_263c90;
            case 0x263CC8u: goto label_263cc8;
            case 0x263CE4u: goto label_263ce4;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263BB0u; }
            if (ctx->pc != 0x263BB0u) { return; }
        }
        }
    }
    ctx->pc = 0x263BB0u;
    // 0x263bb0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x263bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x263bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x263bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bb8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x263bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x263bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bc0: 0xc09a822  jal         func_26A088
    ctx->pc = 0x263BC0u;
    SET_GPR_U32(ctx, 31, 0x263BC8u);
    ctx->pc = 0x263BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263BC0u;
            // 0x263bc4: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A088u;
    if (runtime->hasFunction(0x26A088u)) {
        auto targetFn = runtime->lookupFunction(0x26A088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BC8u; }
        if (ctx->pc != 0x263BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A088_0x26a088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BC8u; }
        if (ctx->pc != 0x263BC8u) { return; }
    }
    ctx->pc = 0x263BC8u;
    // 0x263bc8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x263bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x263bcc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x263BCCu;
    {
        const bool branch_taken_0x263bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BCCu;
            // 0x263bd0: 0x24420024  addiu       $v0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bcc) {
            ctx->pc = 0x263CE4u;
            goto label_263ce4;
        }
    }
    ctx->pc = 0x263BD4u;
label_263bd4:
    // 0x263bd4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263BD4u;
    {
        const bool branch_taken_0x263bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BD4u;
            // 0x263bd8: 0x240203f9  addiu       $v0, $zero, 0x3F9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bd4) {
            ctx->pc = 0x263BF4u;
            goto label_263bf4;
        }
    }
    ctx->pc = 0x263BDCu;
    // 0x263bdc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x263bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x263be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263be4: 0xc076c3c  jal         func_1DB0F0
    ctx->pc = 0x263BE4u;
    SET_GPR_U32(ctx, 31, 0x263BECu);
    ctx->pc = 0x263BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263BE4u;
            // 0x263be8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F0u;
    if (runtime->hasFunction(0x1DB0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BECu; }
        if (ctx->pc != 0x263BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB0F0_0x1db0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BECu; }
        if (ctx->pc != 0x263BECu) { return; }
    }
    ctx->pc = 0x263BECu;
    // 0x263bec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x263BECu;
    {
        const bool branch_taken_0x263bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BECu;
            // 0x263bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bec) {
            ctx->pc = 0x263CE4u;
            goto label_263ce4;
        }
    }
    ctx->pc = 0x263BF4u;
label_263bf4:
    // 0x263bf4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263BF4u;
    {
        const bool branch_taken_0x263bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BF4u;
            // 0x263bf8: 0x240203fa  addiu       $v0, $zero, 0x3FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bf4) {
            ctx->pc = 0x263C10u;
            goto label_263c10;
        }
    }
    ctx->pc = 0x263BFCu;
    // 0x263bfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263c00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x263c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c04: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x263C04u;
    {
        const bool branch_taken_0x263c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C04u;
            // 0x263c08: 0xae830010  sw          $v1, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c04) {
            ctx->pc = 0x263CE4u;
            goto label_263ce4;
        }
    }
    ctx->pc = 0x263C0Cu;
    // 0x263c0c: 0x0  nop
    ctx->pc = 0x263c0cu;
    // NOP
label_263c10:
    // 0x263c10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263C10u;
    {
        const bool branch_taken_0x263c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C10u;
            // 0x263c14: 0x240203f7  addiu       $v0, $zero, 0x3F7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c10) {
            ctx->pc = 0x263C20u;
            goto label_263c20;
        }
    }
    ctx->pc = 0x263C18u;
    // 0x263c18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263C18u;
    {
        const bool branch_taken_0x263c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C18u;
            // 0x263c1c: 0x240203f0  addiu       $v0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c18) {
            ctx->pc = 0x263C28u;
            goto label_263c28;
        }
    }
    ctx->pc = 0x263C20u;
label_263c20:
    // 0x263c20: 0x1000ffae  b           . + 4 + (-0x52 << 2)
    ctx->pc = 0x263C20u;
    {
        const bool branch_taken_0x263c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C20u;
            // 0x263c24: 0xae800010  sw          $zero, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c20) {
            ctx->pc = 0x263ADCu;
            runtime->cooperativeGuestYield();
            goto label_263adc;
        }
    }
    ctx->pc = 0x263C28u;
label_263c28:
    // 0x263c28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263C28u;
    {
        const bool branch_taken_0x263c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C28u;
            // 0x263c2c: 0x24020405  addiu       $v0, $zero, 0x405 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c28) {
            ctx->pc = 0x263C38u;
            goto label_263c38;
        }
    }
    ctx->pc = 0x263C30u;
    // 0x263c30: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x263C30u;
    {
        const bool branch_taken_0x263c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C30u;
            // 0x263c34: 0x2402040a  addiu       $v0, $zero, 0x40A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c30) {
            ctx->pc = 0x263C64u;
            goto label_263c64;
        }
    }
    ctx->pc = 0x263C38u;
label_263c38:
    // 0x263c38: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x263c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x263c3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x263c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263c4c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x263c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263c50: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x263c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263c54: 0x40f809  jalr        $v0
    ctx->pc = 0x263C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263C5Cu);
        ctx->pc = 0x263C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C54u;
            // 0x263c58: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263C5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263A10u: goto label_263a10;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A80u: goto label_263a80;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE4u: goto label_263ae4;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B40u: goto label_263b40;
            case 0x263B84u: goto label_263b84;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BF4u: goto label_263bf4;
            case 0x263C10u: goto label_263c10;
            case 0x263C20u: goto label_263c20;
            case 0x263C28u: goto label_263c28;
            case 0x263C38u: goto label_263c38;
            case 0x263C64u: goto label_263c64;
            case 0x263C90u: goto label_263c90;
            case 0x263CC8u: goto label_263cc8;
            case 0x263CE4u: goto label_263ce4;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263C5Cu; }
            if (ctx->pc != 0x263C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x263C5Cu;
    // 0x263c5c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x263C5Cu;
    {
        const bool branch_taken_0x263c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C5Cu;
            // 0x263c60: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c5c) {
            ctx->pc = 0x263CC8u;
            goto label_263cc8;
        }
    }
    ctx->pc = 0x263C64u;
label_263c64:
    // 0x263c64: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x263C64u;
    {
        const bool branch_taken_0x263c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C64u;
            // 0x263c68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c64) {
            ctx->pc = 0x263C90u;
            goto label_263c90;
        }
    }
    ctx->pc = 0x263C6Cu;
    // 0x263c6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x263c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x263c70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x263c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263c78: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x263c78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x263c7c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x263c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x263c80: 0x40f809  jalr        $v0
    ctx->pc = 0x263C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263C88u);
        ctx->pc = 0x263C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C80u;
            // 0x263c84: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263C88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263A10u: goto label_263a10;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A80u: goto label_263a80;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE4u: goto label_263ae4;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B40u: goto label_263b40;
            case 0x263B84u: goto label_263b84;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BF4u: goto label_263bf4;
            case 0x263C10u: goto label_263c10;
            case 0x263C20u: goto label_263c20;
            case 0x263C28u: goto label_263c28;
            case 0x263C38u: goto label_263c38;
            case 0x263C64u: goto label_263c64;
            case 0x263C90u: goto label_263c90;
            case 0x263CC8u: goto label_263cc8;
            case 0x263CE4u: goto label_263ce4;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263C88u; }
            if (ctx->pc != 0x263C88u) { return; }
        }
        }
    }
    ctx->pc = 0x263C88u;
    // 0x263c88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x263C88u;
    {
        const bool branch_taken_0x263c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C88u;
            // 0x263c8c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c88) {
            ctx->pc = 0x263CE8u;
            goto label_263ce8;
        }
    }
    ctx->pc = 0x263C90u;
label_263c90:
    // 0x263c90: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x263c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x263c94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x263c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263ca4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x263ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263ca8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x263ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263cac: 0x40f809  jalr        $v0
    ctx->pc = 0x263CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263CB4u);
        ctx->pc = 0x263CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263CACu;
            // 0x263cb0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263CB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263A10u: goto label_263a10;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A80u: goto label_263a80;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE4u: goto label_263ae4;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B40u: goto label_263b40;
            case 0x263B84u: goto label_263b84;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BF4u: goto label_263bf4;
            case 0x263C10u: goto label_263c10;
            case 0x263C20u: goto label_263c20;
            case 0x263C28u: goto label_263c28;
            case 0x263C38u: goto label_263c38;
            case 0x263C64u: goto label_263c64;
            case 0x263C90u: goto label_263c90;
            case 0x263CC8u: goto label_263cc8;
            case 0x263CE4u: goto label_263ce4;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263CB4u; }
            if (ctx->pc != 0x263CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x263CB4u;
    // 0x263cb4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x263cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x263cb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cbc: 0xc076c3c  jal         func_1DB0F0
    ctx->pc = 0x263CBCu;
    SET_GPR_U32(ctx, 31, 0x263CC4u);
    ctx->pc = 0x263CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263CBCu;
            // 0x263cc0: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F0u;
    if (runtime->hasFunction(0x1DB0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CC4u; }
        if (ctx->pc != 0x263CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB0F0_0x1db0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CC4u; }
        if (ctx->pc != 0x263CC4u) { return; }
    }
    ctx->pc = 0x263CC4u;
    // 0x263cc4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x263cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_263cc8:
    // 0x263cc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x263cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ccc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x263cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cd0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x263cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cd4: 0xc09a862  jal         func_26A188
    ctx->pc = 0x263CD4u;
    SET_GPR_U32(ctx, 31, 0x263CDCu);
    ctx->pc = 0x263CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263CD4u;
            // 0x263cd8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A188u;
    if (runtime->hasFunction(0x26A188u)) {
        auto targetFn = runtime->lookupFunction(0x26A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CDCu; }
        if (ctx->pc != 0x263CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A188_0x26a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CDCu; }
        if (ctx->pc != 0x263CDCu) { return; }
    }
    ctx->pc = 0x263CDCu;
    // 0x263cdc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x263cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x263ce0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x263ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_263ce4:
    // 0x263ce4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x263ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_263ce8:
    // 0x263ce8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x263ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263cec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x263cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263cf0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x263cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263cf4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x263cf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x263CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263CFCu;
            // 0x263d00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263A10u: goto label_263a10;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A80u: goto label_263a80;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE4u: goto label_263ae4;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B40u: goto label_263b40;
            case 0x263B84u: goto label_263b84;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BF4u: goto label_263bf4;
            case 0x263C10u: goto label_263c10;
            case 0x263C20u: goto label_263c20;
            case 0x263C28u: goto label_263c28;
            case 0x263C38u: goto label_263c38;
            case 0x263C64u: goto label_263c64;
            case 0x263C90u: goto label_263c90;
            case 0x263CC8u: goto label_263cc8;
            case 0x263CE4u: goto label_263ce4;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263D04u;
    // 0x263d04: 0x0  nop
    ctx->pc = 0x263d04u;
    // NOP
}
