#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00216EA0
// Address: 0x216ea0 - 0x217638
void sub_00216EA0_0x216ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216EA0_0x216ea0");
#endif

    ctx->pc = 0x216ea0u;

label_216ea0:
    // 0x216ea0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x216ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x216ea4: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x216ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x216ea8: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x216ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x216eac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216eb0: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x216eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x216eb4: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x216eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x216eb8: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x216eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x216ebc: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x216ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x216ec0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x216ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x216ec4: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x216ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x216ec8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x216ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216ecc: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x216eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x216ed0: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x216ed0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x216ed4: 0xdea3bdf8  ld          $v1, -0x4208($s5)
    ctx->pc = 0x216ed4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x216ed8: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x216ed8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x216edc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216EDCu;
    {
        const bool branch_taken_0x216edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x216EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216EDCu;
            // 0x216ee0: 0x8e260048  lw          $a2, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216edc) {
            ctx->pc = 0x216EF8u;
            goto label_216ef8;
        }
    }
    ctx->pc = 0x216EE4u;
    // 0x216ee4: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x216EE4u;
    SET_GPR_U32(ctx, 31, 0x216EECu);
    ctx->pc = 0x216EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216EE4u;
            // 0x216ee8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216EECu; }
        if (ctx->pc != 0x216EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216EECu; }
        if (ctx->pc != 0x216EECu) { return; }
    }
    ctx->pc = 0x216EECu;
    // 0x216eec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x216EECu;
    {
        const bool branch_taken_0x216eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216EECu;
            // 0x216ef0: 0xdba10030  lqc2        $vf1, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216eec) {
            ctx->pc = 0x216F28u;
            goto label_216f28;
        }
    }
    ctx->pc = 0x216EF4u;
    // 0x216ef4: 0x0  nop
    ctx->pc = 0x216ef4u;
    // NOP
label_216ef8:
    // 0x216ef8: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x216ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x216efc: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x216efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x216f00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216f04: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x216f04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216f08: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x216f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x216f0c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x216f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216f10: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x216f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x216f14: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x216f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x216f18: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x216f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x216f1c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x216f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x216f20: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x216f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x216f24: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x216f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_216f28:
    // 0x216f28: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x216f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x216f2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x216f2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x216f30: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x216f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216f34: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x216f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216f38: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x216f38u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216f3c: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x216f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x216f40: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x216f40u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x216f44: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x216f44u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x216f48: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x216f48u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x216f4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x216f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x216f50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x216f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x216f54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x216f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x216f58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216F58u;
    {
        const bool branch_taken_0x216f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F58u;
            // 0x216f5c: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f58) {
            ctx->pc = 0x216F68u;
            goto label_216f68;
        }
    }
    ctx->pc = 0x216F60u;
    // 0x216f60: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x216f60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
    // 0x216f64: 0xae200378  sw          $zero, 0x378($s1)
    ctx->pc = 0x216f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 0));
label_216f68:
    // 0x216f68: 0xc6200378  lwc1        $f0, 0x378($s1)
    ctx->pc = 0x216f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216f6c: 0xc681c658  lwc1        $f1, -0x39A8($s4)
    ctx->pc = 0x216f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216f70: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x216f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x216f74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x216f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x216f78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x216f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x216f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x216f80: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x216f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216f84: 0x0  nop
    ctx->pc = 0x216f84u;
    // NOP
    // 0x216f88: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x216F88u;
    {
        const bool branch_taken_0x216f88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x216F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F88u;
            // 0x216f8c: 0xe6200378  swc1        $f0, 0x378($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f88) {
            ctx->pc = 0x216FA0u;
            goto label_216fa0;
        }
    }
    ctx->pc = 0x216F90u;
    // 0x216f90: 0x8e220388  lw          $v0, 0x388($s1)
    ctx->pc = 0x216f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
    // 0x216f94: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x216f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216f98: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x216F98u;
    {
        const bool branch_taken_0x216f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F98u;
            // 0x216f9c: 0xe620037c  swc1        $f0, 0x37C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f98) {
            ctx->pc = 0x2175C8u;
            goto label_2175c8;
        }
    }
    ctx->pc = 0x216FA0u;
