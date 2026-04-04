#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD680
// Address: 0x1cd680 - 0x1cd720
void sub_001CD680_0x1cd680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD680_0x1cd680");
#endif

    ctx->pc = 0x1cd680u;

    // 0x1cd680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cd680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cd684: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1cd684u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1cd688: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1cd688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1cd68c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1cd68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1cd690: 0x700584a9  por         $s0, $zero, $a1
    ctx->pc = 0x1cd690u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1cd694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cd694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cd698: 0x70068ca9  por         $s1, $zero, $a2
    ctx->pc = 0x1cd698u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1cd69c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd6a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cd6a4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cd6a8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1cd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1cd6ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd6b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1CD6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD6B8u);
        ctx->pc = 0x1CD6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6B0u;
            // 0x1cd6b4: 0xfba20020  sqc2        $vf2, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD6B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6B8u; }
            if (ctx->pc != 0x1CD6B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD6B8u;
    // 0x1cd6b8: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1cd6b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd6bc: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1cd6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1cd6c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cd6c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cd6c4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1cd6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd6c8: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1cd6c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd6cc: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1cd6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd6d0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1cd6d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cd6d4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1cd6d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd6d8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1cd6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd6dc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1cd6dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cd6e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cd6e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cd6e4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1cd6e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd6e8: 0x4a0002ff  vnop
    ctx->pc = 0x1cd6e8u;
    // NOP operation, no action needed for VU0
    // 0x1cd6ec: 0x4a0002ff  vnop
    ctx->pc = 0x1cd6ecu;
    // NOP operation, no action needed for VU0
    // 0x1cd6f0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1cd6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd6f4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1cd6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd6f8: 0xf8420020  sqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1cd6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd6fc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1cd6fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd700: 0xf8420020  sqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1cd700u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cd704: 0x7c500000  sq          $s0, 0x0($v0)
    ctx->pc = 0x1cd704u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 16));
    // 0x1cd708: 0x7c510010  sq          $s1, 0x10($v0)
    ctx->pc = 0x1cd708u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 17));
    // 0x1cd70c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1cd70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd710: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1cd710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd714: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cd714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd718: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD718u;
            // 0x1cd71c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD720u;
}
