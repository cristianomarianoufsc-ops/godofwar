#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a10f8
// Address: 0x1a10f8 - 0x1a111c
void FUN_001a10f8_0x1a10f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a10f8_0x1a10f8");
#endif

    ctx->pc = 0x1a10f8u;

    // 0x1a10f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a10fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a10fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1100: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1104: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1108: 0xd8610050  lqc2        $vf1, 0x50($v1)
    ctx->pc = 0x1a1108u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1a110c: 0xd8420050  lqc2        $vf2, 0x50($v0)
    ctx->pc = 0x1a110cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1a1110: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1a1110u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a1114: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a1114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a1118: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1a1118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
}
