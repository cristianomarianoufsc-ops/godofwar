#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E26E0
// Address: 0x1e26e0 - 0x1e2af8
void sub_001E26E0_0x1e26e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E26E0_0x1e26e0");
#endif

    ctx->pc = 0x1e26e0u;

    // 0x1e26e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e26e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e26e4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1e26e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26e8: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1e26e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x1e26ec: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1e26ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x1e26f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e26f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26f4: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x1e26f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x1e26f8: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1e26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e26fc: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x1e26fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x1e2700: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e2700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2704: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1e2704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x1e2708: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1e2708u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e270c: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1e270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x1e2710: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x1e2710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x1e2714: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x1e2714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x1e2718: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x1e2718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x1e271c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1e271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1e2720: 0x7a220130  lq          $v0, 0x130($s1)
    ctx->pc = 0x1e2720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1e2724: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x1e2724u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e2728: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e2728u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e272c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e272cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e2730: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1e2730u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e2734: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1e2734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e2738: 0x44171800  mfc1        $s7, $f3
    ctx->pc = 0x1e2738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x1e273c: 0x4be120ac  vsub.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x1e273cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2740: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1e2740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2744: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1e2744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2748: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e2748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e274c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e274cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2750: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x1e2750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x1e2754: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e2754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e2758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e2758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e275c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e275cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2760: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e2760u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2764: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e2764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e2768: 0x46000004  c1          0x4
    ctx->pc = 0x1e2768u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e276c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e276cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e2770: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x1e2770u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1e2774: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x1e2774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1e2778: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1e2778u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1e277c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e277cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e2780: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e2780u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e2784: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e2784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2788: 0x4be32068  vadd.xyzw   $vf1, $vf4, $vf3
    ctx->pc = 0x1e2788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e278c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1e278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2790: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1e2790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e2794: 0xda220120  lqc2        $vf2, 0x120($s1)
    ctx->pc = 0x1e2794u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e2798: 0x4be2085a  vmulz.xyzw  $vf1, $vf1, $vf2z
    ctx->pc = 0x1e2798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e279c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e27a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e27a4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1e27a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e27a8: 0x4be309d8  vmulx.xyzw  $vf7, $vf1, $vf3x
    ctx->pc = 0x1e27a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1e27ac: 0xda210050  lqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1e27acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e27b0: 0x4b020084  vsubx.x     $vf2, $vf0, $vf2x
    ctx->pc = 0x1e27b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e27b4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e27b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e27b8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e27b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e27bc: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e27bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e27c0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e27c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e27c4: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e27c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e27c8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e27c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e27cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e27ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e27d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1e27d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1e27d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e27d8:
    // 0x1e27d8: 0x0  nop
    ctx->pc = 0x1e27d8u;
    // NOP
    // 0x1e27dc: 0x0  nop
    ctx->pc = 0x1e27dcu;
    // NOP
    // 0x1e27e0: 0x0  nop
    ctx->pc = 0x1e27e0u;
    // NOP
    // 0x1e27e4: 0x0  nop
    ctx->pc = 0x1e27e4u;
    // NOP
    // 0x1e27e8: 0x0  nop
    ctx->pc = 0x1e27e8u;
    // NOP
    // 0x1e27ec: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E27ECu;
    {
        const bool branch_taken_0x1e27ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E27F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27ECu;
            // 0x1e27f0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27ec) {
            ctx->pc = 0x1E27D8u;
            runtime->cooperativeGuestYield();
            goto label_1e27d8;
        }
    }
    ctx->pc = 0x1E27F4u;
    // 0x1e27f4: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e27f8: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x1e27f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x1e27fc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E27FCu;
    {
        const bool branch_taken_0x1e27fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e27fc) {
            ctx->pc = 0x1E2800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27FCu;
            // 0x1e2800: 0xd8630020  lqc2        $vf3, 0x20($v1) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2870u;
            goto label_1e2870;
        }
    }
    ctx->pc = 0x1E2804u;
    // 0x1e2804: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e2804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e2808: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1e2808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e280c: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1e280cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e2810: 0x4be42918  vmulx.xyzw  $vf4, $vf5, $vf4x
    ctx->pc = 0x1e2810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e2814: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1e2814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e2818: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1e2818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e281c: 0x4be418ec  vsub.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x1e281cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2820: 0x4be718e8  vadd.xyzw   $vf3, $vf3, $vf7
    ctx->pc = 0x1e2820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2824: 0x4be72128  vadd.xyzw   $vf4, $vf4, $vf7
    ctx->pc = 0x1e2824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e2828: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x1e2828u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e282c: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1e282cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1e2830: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e2830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e2834: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e2834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e2838: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e2838u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e283c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e283cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2840: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e2840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e2844: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e2844u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2848: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1e2848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e284c: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1e284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2850: 0x4be40928  vadd.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x1e2850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e2854: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1e2854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e2858: 0x4be508a8  vadd.xyzw   $vf2, $vf1, $vf5
    ctx->pc = 0x1e2858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e285c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1e285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2860: 0x4be5086c  vsub.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x1e2860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2864: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E2864u;
    {
        const bool branch_taken_0x1e2864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2864u;
            // 0x1e2868: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2864) {
            ctx->pc = 0x1E28F0u;
            goto label_1e28f0;
        }
    }
    ctx->pc = 0x1E286Cu;
    // 0x1e286c: 0x0  nop
    ctx->pc = 0x1e286cu;
    // NOP
