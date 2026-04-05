#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16e5e8
// Address: 0x16e5e8 - 0x16e870
void entry_16e5e8_0x16e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16e5e8_0x16e870");
#endif

    ctx->pc = 0x16e5e8u;

    // 0x16e5e8: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x16e5e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x16e5ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e5ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16e5f0: 0x48a64000  qmtc2.ni    $a2, $vf8
    ctx->pc = 0x16e5f0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x16e5f4: 0x48a43800  qmtc2.ni    $a0, $vf7
    ctx->pc = 0x16e5f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16e5f8: 0x4be5406c  vsub.xyzw   $vf1, $vf8, $vf5
    ctx->pc = 0x16e5f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e5fc: 0x48a74800  qmtc2.ni    $a3, $vf9
    ctx->pc = 0x16e5fcu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x16e600: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x16e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e604: 0x4be5492c  vsub.xyzw   $vf4, $vf9, $vf5
    ctx->pc = 0x16e604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16e608: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x16e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16e60c: 0x4be538ec  vsub.xyzw   $vf3, $vf7, $vf5
    ctx->pc = 0x16e60cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e610: 0x4be60b3c  vmove.xyzw  $vf6, $vf1
    ctx->pc = 0x16e610u;
    ctx->vu0_vf[6] = ctx->vu0_vf[1];
    // 0x16e614: 0x4be330aa  vmul.xyzw   $vf2, $vf6, $vf3
    ctx->pc = 0x16e614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e618: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16e618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e61c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16e61cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e620: 0x4be320ea  vmul.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x16e620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e624: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e624u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e628: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16e628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16e62c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16e62cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e634: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16e634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e638: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e638u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e63c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16e63cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e640: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x16e640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x16e644: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16E644u;
    {
        const bool branch_taken_0x16e644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e644) {
            ctx->pc = 0x16E660u;
            goto label_16e660;
        }
    }
    ctx->pc = 0x16E64Cu;
    // 0x16e64c: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x16e64cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e650: 0x0  nop
    ctx->pc = 0x16e650u;
    // NOP
    // 0x16e654: 0x45010084  bc1t        . + 4 + (0x84 << 2)
    ctx->pc = 0x16E654u;
    {
        const bool branch_taken_0x16e654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E654u;
            // 0x16e658: 0x48222800  qmfc2.ni    $v0, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e654) {
            ctx->pc = 0x16E868u;
            goto label_16e868;
        }
    }
    ctx->pc = 0x16E65Cu;
    // 0x16e65c: 0x0  nop
    ctx->pc = 0x16e65cu;
    // NOP
label_16e660:
    // 0x16e660: 0x4be838ac  vsub.xyzw   $vf2, $vf7, $vf8
    ctx->pc = 0x16e660u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e664: 0x4be230ea  vmul.xyzw   $vf3, $vf6, $vf2
    ctx->pc = 0x16e664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e668: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16e668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e66c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16e66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e670: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x16e670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e674: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e674u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e678: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x16e678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16e67c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16e67cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e684: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16e684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e688: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e688u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e68c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x16e68cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e690: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x16e690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x16e694: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16E694u;
    {
        const bool branch_taken_0x16e694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e694) {
            ctx->pc = 0x16E698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E694u;
            // 0x16e698: 0x46081842  mul.s       $f1, $f3, $f8 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E6B0u;
            goto label_16e6b0;
        }
    }
    ctx->pc = 0x16E69Cu;
    // 0x16e69c: 0x46044036  c.le.s      $f8, $f4
    ctx->pc = 0x16e69cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e6a0: 0x0  nop
    ctx->pc = 0x16e6a0u;
    // NOP
    // 0x16e6a4: 0x45010070  bc1t        . + 4 + (0x70 << 2)
    ctx->pc = 0x16E6A4u;
    {
        const bool branch_taken_0x16e6a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6A4u;
            // 0x16e6a8: 0x48224000  qmfc2.ni    $v0, $vf8 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6a4) {
            ctx->pc = 0x16E868u;
            goto label_16e868;
        }
    }
    ctx->pc = 0x16E6ACu;
    // 0x16e6ac: 0x46081842  mul.s       $f1, $f3, $f8
    ctx->pc = 0x16e6acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_16e6b0:
    // 0x16e6b0: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x16e6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x16e6b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16e6b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16e6b8: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x16e6b8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e6bc: 0x46024836  c.le.s      $f9, $f2
    ctx->pc = 0x16e6bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e6c0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x16E6C0u;
    {
        const bool branch_taken_0x16e6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e6c0) {
            ctx->pc = 0x16E700u;
            goto label_16e700;
        }
    }
    ctx->pc = 0x16E6C8u;
    // 0x16e6c8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x16e6c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e6cc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x16E6CCu;
    {
        const bool branch_taken_0x16e6cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e6cc) {
            ctx->pc = 0x16E700u;
            goto label_16e700;
        }
    }
    ctx->pc = 0x16E6D4u;
    // 0x16e6d4: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x16e6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e6d8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16E6D8u;
    {
        const bool branch_taken_0x16e6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e6d8) {
            ctx->pc = 0x16E700u;
            goto label_16e700;
        }
    }
    ctx->pc = 0x16E6E0u;
    // 0x16e6e0: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x16e6e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x16e6e4: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16e6e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x16e6e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16e6e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16e6ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16e6ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16e6f0: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x16e6f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e6f4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16E6F4u;
    {
        const bool branch_taken_0x16e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e6f4) {
            ctx->pc = 0x16E7A8u;
            goto label_16e7a8;
        }
    }
    ctx->pc = 0x16E6FCu;
    // 0x16e6fc: 0x0  nop
    ctx->pc = 0x16e6fcu;
    // NOP
