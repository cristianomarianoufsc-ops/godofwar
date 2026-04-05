#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002046D8
// Address: 0x2046d8 - 0x2048f8
void sub_002046D8_0x2046d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002046D8_0x2046d8");
#endif

    ctx->pc = 0x2046d8u;

    // 0x2046d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2046d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2046dc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2046dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2046e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2046e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2046e4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2046e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2046e8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2046e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2046ec: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2046ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2046f0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2046f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2046f4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2046f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2046f8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2046f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2046fc: 0x8e710048  lw          $s1, 0x48($s3)
    ctx->pc = 0x2046fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x204700: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x204700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x204704: 0x8c45e2a4  lw          $a1, -0x1D5C($v0)
    ctx->pc = 0x204704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x204708: 0x24723330  addiu       $s2, $v1, 0x3330
    ctx->pc = 0x204708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13104));
    // 0x20470c: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x20470cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x204710: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x204710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x204714: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x204714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204718: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x204718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x20471c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x20471cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x204720: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x204720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x204724: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x204724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x204728: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x204728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x20472c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x20472cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x204730: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204730u;
    {
        const bool branch_taken_0x204730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x204734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204730u;
            // 0x204734: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204730) {
            ctx->pc = 0x204740u;
            goto label_204740;
        }
    }
    ctx->pc = 0x204738u;
    // 0x204738: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x204738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20473c: 0x0  nop
    ctx->pc = 0x20473cu;
    // NOP
label_204740:
    // 0x204740: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x204744: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204748: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204748u;
    {
        const bool branch_taken_0x204748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204748u;
            // 0x20474c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204748) {
            ctx->pc = 0x204758u;
            goto label_204758;
        }
    }
    ctx->pc = 0x204750u;
    // 0x204750: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x204750u;
    {
        const bool branch_taken_0x204750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204750u;
            // 0x204754: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204750) {
            ctx->pc = 0x204774u;
            goto label_204774;
        }
    }
    ctx->pc = 0x204758u;
