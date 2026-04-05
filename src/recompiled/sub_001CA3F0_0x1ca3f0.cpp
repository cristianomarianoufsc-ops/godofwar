#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA3F0
// Address: 0x1ca3f0 - 0x1ca550
void sub_001CA3F0_0x1ca3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA3F0_0x1ca3f0");
#endif

    ctx->pc = 0x1ca3f0u;

    // 0x1ca3f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ca3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ca3f4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ca3f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca3f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ca3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ca3fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ca3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ca400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca404: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1ca404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca408: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x1ca408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1ca40c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca414: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1ca414u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca418: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1ca418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1ca41c: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1CA41Cu;
    SET_GPR_U32(ctx, 31, 0x1CA424u);
    ctx->pc = 0x1CA420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA41Cu;
            // 0x1ca420: 0x7e020210  sq          $v0, 0x210($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 528), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA424u; }
        if (ctx->pc != 0x1CA424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA424u; }
        if (ctx->pc != 0x1CA424u) { return; }
    }
    ctx->pc = 0x1CA424u;
    // 0x1ca424: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x1ca424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1ca428: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1ca428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca42c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1ca42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1ca430: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1ca430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca434: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1ca434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1ca438: 0x34a5fcff  ori         $a1, $a1, 0xFCFF
    ctx->pc = 0x1ca438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64767);
    // 0x1ca43c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1ca43cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ca440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca444: 0x34c6efff  ori         $a2, $a2, 0xEFFF
    ctx->pc = 0x1ca444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61439);
    // 0x1ca448: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1ca448u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca44c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x1ca44cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca450: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ca450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ca454: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca458: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ca458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ca45c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1ca45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1ca460: 0x34e7fff7  ori         $a3, $a3, 0xFFF7
    ctx->pc = 0x1ca460u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65527);
    // 0x1ca464: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ca464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca468: 0x3508f800  ori         $t0, $t0, 0xF800
    ctx->pc = 0x1ca468u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)63488);
    // 0x1ca46c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x1ca46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1ca470: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1ca470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1ca474: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1ca474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1ca478: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ca478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca47c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1ca47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ca480: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1ca480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1ca484: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x1ca484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
    // 0x1ca488: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x1CA488u;
    {
        const bool branch_taken_0x1ca488 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA488u;
            // 0x1ca48c: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca488) {
            ctx->pc = 0x1CA530u;
            goto label_1ca530;
        }
    }
    ctx->pc = 0x1CA490u;
    // 0x1ca490: 0xda010050  lqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1ca490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1ca494: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ca494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca498: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1ca498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca49c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1ca49cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca4a0: 0xda0400e0  lqc2        $vf4, 0xE0($s0)
    ctx->pc = 0x1ca4a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1ca4a4: 0x4be4086a  vmul.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1ca4a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca4a8: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x1ca4a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ca4ac: 0xda020070  lqc2        $vf2, 0x70($s0)
    ctx->pc = 0x1ca4acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1ca4b0: 0x4b0118c2  vaddz.x     $vf3, $vf3, $vf1z
    ctx->pc = 0x1ca4b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ca4b4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1ca4b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ca4b8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1ca4b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ca4bc: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1ca4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ca4c0: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1ca4c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca4c4: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1ca4c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ca4c8: 0x4be410aa  vmul.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1ca4c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ca4cc: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1ca4ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca4d0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1ca4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca4d4: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x1ca4d4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x1ca4d8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ca4d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca4dc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ca4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ca4e0: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1ca4e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1ca4e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca4e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca4e8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA4E8u;
    {
        const bool branch_taken_0x1ca4e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca4e8) {
            ctx->pc = 0x1CA510u;
            goto label_1ca510;
        }
    }
    ctx->pc = 0x1CA4F0u;
    // 0x1ca4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca4f4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1ca4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca4f8: 0x0  nop
    ctx->pc = 0x1ca4f8u;
    // NOP
    // 0x1ca4fc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CA4FCu;
    {
        const bool branch_taken_0x1ca4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4FCu;
            // 0x1ca500: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4fc) {
            ctx->pc = 0x1CA528u;
            goto label_1ca528;
        }
    }
    ctx->pc = 0x1CA504u;
    // 0x1ca504: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA504u;
    {
        const bool branch_taken_0x1ca504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA504u;
            // 0x1ca508: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca504) {
            ctx->pc = 0x1CA528u;
            goto label_1ca528;
        }
    }
    ctx->pc = 0x1CA50Cu;
    // 0x1ca50c: 0x0  nop
    ctx->pc = 0x1ca50cu;
    // NOP
label_1ca510:
    // 0x1ca510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca514: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1ca514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca518: 0x0  nop
    ctx->pc = 0x1ca518u;
    // NOP
    // 0x1ca51c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA51Cu;
    {
        const bool branch_taken_0x1ca51c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA51Cu;
            // 0x1ca520: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca51c) {
            ctx->pc = 0x1CA528u;
            goto label_1ca528;
        }
    }
    ctx->pc = 0x1CA524u;
    // 0x1ca524: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1ca524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ca528:
    // 0x1ca528: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1ca528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1ca52c: 0xa44300e0  sh          $v1, 0xE0($v0)
    ctx->pc = 0x1ca52cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 3));
label_1ca530:
    // 0x1ca530: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1ca530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1ca534: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ca534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca538: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ca538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca53c: 0xc44001b4  lwc1        $f0, 0x1B4($v0)
    ctx->pc = 0x1ca53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca540: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1ca540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x1ca544: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ca544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca548: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA548u;
            // 0x1ca54c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA510u: goto label_1ca510;
            case 0x1CA528u: goto label_1ca528;
            case 0x1CA530u: goto label_1ca530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA550u;
}
