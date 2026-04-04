#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f5078
// Address: 0x1f5078 - 0x1f50a0
void entry_1f5078_0x1f50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f5078_0x1f50a0");
#endif

    ctx->pc = 0x1f5078u;

    // 0x1f5078: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1f5078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f507c: 0x4a41089a  vmulz.z     $vf2, $vf1, $vf1z
    ctx->pc = 0x1f507cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f5080: 0x4b010858  vmulx.x     $vf1, $vf1, $vf1x
    ctx->pc = 0x1f5080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f5084: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f5084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f5088: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f5088u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f508c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f508cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5090: 0x46000004  c1          0x4
    ctx->pc = 0x1f5090u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f5094: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F509Cu;
    // 0x1f509c: 0x0  nop
    ctx->pc = 0x1f509cu;
    // NOP
}
