#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116708
// Address: 0x116708 - 0x116ac8
void sub_00116708_0x116708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116708_0x116708");
#endif

    ctx->pc = 0x116708u;

    // 0x116708: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x116708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x11670c: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x11670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x116710: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x116710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x116714: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x116714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116718: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x116718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x11671c: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x11671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x116720: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x116720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116724: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x116724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x116728: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x116728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11672c: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x11672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x116730: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x116730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x116734: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x116734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x116738: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x116738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x11673c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x11673cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x116740: 0x8e150060  lw          $s5, 0x60($s0)
    ctx->pc = 0x116740u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x116744: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x116744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116748: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x116748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11674c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x11674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x116750: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x116750u;
    {
        const bool branch_taken_0x116750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116750u;
            // 0x116754: 0x8e140064  lw          $s4, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116750) {
            ctx->pc = 0x116900u;
            goto label_116900;
        }
    }
    ctx->pc = 0x116758u;
    // 0x116758: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x116758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11675c: 0x3c0139c9  lui         $at, 0x39C9
    ctx->pc = 0x11675cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14793 << 16));
    // 0x116760: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x116760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x116764: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x116764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x116768: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x116768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11676c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116770: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x116770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116774: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x116774u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x116778: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x116778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11677c: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x11677cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x116780: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x116780u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x116784: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x116784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x116788: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x116788u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x11678c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x11678cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116790: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x116790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x116794: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x116794u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116798: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x116798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x11679c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11679cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1167a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1167a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1167a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1167a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1167a8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1167a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1167ac: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1167acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1167b0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1167b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1167b4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1167b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1167b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1167b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1167bc: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x1167bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1167c0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1167c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1167c4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1167c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1167c8: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1167c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1167cc: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x1167ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1167d0: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1167d0u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1167d4: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x1167d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1167d8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1167d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1167dc: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1167dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1167e0: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1167e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1167e4: 0xfba30120  sqc2        $vf3, 0x120($sp)
    ctx->pc = 0x1167e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1167e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1167e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1167ec: 0x4a221082  vaddz.w     $vf2, $vf2, $vf2z
    ctx->pc = 0x1167ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1167f0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1167f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1167f4: 0x4b020843  vaddw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x1167f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1167f8: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1167f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1167fc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1167fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x116800: 0x4a0003bf  vwaitq
    ctx->pc = 0x116800u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x116804: 0x4be0191c  vmulq.xyzw  $vf4, $vf3, $Q
    ctx->pc = 0x116804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x116808: 0x4a0002ff  vnop
    ctx->pc = 0x116808u;
    // NOP operation, no action needed for VU0
    // 0x11680c: 0x4a0002ff  vnop
    ctx->pc = 0x11680cu;
    // NOP operation, no action needed for VU0
    // 0x116810: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x116810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x116814: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x116814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x116818: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x116818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x11681c: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x11681cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116820: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x116820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x116824: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x116824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x116828: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x116828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11682c: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x11682cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116830: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x116830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x116834: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x116834u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x116838: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x116838u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11683c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x11683cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116840: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116844: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x116844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x116848: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x116848u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11684c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11684cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116850: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x116850u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116854: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x116854u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x116858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11685c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x11685cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116860: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x116860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116864: 0x70c22b89  pcpyld      $a1, $a2, $v0
    ctx->pc = 0x116864u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x116868: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x116868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11686c: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x11686cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x116870: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x116870u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116874: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116878: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x116878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x11687c: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x11687cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116880: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x116880u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116884: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x116884u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116888: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x116888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11688c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11688cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116890: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x116890u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x116894: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x116894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x116898: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x116898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11689c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x11689cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1168a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1168a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168a4: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x1168a4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1168a8: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1168a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1168ac: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x1168acu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1168b0: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x1168b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1168b4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1168b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1168b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1168b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168bc: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x1168bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1168c0: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1168c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1168c4: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1168c4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1168c8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1168c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168cc: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x1168ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x1168d0: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x1168d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1168d4: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1168d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1168d8: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1168d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1168dc: 0x48263000  qmfc2.ni    $a2, $vf6
    ctx->pc = 0x1168dcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1168e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1168e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168e4: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x1168e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x1168e8: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1168e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1168ec: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1168ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1168f0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1168f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1168f4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1168F4u;
    {
        const bool branch_taken_0x1168f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1168F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1168F4u;
            // 0x1168f8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168f4) {
            ctx->pc = 0x1169A8u;
            goto label_1169a8;
        }
    }
    ctx->pc = 0x1168FCu;
    // 0x1168fc: 0x0  nop
    ctx->pc = 0x1168fcu;
    // NOP
