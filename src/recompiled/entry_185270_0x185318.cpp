#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_185270
// Address: 0x185270 - 0x185318
void entry_185270_0x185318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_185270_0x185318");
#endif

    ctx->pc = 0x185270u;

    // 0x185270: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x185270u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185274: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x185278: 0x4be630aa  vmul.xyzw   $vf2, $vf6, $vf6
    ctx->pc = 0x185278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18527c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x18527cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185280: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x185280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x185284: 0x4be3333c  vmove.xyzw  $vf3, $vf6
    ctx->pc = 0x185284u;
    ctx->vu0_vf[3] = ctx->vu0_vf[6];
    // 0x185288: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x185288u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x18528c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x18528cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x185290: 0x4a0003bf  vwaitq
    ctx->pc = 0x185290u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x185294: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x185294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x185298: 0x4a0002ff  vnop
    ctx->pc = 0x185298u;
    // NOP operation, no action needed for VU0
    // 0x18529c: 0x4a0002ff  vnop
    ctx->pc = 0x18529cu;
    // NOP operation, no action needed for VU0
    // 0x1852a0: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1852a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1852a4: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x1852a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1852a8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1852a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1852ac: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1852acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1852b0: 0x4be22b3c  vmove.xyzw  $vf2, $vf5
    ctx->pc = 0x1852b0u;
    ctx->vu0_vf[2] = ctx->vu0_vf[5];
    // 0x1852b4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1852b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1852b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1852b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1852bc: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1852bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1852c0: 0x4a0002ff  vnop
    ctx->pc = 0x1852c0u;
    // NOP operation, no action needed for VU0
    // 0x1852c4: 0x4a0002ff  vnop
    ctx->pc = 0x1852c4u;
    // NOP operation, no action needed for VU0
    // 0x1852c8: 0x4bc21afe  vopmula.xyz $ACC, $vf3, $vf2
    ctx->pc = 0x1852c8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]);
    // 0x1852cc: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1852ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1852d0: 0x4bc310ae  vopmsub.xyz $vf2, $vf2, $vf3
    ctx->pc = 0x1852d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1852d4: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1852d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1852d8: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1852d8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x1852dc: 0x4bc2192e  vopmsub.xyz $vf4, $vf3, $vf2
    ctx->pc = 0x1852dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1852e0: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x1852e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1852e4: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x1852e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1852e8: 0x4a242b3c  vmove.w     $vf4, $vf5
    ctx->pc = 0x1852e8u;
    ctx->vu0_vf[4] = ctx->vu0_vf[5];
    // 0x1852ec: 0x4a23333c  vmove.w     $vf3, $vf6
    ctx->pc = 0x1852ecu;
    ctx->vu0_vf[3] = ctx->vu0_vf[6];
    // 0x1852f0: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1852f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1852f4: 0x4a220b3c  vmove.w     $vf2, $vf1
    ctx->pc = 0x1852f4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x1852f8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1852f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1852fc: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1852fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x185300: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x185300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185304: 0xf8820020  sqc2        $vf2, 0x20($a0)
    ctx->pc = 0x185304u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x185308: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x185308u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x18530c: 0x3e00008  jr          $ra
    ctx->pc = 0x18530Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18530Cu;
            // 0x185310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185314u;
    // 0x185314: 0x0  nop
    ctx->pc = 0x185314u;
    // NOP
}
