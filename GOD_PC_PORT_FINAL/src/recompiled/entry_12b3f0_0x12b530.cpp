#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12b3f0
// Address: 0x12b3f0 - 0x12b530
void entry_12b3f0_0x12b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12b3f0_0x12b530");
#endif

    ctx->pc = 0x12b3f0u;

    // 0x12b3f0: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x12b3f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b3f4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12b3f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b3f8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x12b3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12b3fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12b3fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b400: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x12b400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b404: 0x4a222840  vaddx.w     $vf1, $vf5, $vf2x
    ctx->pc = 0x12b404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b408: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x12b408u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b40c: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x12b40cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12b410: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x12b410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b414: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x12b414u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12b418: 0x4be2209b  vmulw.xyzw  $vf2, $vf4, $vf2w
    ctx->pc = 0x12b418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12b41c: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x12b41cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12b420: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x12b420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12b424: 0x4bc11b3c  vmove.xyz   $vf1, $vf3
    ctx->pc = 0x12b424u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x12b428: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x12b428u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b42c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x12b42cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12b430: 0x4bc1233c  vmove.xyz   $vf1, $vf4
    ctx->pc = 0x12b430u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x12b434: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x12b434u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b438: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x12b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12b43c: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x12b43cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x12b440: 0x4a2128c0  vaddx.w     $vf3, $vf5, $vf1x
    ctx->pc = 0x12b440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12b444: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12b444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x12b448: 0x11400036  beqz        $t2, . + 4 + (0x36 << 2)
    ctx->pc = 0x12B448u;
    {
        const bool branch_taken_0x12b448 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B448u;
            // 0x12b44c: 0xfba30010  sqc2        $vf3, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b448) {
            ctx->pc = 0x12B524u;
            goto label_12b524;
        }
    }
    ctx->pc = 0x12B450u;
label_12b450:
    // 0x12b450: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x12b450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x12b454: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x12b454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x12b458: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x12b458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12b45c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x12b45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12b460: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x12b460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b464: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x12b464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12b468: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x12b468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b46c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x12b46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x12b470: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x12b470u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b474: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12b474u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12b478: 0x4be1185b  vmulw.xyzw  $vf1, $vf3, $vf1w
    ctx->pc = 0x12b478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b47c: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x12b47cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b480: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x12b480u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x12b484: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x12b484u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b488: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x12b488u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b48c: 0x4be6092c  vsub.xyzw   $vf4, $vf1, $vf6
    ctx->pc = 0x12b48cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12b490: 0xf8e30000  sqc2        $vf3, 0x0($a3)
    ctx->pc = 0x12b490u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12b494: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x12b494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b498: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x12b498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12b49c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12b49cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b4a0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12b4a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b4a4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12b4a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b4a8: 0x4b060083  vaddw.x     $vf2, $vf0, $vf6w
    ctx->pc = 0x12b4a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12b4ac: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x12b4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12b4b0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x12b4b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12b4b4: 0x46040084  c1          0x40084
    ctx->pc = 0x12b4b4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x12b4b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12b4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12b4bc: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12b4bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b4c0: 0x0  nop
    ctx->pc = 0x12b4c0u;
    // NOP
    // 0x12b4c4: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x12B4C4u;
    {
        const bool branch_taken_0x12b4c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4C4u;
            // 0x12b4c8: 0x48223000  qmfc2.ni    $v0, $vf6 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4c4) {
            ctx->pc = 0x12B518u;
            goto label_12b518;
        }
    }
    ctx->pc = 0x12B4CCu;
    // 0x12b4cc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x12b4ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x12b4d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12b4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12b4d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b4d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12b4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12b4dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12b4e0: 0x46040856  rsqrt.s     $f1, $f1, $f4
    ctx->pc = 0x12b4e0u;
    ctx->f[1] = 1.0f / sqrtf(ctx->f[1]);
    // 0x12b4e4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12b4e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12b4e8: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x12b4e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x12b4ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12b4ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12b4f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12b4f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12b4f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12b4f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b4f8: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x12b4f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b4fc: 0x4be13068  vadd.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x12b4fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b500: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x12b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b504: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x12b504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12b508: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12b508u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b50c: 0x4a222840  vaddx.w     $vf1, $vf5, $vf2x
    ctx->pc = 0x12b50cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b510: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x12b510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b514: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12b514u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12b518:
    // 0x12b518: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12b518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x12b51c: 0x1540ffcc  bnez        $t2, . + 4 + (-0x34 << 2)
    ctx->pc = 0x12B51Cu;
    {
        const bool branch_taken_0x12b51c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B51Cu;
            // 0x12b520: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b51c) {
            ctx->pc = 0x12B450u;
            runtime->cooperativeGuestYield();
            goto label_12b450;
        }
    }
    ctx->pc = 0x12B524u;
label_12b524:
    // 0x12b524: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12b524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b528: 0x3e00008  jr          $ra
    ctx->pc = 0x12B528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B528u;
            // 0x12b52c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B450u: goto label_12b450;
            case 0x12B518u: goto label_12b518;
            case 0x12B524u: goto label_12b524;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B530u;
}
