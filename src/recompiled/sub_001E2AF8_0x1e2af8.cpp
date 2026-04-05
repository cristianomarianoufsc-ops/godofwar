#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2AF8
// Address: 0x1e2af8 - 0x1e2ec8
void sub_001E2AF8_0x1e2af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2AF8_0x1e2af8");
#endif

    ctx->pc = 0x1e2af8u;

    // 0x1e2af8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e2af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e2afc: 0x70061fc9  prot3w      $v1, $a2
    ctx->pc = 0x1e2afcu;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e2b00: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e2b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e2b04: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1e2b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x1e2b08: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1e2b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b0c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x1e2b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x1e2b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b14: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x1e2b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x1e2b18: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1e2b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x1e2b1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e2b1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b20: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1e2b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x1e2b24: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1e2b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x1e2b28: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x1e2b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x1e2b2c: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x1e2b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x1e2b30: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x1e2b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x1e2b34: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1e2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1e2b38: 0xda240120  lqc2        $vf4, 0x120($s1)
    ctx->pc = 0x1e2b38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e2b3c: 0x7a220130  lq          $v0, 0x130($s1)
    ctx->pc = 0x1e2b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1e2b40: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e2b40u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e2b44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e2b44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b48: 0xdac30000  lqc2        $vf3, 0x0($s6)
    ctx->pc = 0x1e2b48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e2b4c: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x1e2b4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e2b50: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1e2b50u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2b54: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e2b54u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e2b58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e2b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2b5c: 0x44942000  mtc1        $s4, $f4
    ctx->pc = 0x1e2b5cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e2b60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e2b60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e2b64: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1e2b64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2b68: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e2b68u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e2b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2b70: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x1e2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
    // 0x1e2b74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e2b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e2b78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2b7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e2b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e2b80: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e2b80u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e2b84: 0x460400c0  add.s       $f3, $f0, $f4
    ctx->pc = 0x1e2b84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1e2b88: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e2b88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e2b8c: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x1e2b8cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x1e2b90: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x1e2b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x1e2b94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e2b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e2b98: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e2b98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e2b9c: 0x4a812044  vsubx.y     $vf1, $vf4, $vf1x
    ctx->pc = 0x1e2b9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2ba0: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1e2ba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2ba4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e2ba4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2ba8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e2ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2bac: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1e2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e2bb0: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1e2bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e2bb4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e2bb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e2bb8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e2bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2bbc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e2bbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2bc0: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1e2bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2bc4: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1e2bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2bc8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1e2bc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2bcc: 0xdaa30020  lqc2        $vf3, 0x20($s5)
    ctx->pc = 0x1e2bccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1e2bd0: 0x4be418da  vmulz.xyzw  $vf3, $vf3, $vf4z
    ctx->pc = 0x1e2bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2bd4: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1e2bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2bd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2bdc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e2bdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e2be0: 0x4be218d8  vmulx.xyzw  $vf3, $vf3, $vf2x
    ctx->pc = 0x1e2be0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2be4: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e2be4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e2be8: 0x4b040104  vsubx.x     $vf4, $vf0, $vf4x
    ctx->pc = 0x1e2be8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e2bec: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x1e2becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2bf0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e2bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2bf4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e2bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2bf8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e2bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2bfc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1e2bfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c00: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e2c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e2c04: 0x4be120ac  vsub.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x1e2c04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c08: 0x4be311a8  vadd.xyzw   $vf6, $vf2, $vf3
    ctx->pc = 0x1e2c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c0c: 0x4be309e8  vadd.xyzw   $vf7, $vf1, $vf3
    ctx->pc = 0x1e2c0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c10: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e2c14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e2c18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2c1c: 0x0  nop
    ctx->pc = 0x1e2c1cu;
    // NOP