label_16e700:
    // 0x16e700: 0x4be938ac  vsub.xyzw   $vf2, $vf7, $vf9
    ctx->pc = 0x16e700u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e704: 0x4be230ea  vmul.xyzw   $vf3, $vf6, $vf2
    ctx->pc = 0x16e704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e708: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16e708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e70c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16e70cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e710: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x16e710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e714: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e714u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e718: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x16e718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x16e71c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16e71cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e720: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16e720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e728: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16e728u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e72c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16e72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16e730: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16e730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e734: 0x0  nop
    ctx->pc = 0x16e734u;
    // NOP
    // 0x16e738: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16E738u;
    {
        const bool branch_taken_0x16e738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e738) {
            ctx->pc = 0x16E73Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E738u;
            // 0x16e73c: 0x46021842  mul.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E758u;
            goto label_16e758;
        }
    }
    ctx->pc = 0x16E740u;
    // 0x16e740: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x16e740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e744: 0x0  nop
    ctx->pc = 0x16e744u;
    // NOP
    // 0x16e748: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x16E748u;
    {
        const bool branch_taken_0x16e748 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E748u;
            // 0x16e74c: 0x48224800  qmfc2.ni    $v0, $vf9 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[9]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e748) {
            ctx->pc = 0x16E868u;
            goto label_16e868;
        }
    }
    ctx->pc = 0x16E750u;
    // 0x16e750: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x16e750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x16e754: 0x0  nop
    ctx->pc = 0x16e754u;
    // NOP
label_16e758:
    // 0x16e758: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x16e758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x16e75c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x16e75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16e760: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x16e760u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16e764: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x16e764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e768: 0x0  nop
    ctx->pc = 0x16e768u;
    // NOP
    // 0x16e76c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x16E76Cu;
    {
        const bool branch_taken_0x16e76c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e76c) {
            ctx->pc = 0x16E770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E76Cu;
            // 0x16e770: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E7B4u;
            goto label_16e7b4;
        }
    }
    ctx->pc = 0x16E774u;
    // 0x16e774: 0x46071836  c.le.s      $f3, $f7
    ctx->pc = 0x16e774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e778: 0x0  nop
    ctx->pc = 0x16e778u;
    // NOP
    // 0x16e77c: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x16E77Cu;
    {
        const bool branch_taken_0x16e77c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e77c) {
            ctx->pc = 0x16E780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E77Cu;
            // 0x16e780: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E7B4u;
            goto label_16e7b4;
        }
    }
    ctx->pc = 0x16E784u;
    // 0x16e784: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x16e784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e788: 0x0  nop
    ctx->pc = 0x16e788u;
    // NOP
    // 0x16e78c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x16E78Cu;
    {
        const bool branch_taken_0x16e78c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e78c) {
            ctx->pc = 0x16E790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E78Cu;
            // 0x16e790: 0x46022042  mul.s       $f1, $f4, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E7B4u;
            goto label_16e7b4;
        }
    }
    ctx->pc = 0x16E794u;
    // 0x16e794: 0x46023801  sub.s       $f0, $f7, $f2
    ctx->pc = 0x16e794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x16e798: 0x46003803  div.s       $f0, $f7, $f0
    ctx->pc = 0x16e798u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[0] = ctx->f[7] / ctx->f[0];
    // 0x16e79c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16e79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16e7a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16e7a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16e7a4: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x16e7a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16e7a8:
    // 0x16e7a8: 0x4be128a8  vadd.xyzw   $vf2, $vf5, $vf1
    ctx->pc = 0x16e7a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e7ac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16E7ACu;
    {
        const bool branch_taken_0x16e7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7ACu;
            // 0x16e7b0: 0x48221000  qmfc2.ni    $v0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7ac) {
            ctx->pc = 0x16E868u;
            goto label_16e868;
        }
    }
    ctx->pc = 0x16E7B4u;