label_216fa0:
    // 0x216fa0: 0x8e220374  lw          $v0, 0x374($s1)
    ctx->pc = 0x216fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x216fa4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x216fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x216fa8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x216FA8u;
    {
        const bool branch_taken_0x216fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216fa8) {
            ctx->pc = 0x216FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216FA8u;
            // 0x216fac: 0x8e320044  lw          $s2, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216FF0u;
            goto label_216ff0;
        }
    }
    ctx->pc = 0x216FB0u;
    // 0x216fb0: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x216fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x216fb4: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x216fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x216fb8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x216fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x216fbc: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x216fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216fc0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x216fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x216fc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x216fc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x216fc8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x216fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x216fcc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x216fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x216fd0: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x216fd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216fd4: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x216fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216fd8: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x216fd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x216fdc: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x216fdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216fe0: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x216FE0u;
    {
        const bool branch_taken_0x216fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216FE0u;
            // 0x216fe4: 0xf8410040  sqc2        $vf1, 0x40($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fe0) {
            ctx->pc = 0x2175C8u;
            goto label_2175c8;
        }
    }
    ctx->pc = 0x216FE8u;
label_216fe8:
    // 0x216fe8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x216FE8u;
    {
        const bool branch_taken_0x216fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216FE8u;
            // 0x216fec: 0xae200378  sw          $zero, 0x378($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fe8) {
            ctx->pc = 0x217040u;
            goto label_217040;
        }
    }
    ctx->pc = 0x216FF0u;
label_216ff0:
    // 0x216ff0: 0x8e330054  lw          $s3, 0x54($s1)
    ctx->pc = 0x216ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x216ff4: 0x1a600012  blez        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x216FF4u;
    {
        const bool branch_taken_0x216ff4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x216FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216FF4u;
            // 0x216ff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ff4) {
            ctx->pc = 0x217040u;
            goto label_217040;
        }
    }
    ctx->pc = 0x216FFCu;
    // 0x216ffc: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x216ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_217000:
    // 0x217000: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x217000u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217004: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x217004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217008: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x217008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21700c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x21700cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217010: 0x3c0139d1  lui         $at, 0x39D1
    ctx->pc = 0x217010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14801 << 16));
    // 0x217014: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x217014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x217018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21701c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x21701cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217020: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x217020u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x217024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217028: 0x0  nop
    ctx->pc = 0x217028u;
    // NOP
    // 0x21702c: 0x4501ffee  bc1t        . + 4 + (-0x12 << 2)
    ctx->pc = 0x21702Cu;
    {
        const bool branch_taken_0x21702c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x217030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21702Cu;
            // 0x217030: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21702c) {
            ctx->pc = 0x216FE8u;
            runtime->cooperativeGuestYield();
            goto label_216fe8;
        }
    }
    ctx->pc = 0x217034u;
    // 0x217034: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x217034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x217038: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x217038u;
    {
        const bool branch_taken_0x217038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21703Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217038u;
            // 0x21703c: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217038) {
            ctx->pc = 0x217000u;
            runtime->cooperativeGuestYield();
            goto label_217000;
        }
    }
    ctx->pc = 0x217040u;
label_217040:
    // 0x217040: 0x8e220388  lw          $v0, 0x388($s1)
    ctx->pc = 0x217040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
    // 0x217044: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x217044u;
    {
        const bool branch_taken_0x217044 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x217048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217044u;
            // 0x217048: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217044) {
            ctx->pc = 0x217074u;
            goto label_217074;
        }
    }
    ctx->pc = 0x21704Cu;
    // 0x21704c: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x21704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x217050: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x217050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217054: 0x0  nop
    ctx->pc = 0x217054u;
    // NOP
label_217058:
    // 0x217058: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x217058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x21705c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21705cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x217060: 0x0  nop
    ctx->pc = 0x217060u;
    // NOP
    // 0x217064: 0x0  nop
    ctx->pc = 0x217064u;
    // NOP
    // 0x217068: 0x0  nop
    ctx->pc = 0x217068u;
    // NOP
    // 0x21706c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21706Cu;
    {
        const bool branch_taken_0x21706c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x217070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21706Cu;
            // 0x217070: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21706c) {
            ctx->pc = 0x217058u;
            runtime->cooperativeGuestYield();
            goto label_217058;
        }
    }
    ctx->pc = 0x217074u;
label_217074:
    // 0x217074: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x217074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x217078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21707c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21707cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217080: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x217080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x217084: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217084u;
    {
        const bool branch_taken_0x217084 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x217084) {
            ctx->pc = 0x217094u;
            goto label_217094;
        }
    }
    ctx->pc = 0x21708Cu;
    // 0x21708c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21708cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217090: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x217090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_217094:
    // 0x217094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21709c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21709cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2170a0: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x2170a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[6] = ctx->f[0] / ctx->f[1];
    // 0x2170a4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2170a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2170a8:
    // 0x2170a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2170a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2170ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2170acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2170b0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2170b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2170b4: 0xc681c658  lwc1        $f1, -0x39A8($s4)
    ctx->pc = 0x2170b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2170b8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2170b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2170bc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2170bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2170c0: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2170c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2170c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2170c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2170c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2170c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2170cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2170CCu;
    {
        const bool branch_taken_0x2170cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2170CCu;
            // 0x2170d0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170cc) {
            ctx->pc = 0x2170E0u;
            goto label_2170e0;
        }
    }
    ctx->pc = 0x2170D4u;
    // 0x2170d4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2170d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2170d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2170D8u;
    {
        const bool branch_taken_0x2170d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2170D8u;
            // 0x2170dc: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170d8) {
            ctx->pc = 0x2170E8u;
            goto label_2170e8;
        }
    }
    ctx->pc = 0x2170E0u;