label_1e2c20:
    // 0x1e2c20: 0x0  nop
    ctx->pc = 0x1e2c20u;
    // NOP
    // 0x1e2c24: 0x0  nop
    ctx->pc = 0x1e2c24u;
    // NOP
    // 0x1e2c28: 0x0  nop
    ctx->pc = 0x1e2c28u;
    // NOP
    // 0x1e2c2c: 0x0  nop
    ctx->pc = 0x1e2c2cu;
    // NOP
    // 0x1e2c30: 0x0  nop
    ctx->pc = 0x1e2c30u;
    // NOP
    // 0x1e2c34: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E2C34u;
    {
        const bool branch_taken_0x1e2c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C34u;
            // 0x1e2c38: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c34) {
            ctx->pc = 0x1E2C20u;
            runtime->cooperativeGuestYield();
            goto label_1e2c20;
        }
    }
    ctx->pc = 0x1E2C3Cu;
    // 0x1e2c3c: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x1e2c3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1e2c40: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e2c44: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x1e2c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x1e2c48: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E2C48u;
    {
        const bool branch_taken_0x1e2c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C48u;
            // 0x1e2c4c: 0xfba50090  sqc2        $vf5, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c48) {
            ctx->pc = 0x1E2C98u;
            goto label_1e2c98;
        }
    }
    ctx->pc = 0x1E2C50u;
    // 0x1e2c50: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x1e2c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1e2c54: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x1e2c54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e2c58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e2c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e2c5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e2c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e2c60: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1e2c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c64: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1e2c64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e2c68: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e2c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c6c: 0x4be608a8  vadd.xyzw   $vf2, $vf1, $vf6
    ctx->pc = 0x1e2c6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c70: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e2c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2c74: 0x4be708a8  vadd.xyzw   $vf2, $vf1, $vf7
    ctx->pc = 0x1e2c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c78: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e2c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2c7c: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1e2c7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e2c80: 0x4be308a8  vadd.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1e2c80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c84: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1e2c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2c88: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e2c88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c8c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1E2C8Cu;
    {
        const bool branch_taken_0x1e2c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C8Cu;
            // 0x1e2c90: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c8c) {
            ctx->pc = 0x1E2D10u;
            goto label_1e2d10;
        }
    }
    ctx->pc = 0x1E2C94u;
    // 0x1e2c94: 0x0  nop
    ctx->pc = 0x1e2c94u;
    // NOP
label_1e2c98:
    // 0x1e2c98: 0xdaa10020  lqc2        $vf1, 0x20($s5)
    ctx->pc = 0x1e2c98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1e2c9c: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x1e2c9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e2ca0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1e2ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2ca4: 0x4be1206c  vsub.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x1e2ca4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2ca8: 0xda220120  lqc2        $vf2, 0x120($s1)
    ctx->pc = 0x1e2ca8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e2cac: 0x4be2085a  vmulz.xyzw  $vf1, $vf1, $vf2z
    ctx->pc = 0x1e2cacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2cb0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1e2cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2cb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2cb8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e2cb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e2cbc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e2cbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2cc0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e2cc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e2cc4: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1e2cc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2cc8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e2cc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2ccc: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1e2cccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e2cd0: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e2cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2cd4: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x1e2cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1e2cd8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e2cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e2cdc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e2cdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e2ce0: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1e2ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2ce4: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1e2ce4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e2ce8: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x1e2ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2cec: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e2cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2cf0: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1e2cf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2cf4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e2cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2cf8: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1e2cf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2cfc: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1e2cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2d00: 0x4be608a8  vadd.xyzw   $vf2, $vf1, $vf6
    ctx->pc = 0x1e2d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2d04: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e2d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2d08: 0x4be70868  vadd.xyzw   $vf1, $vf1, $vf7
    ctx->pc = 0x1e2d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2d0c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e2d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e2d10:
    // 0x1e2d10: 0x8e240258  lw          $a0, 0x258($s1)
    ctx->pc = 0x1e2d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x1e2d14: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x1e2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x1e2d18: 0x8e260254  lw          $a2, 0x254($s1)
    ctx->pc = 0x1e2d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1e2d1c: 0x3c050430  lui         $a1, 0x430
    ctx->pc = 0x1e2d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1072 << 16));
    // 0x1e2d20: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e2d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e2d24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1e2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1e2d28: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e2d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e2d2c: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x1e2d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1e2d30: 0x34631ff3  ori         $v1, $v1, 0x1FF3
    ctx->pc = 0x1e2d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8179);
    // 0x1e2d34: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1e2d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1e2d38: 0x444825  or          $t1, $v0, $a0
    ctx->pc = 0x1e2d38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e2d3c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1e2d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e2d40: 0x661827  nor         $v1, $v1, $a2
    ctx->pc = 0x1e2d40u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 6)));
    // 0x1e2d44: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x1e2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1e2d48: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x1e2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x1e2d4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2d50: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1e2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1e2d54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e2d54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2d58: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x1e2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x1e2d5c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e2d5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2d60: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1e2d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1e2d64: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e2d68: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e2d6c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e2d70: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e2d74: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e2d78: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e2d7c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e2d80: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1e2d84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e2d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e2d88: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1e2d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1e2d8c: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x1E2D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E2D94u);
    ctx->pc = 0x1E2D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D8Cu;
            // 0x1e2d90: 0x7ac50000  lq          $a1, 0x0($s6) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D94u; }
        if (ctx->pc != 0x1E2D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D94u; }
        if (ctx->pc != 0x1E2D94u) { return; }
    }
    ctx->pc = 0x1E2D94u;
    // 0x1e2d94: 0x13c0003c  beqz        $fp, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E2D94u;
    {
        const bool branch_taken_0x1e2d94 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D94u;
            // 0x1e2d98: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d94) {
            ctx->pc = 0x1E2E88u;
            goto label_1e2e88;
        }
    }
    ctx->pc = 0x1E2D9Cu;
    // 0x1e2d9c: 0x0  nop
    ctx->pc = 0x1e2d9cu;
    // NOP
