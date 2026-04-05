#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4EB8
// Address: 0x1e4eb8 - 0x1e51c8
void sub_001E4EB8_0x1e4eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4EB8_0x1e4eb8");
#endif

    ctx->pc = 0x1e4eb8u;

    // 0x1e4eb8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e4eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e4ebc: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1e4ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x1e4ec0: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x1e4ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x1e4ec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ec8: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x1e4ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x1e4ecc: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1e4eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e4ed0: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x1e4ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x1e4ed4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e4ed4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ed8: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1e4ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x1e4edc: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x1e4edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x1e4ee0: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x1e4ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x1e4ee4: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x1e4ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x1e4ee8: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x1e4ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x1e4eec: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1e4eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1e4ef0: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x1e4ef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1e4ef4: 0x7a220130  lq          $v0, 0x130($s1)
    ctx->pc = 0x1e4ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1e4ef8: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x1e4ef8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e4efc: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e4efcu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4f00: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4f04: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1e4f04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e4f08: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1e4f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e4f0c: 0x44171800  mfc1        $s7, $f3
    ctx->pc = 0x1e4f0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x1e4f10: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x1e4f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x1e4f14: 0x4be120ac  vsub.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x1e4f14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f18: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1e4f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e4f1c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1e4f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f20: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e4f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f24: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e4f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f28: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x1e4f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x1e4f2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e4f2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e4f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4f34: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e4f34u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4f38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e4f38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4f3c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e4f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e4f40: 0x46000004  c1          0x4
    ctx->pc = 0x1e4f40u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e4f44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4f48: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x1e4f48u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1e4f4c: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x1e4f4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1e4f50: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1e4f50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1e4f54: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e4f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e4f58: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1e4f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e4f5c: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e4f5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f60: 0x4be32068  vadd.xyzw   $vf1, $vf4, $vf3
    ctx->pc = 0x1e4f60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f64: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1e4f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4f68: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e4f68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e4f6c: 0xda230120  lqc2        $vf3, 0x120($s1)
    ctx->pc = 0x1e4f6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e4f70: 0x4b030084  vsubx.x     $vf2, $vf0, $vf3x
    ctx->pc = 0x1e4f70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f74: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f78: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e4f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4f7c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4f80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e4f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e4f84: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f88: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e4f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4f8c: 0x4be20998  vmulx.xyzw  $vf6, $vf1, $vf2x
    ctx->pc = 0x1e4f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f90: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1e4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1e4f94: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1e4f94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e4f98: 0x4be3085a  vmulz.xyzw  $vf1, $vf1, $vf3z
    ctx->pc = 0x1e4f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4f9c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e4f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4fa0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4fa4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e4fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4fa8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1e4fa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4fac: 0x4be1116c  vsub.xyzw   $vf5, $vf2, $vf1
    ctx->pc = 0x1e4facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e4fb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e4fb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e4fb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4fbc: 0x0  nop
    ctx->pc = 0x1e4fbcu;
    // NOP