label_2170e0:
    // 0x2170e0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2170e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2170e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2170e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2170e8:
    // 0x2170e8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2170e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2170ec: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x2170ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2170f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2170f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2170f4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2170f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2170f8: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2170f8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2170fc: 0x460200a9  min.s       $f2, $f0, $f2
    ctx->pc = 0x2170fcu;
    ctx->f[2] = std::min(ctx->f[0], ctx->f[2]);
    // 0x217100: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x217100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217104: 0x0  nop
    ctx->pc = 0x217104u;
    // NOP
    // 0x217108: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x217108u;
    {
        const bool branch_taken_0x217108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21710Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217108u;
            // 0x21710c: 0xe4620018  swc1        $f2, 0x18($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217108) {
            ctx->pc = 0x217188u;
            goto label_217188;
        }
    }
    ctx->pc = 0x217110u;
    // 0x217110: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x217110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x217114: 0xc624005c  lwc1        $f4, 0x5C($s1)
    ctx->pc = 0x217114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x217118: 0x46041803  div.s       $f0, $f3, $f4
    ctx->pc = 0x217118u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[4];
    // 0x21711c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21711cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x217120: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x217120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x217124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x217124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x217128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21712c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21712cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217130: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217134: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x217134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x217138: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x217138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x21713c: 0x46061142  mul.s       $f5, $f2, $f6
    ctx->pc = 0x21713cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x217140: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x217140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x217144: 0xc4820030  lwc1        $f2, 0x30($a0)
    ctx->pc = 0x217144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x217148: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x217148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21714c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x21714cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x217150: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x217150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x217154: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x217154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x217158: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x217158u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
    // 0x21715c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x21715cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x217160: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x217160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x217164: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x217164u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x217168: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x217168u;
    {
        const bool branch_taken_0x217168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217168u;
            // 0x21716c: 0xe4820030  swc1        $f2, 0x30($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217168) {
            ctx->pc = 0x217188u;
            goto label_217188;
        }
    }
    ctx->pc = 0x217170u;
    // 0x217170: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x217170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x217174: 0x46051842  mul.s       $f1, $f3, $f5
    ctx->pc = 0x217174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x217178: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x217178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21717c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21717cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217180: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x217180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x217184: 0x0  nop
    ctx->pc = 0x217184u;
    // NOP
label_217188:
    // 0x217188: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21718c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x21718cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x217190: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x217190u;
    {
        const bool branch_taken_0x217190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217190u;
            // 0x217194: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217190) {
            ctx->pc = 0x2170A8u;
            runtime->cooperativeGuestYield();
            goto label_2170a8;
        }
    }
    ctx->pc = 0x217198u;
    // 0x217198: 0xc683c658  lwc1        $f3, -0x39A8($s4)
    ctx->pc = 0x217198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21719c: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x21719cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x2171a0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2171a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x2171a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2171a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2171a8: 0x8e220388  lw          $v0, 0x388($s1)
    ctx->pc = 0x2171a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
    // 0x2171ac: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x2171acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[1];
    // 0x2171b0: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x2171b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x2171b4: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2171b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x2171b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2171b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2171bc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2171c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2171c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2171c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2171c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2171c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2171c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2171cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2171ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2171d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2171d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2171d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2171d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2171d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2171d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2171dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2171dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2171e0: 0x46001d03  div.s       $f20, $f3, $f0
    ctx->pc = 0x2171e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[20] = ctx->f[3] / ctx->f[0];
    // 0x2171e4: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2171E4u;
    {
        const bool branch_taken_0x2171e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2171E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2171E4u;
            // 0x2171e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171e4) {
            ctx->pc = 0x217204u;
            goto label_217204;
        }
    }
    ctx->pc = 0x2171ECu;
    // 0x2171ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2171ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2171f0:
    // 0x2171f0: 0xc085a36  jal         func_2168D8
    ctx->pc = 0x2171F0u;
    SET_GPR_U32(ctx, 31, 0x2171F8u);
    ctx->pc = 0x2171F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2171F0u;
            // 0x2171f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2168D8u;
    if (runtime->hasFunction(0x2168D8u)) {
        auto targetFn = runtime->lookupFunction(0x2168D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2171F8u; }
        if (ctx->pc != 0x2171F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2168d8_0x216ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2171F8u; }
        if (ctx->pc != 0x2171F8u) { return; }
    }
    ctx->pc = 0x2171F8u;
    // 0x2171f8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2171f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2171fc: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2171FCu;
    {
        const bool branch_taken_0x2171fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x217200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2171FCu;
            // 0x217200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171fc) {
            ctx->pc = 0x2171F0u;
            runtime->cooperativeGuestYield();
            goto label_2171f0;
        }
    }
    ctx->pc = 0x217204u;
