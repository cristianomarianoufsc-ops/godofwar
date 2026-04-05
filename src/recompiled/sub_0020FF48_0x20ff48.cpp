#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FF48
// Address: 0x20ff48 - 0x210228
void sub_0020FF48_0x20ff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FF48_0x20ff48");
#endif

    ctx->pc = 0x20ff48u;

    // 0x20ff48: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x20ff4c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x20ff4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ff50: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x20ff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x20ff54: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x20ff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x20ff58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ff58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff5c: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x20ff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x20ff60: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x20ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x20ff64: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x20ff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x20ff68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20ff68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff6c: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x20ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x20ff70: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x20ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x20ff74: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x20ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20ff78: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x20ff78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20ff7c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20ff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20ff80: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x20ff80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20ff84: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x20ff84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ff88: 0xda220120  lqc2        $vf2, 0x120($s1)
    ctx->pc = 0x20ff88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x20ff8c: 0x4be2085a  vmulz.xyzw  $vf1, $vf1, $vf2z
    ctx->pc = 0x20ff8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ff90: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x20ff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20ff94: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x20ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x20ff98: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x20ff98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20ff9c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x20ff9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20ffa0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x20ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20ffa4: 0x4b020084  vsubx.x     $vf2, $vf0, $vf2x
    ctx->pc = 0x20ffa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ffa8: 0xda240050  lqc2        $vf4, 0x50($s1)
    ctx->pc = 0x20ffa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x20ffac: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x20ffacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ffb0: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x20ffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20ffb4: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x20ffb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20ffb8: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x20ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20ffbc: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x20ffbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20ffc0: 0x4be2292c  vsub.xyzw   $vf4, $vf5, $vf2
    ctx->pc = 0x20ffc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20ffc4: 0x4be12168  vadd.xyzw   $vf5, $vf4, $vf1
    ctx->pc = 0x20ffc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20ffc8: 0xfba500a0  sqc2        $vf5, 0xA0($sp)
    ctx->pc = 0x20ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20ffcc: 0x4be11168  vadd.xyzw   $vf5, $vf2, $vf1
    ctx->pc = 0x20ffccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20ffd0: 0xfba500b0  sqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x20ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20ffd4: 0x4be1216c  vsub.xyzw   $vf5, $vf4, $vf1
    ctx->pc = 0x20ffd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20ffd8: 0xfba500c0  sqc2        $vf5, 0xC0($sp)
    ctx->pc = 0x20ffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x20ffdc: 0x4be1112c  vsub.xyzw   $vf4, $vf2, $vf1
    ctx->pc = 0x20ffdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20ffe0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x20ffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20ffe4: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x20ffe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20ffe8: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x20ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x20ffec: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x20ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fff0: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x20fff0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20fff4: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x20fff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fff8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x20fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20fffc: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x20fffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210000: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x210000u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x210004: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x210004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210008: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x210008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21000c: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x21000cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x210010: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x210010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210014: 0x4be408d8  vmulx.xyzw  $vf3, $vf1, $vf4x
    ctx->pc = 0x210014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210018: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x210018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21001c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x21001cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x210020: 0x8e240258  lw          $a0, 0x258($s1)
    ctx->pc = 0x210020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x210024: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x210024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x210028: 0x8e280254  lw          $t0, 0x254($s1)
    ctx->pc = 0x210028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x21002c: 0x3c050430  lui         $a1, 0x430
    ctx->pc = 0x21002cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1072 << 16));
    // 0x210030: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x210030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x210034: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x210034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x210038: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x210038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x21003c: 0x34631ff3  ori         $v1, $v1, 0x1FF3
    ctx->pc = 0x21003cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8179);
    // 0x210040: 0x681827  nor         $v1, $v1, $t0
    ctx->pc = 0x210040u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 8)));
    // 0x210044: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x210044u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x210048: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x210048u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21004c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x21004cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x210050: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x210050u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x210054: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x210054u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x210058: 0x2522f170  addiu       $v0, $t1, -0xE90
    ctx->pc = 0x210058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963568));
    // 0x21005c: 0x8e84bcf8  lw          $a0, -0x4308($s4)
    ctx->pc = 0x21005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950136)));
    // 0x210060: 0xad23f170  sw          $v1, -0xE90($t1)
    ctx->pc = 0x210060u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294963568), GPR_U32(ctx, 3));
    // 0x210064: 0x24e71308  addiu       $a3, $a3, 0x1308
    ctx->pc = 0x210064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4872));
    // 0x210068: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x210068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21006c: 0x3c014240  lui         $at, 0x4240
    ctx->pc = 0x21006cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16960 << 16));
    // 0x210070: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x210070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210074: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x210074u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210078: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x210078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x21007c: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x21007cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x210080: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x210080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x210084: 0xac4a0014  sw          $t2, 0x14($v0)
    ctx->pc = 0x210084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 10));
    // 0x210088: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x210088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x21008c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x21008cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x210090: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x210090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x210094: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x210094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x210098: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x210098u;
    SET_GPR_U32(ctx, 31, 0x2100A0u);
    ctx->pc = 0x21009Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210098u;
            // 0x21009c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100A0u; }
        if (ctx->pc != 0x2100A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100A0u; }
        if (ctx->pc != 0x2100A0u) { return; }
    }
    ctx->pc = 0x2100A0u;
    // 0x2100a0: 0x7ba60070  lq          $a2, 0x70($sp)
    ctx->pc = 0x2100a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2100a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2100a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100a8: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x2100A8u;
    SET_GPR_U32(ctx, 31, 0x2100B0u);
    ctx->pc = 0x2100ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2100A8u;
            // 0x2100ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100B0u; }
        if (ctx->pc != 0x2100B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100B0u; }
        if (ctx->pc != 0x2100B0u) { return; }
    }
    ctx->pc = 0x2100B0u;
    // 0x2100b0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x2100b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2100b4: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x2100b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2100b8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2100b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2100bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2100bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100c0: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x2100C0u;
    SET_GPR_U32(ctx, 31, 0x2100C8u);
    ctx->pc = 0x2100C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2100C0u;
            // 0x2100c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100C8u; }
        if (ctx->pc != 0x2100C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100C8u; }
        if (ctx->pc != 0x2100C8u) { return; }
    }
    ctx->pc = 0x2100C8u;
    // 0x2100c8: 0x36030002  ori         $v1, $s0, 0x2
    ctx->pc = 0x2100c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x2100cc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2100ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2100d0: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2100d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2100d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2100d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100d8: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2100d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2100dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2100dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100e0: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x2100e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2100e4: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x2100E4u;
    SET_GPR_U32(ctx, 31, 0x2100ECu);
    ctx->pc = 0x2100E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2100E4u;
            // 0x2100e8: 0x48262000  qmfc2.ni    $a2, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100ECu; }
        if (ctx->pc != 0x2100ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100ECu; }
        if (ctx->pc != 0x2100ECu) { return; }
    }
    ctx->pc = 0x2100ECu;
    // 0x2100ec: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x2100ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2100f0: 0x36030040  ori         $v1, $s0, 0x40
    ctx->pc = 0x2100f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x2100f4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2100f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2100f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2100f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100fc: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x2100FCu;
    SET_GPR_U32(ctx, 31, 0x210104u);
    ctx->pc = 0x210100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2100FCu;
            // 0x210100: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210104u; }
        if (ctx->pc != 0x210104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210104u; }
        if (ctx->pc != 0x210104u) { return; }
    }
    ctx->pc = 0x210104u;
    // 0x210104: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x210104u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210108: 0x36030010  ori         $v1, $s0, 0x10
    ctx->pc = 0x210108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x21010c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x21010cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x210110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210114: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x210114u;
    SET_GPR_U32(ctx, 31, 0x21011Cu);
    ctx->pc = 0x210118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210114u;
            // 0x210118: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21011Cu; }
        if (ctx->pc != 0x21011Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21011Cu; }
        if (ctx->pc != 0x21011Cu) { return; }
    }
    ctx->pc = 0x21011Cu;
    // 0x21011c: 0x36030100  ori         $v1, $s0, 0x100
    ctx->pc = 0x21011cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x210120: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x210120u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x210124: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x210124u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x210128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21012c: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x21012Cu;
    SET_GPR_U32(ctx, 31, 0x210134u);
    ctx->pc = 0x210130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21012Cu;
            // 0x210130: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210134u; }
        if (ctx->pc != 0x210134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210134u; }
        if (ctx->pc != 0x210134u) { return; }
    }
    ctx->pc = 0x210134u;
    // 0x210134: 0x36030004  ori         $v1, $s0, 0x4
    ctx->pc = 0x210134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x210138: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x210138u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21013c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x21013cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x210140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210144: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x210144u;
    SET_GPR_U32(ctx, 31, 0x21014Cu);
    ctx->pc = 0x210148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210144u;
            // 0x210148: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21014Cu; }
        if (ctx->pc != 0x21014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21014Cu; }
        if (ctx->pc != 0x21014Cu) { return; }
    }
    ctx->pc = 0x21014Cu;
    // 0x21014c: 0x36030008  ori         $v1, $s0, 0x8
    ctx->pc = 0x21014cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x210150: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x210150u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x210154: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x210154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21015c: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x21015cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x210160: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x210160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210164: 0x4be1296c  vsub.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x210164u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x210168: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x210168u;
    SET_GPR_U32(ctx, 31, 0x210170u);
    ctx->pc = 0x21016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210168u;
            // 0x21016c: 0x48262800  qmfc2.ni    $a2, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210170u; }
        if (ctx->pc != 0x210170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210170u; }
        if (ctx->pc != 0x210170u) { return; }
    }
    ctx->pc = 0x210170u;
    // 0x210170: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x210170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x210174: 0x36030080  ori         $v1, $s0, 0x80
    ctx->pc = 0x210174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)128);
    // 0x210178: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x210178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x21017c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x21017cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x210180: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x210180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210184: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x210184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210188: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x210188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21018c: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x21018cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x210190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210194: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x210194u;
    SET_GPR_U32(ctx, 31, 0x21019Cu);
    ctx->pc = 0x210198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210194u;
            // 0x210198: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21019Cu; }
        if (ctx->pc != 0x21019Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21019Cu; }
        if (ctx->pc != 0x21019Cu) { return; }
    }
    ctx->pc = 0x21019Cu;
    // 0x21019c: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x21019cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2101a0: 0x36030010  ori         $v1, $s0, 0x10
    ctx->pc = 0x2101a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x2101a4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2101a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2101a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2101a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101ac: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x2101ACu;
    SET_GPR_U32(ctx, 31, 0x2101B4u);
    ctx->pc = 0x2101B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2101ACu;
            // 0x2101b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2101B4u; }
        if (ctx->pc != 0x2101B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2101B4u; }
        if (ctx->pc != 0x2101B4u) { return; }
    }
    ctx->pc = 0x2101B4u;
    // 0x2101b4: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x2101b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2101b8: 0x36030002  ori         $v1, $s0, 0x2
    ctx->pc = 0x2101b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x2101bc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2101bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2101c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2101c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101c4: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x2101C4u;
    SET_GPR_U32(ctx, 31, 0x2101CCu);
    ctx->pc = 0x2101C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2101C4u;
            // 0x2101c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2101CCu; }
        if (ctx->pc != 0x2101CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2101CCu; }
        if (ctx->pc != 0x2101CCu) { return; }
    }
    ctx->pc = 0x2101CCu;
    // 0x2101cc: 0x36030008  ori         $v1, $s0, 0x8
    ctx->pc = 0x2101ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x2101d0: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x2101d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2101d4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2101d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2101d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2101d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2101dc: 0xc0784dc  jal         func_1E1370
    ctx->pc = 0x2101DCu;
    SET_GPR_U32(ctx, 31, 0x2101E4u);
    ctx->pc = 0x2101E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2101DCu;
            // 0x2101e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1370u;
    if (runtime->hasFunction(0x1E1370u)) {
        auto targetFn = runtime->lookupFunction(0x1E1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2101E4u; }
        if (ctx->pc != 0x2101E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1370_0x1e1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2101E4u; }
        if (ctx->pc != 0x2101E4u) { return; }
    }
    ctx->pc = 0x2101E4u;
    // 0x2101e4: 0x36030004  ori         $v1, $s0, 0x4
    ctx->pc = 0x2101e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x2101e8: 0x8e84bcf8  lw          $a0, -0x4308($s4)
    ctx->pc = 0x2101e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950136)));
    // 0x2101ec: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x2101ECu;
    SET_GPR_U32(ctx, 31, 0x2101F4u);
    ctx->pc = 0x2101F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2101ECu;
            // 0x2101f0: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2101F4u; }
        if (ctx->pc != 0x2101F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2101F4u; }
        if (ctx->pc != 0x2101F4u) { return; }
    }
    ctx->pc = 0x2101F4u;
    // 0x2101f4: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2101f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2101f8: 0xdba300e0  lqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x2101f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2101fc: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x2101fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210200: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x210200u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x210204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210208: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x210208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x21020c: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x21020cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x210210: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x210210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x210214: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x210214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x210218: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x210218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21021c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x21021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x210220: 0x3e00008  jr          $ra
    ctx->pc = 0x210220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210220u;
            // 0x210224: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210228u;
}
