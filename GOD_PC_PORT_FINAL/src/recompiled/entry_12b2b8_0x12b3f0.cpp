#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12b2b8
// Address: 0x12b2b8 - 0x12b3f0
void entry_12b2b8_0x12b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12b2b8_0x12b3f0");
#endif

    ctx->pc = 0x12b2b8u;

    // 0x12b2b8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x12b2b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12b2bc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12b2bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b2c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12b2c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b2c4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x12b2c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b2c8: 0x4b010080  vaddx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x12b2c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12b2cc: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12b2ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12b2d0: 0x4be21858  vmulx.xyzw  $vf1, $vf3, $vf2x
    ctx->pc = 0x12b2d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b2d4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x12b2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12b2d8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x12b2d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b2dc: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x12b2dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b2e0: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x12b2e0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x12b2e4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x12b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b2e8: 0xf8e30000  sqc2        $vf3, 0x0($a3)
    ctx->pc = 0x12b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12b2ec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x12b2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b2f0: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x12b2f0u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x12b2f4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x12b2f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12b2f8: 0x4a223040  vaddx.w     $vf1, $vf6, $vf2x
    ctx->pc = 0x12b2f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b2fc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12b2fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x12b300: 0x11400038  beqz        $t2, . + 4 + (0x38 << 2)
    ctx->pc = 0x12B300u;
    {
        const bool branch_taken_0x12b300 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B300u;
            // 0x12b304: 0xfba10010  sqc2        $vf1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b300) {
            ctx->pc = 0x12B3E4u;
            goto label_12b3e4;
        }
    }
    ctx->pc = 0x12B308u;
label_12b308:
    // 0x12b308: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x12b308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x12b30c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x12b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x12b310: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x12b310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12b314: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x12b314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12b318: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12b318u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12b31c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x12b31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12b320: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x12b320u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b324: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x12b324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x12b328: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x12b328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b32c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x12b32cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12b330: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12b330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12b334: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x12b334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12b338: 0x4bc1133c  vmove.xyz   $vf1, $vf2
    ctx->pc = 0x12b338u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x12b33c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x12b33cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b340: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12b340u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b344: 0x4be5112c  vsub.xyzw   $vf4, $vf2, $vf5
    ctx->pc = 0x12b344u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12b348: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x12b348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12b34c: 0x4bc11b3c  vmove.xyz   $vf1, $vf3
    ctx->pc = 0x12b34cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x12b350: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x12b350u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b354: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x12b354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12b358: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x12b358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12b35c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x12b35cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b360: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12b360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b364: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12b364u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b368: 0x4b050083  vaddw.x     $vf2, $vf0, $vf5w
    ctx->pc = 0x12b368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12b36c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x12b36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12b370: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x12b370u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12b374: 0x46040084  c1          0x40084
    ctx->pc = 0x12b374u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x12b378: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12b378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12b37c: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12b37cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b380: 0x0  nop
    ctx->pc = 0x12b380u;
    // NOP
    // 0x12b384: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x12B384u;
    {
        const bool branch_taken_0x12b384 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B384u;
            // 0x12b388: 0x48222800  qmfc2.ni    $v0, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b384) {
            ctx->pc = 0x12B3D8u;
            goto label_12b3d8;
        }
    }
    ctx->pc = 0x12B38Cu;
    // 0x12b38c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x12b38cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x12b390: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12b390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12b394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12b398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12b39c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12b3a0: 0x46040856  rsqrt.s     $f1, $f1, $f4
    ctx->pc = 0x12b3a0u;
    ctx->f[1] = 1.0f / sqrtf(ctx->f[1]);
    // 0x12b3a4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12b3a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12b3a8: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x12b3a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x12b3ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12b3acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12b3b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12b3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12b3b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12b3b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b3b8: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x12b3b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b3bc: 0x4be12868  vadd.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x12b3bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b3c0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x12b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b3c4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x12b3c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12b3c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12b3c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b3cc: 0x4a223040  vaddx.w     $vf1, $vf6, $vf2x
    ctx->pc = 0x12b3ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12b3d0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x12b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12b3d4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12b3d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12b3d8:
    // 0x12b3d8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12b3d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x12b3dc: 0x1540ffca  bnez        $t2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x12B3DCu;
    {
        const bool branch_taken_0x12b3dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3DCu;
            // 0x12b3e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3dc) {
            ctx->pc = 0x12B308u;
            runtime->cooperativeGuestYield();
            goto label_12b308;
        }
    }
    ctx->pc = 0x12B3E4u;
label_12b3e4:
    // 0x12b3e4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12b3e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12B3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B3E8u;
            // 0x12b3ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B308u: goto label_12b308;
            case 0x12B3D8u: goto label_12b3d8;
            case 0x12B3E4u: goto label_12b3e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B3F0u;
}