label_217204:
    // 0x217204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217208: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x217208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x21720c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x21720cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_217210:
    // 0x217210: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x217210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x217214: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x217214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x217218: 0xf8420070  sqc2        $vf2, 0x70($v0)
    ctx->pc = 0x217218u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21721c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21721cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x217220: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x217220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x217224: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217224u;
    {
        const bool branch_taken_0x217224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217224u;
            // 0x217228: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217224) {
            ctx->pc = 0x217210u;
            runtime->cooperativeGuestYield();
            goto label_217210;
        }
    }
    ctx->pc = 0x21722Cu;
    // 0x21722c: 0xc681c658  lwc1        $f1, -0x39A8($s4)
    ctx->pc = 0x21722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217230: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x217230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x217234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217238: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x217238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x21723c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21723cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x217240: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x217240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x217244: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217248: 0x8e220388  lw          $v0, 0x388($s1)
    ctx->pc = 0x217248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
    // 0x21724c: 0xc620037c  lwc1        $f0, 0x37C($s1)
    ctx->pc = 0x21724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217254: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x217254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x217258: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x217258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x21725c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21725cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x217260: 0xe620037c  swc1        $f0, 0x37C($s1)
    ctx->pc = 0x217260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
    // 0x217264: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x217264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217268: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x217268u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x21726c: 0x8e220374  lw          $v0, 0x374($s1)
    ctx->pc = 0x21726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x217270: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x217270u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x217274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x217274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x217278: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217278u;
    {
        const bool branch_taken_0x217278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217278u;
            // 0x21727c: 0xe620037c  swc1        $f0, 0x37C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217278) {
            ctx->pc = 0x217298u;
            goto label_217298;
        }
    }
    ctx->pc = 0x217280u;
    // 0x217280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x217280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x217284: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217288: 0x4bed133c  vmove.xyzw  $vf13, $vf2
    ctx->pc = 0x217288u;
    ctx->vu0_vf[13] = ctx->vu0_vf[2];
    // 0x21728c: 0x4a816b40  vaddx.y     $vf13, $vf13, $vf1x
    ctx->pc = 0x21728cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x217290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x217290u;
    {
        const bool branch_taken_0x217290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217290u;
            // 0x217294: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217290) {
            ctx->pc = 0x2172B0u;
            goto label_2172b0;
        }
    }
    ctx->pc = 0x217298u;
label_217298:
    // 0x217298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x217298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21729c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21729cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2172a0: 0x4bed133c  vmove.xyzw  $vf13, $vf2
    ctx->pc = 0x2172a0u;
    ctx->vu0_vf[13] = ctx->vu0_vf[2];
    // 0x2172a4: 0x4a416b40  vaddx.z     $vf13, $vf13, $vf1x
    ctx->pc = 0x2172a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x2172a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2172ac: 0x0  nop
    ctx->pc = 0x2172acu;
    // NOP
