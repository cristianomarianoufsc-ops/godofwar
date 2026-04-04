#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FCC8
// Address: 0x20fcc8 - 0x20ff48
void sub_0020FCC8_0x20fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FCC8_0x20fcc8");
#endif

    ctx->pc = 0x20fcc8u;

    // 0x20fcc8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x20fcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x20fccc: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x20fcccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20fcd0: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x20fcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x20fcd4: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x20fcd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x20fcd8: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x20fcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x20fcdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20fcdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fce0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x20fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x20fce4: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x20fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x20fce8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x20fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x20fcec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20fcecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fcf0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x20fcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x20fcf4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x20fcf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x20fcf8: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x20fcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x20fcfc: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x20fcfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20fd00: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x20fd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20fd04: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20fd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fd08: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x20fd08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fd0c: 0x4be2085a  vmulz.xyzw  $vf1, $vf1, $vf2z
    ctx->pc = 0x20fd0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fd10: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x20fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fd14: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x20fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x20fd18: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x20fd18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20fd1c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x20fd1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fd20: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x20fd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fd24: 0xda460050  lqc2        $vf6, 0x50($s2)
    ctx->pc = 0x20fd24u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x20fd28: 0x4be23098  vmulx.xyzw  $vf2, $vf6, $vf2x
    ctx->pc = 0x20fd28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20fd2c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x20fd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20fd30: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x20fd30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20fd34: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x20fd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20fd38: 0xdba70090  lqc2        $vf7, 0x90($sp)
    ctx->pc = 0x20fd38u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20fd3c: 0x4be2396c  vsub.xyzw   $vf5, $vf7, $vf2
    ctx->pc = 0x20fd3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20fd40: 0x4be129e8  vadd.xyzw   $vf7, $vf5, $vf1
    ctx->pc = 0x20fd40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x20fd44: 0xfba700a0  sqc2        $vf7, 0xA0($sp)
    ctx->pc = 0x20fd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x20fd48: 0x4be111e8  vadd.xyzw   $vf7, $vf2, $vf1
    ctx->pc = 0x20fd48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x20fd4c: 0xfba700b0  sqc2        $vf7, 0xB0($sp)
    ctx->pc = 0x20fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x20fd50: 0x4be129ec  vsub.xyzw   $vf7, $vf5, $vf1
    ctx->pc = 0x20fd50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x20fd54: 0xfba700c0  sqc2        $vf7, 0xC0($sp)
    ctx->pc = 0x20fd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x20fd58: 0x4be1116c  vsub.xyzw   $vf5, $vf2, $vf1
    ctx->pc = 0x20fd58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20fd5c: 0xfba500d0  sqc2        $vf5, 0xD0($sp)
    ctx->pc = 0x20fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20fd60: 0x4be43058  vmulx.xyzw  $vf1, $vf6, $vf4x
    ctx->pc = 0x20fd60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fd64: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x20fd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fd68: 0x4be30958  vmulx.xyzw  $vf5, $vf1, $vf3x
    ctx->pc = 0x20fd68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20fd6c: 0x4a832098  vmulx.y     $vf2, $vf4, $vf3x
    ctx->pc = 0x20fd6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20fd70: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x20fd70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20fd74: 0x4a820841  vaddy.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x20fd74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fd78: 0x4be128a8  vadd.xyzw   $vf2, $vf5, $vf1
    ctx->pc = 0x20fd78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20fd7c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x20fd7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20fd80: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x20fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fd84: 0xdba70090  lqc2        $vf7, 0x90($sp)
    ctx->pc = 0x20fd84u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20fd88: 0x4be1386c  vsub.xyzw   $vf1, $vf7, $vf1
    ctx->pc = 0x20fd88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fd8c: 0x4be4085a  vmulz.xyzw  $vf1, $vf1, $vf4z
    ctx->pc = 0x20fd8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fd90: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x20fd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fd94: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x20fd94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fd98: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x20fd98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20fd9c: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x20fd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20fda0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x20fda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20fda4: 0x4be11868  vadd.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x20fda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fda8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x20fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fdac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20fdb0: 0x3c050430  lui         $a1, 0x430
    ctx->pc = 0x20fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1072 << 16));
    // 0x20fdb4: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x20fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x20fdb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x20fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x20fdbc: 0x8e440258  lw          $a0, 0x258($s2)
    ctx->pc = 0x20fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
    // 0x20fdc0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x20fdc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x20fdc4: 0x8e470254  lw          $a3, 0x254($s2)
    ctx->pc = 0x20fdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x20fdc8: 0x34631ff3  ori         $v1, $v1, 0x1FF3
    ctx->pc = 0x20fdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8179);
    // 0x20fdcc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x20fdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x20fdd0: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x20fdd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20fdd4: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x20fdd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x20fdd8: 0x671827  nor         $v1, $v1, $a3
    ctx->pc = 0x20fdd8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 7)));
    // 0x20fddc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x20fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x20fde0: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x20fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x20fde4: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x20fde4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x20fde8: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x20fdec: 0x8e64bcf8  lw          $a0, -0x4308($s3)
    ctx->pc = 0x20fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950136)));
    // 0x20fdf0: 0x24c61308  addiu       $a2, $a2, 0x1308
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x20fdf4: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x20fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x20fdf8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x20fdf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20fdfc: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x20fdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x20fe00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20fe00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20fe04: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x20fe04u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fe08: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x20fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x20fe0c: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x20fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x20fe10: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x20fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x20fe14: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x20fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x20fe18: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x20fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x20fe1c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x20fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x20fe20: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x20fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x20fe24: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x20fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x20fe28: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x20FE28u;
    SET_GPR_U32(ctx, 31, 0x20FE30u);
    ctx->pc = 0x20FE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE28u;
            // 0x20fe2c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE30u; }
        if (ctx->pc != 0x20FE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE30u; }
        if (ctx->pc != 0x20FE30u) { return; }
    }
    ctx->pc = 0x20FE30u;
    // 0x20fe30: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x20fe30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20fe34: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x20fe34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20fe38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe3c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x20FE3Cu;
    SET_GPR_U32(ctx, 31, 0x20FE44u);
    ctx->pc = 0x20FE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE3Cu;
            // 0x20fe40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE44u; }
        if (ctx->pc != 0x20FE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE44u; }
        if (ctx->pc != 0x20FE44u) { return; }
    }
    ctx->pc = 0x20FE44u;
    // 0x20fe44: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x20fe44u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20fe48: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x20fe48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x20fe4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe50: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x20FE50u;
    SET_GPR_U32(ctx, 31, 0x20FE58u);
    ctx->pc = 0x20FE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE50u;
            // 0x20fe54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE58u; }
        if (ctx->pc != 0x20FE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE58u; }
        if (ctx->pc != 0x20FE58u) { return; }
    }
    ctx->pc = 0x20FE58u;
    // 0x20fe58: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x20fe58u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20fe5c: 0x36030010  ori         $v1, $s0, 0x10
    ctx->pc = 0x20fe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x20fe60: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x20fe60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x20fe64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe68: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x20FE68u;
    SET_GPR_U32(ctx, 31, 0x20FE70u);
    ctx->pc = 0x20FE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE68u;
            // 0x20fe6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE70u; }
        if (ctx->pc != 0x20FE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE70u; }
        if (ctx->pc != 0x20FE70u) { return; }
    }
    ctx->pc = 0x20FE70u;
    // 0x20fe70: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x20fe70u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20fe74: 0x36030004  ori         $v1, $s0, 0x4
    ctx->pc = 0x20fe74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x20fe78: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x20fe78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x20fe7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe80: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x20FE80u;
    SET_GPR_U32(ctx, 31, 0x20FE88u);
    ctx->pc = 0x20FE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE80u;
            // 0x20fe84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE88u; }
        if (ctx->pc != 0x20FE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE88u; }
        if (ctx->pc != 0x20FE88u) { return; }
    }
    ctx->pc = 0x20FE88u;
    // 0x20fe88: 0x7ba60080  lq          $a2, 0x80($sp)
    ctx->pc = 0x20fe88u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20fe8c: 0x36030008  ori         $v1, $s0, 0x8
    ctx->pc = 0x20fe8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x20fe90: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x20fe90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x20fe94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe98: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x20FE98u;
    SET_GPR_U32(ctx, 31, 0x20FEA0u);
    ctx->pc = 0x20FE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE98u;
            // 0x20fe9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FEA0u; }
        if (ctx->pc != 0x20FEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FEA0u; }
        if (ctx->pc != 0x20FEA0u) { return; }
    }
    ctx->pc = 0x20FEA0u;
    // 0x20fea0: 0x36030020  ori         $v1, $s0, 0x20
    ctx->pc = 0x20fea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x20fea4: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x20fea4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fea8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x20fea8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x20feac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20feacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20feb0: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x20FEB0u;
    SET_GPR_U32(ctx, 31, 0x20FEB8u);
    ctx->pc = 0x20FEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FEB0u;
            // 0x20feb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FEB8u; }
        if (ctx->pc != 0x20FEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FEB8u; }
        if (ctx->pc != 0x20FEB8u) { return; }
    }
    ctx->pc = 0x20FEB8u;
    // 0x20feb8: 0x36030100  ori         $v1, $s0, 0x100
    ctx->pc = 0x20feb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x20febc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x20febcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x20fec0: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x20fec0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20fec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fec8: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x20fec8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20fecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20feccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fed0: 0x4be1296c  vsub.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x20fed0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20fed4: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x20FED4u;
    SET_GPR_U32(ctx, 31, 0x20FEDCu);
    ctx->pc = 0x20FED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FED4u;
            // 0x20fed8: 0x48262800  qmfc2.ni    $a2, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FEDCu; }
        if (ctx->pc != 0x20FEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FEDCu; }
        if (ctx->pc != 0x20FEDCu) { return; }
    }
    ctx->pc = 0x20FEDCu;
    // 0x20fedc: 0x36030080  ori         $v1, $s0, 0x80
    ctx->pc = 0x20fedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)128);
    // 0x20fee0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x20fee0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x20fee4: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x20fee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20feec: 0xdba70090  lqc2        $vf7, 0x90($sp)
    ctx->pc = 0x20feecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20fef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20fef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fef4: 0x4be139ec  vsub.xyzw   $vf7, $vf7, $vf1
    ctx->pc = 0x20fef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x20fef8: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x20FEF8u;
    SET_GPR_U32(ctx, 31, 0x20FF00u);
    ctx->pc = 0x20FEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FEF8u;
            // 0x20fefc: 0x48263800  qmfc2.ni    $a2, $vf7 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FF00u; }
        if (ctx->pc != 0x20FF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FF00u; }
        if (ctx->pc != 0x20FF00u) { return; }
    }
    ctx->pc = 0x20FF00u;
    // 0x20ff00: 0x36030040  ori         $v1, $s0, 0x40
    ctx->pc = 0x20ff00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x20ff04: 0x8e64bcf8  lw          $a0, -0x4308($s3)
    ctx->pc = 0x20ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950136)));
    // 0x20ff08: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x20FF08u;
    SET_GPR_U32(ctx, 31, 0x20FF10u);
    ctx->pc = 0x20FF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FF08u;
            // 0x20ff0c: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FF10u; }
        if (ctx->pc != 0x20FF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FF10u; }
        if (ctx->pc != 0x20FF10u) { return; }
    }
    ctx->pc = 0x20FF10u;
    // 0x20ff10: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x20ff10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20ff14: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x20ff14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20ff18: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x20ff18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ff1c: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x20ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20ff20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20ff20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff24: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x20ff24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20ff28: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x20ff28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20ff2c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x20ff2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x20ff30: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x20ff30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x20ff34: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x20ff34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20ff38: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x20ff38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20ff3c: 0x3e00008  jr          $ra
    ctx->pc = 0x20FF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FF3Cu;
            // 0x20ff40: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FF44u;
    // 0x20ff44: 0x0  nop
    ctx->pc = 0x20ff44u;
    // NOP
}
