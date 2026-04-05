#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CBE8
// Address: 0x19cbe8 - 0x19cd68
void sub_0019CBE8_0x19cbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CBE8_0x19cbe8");
#endif

    ctx->pc = 0x19cbe8u;

    // 0x19cbe8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19cbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19cbec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19cbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19cbf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19cbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19cbf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cbf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbf8: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x19cbf8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x19cbfc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x19cbfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x19cc00: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x19cc00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19cc04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cc08: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x19CC08u;
    {
        const bool branch_taken_0x19cc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC08u;
            // 0x19cc0c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc08) {
            ctx->pc = 0x19CD48u;
            goto label_19cd48;
        }
    }
    ctx->pc = 0x19CC10u;
    // 0x19cc10: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19cc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x19cc14: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x19cc14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x19cc18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19cc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cc1c: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x19cc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cc20: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x19cc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19cc24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19cc24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19cc28: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x19cc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x19cc2c: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x19cc2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x19cc30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19cc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19cc34: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x19cc34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x19cc38: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x19cc38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cc3c: 0x0  nop
    ctx->pc = 0x19cc3cu;
    // NOP
    // 0x19cc40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19CC40u;
    {
        const bool branch_taken_0x19cc40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC40u;
            // 0x19cc44: 0xe6020038  swc1        $f2, 0x38($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc40) {
            ctx->pc = 0x19CC4Cu;
            goto label_19cc4c;
        }
    }
    ctx->pc = 0x19CC48u;
    // 0x19cc48: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x19cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_19cc4c:
    // 0x19cc4c: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x19cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cc50: 0x3c014086  lui         $at, 0x4086
    ctx->pc = 0x19cc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16518 << 16));
    // 0x19cc54: 0x34210a90  ori         $at, $at, 0xA90
    ctx->pc = 0x19cc54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2704);
    // 0x19cc58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19cc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19cc5c: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x19cc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cc60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x19cc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x19cc64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19cc64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19cc68: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x19cc68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cc6c: 0x0  nop
    ctx->pc = 0x19cc6cu;
    // NOP
    // 0x19cc70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19CC70u;
    {
        const bool branch_taken_0x19cc70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC70u;
            // 0x19cc74: 0xe601003c  swc1        $f1, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc70) {
            ctx->pc = 0x19CC7Cu;
            goto label_19cc7c;
        }
    }
    ctx->pc = 0x19CC78u;
    // 0x19cc78: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x19cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_19cc7c:
    // 0x19cc7c: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x19cc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cc80: 0x3c01403d  lui         $at, 0x403D
    ctx->pc = 0x19cc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16445 << 16));
    // 0x19cc84: 0x3421e44c  ori         $at, $at, 0xE44C
    ctx->pc = 0x19cc84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58444);
    // 0x19cc88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19cc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19cc8c: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x19cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cc90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x19cc90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x19cc94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19cc94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19cc98: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x19cc98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cc9c: 0x0  nop
    ctx->pc = 0x19cc9cu;
    // NOP
    // 0x19cca0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19CCA0u;
    {
        const bool branch_taken_0x19cca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCA0u;
            // 0x19cca4: 0xe6010040  swc1        $f1, 0x40($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cca0) {
            ctx->pc = 0x19CCACu;
            goto label_19ccac;
        }
    }
    ctx->pc = 0x19CCA8u;
    // 0x19cca8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x19cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_19ccac:
    // 0x19ccac: 0xc060e80  jal         func_183A00
    ctx->pc = 0x19CCACu;
    SET_GPR_U32(ctx, 31, 0x19CCB4u);
    ctx->pc = 0x19CCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCACu;
            // 0x19ccb0: 0xc60c0038  lwc1        $f12, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCB4u; }
        if (ctx->pc != 0x19CCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCB4u; }
        if (ctx->pc != 0x19CCB4u) { return; }
    }
    ctx->pc = 0x19CCB4u;
    // 0x19ccb4: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x19ccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19ccb8: 0xc060e80  jal         func_183A00
    ctx->pc = 0x19CCB8u;
    SET_GPR_U32(ctx, 31, 0x19CCC0u);
    ctx->pc = 0x19CCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCB8u;
            // 0x19ccbc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCC0u; }
        if (ctx->pc != 0x19CCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCC0u; }
        if (ctx->pc != 0x19CCC0u) { return; }
    }
    ctx->pc = 0x19CCC0u;
    // 0x19ccc0: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x19ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19ccc4: 0xc060e80  jal         func_183A00
    ctx->pc = 0x19CCC4u;
    SET_GPR_U32(ctx, 31, 0x19CCCCu);
    ctx->pc = 0x19CCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCC4u;
            // 0x19ccc8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCCCu; }
        if (ctx->pc != 0x19CCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCCCu; }
        if (ctx->pc != 0x19CCCCu) { return; }
    }
    ctx->pc = 0x19CCCCu;
    // 0x19cccc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19ccd0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x19ccd0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x19ccd4: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19ccd8: 0xc0909c4  jal         func_242710
    ctx->pc = 0x19CCD8u;
    SET_GPR_U32(ctx, 31, 0x19CCE0u);
    ctx->pc = 0x19CCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCD8u;
            // 0x19ccdc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCE0u; }
        if (ctx->pc != 0x19CCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCE0u; }
        if (ctx->pc != 0x19CCE0u) { return; }
    }
    ctx->pc = 0x19CCE0u;
    // 0x19cce0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x19cce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19cce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cce8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19cce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x19ccec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ccecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ccf0: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x19ccf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19ccf4: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x19ccf4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x19ccf8: 0x4601b582  mul.s       $f22, $f22, $f1
    ctx->pc = 0x19ccf8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x19ccfc: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x19ccfcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x19cd00: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x19cd00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19cd04: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x19cd04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19cd08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd0c: 0x4406b000  mfc1        $a2, $f22
    ctx->pc = 0x19cd0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19cd10: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x19cd10u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19cd14: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x19cd14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19cd18: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x19cd18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x19cd1c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x19cd1cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x19cd20: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x19cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x19cd24: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x19cd24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19cd28: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x19cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x19cd2c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x19cd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x19cd30: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x19cd30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19cd34: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x19cd34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19cd38: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x19cd38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19cd3c: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x19cd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19cd40: 0xc06735a  jal         func_19CD68
    ctx->pc = 0x19CD40u;
    SET_GPR_U32(ctx, 31, 0x19CD48u);
    ctx->pc = 0x19CD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD40u;
            // 0x19cd44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CD68u;
    if (runtime->hasFunction(0x19CD68u)) {
        auto targetFn = runtime->lookupFunction(0x19CD68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD48u; }
        if (ctx->pc != 0x19CD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CD68_0x19cd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD48u; }
        if (ctx->pc != 0x19CD48u) { return; }
    }
    ctx->pc = 0x19CD48u;
label_19cd48:
    // 0x19cd48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19cd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cd4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cd50: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x19cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19cd54: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x19cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19cd58: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x19cd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19cd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD5Cu;
            // 0x19cd60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CC4Cu: goto label_19cc4c;
            case 0x19CC7Cu: goto label_19cc7c;
            case 0x19CCACu: goto label_19ccac;
            case 0x19CD48u: goto label_19cd48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CD64u;
    // 0x19cd64: 0x0  nop
    ctx->pc = 0x19cd64u;
    // NOP
}