label_2172b0:
    // 0x2172b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2172b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172b4: 0xc0614c6  jal         func_185318
    ctx->pc = 0x2172B4u;
    SET_GPR_U32(ctx, 31, 0x2172BCu);
    ctx->pc = 0x2172B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2172B4u;
            // 0x2172b8: 0xfbad0110  sqc2        $vf13, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172BCu; }
        if (ctx->pc != 0x2172BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172BCu; }
        if (ctx->pc != 0x2172BCu) { return; }
    }
    ctx->pc = 0x2172BCu;
    // 0x2172bc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2172bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2172c0: 0xdba80040  lqc2        $vf8, 0x40($sp)
    ctx->pc = 0x2172c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2172c4: 0xdba90050  lqc2        $vf9, 0x50($sp)
    ctx->pc = 0x2172c4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2172c8: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x2172c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2172cc: 0xdbaa0060  lqc2        $vf10, 0x60($sp)
    ctx->pc = 0x2172ccu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2172d0: 0xdbab0070  lqc2        $vf11, 0x70($sp)
    ctx->pc = 0x2172d0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2172d4: 0xda410040  lqc2        $vf1, 0x40($s2)
    ctx->pc = 0x2172d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2172d8: 0x4be120ac  vsub.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x2172d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2172dc: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x2172dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2172e0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x2172e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2172e4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x2172e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2172e8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x2172e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2172ec: 0xdbad0110  lqc2        $vf13, 0x110($sp)
    ctx->pc = 0x2172ecu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2172f0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x2172f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2172f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2172f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2172f8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x2172f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2172fc: 0x4a0002ff  vnop
    ctx->pc = 0x2172fcu;
    // NOP operation, no action needed for VU0
    // 0x217300: 0x4a0002ff  vnop
    ctx->pc = 0x217300u;
    // NOP operation, no action needed for VU0
    // 0x217304: 0x4be5133c  vmove.xyzw  $vf5, $vf2
    ctx->pc = 0x217304u;
    ctx->vu0_vf[5] = ctx->vu0_vf[2];
    // 0x217308: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x217308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21730c: 0x4bcd2afe  vopmula.xyz $ACC, $vf5, $vf13
    ctx->pc = 0x21730cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[13]);
    // 0x217310: 0x4bc568ae  vopmsub.xyz $vf2, $vf13, $vf5
    ctx->pc = 0x217310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217314: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x217314u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217318: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x217318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21731c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x21731cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217320: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x217320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217324: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x217324u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x217328: 0x4a0003bf  vwaitq
    ctx->pc = 0x217328u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x21732c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x21732cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217330: 0x4a0002ff  vnop
    ctx->pc = 0x217330u;
    // NOP operation, no action needed for VU0
    // 0x217334: 0x4a0002ff  vnop
    ctx->pc = 0x217334u;
    // NOP operation, no action needed for VU0
    // 0x217338: 0x4be3133c  vmove.xyzw  $vf3, $vf2
    ctx->pc = 0x217338u;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
    // 0x21733c: 0x4bc51afe  vopmula.xyz $ACC, $vf3, $vf5
    ctx->pc = 0x21733cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]);
    // 0x217340: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x217340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217344: 0x4bc3286e  vopmsub.xyz $vf1, $vf5, $vf3
    ctx->pc = 0x217344u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217348: 0x4be60b3c  vmove.xyzw  $vf6, $vf1
    ctx->pc = 0x217348u;
    ctx->vu0_vf[6] = ctx->vu0_vf[1];
    // 0x21734c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x21734cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217350: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x217350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x217354: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217358: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x217358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21735c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x21735cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x217360: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x217360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x217364: 0x4be341bc  vmulax.xyzw $ACC, $vf8, $vf3x
    ctx->pc = 0x217364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217368: 0x4be348bd  vmadday.xyzw $ACC, $vf9, $vf3y
    ctx->pc = 0x217368u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21736c: 0x4be350be  vmaddaz.xyzw $ACC, $vf10, $vf3z
    ctx->pc = 0x21736cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217370: 0x4be35b0b  vmaddw.xyzw $vf12, $vf11, $vf3w
    ctx->pc = 0x217370u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217374: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x217374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217378: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x217378u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21737c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x21737cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217380: 0x4be559cb  vmaddw.xyzw $vf7, $vf11, $vf5w
    ctx->pc = 0x217380u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217384: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x217384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217388: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x217388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21738c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x21738cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217390: 0x4be6588b  vmaddw.xyzw $vf2, $vf11, $vf6w
    ctx->pc = 0x217390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217394: 0x4be141bc  vmulax.xyzw $ACC, $vf8, $vf1x
    ctx->pc = 0x217394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217398: 0x4be148bd  vmadday.xyzw $ACC, $vf9, $vf1y
    ctx->pc = 0x217398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21739c: 0x4be150be  vmaddaz.xyzw $ACC, $vf10, $vf1z
    ctx->pc = 0x21739cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2173a0: 0x4be1584b  vmaddw.xyzw $vf1, $vf11, $vf1w
    ctx->pc = 0x2173a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2173a4: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x2173a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2173a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2173a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2173ac: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x2173acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2173b0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2173b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2173b4: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x2173b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2173b8: 0xf8870010  sqc2        $vf7, 0x10($a0)
    ctx->pc = 0x2173b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2173bc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2173BCu;
    {
        const bool branch_taken_0x2173bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2173BCu;
            // 0x2173c0: 0xf8820020  sqc2        $vf2, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173bc) {
            ctx->pc = 0x2174C8u;
            goto label_2174c8;
        }
    }
    ctx->pc = 0x2173C4u;
    // 0x2173c4: 0x26450074  addiu       $a1, $s2, 0x74
    ctx->pc = 0x2173c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