label_1e2da0:
    // 0x1e2da0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1e2da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1e2da4: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x1e2da4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e2da8: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x1e2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x1e2dac: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E2DACu;
    SET_GPR_U32(ctx, 31, 0x1E2DB4u);
    ctx->pc = 0x1E2DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DACu;
            // 0x1e2db0: 0x7a460000  lq          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DB4u; }
        if (ctx->pc != 0x1E2DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DB4u; }
        if (ctx->pc != 0x1E2DB4u) { return; }
    }
    ctx->pc = 0x1E2DB4u;
    // 0x1e2db4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1E2DB4u;
    {
        const bool branch_taken_0x1e2db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DB4u;
            // 0x1e2db8: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2db4) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2DBCu;
    // 0x1e2dbc: 0xdaa20010  lqc2        $vf2, 0x10($s5)
    ctx->pc = 0x1e2dbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1e2dc0: 0x245077a0  addiu       $s0, $v0, 0x77A0
    ctx->pc = 0x1e2dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1e2dc4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e2dc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e2dc8: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e2dc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2dcc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e2dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2dd0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e2dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2dd4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1e2dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e2dd8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e2dd8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2ddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2de0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1e2de4: 0xc07848e  jal         func_1E1238
    ctx->pc = 0x1E2DE4u;
    SET_GPR_U32(ctx, 31, 0x1E2DECu);
    ctx->pc = 0x1E2DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DE4u;
            // 0x1e2de8: 0x2605fff0  addiu       $a1, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1238u;
    if (runtime->hasFunction(0x1E1238u)) {
        auto targetFn = runtime->lookupFunction(0x1E1238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DECu; }
        if (ctx->pc != 0x1E2DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1238_0x1e1238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DECu; }
        if (ctx->pc != 0x1E2DECu) { return; }
    }
    ctx->pc = 0x1E2DECu;
    // 0x1e2dec: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1e2decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e2df0: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1e2df4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e2df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e2df8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e2df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2dfc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1e2dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2e00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e2e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2e04: 0x0  nop
    ctx->pc = 0x1e2e04u;
    // NOP
    // 0x1e2e08: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x1E2E08u;
    {
        const bool branch_taken_0x1e2e08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2e08) {
            ctx->pc = 0x1E2E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E08u;
            // 0x1e2e0c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2E7Cu;
            goto label_1e2e7c;
        }
    }
    ctx->pc = 0x1E2E10u;
    // 0x1e2e10: 0xda01fff0  lqc2        $vf1, -0x10($s0)
    ctx->pc = 0x1e2e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x1e2e14: 0x48b41800  qmtc2.ni    $s4, $vf3
    ctx->pc = 0x1e2e14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 20));
    // 0x1e2e18: 0xda220120  lqc2        $vf2, 0x120($s1)
    ctx->pc = 0x1e2e18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e2e1c: 0x4a820845  vsuby.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x1e2e1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2e20: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1e2e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2e24: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1e2e24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e2e28: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1e2e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2e2c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e2e2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2e30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e2e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e34: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1e2e34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2e38: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e2e38u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2e3c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e2e3cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e2e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2e44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2e48: 0x0  nop
    ctx->pc = 0x1e2e48u;
    // NOP
    // 0x1e2e4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2E4Cu;
    {
        const bool branch_taken_0x1e2e4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E4Cu;
            // 0x1e2e50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e4c) {
            ctx->pc = 0x1E2E58u;
            goto label_1e2e58;
        }
    }
    ctx->pc = 0x1E2E54u;
    // 0x1e2e54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2e58:
    // 0x1e2e58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2E58u;
    {
        const bool branch_taken_0x1e2e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E58u;
            // 0x1e2e5c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e58) {
            ctx->pc = 0x1E2E7Cu;
            goto label_1e2e7c;
        }
    }
    ctx->pc = 0x1E2E60u;
    // 0x1e2e60: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1e2e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e2e64: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e2e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2e68: 0xfac20000  sqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1e2e68u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2e6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2E6Cu;
    {
        const bool branch_taken_0x1e2e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E6Cu;
            // 0x1e2e70: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e6c) {
            ctx->pc = 0x1E2E88u;
            goto label_1e2e88;
        }
    }
    ctx->pc = 0x1E2E74u;
    // 0x1e2e74: 0x0  nop
    ctx->pc = 0x1e2e74u;
    // NOP