label_1e4fc0:
    // 0x1e4fc0: 0x0  nop
    ctx->pc = 0x1e4fc0u;
    // NOP
    // 0x1e4fc4: 0x0  nop
    ctx->pc = 0x1e4fc4u;
    // NOP
    // 0x1e4fc8: 0x0  nop
    ctx->pc = 0x1e4fc8u;
    // NOP
    // 0x1e4fcc: 0x0  nop
    ctx->pc = 0x1e4fccu;
    // NOP
    // 0x1e4fd0: 0x0  nop
    ctx->pc = 0x1e4fd0u;
    // NOP
    // 0x1e4fd4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E4FD4u;
    {
        const bool branch_taken_0x1e4fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FD4u;
            // 0x1e4fd8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fd4) {
            ctx->pc = 0x1E4FC0u;
            runtime->cooperativeGuestYield();
            goto label_1e4fc0;
        }
    }
    ctx->pc = 0x1E4FDCu;
    // 0x1e4fdc: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1e4fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1e4fe0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e4fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e4fe4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e4fe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e4fe8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e4fe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4fec: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4fecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ff0: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1e4ff0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e4ff4: 0x4be1206c  vsub.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x1e4ff4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ff8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e4ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4ffc: 0x4be608ac  vsub.xyzw   $vf2, $vf1, $vf6
    ctx->pc = 0x1e4ffcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5000: 0x4be510e8  vadd.xyzw   $vf3, $vf2, $vf5
    ctx->pc = 0x1e5000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e5004: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e5004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e5008: 0xdba30090  lqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1e5008u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e500c: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1e500cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5010: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1e5010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e5014: 0x4be60868  vadd.xyzw   $vf1, $vf1, $vf6
    ctx->pc = 0x1e5014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5018: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1e5018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e501c: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1e501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e5020: 0x4be50868  vadd.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x1e5020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5024: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e5024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5028: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1e5028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1e502c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1e502cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1e5030: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1e5030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1e5034: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x1e5034u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x1e5038: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x1e5038u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e503c: 0x3c1e002a  lui         $fp, 0x2A
    ctx->pc = 0x1e503cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
    // 0x1e5040: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1e5040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1e5044: 0x8fc4bcf8  lw          $a0, -0x4308($fp)
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950136)));
    // 0x1e5048: 0xace3f170  sw          $v1, -0xE90($a3)
    ctx->pc = 0x1e5048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 3));
    // 0x1e504c: 0x34c60042  ori         $a2, $a2, 0x42
    ctx->pc = 0x1e504cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)66);
    // 0x1e5050: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1e5050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5054: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1e5054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1e5058: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e5058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e505c: 0x48252000  qmfc2.ni    $a1, $vf4
    ctx->pc = 0x1e505cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e5060: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1e5060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1e5064: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1e5064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1e5068: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e5068u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e506c: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1e506cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1e5070: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e5070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5074: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e5074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e5078: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e5078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e507c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e507cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e5080: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e5080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e5084: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e5084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e5088: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x1E5088u;
    SET_GPR_U32(ctx, 31, 0x1E5090u);
    ctx->pc = 0x1E508Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5088u;
            // 0x1e508c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5090u; }
        if (ctx->pc != 0x1E5090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5090u; }
        if (ctx->pc != 0x1E5090u) { return; }
    }
    ctx->pc = 0x1E5090u;
    // 0x1e5090: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1e5090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5094: 0x0  nop
    ctx->pc = 0x1e5094u;
    // NOP
label_1e5098:
    // 0x1e5098: 0x8fc4bcf8  lw          $a0, -0x4308($fp)
    ctx->pc = 0x1e5098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950136)));
    // 0x1e509c: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x1e509cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e50a0: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E50A0u;
    SET_GPR_U32(ctx, 31, 0x1E50A8u);
    ctx->pc = 0x1E50A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50A0u;
            // 0x1e50a4: 0x7a460000  lq          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50A8u; }
        if (ctx->pc != 0x1E50A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50A8u; }
        if (ctx->pc != 0x1E50A8u) { return; }
    }
    ctx->pc = 0x1E50A8u;
    // 0x1e50a8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1E50A8u;
    {
        const bool branch_taken_0x1e50a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E50ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50A8u;
            // 0x1e50ac: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50a8) {
            ctx->pc = 0x1E5178u;
            goto label_1e5178;
        }
    }
    ctx->pc = 0x1E50B0u;
    // 0x1e50b0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1e50b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e50b4: 0x245377a0  addiu       $s3, $v0, 0x77A0
    ctx->pc = 0x1e50b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1e50b8: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x1e50b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e50bc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e50bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e50c0: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e50c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e50c4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e50c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e50c8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e50c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e50cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e50ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e50d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e50d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e50d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e50d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e50d8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1e50d8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e50dc: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x1e50dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e50e0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1e50e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e50e4: 0x0  nop
    ctx->pc = 0x1e50e4u;
    // NOP
    // 0x1e50e8: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x1E50E8u;
    {
        const bool branch_taken_0x1e50e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e50e8) {
            ctx->pc = 0x1E50ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50E8u;
            // 0x1e50ec: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E517Cu;
            goto label_1e517c;
        }
    }
    ctx->pc = 0x1E50F0u;
    // 0x1e50f0: 0x16a0001f  bnez        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E50F0u;
    {
        const bool branch_taken_0x1e50f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E50F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50F0u;
            // 0x1e50f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50f0) {
            ctx->pc = 0x1E5170u;
            goto label_1e5170;
        }
    }
    ctx->pc = 0x1E50F8u;
    // 0x1e50f8: 0x2670fff0  addiu       $s0, $s3, -0x10
    ctx->pc = 0x1e50f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x1e50fc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x1e50fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e5100: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1e5100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e5104: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1e5104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1e5108: 0xae230234  sw          $v1, 0x234($s1)
    ctx->pc = 0x1e5108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 3));
    // 0x1e510c: 0x7e220210  sq          $v0, 0x210($s1)
    ctx->pc = 0x1e510cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 528), GPR_VEC(ctx, 2));
    // 0x1e5110: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5110u;
    {
        const bool branch_taken_0x1e5110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5110u;
            // 0x1e5114: 0xae240240  sw          $a0, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5110) {
            ctx->pc = 0x1E5128u;
            goto label_1e5128;
        }
    }
    ctx->pc = 0x1E5118u;
    // 0x1e5118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e511c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e511cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5120: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E5120u;
    SET_GPR_U32(ctx, 31, 0x1E5128u);
    ctx->pc = 0x1E5124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5120u;
            // 0x1e5124: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5128u; }
        if (ctx->pc != 0x1E5128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5128u; }
        if (ctx->pc != 0x1E5128u) { return; }
    }
    ctx->pc = 0x1E5128u;
