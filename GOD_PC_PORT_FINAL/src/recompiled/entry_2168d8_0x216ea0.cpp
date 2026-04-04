#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2168d8
// Address: 0x2168d8 - 0x216ea0
void entry_2168d8_0x216ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2168d8_0x216ea0");
#endif

    ctx->pc = 0x2168d8u;

    // 0x2168d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2168d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2168dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2168e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2168e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2168e4: 0xc4a1037c  lwc1        $f1, 0x37C($a1)
    ctx->pc = 0x2168e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2168e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2168e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2168ec: 0x8ca20388  lw          $v0, 0x388($a1)
    ctx->pc = 0x2168ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 904)));
    // 0x2168f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2168f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2168f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2168f8: 0x8ca70054  lw          $a3, 0x54($a1)
    ctx->pc = 0x2168f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2168fc: 0xc4a70058  lwc1        $f7, 0x58($a1)
    ctx->pc = 0x2168fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x216900: 0x8ca90044  lw          $t1, 0x44($a1)
    ctx->pc = 0x216900u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x216904: 0x24e4fffe  addiu       $a0, $a3, -0x2
    ctx->pc = 0x216904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x216908: 0x46073a00  add.s       $f8, $f7, $f7
    ctx->pc = 0x216908u;
    ctx->f[8] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x21690c: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x21690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x216910: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x216910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x216914: 0xc444001c  lwc1        $f4, 0x1C($v0)
    ctx->pc = 0x216914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x216918: 0xc4450024  lwc1        $f5, 0x24($v0)
    ctx->pc = 0x216918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21691c: 0x18800050  blez        $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x21691Cu;
    {
        const bool branch_taken_0x21691c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x216920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21691Cu;
            // 0x216920: 0xc4430020  lwc1        $f3, 0x20($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21691c) {
            ctx->pc = 0x216A60u;
            goto label_216a60;
        }
    }
    ctx->pc = 0x216924u;
    // 0x216924: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x216924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_216928:
    // 0x216928: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x216928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21692c: 0xd8630040  lqc2        $vf3, 0x40($v1)
    ctx->pc = 0x21692cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216930: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x216930u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216934: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x216934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216938: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x216938u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21693c: 0xd8640050  lqc2        $vf4, 0x50($v1)
    ctx->pc = 0x21693cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x216940: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x216940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216944: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x216944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216948: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x216948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21694c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x21694cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216954: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x216954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x216958: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x216958u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21695c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x21695cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216960: 0x46010044  c1          0x10044
    ctx->pc = 0x216960u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x216964: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x216964u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
    // 0x216968: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x216968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x21696c: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x21696cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216970: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216974: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x216974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216978: 0x4be4192a  vmul.xyzw   $vf4, $vf3, $vf4
    ctx->pc = 0x216978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21697c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x21697cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x216980: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x216980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216984: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x216984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216988: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x216988u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21698c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x21698cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x216990: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x216990u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216994: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x216994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x216998: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21699c: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x21699cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x2169a0: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x2169a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x2169a4: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x2169a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2169a8: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x2169a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2169ac: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x2169acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2169b0: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x2169b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2169b4: 0xd8610060  lqc2        $vf1, 0x60($v1)
    ctx->pc = 0x2169b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2169b8: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x2169b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2169bc: 0xf8610060  sqc2        $vf1, 0x60($v1)
    ctx->pc = 0x2169bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2169c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2169c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2169c4: 0xd8630080  lqc2        $vf3, 0x80($v1)
    ctx->pc = 0x2169c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2169c8: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x2169c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2169cc: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x2169ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2169d0: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x2169d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2169d4: 0xd8640090  lqc2        $vf4, 0x90($v1)
    ctx->pc = 0x2169d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x2169d8: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x2169d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2169dc: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x2169dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2169e0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x2169e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2169e4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x2169e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2169e8: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x2169e8u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2169ec: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2169ecu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2169f0: 0x46010044  c1          0x10044
    ctx->pc = 0x2169f0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2169f4: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2169f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x2169f8: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x2169f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x2169fc: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x2169fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216a00: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216a04: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x216a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216a08: 0x4be4192a  vmul.xyzw   $vf4, $vf3, $vf4
    ctx->pc = 0x216a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216a0c: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x216a0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x216a10: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x216a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216a14: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x216a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216a18: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x216a18u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216a1c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x216a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x216a20: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x216a20u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216a24: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x216a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x216a28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216a28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216a2c: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x216a2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x216a30: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x216a30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216a34: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216a38: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x216a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x216a3c: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x216a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216a40: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x216a40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216a44: 0xd86100a0  lqc2        $vf1, 0xA0($v1)
    ctx->pc = 0x216a44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x216a48: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x216a48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216a4c: 0xf86100a0  sqc2        $vf1, 0xA0($v1)
    ctx->pc = 0x216a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216a50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x216a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x216a54: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x216a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x216a58: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x216A58u;
    {
        const bool branch_taken_0x216a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216A58u;
            // 0x216a5c: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a58) {
            ctx->pc = 0x216928u;
            runtime->cooperativeGuestYield();
            goto label_216928;
        }
    }
    ctx->pc = 0x216A60u;