label_1e2e78:
    // 0x1e2e78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e2e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e2e7c:
    // 0x1e2e7c: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x1e2e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1e2e80: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1E2E80u;
    {
        const bool branch_taken_0x1e2e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E80u;
            // 0x1e2e84: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e80) {
            ctx->pc = 0x1E2DA0u;
            runtime->cooperativeGuestYield();
            goto label_1e2da0;
        }
    }
    ctx->pc = 0x1E2E88u;
label_1e2e88:
    // 0x1e2e88: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e2e8c: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x1E2E8Cu;
    SET_GPR_U32(ctx, 31, 0x1E2E94u);
    ctx->pc = 0x1E2E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E8Cu;
            // 0x1e2e90: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2E94u; }
        if (ctx->pc != 0x1E2E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2E94u; }
        if (ctx->pc != 0x1E2E94u) { return; }
    }
    ctx->pc = 0x1E2E94u;
    // 0x1e2e94: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1e2e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e98: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x1e2e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e2e9c: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x1e2e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e2ea0: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x1e2ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e2ea4: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x1e2ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e2ea8: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x1e2ea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e2eac: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x1e2eacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e2eb0: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x1e2eb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e2eb4: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x1e2eb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e2eb8: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x1e2eb8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e2ebc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1e2ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2EC0u;
            // 0x1e2ec4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2C20u: goto label_1e2c20;
            case 0x1E2C98u: goto label_1e2c98;
            case 0x1E2D10u: goto label_1e2d10;
            case 0x1E2DA0u: goto label_1e2da0;
            case 0x1E2E58u: goto label_1e2e58;
            case 0x1E2E78u: goto label_1e2e78;
            case 0x1E2E7Cu: goto label_1e2e7c;
            case 0x1E2E88u: goto label_1e2e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2EC8u;
}