label_16e7b4:
    // 0x16e7b4: 0x46082802  mul.s       $f0, $f5, $f8
    ctx->pc = 0x16e7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x16e7b8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x16e7b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16e7bc: 0x460009c1  sub.s       $f7, $f1, $f0
    ctx->pc = 0x16e7bcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16e7c0: 0x46033836  c.le.s      $f7, $f3
    ctx->pc = 0x16e7c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e7c4: 0x0  nop
    ctx->pc = 0x16e7c4u;
    // NOP
    // 0x16e7c8: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x16E7C8u;
    {
        const bool branch_taken_0x16e7c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e7c8) {
            ctx->pc = 0x16E7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7C8u;
            // 0x16e7cc: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E820u;
            goto label_16e820;
        }
    }
    ctx->pc = 0x16E7D0u;
    // 0x16e7d0: 0x46044041  sub.s       $f1, $f8, $f4
    ctx->pc = 0x16e7d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x16e7d4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x16e7d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e7d8: 0x0  nop
    ctx->pc = 0x16e7d8u;
    // NOP
    // 0x16e7dc: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x16E7DCu;
    {
        const bool branch_taken_0x16e7dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e7dc) {
            ctx->pc = 0x16E7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7DCu;
            // 0x16e7e0: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E820u;
            goto label_16e820;
        }
    }
    ctx->pc = 0x16E7E4u;
    // 0x16e7e4: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x16e7e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x16e7e8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16e7e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e7ec: 0x0  nop
    ctx->pc = 0x16e7ecu;
    // NOP
    // 0x16e7f0: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x16E7F0u;
    {
        const bool branch_taken_0x16e7f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e7f0) {
            ctx->pc = 0x16E7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7F0u;
            // 0x16e7f4: 0x46063840  add.s       $f1, $f7, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E820u;
            goto label_16e820;
        }
    }
    ctx->pc = 0x16E7F8u;
    // 0x16e7f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16e7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16e7fc: 0x4be8486c  vsub.xyzw   $vf1, $vf9, $vf8
    ctx->pc = 0x16e7fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e800: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16e800u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x16e804: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16e804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16e808: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x16e808u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16e80c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x16e80cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e810: 0x4be140a8  vadd.xyzw   $vf2, $vf8, $vf1
    ctx->pc = 0x16e810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e814: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16E814u;
    {
        const bool branch_taken_0x16e814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E814u;
            // 0x16e818: 0x48221000  qmfc2.ni    $v0, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e814) {
            ctx->pc = 0x16E868u;
            goto label_16e868;
        }
    }
    ctx->pc = 0x16E81Cu;
    // 0x16e81c: 0x0  nop
    ctx->pc = 0x16e81cu;
    // NOP
label_16e820:
    // 0x16e820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e828: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x16e828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x16e82c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16e82cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x16e830: 0x46004842  mul.s       $f1, $f9, $f0
    ctx->pc = 0x16e830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x16e834: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x16e834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x16e838: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16e838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16e83c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16e83cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16e840: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x16e840u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e844: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x16e844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e848: 0x4be228a8  vadd.xyzw   $vf2, $vf5, $vf2
    ctx->pc = 0x16e848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e84c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16e84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16e850: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x16e850u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16e854: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x16e854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e858: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x16e858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e85c: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x16e85cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e860: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x16e860u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16e864: 0x0  nop
    ctx->pc = 0x16e864u;
    // NOP
label_16e868:
    // 0x16e868: 0x3e00008  jr          $ra
    ctx->pc = 0x16E868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E868u;
            // 0x16e86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E660u: goto label_16e660;
            case 0x16E6B0u: goto label_16e6b0;
            case 0x16E700u: goto label_16e700;
            case 0x16E758u: goto label_16e758;
            case 0x16E7A8u: goto label_16e7a8;
            case 0x16E7B4u: goto label_16e7b4;
            case 0x16E820u: goto label_16e820;
            case 0x16E868u: goto label_16e868;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E870u;
}
