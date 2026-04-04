#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0A98
// Address: 0x1e0a98 - 0x1e0ba0
void sub_001E0A98_0x1e0a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0A98_0x1e0a98");
#endif

    ctx->pc = 0x1e0a98u;

    // 0x1e0a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e0a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e0a9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e0a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e0aa0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e0aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e0aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0aa8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1e0aa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e0aac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e0aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ab0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e0ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e0ab4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1e0ab4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1e0ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0abc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1e0abcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e0ac0: 0xc6140178  lwc1        $f20, 0x178($s0)
    ctx->pc = 0x1e0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0ac4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0ac8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e0ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e0acc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e0accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e0ad0: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0AD8u);
        ctx->pc = 0x1E0AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AD0u;
            // 0x1e0ad4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0AD8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0AF8u: goto label_1e0af8;
            case 0x1E0B5Cu: goto label_1e0b5c;
            case 0x1E0B60u: goto label_1e0b60;
            case 0x1E0B6Cu: goto label_1e0b6c;
            case 0x1E0B70u: goto label_1e0b70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AD8u; }
            if (ctx->pc != 0x1E0AD8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0AD8u;
    // 0x1e0ad8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E0AD8u;
    {
        const bool branch_taken_0x1e0ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ad8) {
            ctx->pc = 0x1E0ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AD8u;
            // 0x1e0adc: 0x4615a301  sub.s       $f12, $f20, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0B70u;
            goto label_1e0b70;
        }
    }
    ctx->pc = 0x1E0AE0u;
    // 0x1e0ae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0ae4: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1e0ae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0ae8: 0x0  nop
    ctx->pc = 0x1e0ae8u;
    // NOP
    // 0x1e0aec: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1E0AECu;
    {
        const bool branch_taken_0x1e0aec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AECu;
            // 0x1e0af0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0aec) {
            ctx->pc = 0x1E0B6Cu;
            goto label_1e0b6c;
        }
    }
    ctx->pc = 0x1E0AF4u;
    // 0x1e0af4: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x1e0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_1e0af8:
    // 0x1e0af8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0afc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e0b00: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1e0b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e0b04: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1e0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1e0b08: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0B10u);
        ctx->pc = 0x1E0B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B08u;
            // 0x1e0b0c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0B10u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0AF8u: goto label_1e0af8;
            case 0x1E0B5Cu: goto label_1e0b5c;
            case 0x1E0B60u: goto label_1e0b60;
            case 0x1E0B6Cu: goto label_1e0b6c;
            case 0x1E0B70u: goto label_1e0b70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B10u; }
            if (ctx->pc != 0x1E0B10u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0B10u;
    // 0x1e0b10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1e0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e0b14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e0b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0b18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1e0b18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1e0b1c: 0x50430010  beql        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E0B1Cu;
    {
        const bool branch_taken_0x1e0b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e0b1c) {
            ctx->pc = 0x1E0B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B1Cu;
            // 0x1e0b20: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0B60u;
            goto label_1e0b60;
        }
    }
    ctx->pc = 0x1E0B24u;
    // 0x1e0b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0b28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e0b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e0b2c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x1e0b2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0b30: 0x0  nop
    ctx->pc = 0x1e0b30u;
    // NOP
    // 0x1e0b34: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1E0B34u;
    {
        const bool branch_taken_0x1e0b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0b34) {
            ctx->pc = 0x1E0B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B34u;
            // 0x1e0b38: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0B60u;
            goto label_1e0b60;
        }
    }
    ctx->pc = 0x1E0B3Cu;
    // 0x1e0b3c: 0x4615a001  sub.s       $f0, $f20, $f21
    ctx->pc = 0x1e0b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1e0b40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e0b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0b44: 0x0  nop
    ctx->pc = 0x1e0b44u;
    // NOP
    // 0x1e0b48: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0B48u;
    {
        const bool branch_taken_0x1e0b48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B48u;
            // 0x1e0b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b48) {
            ctx->pc = 0x1E0B5Cu;
            goto label_1e0b5c;
        }
    }
    ctx->pc = 0x1E0B50u;
    // 0x1e0b50: 0xc07821c  jal         func_1E0870
    ctx->pc = 0x1E0B50u;
    SET_GPR_U32(ctx, 31, 0x1E0B58u);
    ctx->pc = 0x1E0B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B50u;
            // 0x1e0b54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0870u;
    if (runtime->hasFunction(0x1E0870u)) {
        auto targetFn = runtime->lookupFunction(0x1E0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B58u; }
        if (ctx->pc != 0x1E0B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0870_0x1e0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B58u; }
        if (ctx->pc != 0x1E0B58u) { return; }
    }
    ctx->pc = 0x1E0B58u;
    // 0x1e0b58: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1e0b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0b5c:
    // 0x1e0b5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e0b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e0b60:
    // 0x1e0b60: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1e0b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e0b64: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1E0B64u;
    {
        const bool branch_taken_0x1e0b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0b64) {
            ctx->pc = 0x1E0B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B64u;
            // 0x1e0b68: 0x8e0301b0  lw          $v1, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0AF8u;
            runtime->cooperativeGuestYield();
            goto label_1e0af8;
        }
    }
    ctx->pc = 0x1E0B6Cu;
label_1e0b6c:
    // 0x1e0b6c: 0x4615a301  sub.s       $f12, $f20, $f21
    ctx->pc = 0x1e0b6cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1e0b70:
    // 0x1e0b70: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1E0B70u;
    SET_GPR_U32(ctx, 31, 0x1E0B78u);
    ctx->pc = 0x1E0B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B70u;
            // 0x1e0b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B78u; }
        if (ctx->pc != 0x1E0B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0B78u; }
        if (ctx->pc != 0x1E0B78u) { return; }
    }
    ctx->pc = 0x1E0B78u;
    // 0x1e0b78: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x1e0b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x1e0b7c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e0b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e0b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0b84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e0b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0b88: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e0b88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b90: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1e0b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e0b94: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1e0b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0B98u;
            // 0x1e0b9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0AF8u: goto label_1e0af8;
            case 0x1E0B5Cu: goto label_1e0b5c;
            case 0x1E0B60u: goto label_1e0b60;
            case 0x1E0B6Cu: goto label_1e0b6c;
            case 0x1E0B70u: goto label_1e0b70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0BA0u;
}