label_1e2870:
    // 0x1e2870: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x1e2870u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e2874: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1e2874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2878: 0x4be328ec  vsub.xyzw   $vf3, $vf5, $vf3
    ctx->pc = 0x1e2878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e287c: 0xda210120  lqc2        $vf1, 0x120($s1)
    ctx->pc = 0x1e287cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1e2880: 0x4be118da  vmulz.xyzw  $vf3, $vf3, $vf1z
    ctx->pc = 0x1e2880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2884: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x1e2884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e2888: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e2888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e288c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e288cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e2890: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e2890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2894: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1e2894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e2898: 0x4be4296c  vsub.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x1e2898u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e289c: 0x4be329a8  vadd.xyzw   $vf6, $vf5, $vf3
    ctx->pc = 0x1e289cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e28a0: 0x4be320e8  vadd.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x1e28a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e28a4: 0x4be72968  vadd.xyzw   $vf5, $vf5, $vf7
    ctx->pc = 0x1e28a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e28a8: 0x4be72128  vadd.xyzw   $vf4, $vf4, $vf7
    ctx->pc = 0x1e28a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e28ac: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1e28acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e28b0: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1e28b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1e28b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e28b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e28b8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e28b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e28bc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e28bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e28c0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e28c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e28c4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e28c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e28c8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e28c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e28cc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e28d0: 0x4be609a8  vadd.xyzw   $vf6, $vf1, $vf6
    ctx->pc = 0x1e28d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e28d4: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x1e28d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1e28d8: 0x4be50968  vadd.xyzw   $vf5, $vf1, $vf5
    ctx->pc = 0x1e28d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e28dc: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1e28dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e28e0: 0x4be40928  vadd.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x1e28e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e28e4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1e28e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e28e8: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e28e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e28ec: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e28ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e28f0:
    // 0x1e28f0: 0x8e240258  lw          $a0, 0x258($s1)
    ctx->pc = 0x1e28f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x1e28f4: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x1e28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x1e28f8: 0x8e260254  lw          $a2, 0x254($s1)
    ctx->pc = 0x1e28f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1e28fc: 0x3c050430  lui         $a1, 0x430
    ctx->pc = 0x1e28fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1072 << 16));
    // 0x1e2900: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e2900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e2904: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1e2904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1e2908: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e2908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e290c: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x1e290cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1e2910: 0x34631ff3  ori         $v1, $v1, 0x1FF3
    ctx->pc = 0x1e2910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8179);
    // 0x1e2914: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1e2914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1e2918: 0x444825  or          $t1, $v0, $a0
    ctx->pc = 0x1e2918u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e291c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1e291cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e2920: 0x661827  nor         $v1, $v1, $a2
    ctx->pc = 0x1e2920u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 6)));
    // 0x1e2924: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x1e2924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1e2928: 0xaca3f170  sw          $v1, -0xE90($a1)
    ctx->pc = 0x1e2928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 3));
    // 0x1e292c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e292cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2930: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1e2930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1e2934: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x1e2934u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x1e2938: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x1e2938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x1e293c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e293cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2940: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1e2940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1e2944: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e2944u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2948: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e2948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e294c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e294cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e2950: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e2950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e2954: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e2954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e2958: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e2958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e295c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e295cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e2960: 0x8ea4bcf8  lw          $a0, -0x4308($s5)
    ctx->pc = 0x1e2960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    // 0x1e2964: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1e2964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1e2968: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e2968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e296c: 0xc047ada  jal         func_11EB68
    ctx->pc = 0x1E296Cu;
    SET_GPR_U32(ctx, 31, 0x1E2974u);
    ctx->pc = 0x1E2970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E296Cu;
            // 0x1e2970: 0x7a650000  lq          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB68u;
    if (runtime->hasFunction(0x11EB68u)) {
        auto targetFn = runtime->lookupFunction(0x11EB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2974u; }
        if (ctx->pc != 0x1E2974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EB68_0x11eb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2974u; }
        if (ctx->pc != 0x1E2974u) { return; }
    }
    ctx->pc = 0x1E2974u;
    // 0x1e2974: 0x12c00050  beqz        $s6, . + 4 + (0x50 << 2)
    ctx->pc = 0x1E2974u;
    {
        const bool branch_taken_0x1e2974 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2974u;
            // 0x1e2978: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2974) {
            ctx->pc = 0x1E2AB8u;
            goto label_1e2ab8;
        }
    }
    ctx->pc = 0x1E297Cu;
    // 0x1e297c: 0x0  nop
    ctx->pc = 0x1e297cu;
    // NOP
