#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001237E8
// Address: 0x1237e8 - 0x123ad8
void sub_001237E8_0x1237e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001237E8_0x1237e8");
#endif

    ctx->pc = 0x1237e8u;

    // 0x1237e8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1237e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1237ec: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1237ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1237f0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1237f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1237f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1237f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237f8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1237f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1237fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1237fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123800: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x123800u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x123804: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x123804u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x123808: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x123808u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x12380c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x12380cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x123810: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x123810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x123814: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123814u;
    SET_GPR_U32(ctx, 31, 0x12381Cu);
    ctx->pc = 0x123818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123814u;
            // 0x123818: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12381Cu; }
        if (ctx->pc != 0x12381Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12381Cu; }
        if (ctx->pc != 0x12381Cu) { return; }
    }
    ctx->pc = 0x12381Cu;
    // 0x12381c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x12381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x123820: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x123820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x123824: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x123824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x123828: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x123828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x12382c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12382cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x123830: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x123830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x123834: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x123834u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x123838: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x123838u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x12383c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x12383Cu;
    SET_GPR_U32(ctx, 31, 0x123844u);
    ctx->pc = 0x123840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12383Cu;
            // 0x123840: 0x4616ad41  sub.s       $f21, $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123844u; }
        if (ctx->pc != 0x123844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123844u; }
        if (ctx->pc != 0x123844u) { return; }
    }
    ctx->pc = 0x123844u;
    // 0x123844: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x123844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x123848: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x123848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x12384c: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x12384cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x123850: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x123850u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x123854: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123854u;
    SET_GPR_U32(ctx, 31, 0x12385Cu);
    ctx->pc = 0x123858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123854u;
            // 0x123858: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12385Cu; }
        if (ctx->pc != 0x12385Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12385Cu; }
        if (ctx->pc != 0x12385Cu) { return; }
    }
    ctx->pc = 0x12385Cu;
    // 0x12385c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x123860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x123864: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x123864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x123868: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x123868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x12386c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x12386cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x123870: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x123870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x123874: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x123874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x123878: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x123878u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x12387c: 0x4407b000  mfc1        $a3, $f22
    ctx->pc = 0x12387cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x123880: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x123880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x123884: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x123884u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x123888: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x123888u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12388c: 0x48a42800  qmtc2.ni    $a0, $vf5
    ctx->pc = 0x12388cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x123890: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x123890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123894: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x123894u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123898: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x123898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12389c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12389cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1238a0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1238a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1238a4: 0x4be42b3c  vmove.xyzw  $vf4, $vf5
    ctx->pc = 0x1238a4u;
    ctx->vu0_vf[4] = ctx->vu0_vf[5];
    // 0x1238a8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1238a8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1238ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x1238acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1238b0: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x1238b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1238b4: 0x4a0002ff  vnop
    ctx->pc = 0x1238b4u;
    // NOP operation, no action needed for VU0
    // 0x1238b8: 0x4a0002ff  vnop
    ctx->pc = 0x1238b8u;
    // NOP operation, no action needed for VU0
    // 0x1238bc: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1238bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1238c0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1238c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1238c4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1238c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1238c8: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x1238c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1238cc: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1238ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1238d0: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1238d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1238d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1238d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1238d8: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1238dc: 0x70a61b89  pcpyld      $v1, $a1, $a2
    ctx->pc = 0x1238dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1238e0: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1238e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1238e4: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x1238e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1238e8: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x1238e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1238ec: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1238ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1238f0: 0x8c860048  lw          $a2, 0x48($a0)
    ctx->pc = 0x1238f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1238f4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1238f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1238f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1238f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1238fc: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1238fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x123900: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x123900u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x123904: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x123904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123908: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x123908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12390c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x12390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x123910: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x123910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123914: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x123914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123918: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x123918u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x12391c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x12391cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123920: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x123920u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x123924: 0x704344c8  ppacw       $t0, $v0, $v1
    ctx->pc = 0x123924u;
    SET_GPR_VEC(ctx, 8, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x123928: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x123928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x12392c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x12392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123930: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x123930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123934: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x123934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123938: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x123938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12393c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x12393cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123940: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x123940u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x123944: 0x4a0003bf  vwaitq
    ctx->pc = 0x123944u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x123948: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x123948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12394c: 0x4a0002ff  vnop
    ctx->pc = 0x12394cu;
    // NOP operation, no action needed for VU0
    // 0x123950: 0x4a0002ff  vnop
    ctx->pc = 0x123950u;
    // NOP operation, no action needed for VU0
    // 0x123954: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x123954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123958: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x123958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12395c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x12395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x123960: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x123960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x123964: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x123964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123968: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x123968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12396c: 0x4be22128  vadd.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x12396cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x123970: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x123970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x123974: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x123974u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x123978: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x123978u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12397c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x12397cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123980: 0x4bc50afe  vopmula.xyz $ACC, $vf1, $vf5
    ctx->pc = 0x123980u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]);
    // 0x123984: 0x4bc1286e  vopmsub.xyz $vf1, $vf5, $vf1
    ctx->pc = 0x123984u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123988: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x123988u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12398c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x12398cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123990: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x123990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123994: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x123994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123998: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x123998u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12399c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12399cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1239a0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1239a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1239a4: 0x4a0002ff  vnop
    ctx->pc = 0x1239a4u;
    // NOP operation, no action needed for VU0
    // 0x1239a8: 0x4a0002ff  vnop
    ctx->pc = 0x1239a8u;
    // NOP operation, no action needed for VU0
    // 0x1239ac: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1239acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1239b0: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x1239b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1239b4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1239b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1239b8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1239b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1239bc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1239bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1239c0: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1239c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1239c4: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1239C4u;
    SET_GPR_U32(ctx, 31, 0x1239CCu);
    ctx->pc = 0x1239C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1239C4u;
            // 0x1239c8: 0xfba400e0  sqc2        $vf4, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1239CCu; }
        if (ctx->pc != 0x1239CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1239CCu; }
        if (ctx->pc != 0x1239CCu) { return; }
    }
    ctx->pc = 0x1239CCu;
    // 0x1239cc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1239ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1239d0: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1239d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1239d4: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1239d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1239d8: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x1239d8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x1239dc: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1239dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1239e0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1239E0u;
    SET_GPR_U32(ctx, 31, 0x1239E8u);
    ctx->pc = 0x1239E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1239E0u;
            // 0x1239e4: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1239E8u; }
        if (ctx->pc != 0x1239E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1239E8u; }
        if (ctx->pc != 0x1239E8u) { return; }
    }
    ctx->pc = 0x1239E8u;
    // 0x1239e8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1239e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1239ec: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1239ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1239f0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1239f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1239f4: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x1239f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x1239f8: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1239f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1239fc: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1239FCu;
    SET_GPR_U32(ctx, 31, 0x123A04u);
    ctx->pc = 0x123A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1239FCu;
            // 0x123a00: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123A04u; }
        if (ctx->pc != 0x123A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123A04u; }
        if (ctx->pc != 0x123A04u) { return; }
    }
    ctx->pc = 0x123A04u;
    // 0x123a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123a08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x123a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x123a0c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x123a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123a10: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x123a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x123a14: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x123a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123a18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x123a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x123a1c: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x123a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x123a20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x123a20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a24: 0x4407a800  mfc1        $a3, $f21
    ctx->pc = 0x123a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x123a28: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x123a28u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x123a2c: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x123a2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x123a30: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x123a30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x123a34: 0x71061389  pcpyld      $v0, $t0, $a2
    ctx->pc = 0x123a34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x123a38: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x123a38u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x123a3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x123a40: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x123a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x123a44: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x123a44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x123a48: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x123a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x123a4c: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x123a4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x123a50: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x123a50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123a54: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x123a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x123a58: 0x8c42bde8  lw          $v0, -0x4218($v0)
    ctx->pc = 0x123a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x123a5c: 0xd84100c0  lqc2        $vf1, 0xC0($v0)
    ctx->pc = 0x123a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x123a60: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x123a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x123a64: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x123a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123a68: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x123a68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x123a6c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x123a6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123a70: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x123a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x123a74: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x123a74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123a78: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x123a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x123a7c: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x123a7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123a80: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x123a80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123a84: 0xd8410100  lqc2        $vf1, 0x100($v0)
    ctx->pc = 0x123a84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x123a88: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x123a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x123a8c: 0x4be409bc  vmulax.xyzw $ACC, $vf1, $vf4x
    ctx->pc = 0x123a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123a90: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x123a90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x123a94: 0x4be408bd  vmadday.xyzw $ACC, $vf1, $vf4y
    ctx->pc = 0x123a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123a98: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x123a98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x123a9c: 0x4be408be  vmaddaz.xyzw $ACC, $vf1, $vf4z
    ctx->pc = 0x123a9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123aa0: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x123aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x123aa4: 0x4be4084b  vmaddw.xyzw $vf1, $vf1, $vf4w
    ctx->pc = 0x123aa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123aa8: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x123aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123aac: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x123aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x123ab0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x123ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x123ab4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x123ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x123ab8: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x123ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x123abc: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x123abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x123ac0: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x123ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x123ac4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x123ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x123ac8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x123ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x123acc: 0x3e00008  jr          $ra
    ctx->pc = 0x123ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123ACCu;
            // 0x123ad0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123AD4u;
    // 0x123ad4: 0x0  nop
    ctx->pc = 0x123ad4u;
    // NOP
}
