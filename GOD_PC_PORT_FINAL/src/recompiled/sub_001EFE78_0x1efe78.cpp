#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFE78
// Address: 0x1efe78 - 0x1f0080
void sub_001EFE78_0x1efe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFE78_0x1efe78");
#endif

    ctx->pc = 0x1efe78u;

    // 0x1efe78: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1efe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1efe7c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1efe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1efe80: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1efe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1efe84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efe84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe88: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1efe88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1efe8c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1efe8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1efe90: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1efe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1efe94: 0x8e300954  lw          $s0, 0x954($s1)
    ctx->pc = 0x1efe94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2388)));
    // 0x1efe98: 0x1200006f  beqz        $s0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1EFE98u;
    {
        const bool branch_taken_0x1efe98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE98u;
            // 0x1efe9c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe98) {
            ctx->pc = 0x1F0058u;
            goto label_1f0058;
        }
    }
    ctx->pc = 0x1EFEA0u;
    // 0x1efea0: 0xc6210950  lwc1        $f1, 0x950($s1)
    ctx->pc = 0x1efea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efea4: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1efea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efea8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1efea8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efeac: 0xe6210950  swc1        $f1, 0x950($s1)
    ctx->pc = 0x1efeacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2384), bits); }
    // 0x1efeb0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1efeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efeb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1efeb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efeb8: 0x0  nop
    ctx->pc = 0x1efeb8u;
    // NOP
    // 0x1efebc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFEBCu;
    {
        const bool branch_taken_0x1efebc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efebc) {
            ctx->pc = 0x1EFEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEBCu;
            // 0x1efec0: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFECCu;
            goto label_1efecc;
        }
    }
    ctx->pc = 0x1EFEC4u;
    // 0x1efec4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1EFEC4u;
    {
        const bool branch_taken_0x1efec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEC4u;
            // 0x1efec8: 0xae200954  sw          $zero, 0x954($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efec4) {
            ctx->pc = 0x1F0058u;
            goto label_1f0058;
        }
    }
    ctx->pc = 0x1EFECCu;
