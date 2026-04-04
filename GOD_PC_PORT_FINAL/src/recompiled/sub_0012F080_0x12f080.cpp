#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012F080
// Address: 0x12f080 - 0x12f158
void sub_0012F080_0x12f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F080_0x12f080");
#endif

    ctx->pc = 0x12f080u;

    // 0x12f080: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12f080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12f084: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f088: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x12f088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f08c: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x12f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f090: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x12f090u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x12f094: 0x8c44bde8  lw          $a0, -0x4218($v0)
    ctx->pc = 0x12f094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x12f098: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x12f098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x12f09c: 0x24870080  addiu       $a3, $a0, 0x80
    ctx->pc = 0x12f09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x12f0a0: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x12f0a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x12f0a4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x12f0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x12f0a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f0a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f0ac: 0x440a6000  mfc1        $t2, $f12
    ctx->pc = 0x12f0acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x12f0b0: 0x704a1b89  pcpyld      $v1, $v0, $t2
    ctx->pc = 0x12f0b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x12f0b4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x12f0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x12f0b8: 0x24090000  addiu       $t1, $zero, 0x0
    ctx->pc = 0x12f0b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12f0bc: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x12f0bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x12f0c0: 0x704344c8  ppacw       $t0, $v0, $v1
    ctx->pc = 0x12f0c0u;
    SET_GPR_VEC(ctx, 8, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12f0c4: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x12f0c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x12f0c8: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x12f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f0cc: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x12f0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f0d0: 0xd8810040  lqc2        $vf1, 0x40($a0)
    ctx->pc = 0x12f0d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12f0d4: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x12f0d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f0d8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x12f0d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f0dc: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f0dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f0e0: 0xd8810080  lqc2        $vf1, 0x80($a0)
    ctx->pc = 0x12f0e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x12f0e4: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x12f0e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f0e8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f0e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f0ec: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x12f0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f0f0: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x12f0f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x12f0f4: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x12f0f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f0f8: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x12f0f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12f0fc: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f0fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f100: 0xd8e10010  lqc2        $vf1, 0x10($a3)
    ctx->pc = 0x12f100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x12f104: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x12f104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f108: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f10c: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x12f10cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f110: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x12f110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x12f114: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x12f114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f118: 0xd8820020  lqc2        $vf2, 0x20($a0)
    ctx->pc = 0x12f118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x12f11c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f11cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f120: 0xd8e10020  lqc2        $vf1, 0x20($a3)
    ctx->pc = 0x12f120u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x12f124: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x12f124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f128: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f12c: 0xf8a20020  sqc2        $vf2, 0x20($a1)
    ctx->pc = 0x12f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f130: 0xd8c10030  lqc2        $vf1, 0x30($a2)
    ctx->pc = 0x12f130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x12f134: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x12f134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12f138: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x12f138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f13c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f13cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f140: 0xd8e10030  lqc2        $vf1, 0x30($a3)
    ctx->pc = 0x12f140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x12f144: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x12f144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f148: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x12f148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f14c: 0xf8a20030  sqc2        $vf2, 0x30($a1)
    ctx->pc = 0x12f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12f150: 0x3e00008  jr          $ra
    ctx->pc = 0x12F150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F150u;
            // 0x12f154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F158u;
}