label_2173c8:
    // 0x2173c8: 0xd8a4000c  lqc2        $vf4, 0xC($a1)
    ctx->pc = 0x2173c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2173cc: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x2173ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2173d0: 0x4be410ac  vsub.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x2173d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2173d4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x2173d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2173d8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x2173d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2173dc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x2173dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2173e0: 0x4be5133c  vmove.xyzw  $vf5, $vf2
    ctx->pc = 0x2173e0u;
    ctx->vu0_vf[5] = ctx->vu0_vf[2];
    // 0x2173e4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x2173e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2173e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2173e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2173ec: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x2173ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2173f0: 0x4a0002ff  vnop
    ctx->pc = 0x2173f0u;
    // NOP operation, no action needed for VU0
    // 0x2173f4: 0x4a0002ff  vnop
    ctx->pc = 0x2173f4u;
    // NOP operation, no action needed for VU0
    // 0x2173f8: 0x4bcd2afe  vopmula.xyz $ACC, $vf5, $vf13
    ctx->pc = 0x2173f8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[13]);
    // 0x2173fc: 0x4bc568ae  vopmsub.xyz $vf2, $vf13, $vf5
    ctx->pc = 0x2173fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217400: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x217400u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217404: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x217404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217408: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x217408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21740c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x21740cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217410: 0x4be3133c  vmove.xyzw  $vf3, $vf2
    ctx->pc = 0x217410u;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
    // 0x217414: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x217414u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x217418: 0x4a0003bf  vwaitq
    ctx->pc = 0x217418u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x21741c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x21741cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217420: 0x4a0002ff  vnop
    ctx->pc = 0x217420u;
    // NOP operation, no action needed for VU0
    // 0x217424: 0x4a0002ff  vnop
    ctx->pc = 0x217424u;
    // NOP operation, no action needed for VU0
    // 0x217428: 0x4bc51afe  vopmula.xyz $ACC, $vf3, $vf5
    ctx->pc = 0x217428u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]);
    // 0x21742c: 0x4bc3286e  vopmsub.xyz $vf1, $vf5, $vf3
    ctx->pc = 0x21742cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217430: 0x4be60b3c  vmove.xyzw  $vf6, $vf1
    ctx->pc = 0x217430u;
    ctx->vu0_vf[6] = ctx->vu0_vf[1];
    // 0x217434: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x217434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217438: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x217438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x21743c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21743cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217440: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x217440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x217444: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x217444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217448: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x217448u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x21744c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217450: 0x4be341bc  vmulax.xyzw $ACC, $vf8, $vf3x
    ctx->pc = 0x217450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217454: 0x4be348bd  vmadday.xyzw $ACC, $vf9, $vf3y
    ctx->pc = 0x217454u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217458: 0x4be350be  vmaddaz.xyzw $ACC, $vf10, $vf3z
    ctx->pc = 0x217458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21745c: 0x4be35b0b  vmaddw.xyzw $vf12, $vf11, $vf3w
    ctx->pc = 0x21745cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217460: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x217460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217464: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x217464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217468: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x217468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21746c: 0x4be559cb  vmaddw.xyzw $vf7, $vf11, $vf5w
    ctx->pc = 0x21746cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217470: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x217470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217474: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x217474u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217478: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x217478u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21747c: 0x4be6588b  vmaddw.xyzw $vf2, $vf11, $vf6w
    ctx->pc = 0x21747cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217480: 0x4be141bc  vmulax.xyzw $ACC, $vf8, $vf1x
    ctx->pc = 0x217480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217484: 0x4be148bd  vmadday.xyzw $ACC, $vf9, $vf1y
    ctx->pc = 0x217484u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217488: 0x4be150be  vmaddaz.xyzw $ACC, $vf10, $vf1z
    ctx->pc = 0x217488u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21748c: 0x4be1584b  vmaddw.xyzw $vf1, $vf11, $vf1w
    ctx->pc = 0x21748cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217490: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x217490u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217494: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x217498: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x217498u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x21749c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x21749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2174a0: 0xf8870010  sqc2        $vf7, 0x10($a0)
    ctx->pc = 0x2174a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2174a4: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x2174a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2174a8: 0xf8820020  sqc2        $vf2, 0x20($a0)
    ctx->pc = 0x2174a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2174ac: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2174acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2174b0: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x2174b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2174b4: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2174B4u;
    {
        const bool branch_taken_0x2174b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2174B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2174B4u;
            // 0x2174b8: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174b4) {
            ctx->pc = 0x2173C8u;
            runtime->cooperativeGuestYield();
            goto label_2173c8;
        }
    }
    ctx->pc = 0x2174BCu;
    // 0x2174bc: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x2174bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2174c0: 0xfba500a0  sqc2        $vf5, 0xA0($sp)
    ctx->pc = 0x2174c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2174c4: 0x0  nop
    ctx->pc = 0x2174c4u;
    // NOP