label_1e2980:
    // 0x1e2980: 0x8ea4bcf8  lw          $a0, -0x4308($s5)
    ctx->pc = 0x1e2980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    // 0x1e2984: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x1e2984u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e2988: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E2988u;
    SET_GPR_U32(ctx, 31, 0x1E2990u);
    ctx->pc = 0x1E298Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2988u;
            // 0x1e298c: 0x7a060000  lq          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2990u; }
        if (ctx->pc != 0x1E2990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2990u; }
        if (ctx->pc != 0x1E2990u) { return; }
    }
    ctx->pc = 0x1E2990u;
    // 0x1e2990: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E2990u;
    {
        const bool branch_taken_0x1e2990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2990u;
            // 0x1e2994: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2990) {
            ctx->pc = 0x1E2AA8u;
            goto label_1e2aa8;
        }
    }
    ctx->pc = 0x1E2998u;
    // 0x1e2998: 0xda220060  lqc2        $vf2, 0x60($s1)
    ctx->pc = 0x1e2998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e299c: 0x245077a0  addiu       $s0, $v0, 0x77A0
    ctx->pc = 0x1e299cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1e29a0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e29a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e29a4: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e29a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e29a8: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e29a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e29ac: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e29acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e29b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e29b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e29b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e29b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e29b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e29b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e29bc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e29bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e29c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e29c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e29c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e29c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e29c8: 0x0  nop
    ctx->pc = 0x1e29c8u;
    // NOP
    // 0x1e29cc: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x1E29CCu;
    {
        const bool branch_taken_0x1e29cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E29D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29CCu;
            // 0x1e29d0: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29cc) {
            ctx->pc = 0x1E2A90u;
            goto label_1e2a90;
        }
    }
    ctx->pc = 0x1E29D4u;
    // 0x1e29d4: 0x2612fff0  addiu       $s2, $s0, -0x10
    ctx->pc = 0x1e29d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1e29d8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x1e29d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e29dc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x1e29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1e29e0: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x1e29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1e29e4: 0xae230234  sw          $v1, 0x234($s1)
    ctx->pc = 0x1e29e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 3));
    // 0x1e29e8: 0x7e220210  sq          $v0, 0x210($s1)
    ctx->pc = 0x1e29e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 528), GPR_VEC(ctx, 2));
    // 0x1e29ec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E29ECu;
    {
        const bool branch_taken_0x1e29ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E29F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29ECu;
            // 0x1e29f0: 0xae240240  sw          $a0, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29ec) {
            ctx->pc = 0x1E2A08u;
            goto label_1e2a08;
        }
    }
    ctx->pc = 0x1E29F4u;
    // 0x1e29f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e29f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e29f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29fc: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x1E29FCu;
    SET_GPR_U32(ctx, 31, 0x1E2A04u);
    ctx->pc = 0x1E2A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29FCu;
            // 0x1e2a00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (runtime->hasFunction(0x242A88u)) {
        auto targetFn = runtime->lookupFunction(0x242A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A04u; }
        if (ctx->pc != 0x1E2A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a88_0x242a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A04u; }
        if (ctx->pc != 0x1E2A04u) { return; }
    }
    ctx->pc = 0x1E2A04u;
    // 0x1e2a04: 0x0  nop
    ctx->pc = 0x1e2a04u;
    // NOP
