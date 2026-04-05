#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001179D0
// Address: 0x1179d0 - 0x117b38
void sub_001179D0_0x1179d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001179D0_0x1179d0");
#endif

    ctx->pc = 0x1179d0u;

label_1179d0:
    // 0x1179d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1179d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1179d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1179d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1179d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1179d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1179dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1179dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1179e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1179e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1179e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1179e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1179ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1179ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1179f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1179f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1179f4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x1179f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1179f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1179f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1179fc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1179fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x117a00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x117a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117a04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x117a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x117a08: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x117a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x117a0c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x117a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x117a10: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x117a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x117a14: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x117a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x117a18: 0xc0f809  jalr        $a2
    ctx->pc = 0x117A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x117A20u);
        ctx->pc = 0x117A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A18u;
            // 0x117a1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117A20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1179D0u: goto label_1179d0;
            case 0x117AC0u: goto label_117ac0;
            case 0x117AD8u: goto label_117ad8;
            case 0x117AF0u: goto label_117af0;
            case 0x117AF8u: goto label_117af8;
            case 0x117B0Cu: goto label_117b0c;
            case 0x117B14u: goto label_117b14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117A20u; }
            if (ctx->pc != 0x117A20u) { return; }
        }
        }
    }
    ctx->pc = 0x117A20u;
    // 0x117a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a24: 0xc045f44  jal         func_117D10
    ctx->pc = 0x117A24u;
    SET_GPR_U32(ctx, 31, 0x117A2Cu);
    ctx->pc = 0x117A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117A24u;
            // 0x117a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D10u;
    if (runtime->hasFunction(0x117D10u)) {
        auto targetFn = runtime->lookupFunction(0x117D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A2Cu; }
        if (ctx->pc != 0x117A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117D10_0x117d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A2Cu; }
        if (ctx->pc != 0x117A2Cu) { return; }
    }
    ctx->pc = 0x117A2Cu;
    // 0x117a2c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x117a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x117a30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x117a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117a34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x117a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117a3c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x117a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x117a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117a44: 0x3e00008  jr          $ra
    ctx->pc = 0x117A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A44u;
            // 0x117a48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1179D0u: goto label_1179d0;
            case 0x117AC0u: goto label_117ac0;
            case 0x117AD8u: goto label_117ad8;
            case 0x117AF0u: goto label_117af0;
            case 0x117AF8u: goto label_117af8;
            case 0x117B0Cu: goto label_117b0c;
            case 0x117B14u: goto label_117b14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117A4Cu;
    // 0x117a4c: 0x0  nop
    ctx->pc = 0x117a4cu;
    // NOP
    // 0x117a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x117a54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x117a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x117a58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x117a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x117a5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x117a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x117a64: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x117a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x117a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117a6c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x117a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x117a70: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x117a74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x117A74u;
    {
        const bool branch_taken_0x117a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A74u;
            // 0x117a78: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a74) {
            ctx->pc = 0x117AC0u;
            goto label_117ac0;
        }
    }
    ctx->pc = 0x117A7Cu;
    // 0x117a7c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x117a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x117a80: 0xc443c658  lwc1        $f3, -0x39A8($v0)
    ctx->pc = 0x117a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x117a84: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x117a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x117a88: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x117a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117a8c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x117a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117a90: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x117a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x117a94: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x117a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x117a98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x117a98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x117a9c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x117a9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117aa0: 0x0  nop
    ctx->pc = 0x117aa0u;
    // NOP
    // 0x117aa4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x117AA4u;
    {
        const bool branch_taken_0x117aa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117AA4u;
            // 0x117aa8: 0xe6210018  swc1        $f1, 0x18($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117aa4) {
            ctx->pc = 0x117AC0u;
            goto label_117ac0;
        }
    }
    ctx->pc = 0x117AACu;
    // 0x117aac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117ab0: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x117ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x117ab4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x117ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x117ab8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x117ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x117abc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x117abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_117ac0:
    // 0x117ac0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x117ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x117ac4: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x117ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x117ac8: 0x12130012  beq         $s0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x117AC8u;
    {
        const bool branch_taken_0x117ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x117ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117AC8u;
            // 0x117acc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ac8) {
            ctx->pc = 0x117B14u;
            goto label_117b14;
        }
    }
    ctx->pc = 0x117AD0u;
    // 0x117ad0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x117ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x117ad4: 0x0  nop
    ctx->pc = 0x117ad4u;
    // NOP
label_117ad8:
    // 0x117ad8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x117ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x117adc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117ADCu;
    {
        const bool branch_taken_0x117adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117ADCu;
            // 0x117ae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117adc) {
            ctx->pc = 0x117AF8u;
            goto label_117af8;
        }
    }
    ctx->pc = 0x117AE4u;
    // 0x117ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ae8: 0xc045e74  jal         func_1179D0
    ctx->pc = 0x117AE8u;
    SET_GPR_U32(ctx, 31, 0x117AF0u);
    ctx->pc = 0x117AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AE8u;
            // 0x117aec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179D0u;
    runtime->cooperativeGuestYield();
    goto label_1179d0;
    ctx->pc = 0x117AF0u;
label_117af0:
    // 0x117af0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x117AF0u;
    {
        const bool branch_taken_0x117af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117af0) {
            ctx->pc = 0x117B0Cu;
            goto label_117b0c;
        }
    }
    ctx->pc = 0x117AF8u;
label_117af8:
    // 0x117af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117afc: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x117AFCu;
    SET_GPR_U32(ctx, 31, 0x117B04u);
    ctx->pc = 0x117B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AFCu;
            // 0x117b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B04u; }
        if (ctx->pc != 0x117B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116EF0_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B04u; }
        if (ctx->pc != 0x117B04u) { return; }
    }
    ctx->pc = 0x117B04u;
    // 0x117b04: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x117b04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117b08: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x117b08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_117b0c:
    // 0x117b0c: 0x5613fff2  bnel        $s0, $s3, . + 4 + (-0xE << 2)
    ctx->pc = 0x117B0Cu;
    {
        const bool branch_taken_0x117b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x117b0c) {
            ctx->pc = 0x117B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117B0Cu;
            // 0x117b10: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117AD8u;
            runtime->cooperativeGuestYield();
            goto label_117ad8;
        }
    }
    ctx->pc = 0x117B14u;
label_117b14:
    // 0x117b14: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x117b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x117b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117b1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x117b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117b20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x117b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117b24: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x117b24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x117B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B2Cu;
            // 0x117b30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1179D0u: goto label_1179d0;
            case 0x117AC0u: goto label_117ac0;
            case 0x117AD8u: goto label_117ad8;
            case 0x117AF0u: goto label_117af0;
            case 0x117AF8u: goto label_117af8;
            case 0x117B0Cu: goto label_117b0c;
            case 0x117B14u: goto label_117b14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117B34u;
    // 0x117b34: 0x0  nop
    ctx->pc = 0x117b34u;
    // NOP
}
