#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B26F0
// Address: 0x1b26f0 - 0x1b2918
void sub_001B26F0_0x1b26f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B26F0_0x1b26f0");
#endif

    ctx->pc = 0x1b26f0u;

    // 0x1b26f0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1b26f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1b26f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b26f8: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1b26f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x1b26fc: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1b26fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x1b2700: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b2700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2704: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1b2704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1b2708: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1b2708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x1b270c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1b270cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1b2710: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1b2710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1b2714: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1b2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1b2718: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1b2718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1b271c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b271cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2720: 0x12000074  beqz        $s0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1B2720u;
    {
        const bool branch_taken_0x1b2720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2720u;
            // 0x1b2724: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2720) {
            ctx->pc = 0x1B28F4u;
            goto label_1b28f4;
        }
    }
    ctx->pc = 0x1B2728u;
    // 0x1b2728: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1b2728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1b272c: 0x24c64808  addiu       $a2, $a2, 0x4808
    ctx->pc = 0x1b272cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18440));
    // 0x1b2730: 0xc091258  jal         func_244960
    ctx->pc = 0x1B2730u;
    SET_GPR_U32(ctx, 31, 0x1B2738u);
    ctx->pc = 0x1B2734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2730u;
            // 0x1b2734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2738u; }
        if (ctx->pc != 0x1B2738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2738u; }
        if (ctx->pc != 0x1B2738u) { return; }
    }
    ctx->pc = 0x1B2738u;
    // 0x1b2738: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x1b2738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1b273c: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x1b273cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1b2740: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b2744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2748: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b274c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1b274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1b2750: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1b2750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b2754: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1b2754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1b2758: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1b2758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b275c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1b275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1b2760: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x1b2760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1b2764: 0xc06a576  jal         func_1A95D8
    ctx->pc = 0x1B2764u;
    SET_GPR_U32(ctx, 31, 0x1B276Cu);
    ctx->pc = 0x1B2768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2764u;
            // 0x1b2768: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A95D8u;
    if (runtime->hasFunction(0x1A95D8u)) {
        auto targetFn = runtime->lookupFunction(0x1A95D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B276Cu; }
        if (ctx->pc != 0x1B276Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A95D8_0x1a95d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B276Cu; }
        if (ctx->pc != 0x1B276Cu) { return; }
    }
    ctx->pc = 0x1B276Cu;
    // 0x1b276c: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1b276cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b2770: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1b2770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1b2774: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1b2774u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1b2778: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1b2778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b277c: 0x4a830040  vaddx.y     $vf1, $vf0, $vf3x
    ctx->pc = 0x1b277cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b2780: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b2780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b2784: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1b2784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b2788: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1b2788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b278c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1b278cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b2790: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b2790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1b2794: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b2794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b2798: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b279c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1b279cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b27a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b27a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27a4: 0x46000004  c1          0x4
    ctx->pc = 0x1b27a4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b27a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b27a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b27ac: 0x0  nop
    ctx->pc = 0x1b27acu;
    // NOP
    // 0x1b27b0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1B27B0u;
    {
        const bool branch_taken_0x1b27b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b27b0) {
            ctx->pc = 0x1B27B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27B0u;
            // 0x1b27b4: 0xdba300c0  lqc2        $vf3, 0xC0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B27D0u;
            goto label_1b27d0;
        }
    }
    ctx->pc = 0x1B27B8u;
    // 0x1b27b8: 0xda010100  lqc2        $vf1, 0x100($s0)
    ctx->pc = 0x1b27b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1b27bc: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1b27bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b27c0: 0x4a830040  vaddx.y     $vf1, $vf0, $vf3x
    ctx->pc = 0x1b27c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b27c4: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1b27c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b27c8: 0xdba300c0  lqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x1b27c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b27cc: 0x0  nop
    ctx->pc = 0x1b27ccu;
    // NOP
label_1b27d0:
    // 0x1b27d0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1b27d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b27d4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1b27d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b27d8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1b27d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b27dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b27dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b27e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b27e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b27e4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1b27e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b27e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b27e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27ec: 0x46000004  c1          0x4
    ctx->pc = 0x1b27ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b27f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b27f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b27f4: 0x0  nop
    ctx->pc = 0x1b27f4u;
    // NOP
    // 0x1b27f8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1B27F8u;
    {
        const bool branch_taken_0x1b27f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B27FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27F8u;
            // 0x1b27fc: 0x7ba20050  lq          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27f8) {
            ctx->pc = 0x1B2860u;
            goto label_1b2860;
        }
    }
    ctx->pc = 0x1B2800u;
    // 0x1b2800: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x1b2800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b2804: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1b2804u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b2808: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1b2808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1b280c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1b280cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b2810: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1b2810u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1b2814: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b2814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2818: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1b2818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b281c: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1b281cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1b2820: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2824: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1B2824u;
    SET_GPR_U32(ctx, 31, 0x1B282Cu);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B282Cu; }
        if (ctx->pc != 0x1B282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B282Cu; }
        if (ctx->pc != 0x1B282Cu) { return; }
    }
    ctx->pc = 0x1B282Cu;
    // 0x1b282c: 0xdba100e0  lqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1b282cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b2830: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b2830u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b2834: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1b2834u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b2838: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1b2838u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1b283c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b283cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2840: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b2840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2844: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1B2844u;
    SET_GPR_U32(ctx, 31, 0x1B284Cu);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B284Cu; }
        if (ctx->pc != 0x1B284Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B284Cu; }
        if (ctx->pc != 0x1B284Cu) { return; }
    }
    ctx->pc = 0x1B284Cu;
    // 0x1b284c: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1b284cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1b2850: 0xc06115e  jal         func_184578
    ctx->pc = 0x1B2850u;
    SET_GPR_U32(ctx, 31, 0x1B2858u);
    ctx->pc = 0x1B2854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2850u;
            // 0x1b2854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184578u;
    if (runtime->hasFunction(0x184578u)) {
        auto targetFn = runtime->lookupFunction(0x184578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2858u; }
        if (ctx->pc != 0x1B2858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184578_0x184578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2858u; }
        if (ctx->pc != 0x1B2858u) { return; }
    }
    ctx->pc = 0x1B2858u;
    // 0x1b2858: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1b2858u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b285c: 0x0  nop
    ctx->pc = 0x1b285cu;
    // NOP