label_216a60:
    // 0x216a60: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x216a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x216a64: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x216a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x216a68: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x216a68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216a6c: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x216a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x216a70: 0xd8430040  lqc2        $vf3, 0x40($v0)
    ctx->pc = 0x216a70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x216a74: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x216a74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216a78: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x216a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216a7c: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x216a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x216a80: 0xd8640010  lqc2        $vf4, 0x10($v1)
    ctx->pc = 0x216a80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216a84: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x216a84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216a88: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x216a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216a8c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x216a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216a90: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x216a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216a94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216a98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216a9c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x216a9cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216aa0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x216aa0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216aa4: 0x46010044  c1          0x10044
    ctx->pc = 0x216aa4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x216aa8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x216aa8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x216aac: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x216aacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x216ab0: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x216ab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216ab4: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216ab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216ab8: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x216ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216abc: 0x4be4192a  vmul.xyzw   $vf4, $vf3, $vf4
    ctx->pc = 0x216abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216ac0: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x216ac0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x216ac4: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x216ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216ac8: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x216ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216acc: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x216accu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216ad0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x216ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x216ad4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x216ad4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216ad8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x216ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x216adc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216ae0: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x216ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x216ae4: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x216ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216ae8: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216aec: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x216aecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x216af0: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x216af0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216af4: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x216af4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216af8: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x216af8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x216afc: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x216afcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216b00: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x216b00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216b04: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x216b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x216b08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x216b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216b0c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x216b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x216b10: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x216b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x216b14: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x216B14u;
    {
        const bool branch_taken_0x216b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216B14u;
            // 0x216b18: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b14) {
            ctx->pc = 0x216BA8u;
            goto label_216ba8;
        }
    }
    ctx->pc = 0x216B1Cu;
    // 0x216b1c: 0x0  nop
    ctx->pc = 0x216b1cu;
    // NOP
label_216b20:
    // 0x216b20: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x216b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x216b24: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x216b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x216b28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216b2c: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x216b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216b30: 0x46016003  div.s       $f0, $f12, $f1
    ctx->pc = 0x216b30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[1];
    // 0x216b34: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x216b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x216b38: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x216b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x216b3c: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x216b3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x216b40: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x216b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216b44: 0x8ca20388  lw          $v0, 0x388($a1)
    ctx->pc = 0x216b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 904)));
    // 0x216b48: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x216b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216b4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x216b4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x216b50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x216b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x216b54: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x216b54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x216b58: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x216b58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216b5c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x216b5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216b60: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x216b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216b64: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x216b64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216b68: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x216b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216b6c: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x216b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216b70: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x216b70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216b74: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x216b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x216b78: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x216b78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x216b7c: 0x4be21898  vmulx.xyzw  $vf2, $vf3, $vf2x
    ctx->pc = 0x216b7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216b80: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x216b80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216b84: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x216b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216b88: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x216b88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216b8c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x216b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x216b90: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216b94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x216b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x216b98: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x216b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x216b9c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x216B9Cu;
    {
        const bool branch_taken_0x216b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216B9Cu;
            // 0x216ba0: 0xf8630010  sqc2        $vf3, 0x10($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b9c) {
            ctx->pc = 0x216B20u;
            runtime->cooperativeGuestYield();
            goto label_216b20;
        }
    }
    ctx->pc = 0x216BA4u;
    // 0x216ba4: 0x0  nop
    ctx->pc = 0x216ba4u;
    // NOP
label_216ba8:
    // 0x216ba8: 0x8ca20374  lw          $v0, 0x374($a1)
    ctx->pc = 0x216ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 884)));
    // 0x216bac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x216bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x216bb0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x216BB0u;
    {
        const bool branch_taken_0x216bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216BB0u;
            // 0x216bb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bb0) {
            ctx->pc = 0x216BF0u;
            goto label_216bf0;
        }
    }
    ctx->pc = 0x216BB8u;
    // 0x216bb8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x216bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x216bbc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x216bbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216bc0: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x216bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x216bc4: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x216bc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x216bc8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x216bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x216bcc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x216bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x216bd0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x216bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x216bd4: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x216bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x216bd8: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x216bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x216bdc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x216bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x216be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216be4: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x216be4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216bec: 0x0  nop
    ctx->pc = 0x216becu;
    // NOP