label_1e5128:
    // 0x1e5128: 0x48b70800  qmtc2.ni    $s7, $vf1
    ctx->pc = 0x1e5128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 23));
    // 0x1e512c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e512cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e5130: 0x96020034  lhu         $v0, 0x34($s0)
    ctx->pc = 0x1e5130u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e5134: 0xae23024c  sw          $v1, 0x24C($s1)
    ctx->pc = 0x1e5134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 3));
    // 0x1e5138: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1e5138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1e513c: 0xda62fff0  lqc2        $vf2, -0x10($s3)
    ctx->pc = 0x1e513cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 4294967280)));
    // 0x1e5140: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1e5140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5144: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1e5144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e5148: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1e5148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e514c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1e514cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e5150: 0x4a820041  vaddy.y     $vf1, $vf0, $vf2y
    ctx->pc = 0x1e5150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5154: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1e5154u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5158: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1e5158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1e515c: 0x4a830040  vaddx.y     $vf1, $vf0, $vf3x
    ctx->pc = 0x1e515cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5160: 0xfa2100e0  sqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1e5160u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5164: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e5164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e5168: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1e5168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e516c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5170:
    // 0x1e5170: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x1e5170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1e5174: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x1e5174u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_1e5178:
    // 0x1e5178: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e5178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e517c:
    // 0x1e517c: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1e517cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e5180: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1E5180u;
    {
        const bool branch_taken_0x1e5180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5180u;
            // 0x1e5184: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5180) {
            ctx->pc = 0x1E5098u;
            runtime->cooperativeGuestYield();
            goto label_1e5098;
        }
    }
    ctx->pc = 0x1E5188u;
    // 0x1e5188: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x1E5188u;
    SET_GPR_U32(ctx, 31, 0x1E5190u);
    ctx->pc = 0x1E518Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5188u;
            // 0x1e518c: 0x8fc4bcf8  lw          $a0, -0x4308($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5190u; }
        if (ctx->pc != 0x1E5190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5190u; }
        if (ctx->pc != 0x1E5190u) { return; }
    }
    ctx->pc = 0x1E5190u;
    // 0x1e5190: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1e5190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5194: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1e5194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e5198: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1e5198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e519c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1e519cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e51a0: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x1e51a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e51a4: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x1e51a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e51a8: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x1e51a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e51ac: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x1e51acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e51b0: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x1e51b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e51b4: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x1e51b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e51b8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1e51b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e51bc: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x1e51bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e51c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E51C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E51C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51C0u;
            // 0x1e51c4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4FC0u: goto label_1e4fc0;
            case 0x1E5098u: goto label_1e5098;
            case 0x1E5128u: goto label_1e5128;
            case 0x1E5170u: goto label_1e5170;
            case 0x1E5178u: goto label_1e5178;
            case 0x1E517Cu: goto label_1e517c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E51C8u;
}
