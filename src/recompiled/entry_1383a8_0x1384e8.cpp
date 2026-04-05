#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1383a8
// Address: 0x1383a8 - 0x1384e8
void entry_1383a8_0x1384e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1383a8_0x1384e8");
#endif

    ctx->pc = 0x1383a8u;

    // 0x1383a8: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x1383a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x1383ac: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1383acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1383b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1383b4: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x1383b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1383b8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1383bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1383bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1383c0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1383c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1383c4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1383c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1383c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1383c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1383cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1383ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1383d0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1383D0u;
    {
        const bool branch_taken_0x1383d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1383D0u;
            // 0x1383d4: 0x48a53000  qmtc2.ni    $a1, $vf6 (Delay Slot)
        ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383d0) {
            ctx->pc = 0x1384D8u;
            goto label_1384d8;
        }
    }
    ctx->pc = 0x1383D8u;
    // 0x1383d8: 0x8d44008c  lw          $a0, 0x8C($t2)
    ctx->pc = 0x1383d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 140)));
    // 0x1383dc: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x1383dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1383e0: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1383e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1383e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1383e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1383e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1383e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1383ec: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1383ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1383f0: 0xd8630030  lqc2        $vf3, 0x30($v1)
    ctx->pc = 0x1383f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1383f4: 0x4be418ec  vsub.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x1383f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1383f8: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1383f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1383fc: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1383fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138400: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x138400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x138404: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x138404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x138408: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x138408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13840c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13840cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x138410: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x138410u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x138414: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x138414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x138418: 0x46020084  c1          0x20084
    ctx->pc = 0x138418u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x13841c: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x13841cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[2];
    // 0x138420: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x138420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x138424: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x138424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x138428: 0x4be11958  vmulx.xyzw  $vf5, $vf3, $vf1x
    ctx->pc = 0x138428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13842c: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x13842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x138430: 0x4be4306c  vsub.xyzw   $vf1, $vf6, $vf4
    ctx->pc = 0x138430u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x138434: 0x4be1286a  vmul.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x138434u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x138438: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x138438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13843c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x13843cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138440: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x138440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138444: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x138444u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x138448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13844c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x13844cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x138450: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x138450u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x138454: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x138454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x138458: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x138458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13845c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13845cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x138460: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x138460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x138464: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x138464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x138468: 0x4be6206c  vsub.xyzw   $vf1, $vf4, $vf6
    ctx->pc = 0x138468u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13846c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x13846cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x138470: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x138470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138474: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x138474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138478: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x138478u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13847c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x13847cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x138480: 0x4b0300c3  vaddw.x     $vf3, $vf0, $vf3w
    ctx->pc = 0x138480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x138484: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138488: 0x46000044  c1          0x44
    ctx->pc = 0x138488u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x13848c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x13848cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x138490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x138490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138498: 0x0  nop
    ctx->pc = 0x138498u;
    // NOP
    // 0x13849c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13849Cu;
    {
        const bool branch_taken_0x13849c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1384A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13849Cu;
            // 0x1384a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13849c) {
            ctx->pc = 0x1384A8u;
            goto label_1384a8;
        }
    }
    ctx->pc = 0x1384A4u;
    // 0x1384a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1384a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1384a8:
    // 0x1384a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1384A8u;
    {
        const bool branch_taken_0x1384a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1384ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1384A8u;
            // 0x1384ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384a8) {
            ctx->pc = 0x1384DCu;
            goto label_1384dc;
        }
    }
    ctx->pc = 0x1384B0u;
    // 0x1384b0: 0xf9040000  sqc2        $vf4, 0x0($t0)
    ctx->pc = 0x1384b0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1384b4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1384b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1384b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1384b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1384bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1384bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1384c0: 0x4a220900  vaddx.w     $vf4, $vf1, $vf2x
    ctx->pc = 0x1384c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1384c4: 0xf9040000  sqc2        $vf4, 0x0($t0)
    ctx->pc = 0x1384c4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1384c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1384c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1384cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1384CCu;
    {
        const bool branch_taken_0x1384cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1384D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1384CCu;
            // 0x1384d0: 0xf9250000  sqc2        $vf5, 0x0($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384cc) {
            ctx->pc = 0x1384DCu;
            goto label_1384dc;
        }
    }
    ctx->pc = 0x1384D4u;
    // 0x1384d4: 0x0  nop
    ctx->pc = 0x1384d4u;
    // NOP
label_1384d8:
    // 0x1384d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1384d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1384dc:
    // 0x1384dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1384DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1384E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1384DCu;
            // 0x1384e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1384A8u: goto label_1384a8;
            case 0x1384D8u: goto label_1384d8;
            case 0x1384DCu: goto label_1384dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1384E4u;
    // 0x1384e4: 0x0  nop
    ctx->pc = 0x1384e4u;
    // NOP
}