label_1e2a08:
    // 0x1e2a08: 0xda02fff0  lqc2        $vf2, -0x10($s0)
    ctx->pc = 0x1e2a08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x1e2a0c: 0x48b70800  qmtc2.ni    $s7, $vf1
    ctx->pc = 0x1e2a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 23));
    // 0x1e2a10: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1e2a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2a14: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e2a14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e2a18: 0x4a820041  vaddy.y     $vf1, $vf0, $vf2y
    ctx->pc = 0x1e2a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2a1c: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e2a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2a20: 0xda2400e0  lqc2        $vf4, 0xE0($s1)
    ctx->pc = 0x1e2a20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1e2a24: 0xda230210  lqc2        $vf3, 0x210($s1)
    ctx->pc = 0x1e2a24u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1e2a28: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x1e2a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2a2c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e2a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2a30: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e2a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2a34: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e2a34u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2a38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e2a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e2a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e2a40: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e2a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e2a44: 0x4be320ac  vsub.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x1e2a44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2a48: 0xfa2200e0  sqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1e2a48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2a4c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e2a4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2a50: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e2a50u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e2a54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e2a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2a58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e2a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2a5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2a60: 0x0  nop
    ctx->pc = 0x1e2a60u;
    // NOP
    // 0x1e2a64: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2A64u;
    {
        const bool branch_taken_0x1e2a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2a64) {
            ctx->pc = 0x1E2A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A64u;
            // 0x1e2a68: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2A80u;
            goto label_1e2a80;
        }
    }
    ctx->pc = 0x1E2A6Cu;
    // 0x1e2a6c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1e2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e2a70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e2a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e2a74: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e2a74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2a78: 0xfa2200e0  sqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1e2a78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e2a7c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1e2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e2a80:
    // 0x1e2a80: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1e2a80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2a84: 0x96420034  lhu         $v0, 0x34($s2)
    ctx->pc = 0x1e2a84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1e2a88: 0xae23024c  sw          $v1, 0x24C($s1)
    ctx->pc = 0x1e2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 3));
    // 0x1e2a8c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1e2a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_1e2a90:
    // 0x1e2a90: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1e2a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1e2a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a98: 0xc07848e  jal         func_1E1238
    ctx->pc = 0x1E2A98u;
    SET_GPR_U32(ctx, 31, 0x1E2AA0u);
    ctx->pc = 0x1E2A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A98u;
            // 0x1e2a9c: 0x24a57790  addiu       $a1, $a1, 0x7790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1238u;
    if (runtime->hasFunction(0x1E1238u)) {
        auto targetFn = runtime->lookupFunction(0x1E1238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AA0u; }
        if (ctx->pc != 0x1E2AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1238_0x1e1238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AA0u; }
        if (ctx->pc != 0x1E2AA0u) { return; }
    }
    ctx->pc = 0x1E2AA0u;
    // 0x1e2aa0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2AA0u;
    {
        const bool branch_taken_0x1e2aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AA0u;
            // 0x1e2aa4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2aa0) {
            ctx->pc = 0x1E2ABCu;
            goto label_1e2abc;
        }
    }
    ctx->pc = 0x1E2AA8u;
label_1e2aa8:
    // 0x1e2aa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e2aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e2aac: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1e2aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1e2ab0: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1E2AB0u;
    {
        const bool branch_taken_0x1e2ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AB0u;
            // 0x1e2ab4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ab0) {
            ctx->pc = 0x1E2980u;
            runtime->cooperativeGuestYield();
            goto label_1e2980;
        }
    }
    ctx->pc = 0x1E2AB8u;
label_1e2ab8:
    // 0x1e2ab8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1e2abc:
    // 0x1e2abc: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x1E2ABCu;
    SET_GPR_U32(ctx, 31, 0x1E2AC4u);
    ctx->pc = 0x1E2AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2ABCu;
            // 0x1e2ac0: 0x8c44bcf8  lw          $a0, -0x4308($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AC4u; }
        if (ctx->pc != 0x1E2AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC60_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2AC4u; }
        if (ctx->pc != 0x1E2AC4u) { return; }
    }
    ctx->pc = 0x1E2AC4u;
    // 0x1e2ac4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e2ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ac8: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x1e2ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e2acc: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x1e2accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1e2ad0: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x1e2ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e2ad4: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x1e2ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e2ad8: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x1e2ad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e2adc: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x1e2adcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e2ae0: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x1e2ae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e2ae4: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x1e2ae4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e2ae8: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x1e2ae8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e2aec: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1e2aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AF0u;
            // 0x1e2af4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E27D8u: goto label_1e27d8;
            case 0x1E2870u: goto label_1e2870;
            case 0x1E28F0u: goto label_1e28f0;
            case 0x1E2980u: goto label_1e2980;
            case 0x1E2A08u: goto label_1e2a08;
            case 0x1E2A80u: goto label_1e2a80;
            case 0x1E2A90u: goto label_1e2a90;
            case 0x1E2AA8u: goto label_1e2aa8;
            case 0x1E2AB8u: goto label_1e2ab8;
            case 0x1E2ABCu: goto label_1e2abc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2AF8u;
}