label_216bf0:
    // 0x216bf0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x216bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_216bf4:
    // 0x216bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x216bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216bf8: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x216bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x216bfc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x216bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x216c00: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x216c04: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x216c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x216c08: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x216c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216c0c: 0x0  nop
    ctx->pc = 0x216c0cu;
    // NOP
    // 0x216c10: 0x4502009d  bc1fl       . + 4 + (0x9D << 2)
    ctx->pc = 0x216C10u;
    {
        const bool branch_taken_0x216c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216c10) {
            ctx->pc = 0x216C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216C10u;
            // 0x216c14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216E88u;
            goto label_216e88;
        }
    }
    ctx->pc = 0x216C18u;
    // 0x216c18: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x216c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216c1c: 0xc4a2005c  lwc1        $f2, 0x5C($a1)
    ctx->pc = 0x216c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216c20: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x216c20u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
    // 0x216c24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216c24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x216c28: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x216c28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x216c2c: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x216c2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x216c30: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x216c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x216c34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216c38: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x216c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x216c3c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x216c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x216c40: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x216c40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x216c44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x216c44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x216c48: 0x46020943  div.s       $f5, $f1, $f2
    ctx->pc = 0x216c48u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[2];
    // 0x216c4c: 0x46054041  sub.s       $f1, $f8, $f5
    ctx->pc = 0x216c4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[5]);
    // 0x216c50: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x216c50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x216c54: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x216c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216c58: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x216c58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216c5c: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x216c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x216c60: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x216c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x216c64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x216c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216c68: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x216c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x216c6c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x216c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216c70: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x216c70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216c74: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x216c74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216c78: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x216c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216c7c: 0x8ca20374  lw          $v0, 0x374($a1)
    ctx->pc = 0x216c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 884)));
    // 0x216c80: 0x46001983  div.s       $f6, $f3, $f0
    ctx->pc = 0x216c80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[6] = ctx->f[3] / ctx->f[0];
    // 0x216c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x216c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x216c88: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x216C88u;
    {
        const bool branch_taken_0x216c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216c88) {
            ctx->pc = 0x216C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216C88u;
            // 0x216c8c: 0x8ca20054  lw          $v0, 0x54($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216D60u;
            goto label_216d60;
        }
    }
    ctx->pc = 0x216C90u;
    // 0x216c90: 0x58e00033  blezl       $a3, . + 4 + (0x33 << 2)
    ctx->pc = 0x216C90u;
    {
        const bool branch_taken_0x216c90 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x216c90) {
            ctx->pc = 0x216C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216C90u;
            // 0x216c94: 0x8ca20054  lw          $v0, 0x54($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216D60u;
            goto label_216d60;
        }
    }
    ctx->pc = 0x216C98u;
    // 0x216c98: 0x8ca20388  lw          $v0, 0x388($a1)
    ctx->pc = 0x216c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 904)));
    // 0x216c9c: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x216c9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x216ca0: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x216ca0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x216ca4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x216ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x216ca8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x216ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x216cac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216cb0: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x216cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x216cb4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x216cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x216cb8: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x216cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216cbc: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x216cbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x216cc0: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x216cc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x216cc4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x216cc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x216cc8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x216cc8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216ccc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x216cccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x216cd0: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x216cd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216cd4: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x216cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216cd8: 0xd9210010  lqc2        $vf1, 0x10($t1)
    ctx->pc = 0x216cd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x216cdc: 0xd8640010  lqc2        $vf4, 0x10($v1)
    ctx->pc = 0x216cdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216ce0: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x216ce0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216ce4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x216ce4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216ce8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x216ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216cec: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x216cecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216cf0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x216cf0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216cf4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x216cf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216cf8: 0x46010044  c1          0x10044
    ctx->pc = 0x216cf8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x216cfc: 0x46014003  div.s       $f0, $f8, $f1
    ctx->pc = 0x216cfcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[0] = ctx->f[8] / ctx->f[1];
    // 0x216d00: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x216d00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x216d04: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x216d04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216d08: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216d0c: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x216d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216d10: 0x4be4192a  vmul.xyzw   $vf4, $vf3, $vf4
    ctx->pc = 0x216d10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216d14: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x216d14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x216d18: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x216d18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216d1c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x216d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216d20: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x216d20u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216d24: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x216d24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x216d28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x216d28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216d2c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x216d2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x216d30: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x216d30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x216d34: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x216d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x216d38: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x216d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216d3c: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216d40: 0xd9210020  lqc2        $vf1, 0x20($t1)
    ctx->pc = 0x216d40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x216d44: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x216d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216d48: 0xf9210020  sqc2        $vf1, 0x20($t1)
    ctx->pc = 0x216d48u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216d4c: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x216d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x216d50: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x216d50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216d54: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x216d54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216d58: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x216d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x216d5c: 0x0  nop
    ctx->pc = 0x216d5cu;
    // NOP
