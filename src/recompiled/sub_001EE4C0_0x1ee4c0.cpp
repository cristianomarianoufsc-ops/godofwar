#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE4C0
// Address: 0x1ee4c0 - 0x1ee738
void sub_001EE4C0_0x1ee4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE4C0_0x1ee4c0");
#endif

    ctx->pc = 0x1ee4c0u;

    // 0x1ee4c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1ee4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1ee4c4: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1ee4c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1ee4c8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1ee4c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1ee4cc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1ee4ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ee4d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ee4d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1ee4d4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1ee4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1ee4d8: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x1ee4d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee4dc: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1ee4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1ee4e0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1ee4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1ee4e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ee4e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4e8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1ee4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1ee4ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ee4ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4f0: 0x45010089  bc1t        . + 4 + (0x89 << 2)
    ctx->pc = 0x1EE4F0u;
    {
        const bool branch_taken_0x1ee4f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EE4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4F0u;
            // 0x1ee4f4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4f0) {
            ctx->pc = 0x1EE718u;
            goto label_1ee718;
        }
    }
    ctx->pc = 0x1EE4F8u;
    // 0x1ee4f8: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x1ee4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x1ee4fc: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x1ee4fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ee500: 0x78420070  lq          $v0, 0x70($v0)
    ctx->pc = 0x1ee500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1ee504: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ee504u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ee508: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1ee508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1ee50c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1ee50cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee510: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1ee510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee514: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1ee514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ee518: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ee518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ee51c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ee51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ee520: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ee520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee524: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x1ee524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1ee528: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1ee528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ee52c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1ee52cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ee530: 0xc44c07a8  lwc1        $f12, 0x7A8($v0)
    ctx->pc = 0x1ee530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ee534: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee538: 0x46000004  c1          0x4
    ctx->pc = 0x1ee538u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ee53c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1ee53cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1ee540: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1ee540u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x1ee544: 0xc060f2a  jal         func_183CA8
    ctx->pc = 0x1EE544u;
    SET_GPR_U32(ctx, 31, 0x1EE54Cu);
    ctx->pc = 0x183CA8u;
    if (runtime->hasFunction(0x183CA8u)) {
        auto targetFn = runtime->lookupFunction(0x183CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE54Cu; }
        if (ctx->pc != 0x1EE54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ca8_0x183d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE54Cu; }
        if (ctx->pc != 0x1EE54Cu) { return; }
    }
    ctx->pc = 0x1EE54Cu;
    // 0x1ee54c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ee54cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1ee550: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1ee550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee554: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ee554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ee558: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1ee558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ee55c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ee55cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee560: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1ee560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1ee564: 0xda230030  lqc2        $vf3, 0x30($s1)
    ctx->pc = 0x1ee564u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ee568: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1ee568u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee56c: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1ee56cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ee570: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1ee570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ee574: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ee574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee578: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ee578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee57c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ee57cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ee580: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ee580u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ee584: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1ee584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ee588: 0x4a0002ff  vnop
    ctx->pc = 0x1ee588u;
    // NOP operation, no action needed for VU0
    // 0x1ee58c: 0x4a0002ff  vnop
    ctx->pc = 0x1ee58cu;
    // NOP operation, no action needed for VU0
    // 0x1ee590: 0xda420790  lqc2        $vf2, 0x790($s2)
    ctx->pc = 0x1ee590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1936)));
    // 0x1ee594: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1ee594u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1ee598: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1ee598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ee59c: 0x4bc218ae  vopmsub.xyz $vf2, $vf3, $vf2
    ctx->pc = 0x1ee59cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ee5a0: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1ee5a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ee5a4: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x1ee5a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ee5a8: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1ee5a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee5ac: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1ee5acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee5b0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1ee5b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ee5b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ee5b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ee5b8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1ee5b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ee5bc: 0x4a0002ff  vnop
    ctx->pc = 0x1ee5bcu;
    // NOP operation, no action needed for VU0
    // 0x1ee5c0: 0x4a0002ff  vnop
    ctx->pc = 0x1ee5c0u;
    // NOP operation, no action needed for VU0
    // 0x1ee5c4: 0x4bc21afe  vopmula.xyz $ACC, $vf3, $vf2
    ctx->pc = 0x1ee5c4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]);
    // 0x1ee5c8: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1ee5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ee5cc: 0x4bc3106e  vopmsub.xyz $vf1, $vf2, $vf3
    ctx->pc = 0x1ee5ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ee5d0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ee5d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee5d4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1ee5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ee5d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ee5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ee5dc: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x1ee5dcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ee5e0: 0x7a260010  lq          $a2, 0x10($s1)
    ctx->pc = 0x1ee5e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ee5e4: 0x7a270020  lq          $a3, 0x20($s1)
    ctx->pc = 0x1ee5e4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ee5e8: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1ee5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ee5ec: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1EE5ECu;
    SET_GPR_U32(ctx, 31, 0x1EE5F4u);
    ctx->pc = 0x1EE5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5ECu;
            // 0x1ee5f0: 0xfba300b0  sqc2        $vf3, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5F4u; }
        if (ctx->pc != 0x1EE5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5F4u; }
        if (ctx->pc != 0x1EE5F4u) { return; }
    }
    ctx->pc = 0x1EE5F4u;
    // 0x1ee5f4: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1ee5f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ee5f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ee5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ee5fc: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1ee5fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ee600: 0x7ba60090  lq          $a2, 0x90($sp)
    ctx->pc = 0x1ee600u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ee604: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1ee604u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ee608: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ee608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee60c: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1EE60Cu;
    SET_GPR_U32(ctx, 31, 0x1EE614u);
    ctx->pc = 0x1EE610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE60Cu;
            // 0x1ee610: 0x48271800  qmfc2.ni    $a3, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE614u; }
        if (ctx->pc != 0x1EE614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE614u; }
        if (ctx->pc != 0x1EE614u) { return; }
    }
    ctx->pc = 0x1EE614u;
    // 0x1ee614: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x1ee614u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee618: 0x701024a9  por         $a0, $zero, $s0
    ctx->pc = 0x1ee618u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1ee61c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ee61cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ee620: 0xc061084  jal         func_184210
    ctx->pc = 0x1EE620u;
    SET_GPR_U32(ctx, 31, 0x1EE628u);
    ctx->pc = 0x1EE624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE620u;
            // 0x1ee624: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE628u; }
        if (ctx->pc != 0x1EE628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE628u; }
        if (ctx->pc != 0x1EE628u) { return; }
    }
    ctx->pc = 0x1EE628u;
    // 0x1ee628: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ee628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee62c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ee62cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ee630: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1ee630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1ee634: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1ee634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ee638: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1ee638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee63c: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x1ee63cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ee640: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x1ee640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1ee644: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1ee644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ee648: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x1ee648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee64c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee650: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1ee650u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ee654: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x1ee654u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee658: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ee658u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ee65c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee65cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee660: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x1ee660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ee664: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1ee664u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ee668: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ee668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee66c: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x1ee66cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee670: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1ee670u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ee674: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x1ee674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ee678: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1ee678u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ee67c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ee67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee680: 0x70c22b89  pcpyld      $a1, $a2, $v0
    ctx->pc = 0x1ee680u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1ee684: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x1ee684u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee688: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x1ee688u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1ee68c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ee68cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ee690: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee694: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x1ee694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x1ee698: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x1ee698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee69c: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x1ee69cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee6a0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1ee6a0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ee6a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ee6a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6a8: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1ee6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ee6ac: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1ee6acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ee6b0: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1ee6b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee6b4: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1ee6b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee6b8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1ee6b8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ee6bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ee6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6c0: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x1ee6c0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1ee6c4: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1ee6c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee6c8: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x1ee6c8u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1ee6cc: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x1ee6ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ee6d0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1ee6d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ee6d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee6d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6d8: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x1ee6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ee6dc: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1ee6dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ee6e0: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1ee6e0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ee6e4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1ee6e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6e8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x1ee6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x1ee6ec: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x1ee6ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1ee6f0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1ee6f0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ee6f4: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x1ee6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
    // 0x1ee6f8: 0x48263000  qmfc2.ni    $a2, $vf6
    ctx->pc = 0x1ee6f8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1ee6fc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1ee6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee700: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x1ee700u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
    // 0x1ee704: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1ee704u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1ee708: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1ee708u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ee70c: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x1ee70cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x1ee710: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1ee710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1ee714: 0x0  nop
    ctx->pc = 0x1ee714u;
    // NOP
label_1ee718:
    // 0x1ee718: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1ee718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ee71c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1ee71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ee720: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1ee720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ee724: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1ee724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ee728: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1ee728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ee72c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1ee72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ee730: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE730u;
            // 0x1ee734: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE718u: goto label_1ee718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE738u;
}