label_2174c8:
    // 0x2174c8: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x2174c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2174cc: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x2174ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2174d0: 0x4be410ac  vsub.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x2174d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2174d4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x2174d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2174d8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x2174d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2174dc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x2174dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2174e0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x2174e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2174e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2174e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2174e8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x2174e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2174ec: 0x4a0002ff  vnop
    ctx->pc = 0x2174ecu;
    // NOP operation, no action needed for VU0
    // 0x2174f0: 0x4a0002ff  vnop
    ctx->pc = 0x2174f0u;
    // NOP operation, no action needed for VU0
    // 0x2174f4: 0x4be5133c  vmove.xyzw  $vf5, $vf2
    ctx->pc = 0x2174f4u;
    ctx->vu0_vf[5] = ctx->vu0_vf[2];
    // 0x2174f8: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x2174f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2174fc: 0x4bcd2afe  vopmula.xyz $ACC, $vf5, $vf13
    ctx->pc = 0x2174fcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[13]);
    // 0x217500: 0x4bc568ae  vopmsub.xyz $vf2, $vf13, $vf5
    ctx->pc = 0x217500u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217504: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x217504u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217508: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x217508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21750c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x21750cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217510: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x217510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217514: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x217514u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x217518: 0x4a0003bf  vwaitq
    ctx->pc = 0x217518u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x21751c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x21751cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217520: 0x4a0002ff  vnop
    ctx->pc = 0x217520u;
    // NOP operation, no action needed for VU0
    // 0x217524: 0x4a0002ff  vnop
    ctx->pc = 0x217524u;
    // NOP operation, no action needed for VU0
    // 0x217528: 0x4be3133c  vmove.xyzw  $vf3, $vf2
    ctx->pc = 0x217528u;
    ctx->vu0_vf[3] = ctx->vu0_vf[2];
    // 0x21752c: 0x4bc51afe  vopmula.xyz $ACC, $vf3, $vf5
    ctx->pc = 0x21752cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]);
    // 0x217530: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x217530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217534: 0x4bc3286e  vopmsub.xyz $vf1, $vf5, $vf3
    ctx->pc = 0x217534u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217538: 0x4be60b3c  vmove.xyzw  $vf6, $vf1
    ctx->pc = 0x217538u;
    ctx->vu0_vf[6] = ctx->vu0_vf[1];
    // 0x21753c: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    ctx->pc = 0x21753cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217540: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x217540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x217544: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217548: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x217548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21754c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x21754cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x217550: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x217550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x217554: 0x4be341bc  vmulax.xyzw $ACC, $vf8, $vf3x
    ctx->pc = 0x217554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217558: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x217558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x21755c: 0x4be348bd  vmadday.xyzw $ACC, $vf9, $vf3y
    ctx->pc = 0x21755cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217560: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x217560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x217564: 0x4be350be  vmaddaz.xyzw $ACC, $vf10, $vf3z
    ctx->pc = 0x217564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217568: 0x4be35b0b  vmaddw.xyzw $vf12, $vf11, $vf3w
    ctx->pc = 0x217568u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21756c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x21756cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217570: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x217570u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217574: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x217574u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217578: 0x4be559cb  vmaddw.xyzw $vf7, $vf11, $vf5w
    ctx->pc = 0x217578u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21757c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x21757cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217580: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x217580u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217584: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x217584u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217588: 0x4be6588b  vmaddw.xyzw $vf2, $vf11, $vf6w
    ctx->pc = 0x217588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21758c: 0x4be141bc  vmulax.xyzw $ACC, $vf8, $vf1x
    ctx->pc = 0x21758cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x217590: 0x4be148bd  vmadday.xyzw $ACC, $vf9, $vf1y
    ctx->pc = 0x217590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217594: 0x4be150be  vmaddaz.xyzw $ACC, $vf10, $vf1z
    ctx->pc = 0x217594u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217598: 0x4be1584b  vmaddw.xyzw $vf1, $vf11, $vf1w
    ctx->pc = 0x217598u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21759c: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x21759cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2175a0: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x2175a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2175a4: 0xf8870010  sqc2        $vf7, 0x10($a0)
    ctx->pc = 0x2175a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2175a8: 0xf8820020  sqc2        $vf2, 0x20($a0)
    ctx->pc = 0x2175a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2175ac: 0xdea2bdf8  ld          $v0, -0x4208($s5)
    ctx->pc = 0x2175acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x2175b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2175b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2175b4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2175b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2175b8: 0xfea2bdf8  sd          $v0, -0x4208($s5)
    ctx->pc = 0x2175b8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294950392), GPR_U64(ctx, 2));
    // 0x2175bc: 0x8c630104  lw          $v1, 0x104($v1)
    ctx->pc = 0x2175bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2175c0: 0xfc600040  sd          $zero, 0x40($v1)
    ctx->pc = 0x2175c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 0));
    // 0x2175c4: 0x0  nop
    ctx->pc = 0x2175c4u;
    // NOP