label_216d60:
    // 0x216d60: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x216d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x216d64: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x216d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x216d68: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x216D68u;
    {
        const bool branch_taken_0x216d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d68) {
            ctx->pc = 0x216D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216D68u;
            // 0x216d6c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216E88u;
            goto label_216e88;
        }
    }
    ctx->pc = 0x216D70u;
    // 0x216d70: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x216d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x216d74: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x216d74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x216d78: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x216d78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x216d7c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x216d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216d80: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x216d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x216d84: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x216d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x216d88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x216d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216d8c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x216d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x216d90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x216d90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216d94: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x216d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216d98: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x216d98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216d9c: 0x8ca20374  lw          $v0, 0x374($a1)
    ctx->pc = 0x216d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 884)));
    // 0x216da0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x216da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x216da4: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x216DA4u;
    {
        const bool branch_taken_0x216da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216da4) {
            ctx->pc = 0x216DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216DA4u;
            // 0x216da8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216E88u;
            goto label_216e88;
        }
    }
    ctx->pc = 0x216DACu;
    // 0x216dac: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x216dacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x216db0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x216db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x216db4: 0x8ca20388  lw          $v0, 0x388($a1)
    ctx->pc = 0x216db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 904)));
    // 0x216db8: 0x46053082  mul.s       $f2, $f6, $f5
    ctx->pc = 0x216db8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x216dbc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x216dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x216dc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x216dc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x216dc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216dc8: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x216dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x216dcc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x216dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x216dd0: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x216dd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x216dd4: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x216dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216dd8: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x216dd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x216ddc: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x216ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x216de0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x216de0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x216de4: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x216de4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x216de8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x216de8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x216dec: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x216decu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216df0: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x216df0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216df4: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x216df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216df8: 0xd9210010  lqc2        $vf1, 0x10($t1)
    ctx->pc = 0x216df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x216dfc: 0xd8640010  lqc2        $vf4, 0x10($v1)
    ctx->pc = 0x216dfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216e00: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x216e00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216e04: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x216e04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216e08: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x216e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216e0c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x216e0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216e10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216e14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216e18: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x216e18u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216e1c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x216e1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216e20: 0x46010044  c1          0x10044
    ctx->pc = 0x216e20u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x216e24: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x216e24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x216e28: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x216e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x216e2c: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x216e2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216e30: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216e34: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x216e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216e38: 0x4be4192a  vmul.xyzw   $vf4, $vf3, $vf4
    ctx->pc = 0x216e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216e3c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x216e3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x216e40: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x216e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216e44: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x216e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216e48: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x216e48u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216e4c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x216e4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x216e50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x216e50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216e54: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x216e54u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x216e58: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x216e58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x216e5c: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x216e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x216e60: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x216e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x216e64: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216e68: 0xd9210020  lqc2        $vf1, 0x20($t1)
    ctx->pc = 0x216e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x216e6c: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x216e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216e70: 0xf9210020  sqc2        $vf1, 0x20($t1)
    ctx->pc = 0x216e70u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216e74: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x216e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x216e78: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x216e78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216e7c: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x216e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216e80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x216e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x216e84: 0x0  nop
    ctx->pc = 0x216e84u;
    // NOP
label_216e88:
    // 0x216e88: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x216e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x216e8c: 0x5440ff59  bnel        $v0, $zero, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x216E8Cu;
    {
        const bool branch_taken_0x216e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216e8c) {
            ctx->pc = 0x216E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216E8Cu;
            // 0x216e90: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216BF4u;
            runtime->cooperativeGuestYield();
            goto label_216bf4;
        }
    }
    ctx->pc = 0x216E94u;
    // 0x216e94: 0x3e00008  jr          $ra
    ctx->pc = 0x216E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216E94u;
            // 0x216e98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216928u: goto label_216928;
            case 0x216A60u: goto label_216a60;
            case 0x216B20u: goto label_216b20;
            case 0x216BA8u: goto label_216ba8;
            case 0x216BF0u: goto label_216bf0;
            case 0x216BF4u: goto label_216bf4;
            case 0x216D60u: goto label_216d60;
            case 0x216E88u: goto label_216e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216E9Cu;
    // 0x216e9c: 0x0  nop
    ctx->pc = 0x216e9cu;
    // NOP
}