label_1efecc:
    // 0x1efecc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1efeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1efed0: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1efed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1efed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1efed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1efed8: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x1efed8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1efedc: 0xc060e52  jal         func_183948
    ctx->pc = 0x1EFEDCu;
    SET_GPR_U32(ctx, 31, 0x1EFEE4u);
    ctx->pc = 0x1EFEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEDCu;
            // 0x1efee0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFEE4u; }
        if (ctx->pc != 0x1EFEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFEE4u; }
        if (ctx->pc != 0x1EFEE4u) { return; }
    }
    ctx->pc = 0x1EFEE4u;
    // 0x1efee4: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x1efee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efee8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1efee8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1efeec: 0xc6210950  lwc1        $f1, 0x950($s1)
    ctx->pc = 0x1efeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efef0: 0xc6200958  lwc1        $f0, 0x958($s1)
    ctx->pc = 0x1efef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efef4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1efef4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1efef8: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x1efef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1efefc: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x1efefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eff00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eff00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eff04: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1eff04u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1eff08: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1eff08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1eff0c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1eff0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1eff10: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1eff10u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1eff14: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1eff14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1eff18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eff18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff1c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1eff1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1eff20: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1eff20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1eff24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eff24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eff28: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1eff28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x1eff2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff30: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1eff30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eff34: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1eff34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1eff38: 0xc061248  jal         func_184920
    ctx->pc = 0x1EFF38u;
    SET_GPR_U32(ctx, 31, 0x1EFF40u);
    ctx->pc = 0x1EFF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF38u;
            // 0x1eff3c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF40u; }
        if (ctx->pc != 0x1EFF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF40u; }
        if (ctx->pc != 0x1EFF40u) { return; }
    }
    ctx->pc = 0x1EFF40u;
    // 0x1eff40: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x1eff40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1eff44: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1eff44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1eff48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eff48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff4c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1eff4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1eff50: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1eff50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1eff54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eff54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff58: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1eff58u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1eff5c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1eff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1eff60: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1eff60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1eff64: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1eff64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1eff68: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x1eff68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eff6c: 0x70434cc8  ppacw       $t1, $v0, $v1
    ctx->pc = 0x1eff6cu;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1eff70: 0x48a92000  qmtc2.ni    $t1, $vf4
    ctx->pc = 0x1eff70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1eff74: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x1eff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1eff78: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1eff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eff7c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1eff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eff80: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1eff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eff84: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x1eff84u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1eff88: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1eff88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1eff8c: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x1eff8cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eff90: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x1eff90u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1eff94: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1eff94u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eff98: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1eff98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eff9c: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1eff9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1effa0: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1effa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1effa4: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1effa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1effa8: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1effa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1effac: 0x4be328cb  vmaddw.xyzw $vf3, $vf5, $vf3w
    ctx->pc = 0x1effacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1effb0: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1effb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1effb4: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1effb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1effb8: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1effb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1effbc: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1effbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1effc0: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x1effc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1effc4: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1effc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1effc8: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1effc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1effcc: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1effccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1effd0: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1effd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1effd4: 0x4be2288b  vmaddw.xyzw $vf2, $vf5, $vf2w
    ctx->pc = 0x1effd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1effd8: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x1effd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1effdc: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x1effdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1effe0: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1effe0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1effe4: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x1effe4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1effe8: 0x4be4294b  vmaddw.xyzw $vf5, $vf5, $vf4w
    ctx->pc = 0x1effe8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1effec: 0xfba500c0  sqc2        $vf5, 0xC0($sp)
    ctx->pc = 0x1effecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1efff0: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1efff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1efff4: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1efff4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1efff8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1efff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efffc: 0xdd06bdf8  ld          $a2, -0x4208($t0)
    ctx->pc = 0x1efffcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 4294950392)));
    // 0x1f0000: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0004: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1f0004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0008: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f0008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f000c: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1f000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f0010: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x1f0010u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x1f0014: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x1f0014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f0018: 0xf8e30020  sqc2        $vf3, 0x20($a3)
    ctx->pc = 0x1f0018u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f001c: 0x84e30060  lh          $v1, 0x60($a3)
    ctx->pc = 0x1f001cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1f0020: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1f0020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0024: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1f0024u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1f0028: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1f0028u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1f002c: 0xc3480a  movz        $t1, $a2, $v1
    ctx->pc = 0x1f002cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x1f0030: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x1f0030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0034: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1f0034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0038: 0x7ce20040  sq          $v0, 0x40($a3)
    ctx->pc = 0x1f0038u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 2));
    // 0x1f003c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1f003cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0040: 0x7ce20050  sq          $v0, 0x50($a3)
    ctx->pc = 0x1f0040u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    // 0x1f0044: 0xfd06bdf8  sd          $a2, -0x4208($t0)
    ctx->pc = 0x1f0044u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294950392), GPR_U64(ctx, 6));
    // 0x1f0048: 0xfce30068  sd          $v1, 0x68($a3)
    ctx->pc = 0x1f0048u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 104), GPR_U64(ctx, 3));
    // 0x1f004c: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x1F004Cu;
    SET_GPR_U32(ctx, 31, 0x1F0054u);
    ctx->pc = 0x1F0050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F004Cu;
            // 0x1f0050: 0xfce000f0  sd          $zero, 0xF0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 240), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0054u; }
        if (ctx->pc != 0x1F0054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0054u; }
        if (ctx->pc != 0x1F0054u) { return; }
    }
    ctx->pc = 0x1F0054u;
    // 0x1f0054: 0x0  nop
    ctx->pc = 0x1f0054u;
    // NOP
label_1f0058:
    // 0x1f0058: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1f0058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f005c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1f005cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f0060: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1f0060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f0064: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1f0064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0068: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1f0068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f006c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F006Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F006Cu;
            // 0x1f0070: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFECCu: goto label_1efecc;
            case 0x1F0058u: goto label_1f0058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0074u;
    // 0x1f0074: 0x0  nop
    ctx->pc = 0x1f0074u;
    // NOP
    // 0x1f0078: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1f0078u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1f007c: 0x0  nop
    ctx->pc = 0x1f007cu;
    // NOP
}
