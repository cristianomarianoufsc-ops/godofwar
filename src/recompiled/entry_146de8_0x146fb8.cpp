#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_146de8
// Address: 0x146de8 - 0x146fb8
void entry_146de8_0x146fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_146de8_0x146fb8");
#endif

    ctx->pc = 0x146de8u;

    // 0x146de8: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x146de8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x146dec: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x146decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146df0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x146df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x146df4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x146df4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x146df8: 0x4b0200c3  vaddw.x     $vf3, $vf0, $vf2w
    ctx->pc = 0x146df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x146dfc: 0x4b010103  vaddw.x     $vf4, $vf0, $vf1w
    ctx->pc = 0x146dfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x146e00: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x146e00u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x146e04: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x146e04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x146e08: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x146e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x146e0c: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x146e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x146e10: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x146e10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x146e14: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x146e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x146e18: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x146e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x146e1c: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x146e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x146e20: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x146e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x146e24: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x146e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x146e28: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x146e28u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x146e2c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x146e2cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x146e30: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x146e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x146e34: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x146e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x146e38: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x146e38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x146e3c: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x146e3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x146e40: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x146e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x146e44: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x146e44u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x146e48: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x146e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146e4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x146e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x146e50: 0x700717c9  prot3w      $v0, $a3
    ctx->pc = 0x146e50u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x146e54: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x146e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x146e58: 0x46091182  mul.s       $f6, $f2, $f9
    ctx->pc = 0x146e58u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x146e5c: 0x460f2402  mul.s       $f16, $f4, $f15
    ctx->pc = 0x146e5cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[4], ctx->f[15]);
    // 0x146e60: 0x70071789  pexew       $v0, $a3
    ctx->pc = 0x146e60u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x146e64: 0x44828800  mtc1        $v0, $f17
    ctx->pc = 0x146e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x146e68: 0x460810c2  mul.s       $f3, $f2, $f8
    ctx->pc = 0x146e68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x146e6c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x146e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x146e70: 0x460d2302  mul.s       $f12, $f4, $f13
    ctx->pc = 0x146e70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x146e74: 0x46071002  mul.s       $f0, $f2, $f7
    ctx->pc = 0x146e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x146e78: 0x460e22c2  mul.s       $f11, $f4, $f14
    ctx->pc = 0x146e78u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x146e7c: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x146e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x146e80: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x146e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x146e84: 0x46121082  mul.s       $f2, $f2, $f18
    ctx->pc = 0x146e84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[18]);
    // 0x146e88: 0x46112102  mul.s       $f4, $f4, $f17
    ctx->pc = 0x146e88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[17]);
    // 0x146e8c: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x146e8cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x146e90: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x146e90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x146e94: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x146e94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x146e98: 0x46103180  add.s       $f6, $f6, $f16
    ctx->pc = 0x146e98u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[16]);
    // 0x146e9c: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x146e9cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x146ea0: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x146ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x146ea4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x146ea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x146ea8: 0x44091800  mfc1        $t1, $f3
    ctx->pc = 0x146ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x146eac: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x146eacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x146eb0: 0x440a3000  mfc1        $t2, $f6
    ctx->pc = 0x146eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x146eb4: 0x440b1000  mfc1        $t3, $f2
    ctx->pc = 0x146eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x146eb8: 0x460908c2  mul.s       $f3, $f1, $f9
    ctx->pc = 0x146eb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x146ebc: 0x714b4389  pcpyld      $t0, $t2, $t3
    ctx->pc = 0x146ebcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x146ec0: 0x460f2a82  mul.s       $f10, $f5, $f15
    ctx->pc = 0x146ec0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x146ec4: 0x710244c8  ppacw       $t0, $t0, $v0
    ctx->pc = 0x146ec4u;
    SET_GPR_VEC(ctx, 8, PS2_PPACW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x146ec8: 0x46080882  mul.s       $f2, $f1, $f8
    ctx->pc = 0x146ec8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x146ecc: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x146eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x146ed0: 0x460d2982  mul.s       $f6, $f5, $f13
    ctx->pc = 0x146ed0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x146ed4: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x146ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x146ed8: 0x46070802  mul.s       $f0, $f1, $f7
    ctx->pc = 0x146ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x146edc: 0x460e2902  mul.s       $f4, $f5, $f14
    ctx->pc = 0x146edcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x146ee0: 0x46120842  mul.s       $f1, $f1, $f18
    ctx->pc = 0x146ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
    // 0x146ee4: 0x46112942  mul.s       $f5, $f5, $f17
    ctx->pc = 0x146ee4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[17]);
    // 0x146ee8: 0x460a18c0  add.s       $f3, $f3, $f10
    ctx->pc = 0x146ee8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x146eec: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x146eecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x146ef0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x146ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x146ef4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x146ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x146ef8: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x146ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x146efc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x146efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x146f00: 0x71831389  pcpyld      $v0, $t4, $v1
    ctx->pc = 0x146f00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x146f04: 0x440b1800  mfc1        $t3, $f3
    ctx->pc = 0x146f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x146f08: 0x84a30012  lh          $v1, 0x12($a1)
    ctx->pc = 0x146f08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x146f0c: 0x84a50010  lh          $a1, 0x10($a1)
    ctx->pc = 0x146f0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x146f10: 0x440c0800  mfc1        $t4, $f1
    ctx->pc = 0x146f10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x146f14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x146f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146f18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x146f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x146f1c: 0x716c3b89  pcpyld      $a3, $t3, $t4
    ctx->pc = 0x146f1cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x146f20: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x146f20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146f24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x146f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x146f28: 0x70e23cc8  ppacw       $a3, $a3, $v0
    ctx->pc = 0x146f28u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x146f2c: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x146f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
    // 0x146f30: 0x460f0bc2  mul.s       $f15, $f1, $f15
    ctx->pc = 0x146f30u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x146f34: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x146f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    // 0x146f38: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x146f38u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x146f3c: 0x460e0b82  mul.s       $f14, $f1, $f14
    ctx->pc = 0x146f3cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x146f40: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x146f40u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x146f44: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x146f44u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x146f48: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x146f48u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x146f4c: 0x46120002  mul.s       $f0, $f0, $f18
    ctx->pc = 0x146f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x146f50: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x146f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x146f54: 0x460f4a40  add.s       $f9, $f9, $f15
    ctx->pc = 0x146f54u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[15]);
    // 0x146f58: 0x460d4200  add.s       $f8, $f8, $f13
    ctx->pc = 0x146f58u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[13]);
    // 0x146f5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x146f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x146f60: 0x460e39c0  add.s       $f7, $f7, $f14
    ctx->pc = 0x146f60u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[14]);
    // 0x146f64: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x146f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x146f68: 0x440a4000  mfc1        $t2, $f8
    ctx->pc = 0x146f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x146f6c: 0x704a1b89  pcpyld      $v1, $v0, $t2
    ctx->pc = 0x146f6cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x146f70: 0x440b4800  mfc1        $t3, $f9
    ctx->pc = 0x146f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x146f74: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x146f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x146f78: 0x716c1389  pcpyld      $v0, $t3, $t4
    ctx->pc = 0x146f78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x146f7c: 0xd8c10030  lqc2        $vf1, 0x30($a2)
    ctx->pc = 0x146f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x146f80: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x146f80u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x146f84: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x146f84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x146f88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x146f88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x146f8c: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x146f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x146f90: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x146f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x146f94: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x146f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x146f98: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x146f98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x146f9c: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x146f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x146fa0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x146fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fa4: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x146fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x146fa8: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x146fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x146fac: 0x3e00008  jr          $ra
    ctx->pc = 0x146FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146FACu;
            // 0x146fb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146FB4u;
    // 0x146fb4: 0x0  nop
    ctx->pc = 0x146fb4u;
    // NOP
}