label_2175c8:
    // 0x2175c8: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x2175c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2175cc: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x2175ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2175d0: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x2175d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2175d4: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x2175d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2175d8: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x2175d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2175dc: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x2175dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2175e0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2175e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2175e4: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2175e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2175e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2175E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2175ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2175E8u;
            // 0x2175ec: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216EA0u: goto label_216ea0;
            case 0x216EF8u: goto label_216ef8;
            case 0x216F28u: goto label_216f28;
            case 0x216F68u: goto label_216f68;
            case 0x216FA0u: goto label_216fa0;
            case 0x216FE8u: goto label_216fe8;
            case 0x216FF0u: goto label_216ff0;
            case 0x217000u: goto label_217000;
            case 0x217040u: goto label_217040;
            case 0x217058u: goto label_217058;
            case 0x217074u: goto label_217074;
            case 0x217094u: goto label_217094;
            case 0x2170A8u: goto label_2170a8;
            case 0x2170E0u: goto label_2170e0;
            case 0x2170E8u: goto label_2170e8;
            case 0x217188u: goto label_217188;
            case 0x2171F0u: goto label_2171f0;
            case 0x217204u: goto label_217204;
            case 0x217210u: goto label_217210;
            case 0x217298u: goto label_217298;
            case 0x2172B0u: goto label_2172b0;
            case 0x2173C8u: goto label_2173c8;
            case 0x2174C8u: goto label_2174c8;
            case 0x2175C8u: goto label_2175c8;
            case 0x21761Cu: goto label_21761c;
            case 0x217628u: goto label_217628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2175F0u;
    // 0x2175f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2175f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2175f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2175f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2175f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2175f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2175fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2175fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217604: 0x8c43ed58  lw          $v1, -0x12A8($v0)
    ctx->pc = 0x217604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x217608: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x217608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x21760c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21760Cu;
    {
        const bool branch_taken_0x21760c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21760c) {
            ctx->pc = 0x217610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21760Cu;
            // 0x217610: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217628u;
            goto label_217628;
        }
    }
    ctx->pc = 0x217614u;
    // 0x217614: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x217614u;
    SET_GPR_U32(ctx, 31, 0x21761Cu);
    ctx->pc = 0x217618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217614u;
            // 0x217618: 0xae030380  sw          $v1, 0x380($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    runtime->cooperativeGuestYield();
    goto label_216ea0;
    ctx->pc = 0x21761Cu;
label_21761c:
    // 0x21761c: 0xc0859da  jal         func_216768
    ctx->pc = 0x21761Cu;
    SET_GPR_U32(ctx, 31, 0x217624u);
    ctx->pc = 0x217620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21761Cu;
            // 0x217620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216768u;
    if (runtime->hasFunction(0x216768u)) {
        auto targetFn = runtime->lookupFunction(0x216768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217624u; }
        if (ctx->pc != 0x217624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00216768_0x216768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217624u; }
        if (ctx->pc != 0x217624u) { return; }
    }
    ctx->pc = 0x217624u;
    // 0x217624: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x217624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217628:
    // 0x217628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21762c: 0x3e00008  jr          $ra
    ctx->pc = 0x21762Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21762Cu;
            // 0x217630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216EA0u: goto label_216ea0;
            case 0x216EF8u: goto label_216ef8;
            case 0x216F28u: goto label_216f28;
            case 0x216F68u: goto label_216f68;
            case 0x216FA0u: goto label_216fa0;
            case 0x216FE8u: goto label_216fe8;
            case 0x216FF0u: goto label_216ff0;
            case 0x217000u: goto label_217000;
            case 0x217040u: goto label_217040;
            case 0x217058u: goto label_217058;
            case 0x217074u: goto label_217074;
            case 0x217094u: goto label_217094;
            case 0x2170A8u: goto label_2170a8;
            case 0x2170E0u: goto label_2170e0;
            case 0x2170E8u: goto label_2170e8;
            case 0x217188u: goto label_217188;
            case 0x2171F0u: goto label_2171f0;
            case 0x217204u: goto label_217204;
            case 0x217210u: goto label_217210;
            case 0x217298u: goto label_217298;
            case 0x2172B0u: goto label_2172b0;
            case 0x2173C8u: goto label_2173c8;
            case 0x2174C8u: goto label_2174c8;
            case 0x2175C8u: goto label_2175c8;
            case 0x21761Cu: goto label_21761c;
            case 0x217628u: goto label_217628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217634u;
    // 0x217634: 0x0  nop
    ctx->pc = 0x217634u;
    // NOP
}
