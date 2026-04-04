#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE400
// Address: 0x1ce400 - 0x1ce460
void sub_001CE400_0x1ce400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE400_0x1ce400");
#endif

    ctx->pc = 0x1ce400u;

    // 0x1ce400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce408: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ce408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ce40c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1ce40cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce410: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ce410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce414: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ce414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1ce418: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1ce418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1ce41c: 0x40f809  jalr        $v0
    ctx->pc = 0x1CE41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE424u);
        ctx->pc = 0x1CE420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE41Cu;
            // 0x1ce420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CE424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE424u; }
            if (ctx->pc != 0x1CE424u) { return; }
        }
        }
    }
    ctx->pc = 0x1CE424u;
    // 0x1ce424: 0xda020070  lqc2        $vf2, 0x70($s0)
    ctx->pc = 0x1ce424u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1ce428: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ce428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce42c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ce42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ce430: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1ce430u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce434: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ce434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce438: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ce438u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce43c: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1ce43cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1ce440: 0xf8420010  sqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1ce440u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ce444: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1ce444u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce448: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ce448u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce44c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ce44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce454: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1ce454u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce458: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE458u;
            // 0x1ce45c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE460u;
}
