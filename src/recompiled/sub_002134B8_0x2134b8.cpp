#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002134B8
// Address: 0x2134b8 - 0x2135e0
void sub_002134B8_0x2134b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002134B8_0x2134b8");
#endif

    ctx->pc = 0x2134b8u;

    // 0x2134b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2134b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2134bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2134bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2134c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2134c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2134c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2134c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134c8: 0x8e03018c  lw          $v1, 0x18C($s0)
    ctx->pc = 0x2134c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x2134cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2134ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2134d0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2134d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2134d4: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2134d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2134d8: 0x40f809  jalr        $v0
    ctx->pc = 0x2134D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2134E0u);
        ctx->pc = 0x2134DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2134D8u;
            // 0x2134dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2134E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2134E0u; }
            if (ctx->pc != 0x2134E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2134E0u;
    // 0x2134e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2134e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2134e4: 0x8e0401e8  lw          $a0, 0x1E8($s0)
    ctx->pc = 0x2134e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x2134e8: 0x78a70020  lq          $a3, 0x20($a1)
    ctx->pc = 0x2134e8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2134ec: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2134ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2134f0: 0x844400ea  lh          $a0, 0xEA($v0)
    ctx->pc = 0x2134f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
    // 0x2134f4: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x2134f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2134f8: 0x8e06018c  lw          $a2, 0x18C($s0)
    ctx->pc = 0x2134f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x2134fc: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x2134fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x213500: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x213500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x213504: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x213504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x213508: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x213508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x21350c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x21350cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x213510: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x213510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x213514: 0xd8620030  lqc2        $vf2, 0x30($v1)
    ctx->pc = 0x213514u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x213518: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x213518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21351c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x21351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213520: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x213520u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213524: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x213524u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x213528: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21352c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213530: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x213530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x213534: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x213534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x213538: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x213538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21353c: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x21353cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x213540: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x213540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213544: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x213544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213548: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x213548u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21354c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x21354cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213550: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x213550u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213554: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x213554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21355c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x213560: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x213560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213564: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x213564u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x213568: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x213568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21356c: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x21356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213570: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x213570u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x213574: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x213574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x213578: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x213578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21357c: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x21357cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x213580: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x213580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213584: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x213584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x213588: 0xdcc4bdf8  ld          $a0, -0x4208($a2)
    ctx->pc = 0x213588u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x21358c: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x21358cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213590: 0x7ca70020  sq          $a3, 0x20($a1)
    ctx->pc = 0x213590u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 7));
    // 0x213594: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x213594u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x213598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21359c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21359cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2135a0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2135a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2135a4: 0x84a30060  lh          $v1, 0x60($a1)
    ctx->pc = 0x2135a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2135a8: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x2135a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x2135ac: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2135acu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2135b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2135b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2135b4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2135b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2135b8: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x2135b8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x2135bc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2135bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135c0: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x2135c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x2135c4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2135c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2135c8: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x2135c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x2135cc: 0xfcc4bdf8  sd          $a0, -0x4208($a2)
    ctx->pc = 0x2135ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 4));
    // 0x2135d0: 0xfca30068  sd          $v1, 0x68($a1)
    ctx->pc = 0x2135d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
    // 0x2135d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2135D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2135D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2135D4u;
            // 0x2135d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2135DCu;
    // 0x2135dc: 0x0  nop
    ctx->pc = 0x2135dcu;
    // NOP
}