label_116900:
    // 0x116900: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x116900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x116904: 0x3c0139c9  lui         $at, 0x39C9
    ctx->pc = 0x116904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14793 << 16));
    // 0x116908: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x116908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x11690c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11690cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x116910: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x116910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116914: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116918: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x116918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11691c: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x11691cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x116920: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x116920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116924: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x116924u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x116928: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x116928u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x11692c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x11692cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x116930: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x116930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x116934: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x116934u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116938: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x116938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11693c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11693cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116940: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x116940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x116944: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x116944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x116948: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x116948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11694c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11694cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x116950: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x116950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x116954: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x116954u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x116958: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x116958u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x11695c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x11695cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x116960: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x116960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x116964: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x116964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x116968: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x116968u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x11696c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x11696cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x116970: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x116970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x116974: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x116974u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x116978: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x116978u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11697c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116980: 0x70021f89  pexew       $v1, $v0
    ctx->pc = 0x116980u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x116984: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x116984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x116988: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x116988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x11698c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11698cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116990: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x116990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x116994: 0x70021fc9  prot3w      $v1, $v0
    ctx->pc = 0x116994u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x116998: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x116998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11699c: 0xc06126a  jal         func_1849A8
    ctx->pc = 0x11699Cu;
    SET_GPR_U32(ctx, 31, 0x1169A4u);
    ctx->pc = 0x1849A8u;
    if (runtime->hasFunction(0x1849A8u)) {
        auto targetFn = runtime->lookupFunction(0x1849A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169A4u; }
        if (ctx->pc != 0x1169A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849A8_0x1849a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1169A4u; }
        if (ctx->pc != 0x1169A4u) { return; }
    }
    ctx->pc = 0x1169A4u;
    // 0x1169a4: 0x0  nop
    ctx->pc = 0x1169a4u;
    // NOP
label_1169a8:
    // 0x1169a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1169a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1169ac: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1169acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1169b0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1169B0u;
    {
        const bool branch_taken_0x1169b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1169B0u;
            // 0x1169b4: 0xdba10000  lqc2        $vf1, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169b0) {
            ctx->pc = 0x116A28u;
            goto label_116a28;
        }
    }
    ctx->pc = 0x1169B8u;
    // 0x1169b8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1169b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1169bc: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x1169bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1169c0: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x1169c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1169c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1169c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1169c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1169c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1169cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1169ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1169d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1169d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1169d4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1169d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1169d8: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1169d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1169dc: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1169dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1169e0: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1169e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1169e4: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x1169e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1169e8: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1169e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1169ec: 0x4be1204a  vmaddz.xyzw $vf1, $vf4, $vf1z
    ctx->pc = 0x1169ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1169f0: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x1169f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1169f4: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1169f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1169f8: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x1169f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1169fc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1169fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116a00: 0x4be2208a  vmaddz.xyzw $vf2, $vf4, $vf2z
    ctx->pc = 0x116a00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x116a04: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x116a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x116a08: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x116a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x116a0c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x116a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x116a10: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x116a10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x116a14: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x116a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x116a18: 0x4be3210a  vmaddz.xyzw $vf4, $vf4, $vf3z
    ctx->pc = 0x116a18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x116a1c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x116a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x116a20: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x116a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x116a24: 0x0  nop
    ctx->pc = 0x116a24u;
    // NOP
label_116a28:
    // 0x116a28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x116a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116a2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116a30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x116A30u;
    {
        const bool branch_taken_0x116a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116A30u;
            // 0x116a34: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a30) {
            ctx->pc = 0x116A70u;
            goto label_116a70;
        }
    }
    ctx->pc = 0x116A38u;
    // 0x116a38: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x116a38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116a3c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x116a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x116a40: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x116a40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116a44: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x116a44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116a48: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x116a48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116a4c: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x116a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x116a50: 0x4be1109a  vmulz.xyzw  $vf2, $vf2, $vf1z
    ctx->pc = 0x116a50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x116a54: 0x4be118d9  vmuly.xyzw  $vf3, $vf3, $vf1y
    ctx->pc = 0x116a54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x116a58: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x116a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x116a5c: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x116a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x116a60: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x116a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x116a64: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x116a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x116a68: 0xfba300f0  sqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x116a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x116a6c: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x116a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
label_116a70:
    // 0x116a70: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x116a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x116a74: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x116a74u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116a78: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x116a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x116a7c: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x116a7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116a80: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x116a80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116a84: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x116a84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116a88: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x116a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a8c: 0x7e460000  sq          $a2, 0x0($s2)
    ctx->pc = 0x116a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 6));
    // 0x116a90: 0x7e450010  sq          $a1, 0x10($s2)
    ctx->pc = 0x116a90u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 5));
    // 0x116a94: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x116a94u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
    // 0x116a98: 0x7e440030  sq          $a0, 0x30($s2)
    ctx->pc = 0x116a98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 4));
    // 0x116a9c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x116a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x116aa0: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x116aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x116aa4: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x116aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x116aa8: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x116aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x116aac: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x116aacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x116ab0: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x116ab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x116ab4: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x116ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x116ab8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x116ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x116abc: 0x3e00008  jr          $ra
    ctx->pc = 0x116ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116ABCu;
            // 0x116ac0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116900u: goto label_116900;
            case 0x1169A8u: goto label_1169a8;
            case 0x116A28u: goto label_116a28;
            case 0x116A70u: goto label_116a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116AC4u;
    // 0x116ac4: 0x0  nop
    ctx->pc = 0x116ac4u;
    // NOP
}