label_1b2860:
    // 0x1b2860: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b2860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2864: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x1b2864u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2868: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x1b2868u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b286c: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x1b286cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2870: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1b2870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1b2874: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1b2874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x1b2878: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x1b2878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x1b287c: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x1b287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
    // 0x1b2880: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x1b2880u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
    // 0x1b2884: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b2884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2888: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x1b2888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b288c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1b288cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1b2890: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1b2890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b2894: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1b2894u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1b2898: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1b2898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b289c: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1b289cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x1b28a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1b28a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1b28a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1b28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1b28a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1B28A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B28B0u);
        ctx->pc = 0x1B28ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28A8u;
            // 0x1b28ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B28B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B27D0u: goto label_1b27d0;
            case 0x1B2860u: goto label_1b2860;
            case 0x1B28D0u: goto label_1b28d0;
            case 0x1B28F4u: goto label_1b28f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B28B0u; }
            if (ctx->pc != 0x1B28B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B28B0u;
    // 0x1b28b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b28b4: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x1b28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1b28b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B28B8u;
    {
        const bool branch_taken_0x1b28b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b28b8) {
            ctx->pc = 0x1B28BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28B8u;
            // 0x1b28bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B28D0u;
            goto label_1b28d0;
        }
    }
    ctx->pc = 0x1B28C0u;
    // 0x1b28c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b28c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28c4: 0xc07bc38  jal         func_1EF0E0
    ctx->pc = 0x1B28C4u;
    SET_GPR_U32(ctx, 31, 0x1B28CCu);
    ctx->pc = 0x1B28C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28C4u;
            // 0x1b28c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF0E0u;
    if (runtime->hasFunction(0x1EF0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1EF0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28CCu; }
        if (ctx->pc != 0x1B28CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF0E0_0x1ef0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28CCu; }
        if (ctx->pc != 0x1B28CCu) { return; }
    }
    ctx->pc = 0x1B28CCu;
    // 0x1b28cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b28ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b28d0:
    // 0x1b28d0: 0xc06a1c6  jal         func_1A8718
    ctx->pc = 0x1B28D0u;
    SET_GPR_U32(ctx, 31, 0x1B28D8u);
    ctx->pc = 0x1B28D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28D0u;
            // 0x1b28d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8718u;
    if (runtime->hasFunction(0x1A8718u)) {
        auto targetFn = runtime->lookupFunction(0x1A8718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28D8u; }
        if (ctx->pc != 0x1B28D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8718_0x1a8718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28D8u; }
        if (ctx->pc != 0x1B28D8u) { return; }
    }
    ctx->pc = 0x1B28D8u;
    // 0x1b28d8: 0xc0891fa  jal         func_2247E8
    ctx->pc = 0x1B28D8u;
    SET_GPR_U32(ctx, 31, 0x1B28E0u);
    ctx->pc = 0x1B28DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28D8u;
            // 0x1b28dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2247E8u;
    if (runtime->hasFunction(0x2247E8u)) {
        auto targetFn = runtime->lookupFunction(0x2247E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28E0u; }
        if (ctx->pc != 0x1B28E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002247E8_0x2247e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28E0u; }
        if (ctx->pc != 0x1B28E0u) { return; }
    }
    ctx->pc = 0x1B28E0u;
    // 0x1b28e0: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1B28E0u;
    SET_GPR_U32(ctx, 31, 0x1B28E8u);
    ctx->pc = 0x1B28E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28E0u;
            // 0x1b28e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28E8u; }
        if (ctx->pc != 0x1B28E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28E8u; }
        if (ctx->pc != 0x1B28E8u) { return; }
    }
    ctx->pc = 0x1B28E8u;
    // 0x1b28e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b28e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28ec: 0xc06a548  jal         func_1A9520
    ctx->pc = 0x1B28ECu;
    SET_GPR_U32(ctx, 31, 0x1B28F4u);
    ctx->pc = 0x1B28F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28ECu;
            // 0x1b28f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9520u;
    if (runtime->hasFunction(0x1A9520u)) {
        auto targetFn = runtime->lookupFunction(0x1A9520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28F4u; }
        if (ctx->pc != 0x1B28F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9520_0x1a9520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28F4u; }
        if (ctx->pc != 0x1B28F4u) { return; }
    }
    ctx->pc = 0x1B28F4u;
label_1b28f4:
    // 0x1b28f4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1b28f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b28f8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1b28f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b28fc: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1b28fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b2900: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1b2900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b2904: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1b2904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b2908: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1b2908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b290c: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1b290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2910: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2910u;
            // 0x1b2914: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B27D0u: goto label_1b27d0;
            case 0x1B2860u: goto label_1b2860;
            case 0x1B28D0u: goto label_1b28d0;
            case 0x1B28F4u: goto label_1b28f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2918u;
}
