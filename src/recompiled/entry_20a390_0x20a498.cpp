#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20a390
// Address: 0x20a390 - 0x20a498
void entry_20a390_0x20a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20a390_0x20a498");
#endif

    ctx->pc = 0x20a390u;

    // 0x20a390: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x20a390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a394: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20a394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20a398: 0xd8830030  lqc2        $vf3, 0x30($a0)
    ctx->pc = 0x20a398u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20a39c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20a39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20a3a0: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x20a3a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x20a3a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20a3a8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x20a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20a3ac: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A3ACu;
    {
        const bool branch_taken_0x20a3ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a3ac) {
            ctx->pc = 0x20A3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A3ACu;
            // 0x20a3b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A3B4u;
            goto label_20a3b4;
        }
    }
    ctx->pc = 0x20A3B4u;
label_20a3b4:
    // 0x20a3b4: 0x4be22058  vmulx.xyzw  $vf1, $vf4, $vf2x
    ctx->pc = 0x20a3b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a3b8: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x20a3b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a3bc: 0xd8850020  lqc2        $vf5, 0x20($a0)
    ctx->pc = 0x20a3bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x20a3c0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20a3c4: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x20a3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20a3c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A3C8u;
    {
        const bool branch_taken_0x20a3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a3c8) {
            ctx->pc = 0x20A3CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A3C8u;
            // 0x20a3cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A3D0u;
            goto label_20a3d0;
        }
    }
    ctx->pc = 0x20A3D0u;
label_20a3d0:
    // 0x20a3d0: 0x4be22898  vmulx.xyzw  $vf2, $vf5, $vf2x
    ctx->pc = 0x20a3d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a3d4: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x20a3d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a3d8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x20a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20a3dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x20a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x20a3e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20a3e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20a3e4: 0x4be12098  vmulx.xyzw  $vf2, $vf4, $vf1x
    ctx->pc = 0x20a3e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a3e8: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x20a3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20a3ec: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x20a3ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a3f0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20a3f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a3f4: 0x4be218ec  vsub.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x20a3f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20a3f8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x20a3f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x20a3fc: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x20a3fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a400: 0x4be4112a  vmul.xyzw   $vf4, $vf2, $vf4
    ctx->pc = 0x20a400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20a404: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x20a404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a408: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x20a408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a40c: 0x4be510aa  vmul.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x20a40cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20a410: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20a410u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a414: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20a414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a418: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20a418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a41c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a420: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x20a420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20a424: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20a424u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20a428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a42c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x20a42cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20a430: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x20A430u;
    {
        const bool branch_taken_0x20a430 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A430u;
            // 0x20a434: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a430) {
            ctx->pc = 0x20A490u;
            goto label_20a490;
        }
    }
    ctx->pc = 0x20A438u;
    // 0x20a438: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20a438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a43c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x20A43Cu;
    {
        const bool branch_taken_0x20a43c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a43c) {
            ctx->pc = 0x20A490u;
            goto label_20a490;
        }
    }
    ctx->pc = 0x20A444u;
    // 0x20a444: 0x3c0143b0  lui         $at, 0x43B0
    ctx->pc = 0x20a444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17328 << 16));
    // 0x20a448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a44c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20a44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a450: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x20A450u;
    {
        const bool branch_taken_0x20a450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a450) {
            ctx->pc = 0x20A490u;
            goto label_20a490;
        }
    }
    ctx->pc = 0x20A458u;
    // 0x20a458: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20a458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a45c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x20A45Cu;
    {
        const bool branch_taken_0x20a45c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a45c) {
            ctx->pc = 0x20A490u;
            goto label_20a490;
        }
    }
    ctx->pc = 0x20A464u;
    // 0x20a464: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x20a468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a46c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20a46cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20a470: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x20a470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x20a474: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x20a478: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x20a478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a47c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a47cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20a480: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x20a480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20a484: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x20a484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20a488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a48c: 0x0  nop
    ctx->pc = 0x20a48cu;
    // NOP
label_20a490:
    // 0x20a490: 0x3e00008  jr          $ra
    ctx->pc = 0x20A490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A490u;
            // 0x20a494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A3B4u: goto label_20a3b4;
            case 0x20A3D0u: goto label_20a3d0;
            case 0x20A490u: goto label_20a490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A498u;
}
