#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12e4d0
// Address: 0x12e4d0 - 0x12e518
void entry_12e4d0_0x12e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12e4d0_0x12e518");
#endif

    ctx->pc = 0x12e4d0u;

    // 0x12e4d0: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x12e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x12e4d4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x12e4d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x12e4d8: 0x4be20b3c  vmove.xyzw  $vf2, $vf1
    ctx->pc = 0x12e4d8u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x12e4dc: 0xd86300b0  lqc2        $vf3, 0xB0($v1)
    ctx->pc = 0x12e4dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x12e4e0: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x12e4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12e4e4: 0x4a221b3c  vmove.w     $vf2, $vf3
    ctx->pc = 0x12e4e4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x12e4e8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12e4e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12e4ec: 0xf86200b0  sqc2        $vf2, 0xB0($v1)
    ctx->pc = 0x12e4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12e4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12e4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e4f4: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x12e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x12e4f8: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x12e4f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12e4fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12e4fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12e500: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x12e500u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12e504: 0xd84100b0  lqc2        $vf1, 0xB0($v0)
    ctx->pc = 0x12e504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x12e508: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x12e508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12e50c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E50Cu;
            // 0x12e510: 0xf84100b0  sqc2        $vf1, 0xB0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 176), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E514u;
    // 0x12e514: 0x0  nop
    ctx->pc = 0x12e514u;
    // NOP
}