label_204758:
    // 0x204758: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x204758u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x20475c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x20475cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x204760: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204760u;
    {
        const bool branch_taken_0x204760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x204760) {
            ctx->pc = 0x204764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204760u;
            // 0x204764: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204774u;
            goto label_204774;
        }
    }
    ctx->pc = 0x204768u;
    // 0x204768: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x204768u;
    SET_GPR_U32(ctx, 31, 0x204770u);
    ctx->pc = 0x20476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204768u;
            // 0x20476c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204770u; }
        if (ctx->pc != 0x204770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204770u; }
        if (ctx->pc != 0x204770u) { return; }
    }
    ctx->pc = 0x204770u;
    // 0x204770: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_204774:
    // 0x204774: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x204774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x204778: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x204778u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20477c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x20477cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204780: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x204780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204784: 0xc07ce3a  jal         func_1F38E8
    ctx->pc = 0x204784u;
    SET_GPR_U32(ctx, 31, 0x20478Cu);
    ctx->pc = 0x204788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204784u;
            // 0x204788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F38E8u;
    if (runtime->hasFunction(0x1F38E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F38E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20478Cu; }
        if (ctx->pc != 0x20478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F38E8_0x1f38e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20478Cu; }
        if (ctx->pc != 0x20478Cu) { return; }
    }
    ctx->pc = 0x20478Cu;
    // 0x20478c: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x20478cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204790: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x204790u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x204794: 0x4be1112c  vsub.xyzw   $vf4, $vf2, $vf1
    ctx->pc = 0x204794u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x204798: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x204798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20479c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x20479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x2047a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2047a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2047a4: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x2047a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2047a8: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x2047a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2047ac: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x2047acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2047b0: 0x4a810100  vaddx.y     $vf4, $vf0, $vf1x
    ctx->pc = 0x2047b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2047b4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2047b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2047b8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x2047b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2047bc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x2047bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2047c0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x2047c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2047c4: 0x4be5133c  vmove.xyzw  $vf5, $vf2
    ctx->pc = 0x2047c4u;
    ctx->vu0_vf[5] = ctx->vu0_vf[2];
    // 0x2047c8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x2047c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2047cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2047ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2047d0: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x2047d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2047d4: 0x4a0002ff  vnop
    ctx->pc = 0x2047d4u;
    // NOP operation, no action needed for VU0
    // 0x2047d8: 0x4a0002ff  vnop
    ctx->pc = 0x2047d8u;
    // NOP operation, no action needed for VU0
    // 0x2047dc: 0x4be420ea  vmul.xyzw   $vf3, $vf4, $vf4
    ctx->pc = 0x2047dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2047e0: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x2047e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2047e4: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x2047e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2047e8: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x2047e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2047ec: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x2047ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2047f0: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x2047f0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x2047f4: 0x4be3233c  vmove.xyzw  $vf3, $vf4
    ctx->pc = 0x2047f4u;
    ctx->vu0_vf[3] = ctx->vu0_vf[4];
    // 0x2047f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2047f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2047fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2047fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x204800: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x204800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x204804: 0x4a0002ff  vnop
    ctx->pc = 0x204804u;
    // NOP operation, no action needed for VU0
    // 0x204808: 0x4a0002ff  vnop
    ctx->pc = 0x204808u;
    // NOP operation, no action needed for VU0
    // 0x20480c: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x20480cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x204810: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x204810u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x204814: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x204814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x204818: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x204818u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20481c: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x20481cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x204820: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x204820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204824: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x204824u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204828: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x204828u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x20482c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20482cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x204830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x204834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x204838: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x204838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20483c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20483cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204840: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x204840u;
    {
        const bool branch_taken_0x204840 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x204840) {
            ctx->pc = 0x204850u;
            goto label_204850;
        }
    }
    ctx->pc = 0x204848u;
    // 0x204848: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x204848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x20484c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20484cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_204850:
    // 0x204850: 0x4be328aa  vmul.xyzw   $vf2, $vf5, $vf3
    ctx->pc = 0x204850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x204854: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x204854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204858: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x204858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20485c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x20485cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204860: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204864: 0xc060f88  jal         func_183E20
    ctx->pc = 0x204864u;
    SET_GPR_U32(ctx, 31, 0x20486Cu);
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20486Cu; }
        if (ctx->pc != 0x20486Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20486Cu; }
        if (ctx->pc != 0x20486Cu) { return; }
    }
    ctx->pc = 0x20486Cu;
    // 0x20486c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x20486cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x204870: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x204870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x204874: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x204874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204878: 0xc06115e  jal         func_184578
    ctx->pc = 0x204878u;
    SET_GPR_U32(ctx, 31, 0x204880u);
    ctx->pc = 0x20487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204878u;
            // 0x20487c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184578u;
    if (runtime->hasFunction(0x184578u)) {
        auto targetFn = runtime->lookupFunction(0x184578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204880u; }
        if (ctx->pc != 0x204880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184578_0x184578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204880u; }
        if (ctx->pc != 0x204880u) { return; }
    }
    ctx->pc = 0x204880u;
    // 0x204880: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x204880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204884: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x204884u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x204888: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x204888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20488c: 0x7e220060  sq          $v0, 0x60($s1)
    ctx->pc = 0x20488cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 2));
    // 0x204890: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x204890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204894: 0x7e220070  sq          $v0, 0x70($s1)
    ctx->pc = 0x204894u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 2));
    // 0x204898: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x204898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20489c: 0x7e220080  sq          $v0, 0x80($s1)
    ctx->pc = 0x20489cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 2));
    // 0x2048a0: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x2048a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2048a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2048A4u;
    {
        const bool branch_taken_0x2048a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2048A4u;
            // 0x2048a8: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048a4) {
            ctx->pc = 0x2048D8u;
            goto label_2048d8;
        }
    }
    ctx->pc = 0x2048ACu;
    // 0x2048ac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2048ACu;
    {
        const bool branch_taken_0x2048ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2048ACu;
            // 0x2048b0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048ac) {
            ctx->pc = 0x2048DCu;
            goto label_2048dc;
        }
    }
    ctx->pc = 0x2048B4u;
    // 0x2048b4: 0x8c630104  lw          $v1, 0x104($v1)
    ctx->pc = 0x2048b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2048b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2048B8u;
    {
        const bool branch_taken_0x2048b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2048B8u;
            // 0x2048bc: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048b8) {
            ctx->pc = 0x2048E0u;
            goto label_2048e0;
        }
    }
    ctx->pc = 0x2048C0u;
    // 0x2048c0: 0x8c640088  lw          $a0, 0x88($v1)
    ctx->pc = 0x2048c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2048c4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2048C4u;
    {
        const bool branch_taken_0x2048c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2048C4u;
            // 0x2048c8: 0x7bb200a0  lq          $s2, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048c4) {
            ctx->pc = 0x2048E4u;
            goto label_2048e4;
        }
    }
    ctx->pc = 0x2048CCu;
    // 0x2048cc: 0xc04015e  jal         func_100578
    ctx->pc = 0x2048CCu;
    SET_GPR_U32(ctx, 31, 0x2048D4u);
    ctx->pc = 0x2048D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2048CCu;
            // 0x2048d0: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2048D4u; }
        if (ctx->pc != 0x2048D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2048D4u; }
        if (ctx->pc != 0x2048D4u) { return; }
    }
    ctx->pc = 0x2048D4u;
    // 0x2048d4: 0x0  nop
    ctx->pc = 0x2048d4u;
    // NOP
label_2048d8:
    // 0x2048d8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2048d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2048dc:
    // 0x2048dc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2048dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2048e0:
    // 0x2048e0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2048e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2048e4:
    // 0x2048e4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2048e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2048e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2048e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2048ec: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2048ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2048f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2048F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2048F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2048F0u;
            // 0x2048f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204740u: goto label_204740;
            case 0x204758u: goto label_204758;
            case 0x204774u: goto label_204774;
            case 0x204850u: goto label_204850;
            case 0x2048D8u: goto label_2048d8;
            case 0x2048DCu: goto label_2048dc;
            case 0x2048E0u: goto label_2048e0;
            case 0x2048E4u: goto label_2048e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2048F8u;
}
