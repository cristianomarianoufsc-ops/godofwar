#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA0B8
// Address: 0x1ea0b8 - 0x1ea310
void sub_001EA0B8_0x1ea0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA0B8_0x1ea0b8");
#endif

    ctx->pc = 0x1ea0b8u;

    // 0x1ea0b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ea0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ea0bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ea0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ea0c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1ea0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1ea0c4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1ea0c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ea0c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0cc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1ea0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1ea0d0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1ea0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1ea0d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ea0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ea0d8: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1ea0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea0dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ea0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ea0e0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1ea0e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1ea0e4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1ea0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1ea0e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1EA0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA0F0u);
        ctx->pc = 0x1EA0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0E8u;
            // 0x1ea0ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EA0F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA208u: goto label_1ea208;
            case 0x1EA280u: goto label_1ea280;
            case 0x1EA2B8u: goto label_1ea2b8;
            case 0x1EA2BCu: goto label_1ea2bc;
            case 0x1EA2CCu: goto label_1ea2cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0F0u; }
            if (ctx->pc != 0x1EA0F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1EA0F0u;
    // 0x1ea0f0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ea0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ea0f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea0f8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ea0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ea0fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ea0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ea100: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ea100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ea104: 0xc603016c  lwc1        $f3, 0x16C($s0)
    ctx->pc = 0x1ea104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ea108: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1ea108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1ea10c: 0xc6010280  lwc1        $f1, 0x280($s0)
    ctx->pc = 0x1ea10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea110: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ea110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ea114: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x1ea114u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea118: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ea118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ea11c: 0x45010066  bc1t        . + 4 + (0x66 << 2)
    ctx->pc = 0x1EA11Cu;
    {
        const bool branch_taken_0x1ea11c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA11Cu;
            // 0x1ea120: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea11c) {
            ctx->pc = 0x1EA2B8u;
            goto label_1ea2b8;
        }
    }
    ctx->pc = 0x1EA124u;
    // 0x1ea124: 0xc60002b0  lwc1        $f0, 0x2B0($s0)
    ctx->pc = 0x1ea124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea128: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x1ea128u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea12c: 0x45000063  bc1f        . + 4 + (0x63 << 2)
    ctx->pc = 0x1EA12Cu;
    {
        const bool branch_taken_0x1ea12c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea12c) {
            ctx->pc = 0x1EA2BCu;
            goto label_1ea2bc;
        }
    }
    ctx->pc = 0x1EA134u;
    // 0x1ea134: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1EA134u;
    SET_GPR_U32(ctx, 31, 0x1EA13Cu);
    ctx->pc = 0x1EA138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA134u;
            // 0x1ea138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA13Cu; }
        if (ctx->pc != 0x1EA13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA13Cu; }
        if (ctx->pc != 0x1EA13Cu) { return; }
    }
    ctx->pc = 0x1EA13Cu;
    // 0x1ea13c: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1ea13cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ea140: 0xda010270  lqc2        $vf1, 0x270($s0)
    ctx->pc = 0x1ea140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1ea144: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1ea144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea148: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ea148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea14c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1ea14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ea150: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ea150u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea154: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ea154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea158: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ea158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea15c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1ea15cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ea160: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1ea160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea164: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1ea164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea168: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ea168u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ea16c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ea16cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ea170: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1ea170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea174: 0x4a0002ff  vnop
    ctx->pc = 0x1ea174u;
    // NOP operation, no action needed for VU0
    // 0x1ea178: 0x4a0002ff  vnop
    ctx->pc = 0x1ea178u;
    // NOP operation, no action needed for VU0
    // 0x1ea17c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1ea17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1ea180: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1ea180u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea184: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ea184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea188: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1ea188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea18c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1ea18cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea190: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1ea190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea194: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1ea194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1ea198: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ea198u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ea19c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1ea19cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea1a0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1ea1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea1a4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1ea1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ea1a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ea1a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ea1ac: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1ea1acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea1b0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1ea1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea1b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ea1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ea1b8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1ea1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1ea1bc: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1ea1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1ea1c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1EA1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA1C8u);
        ctx->pc = 0x1EA1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1C0u;
            // 0x1ea1c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EA1C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA208u: goto label_1ea208;
            case 0x1EA280u: goto label_1ea280;
            case 0x1EA2B8u: goto label_1ea2b8;
            case 0x1EA2BCu: goto label_1ea2bc;
            case 0x1EA2CCu: goto label_1ea2cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1C8u; }
            if (ctx->pc != 0x1EA1C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1EA1C8u;
    // 0x1ea1c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ea1c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ea1cc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1ea1ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1ea1d0: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1ea1d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea1d4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1ea1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea1d8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ea1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea1dc: 0x8e050284  lw          $a1, 0x284($s0)
    ctx->pc = 0x1ea1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x1ea1e0: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EA1E0u;
    {
        const bool branch_taken_0x1ea1e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1EA1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1E0u;
            // 0x1ea1e4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1e0) {
            ctx->pc = 0x1EA208u;
            goto label_1ea208;
        }
    }
    ctx->pc = 0x1EA1E8u;
    // 0x1ea1e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ea1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ea1ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ea1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea1f0: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1EA1F0u;
    SET_GPR_U32(ctx, 31, 0x1EA1F8u);
    ctx->pc = 0x1EA1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1F0u;
            // 0x1ea1f4: 0x8c441184  lw          $a0, 0x1184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1F8u; }
        if (ctx->pc != 0x1EA1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1F8u; }
        if (ctx->pc != 0x1EA1F8u) { return; }
    }
    ctx->pc = 0x1EA1F8u;
    // 0x1ea1f8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1ea1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1ea1fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ea1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ea200: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1ea200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1ea204: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1ea204u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_1ea208:
    // 0x1ea208: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1ea208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1ea20c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ea20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ea210: 0x8443cc9c  lh          $v1, -0x3364($v0)
    ctx->pc = 0x1ea210u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954140)));
    // 0x1ea214: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ea214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ea218: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ea218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ea21c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1ea21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ea220: 0x24425ea8  addiu       $v0, $v0, 0x5EA8
    ctx->pc = 0x1ea220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
    // 0x1ea224: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea228: 0xc4740004  lwc1        $f20, 0x4($v1)
    ctx->pc = 0x1ea228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea22c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ea22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ea230: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x1ea230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1ea234: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ea234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ea238: 0x8ca4cd58  lw          $a0, -0x32A8($a1)
    ctx->pc = 0x1ea238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954328)));
    // 0x1ea23c: 0x24512b20  addiu       $s1, $v0, 0x2B20
    ctx->pc = 0x1ea23cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11040));
    // 0x1ea240: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ea240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea244: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x1ea244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
    // 0x1ea248: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ea248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ea24c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ea24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ea250: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ea250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea254: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1EA254u;
    SET_GPR_U32(ctx, 31, 0x1EA25Cu);
    ctx->pc = 0x1EA258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA254u;
            // 0x1ea258: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA25Cu; }
        if (ctx->pc != 0x1EA25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA25Cu; }
        if (ctx->pc != 0x1EA25Cu) { return; }
    }
    ctx->pc = 0x1EA25Cu;
    // 0x1ea25c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA25Cu;
    {
        const bool branch_taken_0x1ea25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA25Cu;
            // 0x1ea260: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea25c) {
            ctx->pc = 0x1EA280u;
            goto label_1ea280;
        }
    }
    ctx->pc = 0x1EA264u;
    // 0x1ea264: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1ea264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ea268: 0x90422d3d  lbu         $v0, 0x2D3D($v0)
    ctx->pc = 0x1ea268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x1ea26c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1ea26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ea270: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1ea270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1ea274: 0xc440fe64  lwc1        $f0, -0x19C($v0)
    ctx->pc = 0x1ea274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea278: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1ea278u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ea27c: 0x0  nop
    ctx->pc = 0x1ea27cu;
    // NOP
