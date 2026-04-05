#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA2A0
// Address: 0x1ca2a0 - 0x1ca3f0
void sub_001CA2A0_0x1ca2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA2A0_0x1ca2a0");
#endif

    ctx->pc = 0x1ca2a0u;

    // 0x1ca2a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ca2a4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1ca2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1ca2a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ca2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ca2ac: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1ca2acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ca2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2b4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1ca2b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ca2b8: 0x3c04ffbf  lui         $a0, 0xFFBF
    ctx->pc = 0x1ca2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65471 << 16));
    // 0x1ca2bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca2c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ca2c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ca2c4: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1ca2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1ca2c8: 0xc455630c  lwc1        $f21, 0x630C($v0)
    ctx->pc = 0x1ca2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ca2cc: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1ca2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1ca2d0: 0xe6150230  swc1        $f21, 0x230($s0)
    ctx->pc = 0x1ca2d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x1ca2d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ca2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca2d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca2dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ca2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ca2e0: 0xc46001ec  lwc1        $f0, 0x1EC($v1)
    ctx->pc = 0x1ca2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca2e4: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1ca2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1ca2e8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1ca2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1ca2ec: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x1ca2ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1ca2f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ca2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ca2f4: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1ca2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1ca2f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ca2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ca2fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ca2fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ca300: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1ca300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca304: 0xda020130  lqc2        $vf2, 0x130($s0)
    ctx->pc = 0x1ca304u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1ca308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca30c: 0x4a820845  vsuby.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x1ca30cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca310: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1ca310u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ca314: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ca314u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca318: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ca318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca31c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1ca31cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ca320: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca324: 0xc079308  jal         func_1E4C20
    ctx->pc = 0x1CA324u;
    SET_GPR_U32(ctx, 31, 0x1CA32Cu);
    ctx->pc = 0x1CA328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA324u;
            // 0x1ca328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4C20u;
    if (runtime->hasFunction(0x1E4C20u)) {
        auto targetFn = runtime->lookupFunction(0x1E4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA32Cu; }
        if (ctx->pc != 0x1CA32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4C20_0x1e4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA32Cu; }
        if (ctx->pc != 0x1CA32Cu) { return; }
    }
    ctx->pc = 0x1CA32Cu;
    // 0x1ca32c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CA32Cu;
    {
        const bool branch_taken_0x1ca32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca32c) {
            ctx->pc = 0x1CA330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA32Cu;
            // 0x1ca330: 0xc6000230  lwc1        $f0, 0x230($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA3A8u;
            goto label_1ca3a8;
        }
    }
    ctx->pc = 0x1CA334u;
    // 0x1ca334: 0xc07223c  jal         func_1C88F0
    ctx->pc = 0x1CA334u;
    SET_GPR_U32(ctx, 31, 0x1CA33Cu);
    ctx->pc = 0x1CA338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA334u;
            // 0x1ca338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C88F0u;
    if (runtime->hasFunction(0x1C88F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C88F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA33Cu; }
        if (ctx->pc != 0x1CA33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C88F0_0x1c88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA33Cu; }
        if (ctx->pc != 0x1CA33Cu) { return; }
    }
    ctx->pc = 0x1CA33Cu;
    // 0x1ca33c: 0xda0200e0  lqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1ca33cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1ca340: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1ca340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1ca344: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ca344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ca348: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ca348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ca34c: 0x3c01c280  lui         $at, 0xC280
    ctx->pc = 0x1ca34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49792 << 16));
    // 0x1ca350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca354: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1ca354u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ca358: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1ca358u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ca35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca360: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ca360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ca364: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1ca364u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1ca368: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ca368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ca36c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ca36cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ca370: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1ca370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ca374: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1ca374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1ca378: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1ca378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ca37c: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1ca37cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ca380: 0xfa0200e0  sqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1ca380u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ca384: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1ca384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1ca388: 0xe61402a0  swc1        $f20, 0x2A0($s0)
    ctx->pc = 0x1ca388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x1ca38c: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1ca38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1ca390: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1ca390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1ca394: 0x4a830040  vaddx.y     $vf1, $vf0, $vf3x
    ctx->pc = 0x1ca394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca398: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1ca398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca39c: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1ca39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x1ca3a0: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x1ca3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca3a4: 0x0  nop
    ctx->pc = 0x1ca3a4u;
    // NOP
label_1ca3a8:
    // 0x1ca3a8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1ca3a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca3ac: 0x0  nop
    ctx->pc = 0x1ca3acu;
    // NOP
    // 0x1ca3b0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA3B0u;
    {
        const bool branch_taken_0x1ca3b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca3b0) {
            ctx->pc = 0x1CA3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3B0u;
            // 0x1ca3b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA3D8u;
            goto label_1ca3d8;
        }
    }
    ctx->pc = 0x1CA3B8u;
    // 0x1ca3b8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1ca3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1ca3bc: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1ca3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1ca3c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA3C0u;
    {
        const bool branch_taken_0x1ca3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3C0u;
            // 0x1ca3c4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3c0) {
            ctx->pc = 0x1CA3D4u;
            goto label_1ca3d4;
        }
    }
    ctx->pc = 0x1CA3C8u;
    // 0x1ca3c8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1ca3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1ca3cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ca3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ca3d0: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1ca3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1ca3d4:
    // 0x1ca3d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ca3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca3d8:
    // 0x1ca3d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca3dc: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1ca3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ca3e0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1ca3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3E4u;
            // 0x1ca3e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA3A8u: goto label_1ca3a8;
            case 0x1CA3D4u: goto label_1ca3d4;
            case 0x1CA3D8u: goto label_1ca3d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA3ECu;
    // 0x1ca3ec: 0x0  nop
    ctx->pc = 0x1ca3ecu;
    // NOP
}
