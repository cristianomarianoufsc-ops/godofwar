#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20d350
// Address: 0x20d350 - 0x20d420
void entry_20d350_0x20d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20d350_0x20d420");
#endif

    ctx->pc = 0x20d350u;

    // 0x20d350: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x20d350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x20d354: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d358: 0x48a63800  qmtc2.ni    $a2, $vf7
    ctx->pc = 0x20d358u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x20d35c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x20d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x20d360: 0x48a74800  qmtc2.ni    $a3, $vf9
    ctx->pc = 0x20d360u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x20d364: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x20d368: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x20d368u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d36c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x20d36cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20d370: 0x48a53000  qmtc2.ni    $a1, $vf6
    ctx->pc = 0x20d370u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x20d374: 0x4be83158  vmulx.xyzw  $vf5, $vf6, $vf8x
    ctx->pc = 0x20d374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20d378: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x20d378u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d37c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x20d37cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20d380: 0x4be2212c  vsub.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x20d380u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d384: 0x4be72068  vadd.xyzw   $vf1, $vf4, $vf7
    ctx->pc = 0x20d384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d388: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x20d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d38c: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x20d38cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20d390: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x20d390u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20d394: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x20d394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d398: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x20d398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20d39c: 0x4be81098  vmulx.xyzw  $vf2, $vf2, $vf8x
    ctx->pc = 0x20d39cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d3a0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x20d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x20d3a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20d3a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d3a8: 0x4be13058  vmulx.xyzw  $vf1, $vf6, $vf1x
    ctx->pc = 0x20d3a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d3ac: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20d3acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d3b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x20d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x20d3b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20d3b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d3b8: 0x4be13858  vmulx.xyzw  $vf1, $vf7, $vf1x
    ctx->pc = 0x20d3b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d3bc: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x20d3bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d3c0: 0x4be910ac  vsub.xyzw   $vf2, $vf2, $vf9
    ctx->pc = 0x20d3c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d3c4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x20d3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20d3c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20d3c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20d3cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20d3ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20d3d0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20d3d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d3d4: 0x4be22968  vadd.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x20d3d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20d3d8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x20d3dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20d3dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d3e0: 0x4be13198  vmulx.xyzw  $vf6, $vf6, $vf1x
    ctx->pc = 0x20d3e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x20d3e4: 0x4be62128  vadd.xyzw   $vf4, $vf4, $vf6
    ctx->pc = 0x20d3e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d3e8: 0x4be139d8  vmulx.xyzw  $vf7, $vf7, $vf1x
    ctx->pc = 0x20d3e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x20d3ec: 0x4be7212c  vsub.xyzw   $vf4, $vf4, $vf7
    ctx->pc = 0x20d3ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d3f0: 0x4be92128  vadd.xyzw   $vf4, $vf4, $vf9
    ctx->pc = 0x20d3f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d3f4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x20d3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20d3f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x20d3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20d3fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20d3fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20d400: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x20d400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d404: 0x4be42968  vadd.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x20d404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20d408: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20d40c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20d40cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d410: 0x4be12898  vmulx.xyzw  $vf2, $vf5, $vf1x
    ctx->pc = 0x20d410u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d414: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x20d414u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20d418: 0x3e00008  jr          $ra
    ctx->pc = 0x20D418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D418u;
            // 0x20d41c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D420u;
}