label_1ea280:
    // 0x1ea280: 0xc60c0280  lwc1        $f12, 0x280($s0)
    ctx->pc = 0x1ea280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ea284: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1ea284u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea288: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1ea288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1ea28c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea290: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1ea290u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1ea294: 0x8e070284  lw          $a3, 0x284($s0)
    ctx->pc = 0x1ea294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x1ea298: 0x7ba80010  lq          $t0, 0x10($sp)
    ctx->pc = 0x1ea298u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea29c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ea29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea2a0: 0xc080eba  jal         func_203AE8
    ctx->pc = 0x1EA2A0u;
    SET_GPR_U32(ctx, 31, 0x1EA2A8u);
    ctx->pc = 0x1EA2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2A0u;
            // 0x1ea2a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203AE8u;
    if (runtime->hasFunction(0x203AE8u)) {
        auto targetFn = runtime->lookupFunction(0x203AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2A8u; }
        if (ctx->pc != 0x1EA2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203AE8_0x203ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2A8u; }
        if (ctx->pc != 0x1EA2A8u) { return; }
    }
    ctx->pc = 0x1EA2A8u;
    // 0x1ea2a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ea2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea2b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA2B0u;
    {
        const bool branch_taken_0x1ea2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2B0u;
            // 0x1ea2b4: 0xe60002b0  swc1        $f0, 0x2B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2b0) {
            ctx->pc = 0x1EA2CCu;
            goto label_1ea2cc;
        }
    }
    ctx->pc = 0x1EA2B8u;
label_1ea2b8:
    // 0x1ea2b8: 0xc60002b0  lwc1        $f0, 0x2B0($s0)
    ctx->pc = 0x1ea2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea2bc:
    // 0x1ea2bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ea2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea2c0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1ea2c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1ea2c4: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1ea2c4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1ea2c8: 0xe60102b0  swc1        $f1, 0x2B0($s0)
    ctx->pc = 0x1ea2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
label_1ea2cc:
    // 0x1ea2cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ea2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ea2d0: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1ea2d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1ea2d4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x1ea2d8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ea2d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea2dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ea2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ea2e0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1ea2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1ea2e4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1ea2e4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea2e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ea2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea2ec: 0x40f809  jalr        $v0
    ctx->pc = 0x1EA2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA2F4u);
        ctx->pc = 0x1EA2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2ECu;
            // 0x1ea2f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EA2F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA208u: goto label_1ea208;
            case 0x1EA280u: goto label_1ea280;
            case 0x1EA2B8u: goto label_1ea2b8;
            case 0x1EA2BCu: goto label_1ea2bc;
            case 0x1EA2CCu: goto label_1ea2cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2F4u; }
            if (ctx->pc != 0x1EA2F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EA2F4u;
    // 0x1ea2f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1ea2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ea2f8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1ea2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ea2fc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1ea2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea300: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ea300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea304: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1ea304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea308: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA308u;
            // 0x1ea30c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA208u: goto label_1ea208;
            case 0x1EA280u: goto label_1ea280;
            case 0x1EA2B8u: goto label_1ea2b8;
            case 0x1EA2BCu: goto label_1ea2bc;
            case 0x1EA2CCu: goto label_1ea2cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA310u;
}
