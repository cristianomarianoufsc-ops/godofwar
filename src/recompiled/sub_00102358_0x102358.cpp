#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102358
// Address: 0x102358 - 0x102608
void sub_00102358_0x102358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102358_0x102358");
#endif

    ctx->pc = 0x102358u;

    // 0x102358: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x102358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10235c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10235cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102360: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x102360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x102364: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x102364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x102368: 0x788210a0  lq          $v0, 0x10A0($a0)
    ctx->pc = 0x102368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 4256)));
    // 0x10236c: 0x788310b0  lq          $v1, 0x10B0($a0)
    ctx->pc = 0x10236cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 4272)));
    // 0x102370: 0x788510c0  lq          $a1, 0x10C0($a0)
    ctx->pc = 0x102370u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 4288)));
    // 0x102374: 0x788610d0  lq          $a2, 0x10D0($a0)
    ctx->pc = 0x102374u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 4304)));
    // 0x102378: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x102378u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10237c: 0x8c8e0010  lw          $t6, 0x10($a0)
    ctx->pc = 0x10237cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x102380: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x102380u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102384: 0x8c980004  lw          $t8, 0x4($a0)
    ctx->pc = 0x102384u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x102388: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x102388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x10238c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x10238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x102390: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x102390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x102394: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x102394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x102398: 0x19c00054  blez        $t6, . + 4 + (0x54 << 2)
    ctx->pc = 0x102398u;
    {
        const bool branch_taken_0x102398 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x10239Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102398u;
            // 0x10239c: 0xac88112c  sw          $t0, 0x112C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4396), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102398) {
            ctx->pc = 0x1024ECu;
            goto label_1024ec;
        }
    }
    ctx->pc = 0x1023A0u;
    // 0x1023a0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1023a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023a4: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x1023a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023a8: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x1023a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023ac: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x1023acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_1023b0:
    // 0x1023b0: 0xd8a30030  lqc2        $vf3, 0x30($a1)
    ctx->pc = 0x1023b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1023b4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1023b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1023b8: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1023b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1023bc: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1023bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1023c0: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1023c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1023c4: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1023c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1023c8: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1023c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1023cc: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1023ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1023d0: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1023d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1023d4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1023d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1023d8: 0xf8c20010  sqc2        $vf2, 0x10($a2)
    ctx->pc = 0x1023d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1023dc: 0xd8a30070  lqc2        $vf3, 0x70($a1)
    ctx->pc = 0x1023dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1023e0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1023e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1023e4: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1023e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1023e8: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1023e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1023ec: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1023ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1023f0: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1023f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1023f4: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1023f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1023f8: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1023f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1023fc: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x1023fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x102400: 0x4be218ac  vsub.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x102400u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102404: 0xf8c30020  sqc2        $vf3, 0x20($a2)
    ctx->pc = 0x102404u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x102408: 0xf8c30030  sqc2        $vf3, 0x30($a2)
    ctx->pc = 0x102408u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10240c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x10240cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102410: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x102410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102414: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x102414u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102418: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x102418u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10241c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x10241cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102420: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x102420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102424: 0x46000004  c1          0x4
    ctx->pc = 0x102424u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102428: 0x1a8102a  slt         $v0, $t5, $t0
    ctx->pc = 0x102428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x10242c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10242Cu;
    {
        const bool branch_taken_0x10242c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10242Cu;
            // 0x102430: 0xe5800004  swc1        $f0, 0x4($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10242c) {
            ctx->pc = 0x1024CCu;
            goto label_1024cc;
        }
    }
    ctx->pc = 0x102434u;
    // 0x102434: 0x25890010  addiu       $t1, $t4, 0x10
    ctx->pc = 0x102434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x102438: 0x24c40040  addiu       $a0, $a2, 0x40
    ctx->pc = 0x102438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x10243c: 0x24a700b0  addiu       $a3, $a1, 0xB0
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
label_102440:
    // 0x102440: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x102440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102444: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x102444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102448: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x102448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10244c: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x10244cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102450: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x102450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x102454: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x102454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102458: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x102458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10245c: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x10245cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102460: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x102460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x102464: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x102464u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102468: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x102468u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10246c: 0x4be118ac  vsub.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x10246cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102470: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x102470u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102474: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x102474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102478: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x102478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10247c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x10247cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102480: 0xd1100  sll         $v0, $t5, 4
    ctx->pc = 0x102480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x102484: 0x48300800  qmfc2.ni    $s0, $vf1
    ctx->pc = 0x102484u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102488: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x102488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x10248c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x10248cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102490: 0x46000004  c1          0x4
    ctx->pc = 0x102490u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102494: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x102494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x102498: 0xc440fff4  lwc1        $f0, -0xC($v0)
    ctx->pc = 0x102498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10249c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10249cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1024a0: 0x0  nop
    ctx->pc = 0x1024a0u;
    // NOP
    // 0x1024a4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1024A4u;
    {
        const bool branch_taken_0x1024a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1024a4) {
            ctx->pc = 0x1024A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1024A4u;
            // 0x1024a8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1024B0u;
            goto label_1024b0;
        }
    }
    ctx->pc = 0x1024ACu;
    // 0x1024ac: 0x0  nop
    ctx->pc = 0x1024acu;
    // NOP
label_1024b0:
    // 0x1024b0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1024b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1024b4: 0x48aa1800  qmtc2.ni    $t2, $vf3
    ctx->pc = 0x1024b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1024b8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1024b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1024bc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1024bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1024c0: 0x1a8102a  slt         $v0, $t5, $t0
    ctx->pc = 0x1024c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1024c4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1024C4u;
    {
        const bool branch_taken_0x1024c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1024C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024C4u;
            // 0x1024c8: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024c4) {
            ctx->pc = 0x102440u;
            runtime->cooperativeGuestYield();
            goto label_102440;
        }
    }
    ctx->pc = 0x1024CCu;
label_1024cc:
    // 0x1024cc: 0x81180  sll         $v0, $t0, 6
    ctx->pc = 0x1024ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1024d0: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x1024d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1024d4: 0x82140  sll         $a0, $t0, 5
    ctx->pc = 0x1024d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1024d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1024d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1024dc: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x1024dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1024e0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1024e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1024e4: 0x1560ffb2  bnez        $t3, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1024E4u;
    {
        const bool branch_taken_0x1024e4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1024E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024E4u;
            // 0x1024e8: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024e4) {
            ctx->pc = 0x1023B0u;
            runtime->cooperativeGuestYield();
            goto label_1023b0;
        }
    }
    ctx->pc = 0x1024ECu;
label_1024ec:
    // 0x1024ec: 0x19c00043  blez        $t6, . + 4 + (0x43 << 2)
    ctx->pc = 0x1024ECu;
    {
        const bool branch_taken_0x1024ec = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x1024F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024ECu;
            // 0x1024f0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024ec) {
            ctx->pc = 0x1025FCu;
            goto label_1025fc;
        }
    }
    ctx->pc = 0x1024F4u;
    // 0x1024f4: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x1024f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024f8: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x1024f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024fc: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x1024fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102500: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x102500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x102504: 0x0  nop
    ctx->pc = 0x102504u;
    // NOP
label_102508:
    // 0x102508: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x102508u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10250c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x10250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x102510: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x102510u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102514: 0x4be3286c  vsub.xyzw   $vf1, $vf5, $vf3
    ctx->pc = 0x102514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102518: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x102518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10251c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x10251cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102520: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x102520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102524: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x102524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102528: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x102528u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10252c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x10252cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102530: 0x46000004  c1          0x4
    ctx->pc = 0x102530u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102534: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x102534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x102538: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x102538u;
    {
        const bool branch_taken_0x102538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10253Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102538u;
            // 0x10253c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102538) {
            ctx->pc = 0x1025E0u;
            goto label_1025e0;
        }
    }
    ctx->pc = 0x102540u;
    // 0x102540: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x102540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x102544: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x102544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x102548: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x102548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x10254c: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x10254cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_102550:
    // 0x102550: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x102550u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102554: 0x4be320ac  vsub.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x102554u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102558: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x102558u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10255c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x10255cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102560: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x102560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102564: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x102564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102568: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x102568u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10256c: 0x4be320ac  vsub.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x10256cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102570: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x102570u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102574: 0x46000004  c1          0x4
    ctx->pc = 0x102574u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102578: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x102578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x10257c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x10257cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102580: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x102580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102584: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x102584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102588: 0x48300800  qmfc2.ni    $s0, $vf1
    ctx->pc = 0x102588u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10258c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x10258cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102590: 0x46000004  c1          0x4
    ctx->pc = 0x102590u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102594: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x102594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102598: 0x0  nop
    ctx->pc = 0x102598u;
    // NOP
    // 0x10259c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x10259Cu;
    {
        const bool branch_taken_0x10259c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1025A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10259Cu;
            // 0x1025a0: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10259c) {
            ctx->pc = 0x1025A8u;
            goto label_1025a8;
        }
    }
    ctx->pc = 0x1025A4u;
    // 0x1025a4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1025a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1025a8:
    // 0x1025a8: 0x4be3286c  vsub.xyzw   $vf1, $vf5, $vf3
    ctx->pc = 0x1025a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1025ac: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1025acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1025b0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1025b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1025b4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1025b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1025b8: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x1025b8u;
    ctx->vu0_vf[5] = ctx->vu0_vf[4];
    // 0x1025bc: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x1025bcu;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1025c0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1025c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1025c4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1025c4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1025c8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1025c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1025cc: 0x46000004  c1          0x4
    ctx->pc = 0x1025ccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1025d0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1025d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1025d4: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x1025d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x1025d8: 0x1520ffdd  bnez        $t1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1025D8u;
    {
        const bool branch_taken_0x1025d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1025D8u;
            // 0x1025dc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025d8) {
            ctx->pc = 0x102550u;
            runtime->cooperativeGuestYield();
            goto label_102550;
        }
    }
    ctx->pc = 0x1025E0u;
label_1025e0:
    // 0x1025e0: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x1025e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1025e4: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x1025e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1025e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1025e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1025ec: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1025ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1025f0: 0x1560ffc5  bnez        $t3, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1025F0u;
    {
        const bool branch_taken_0x1025f0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1025F0u;
            // 0x1025f4: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025f0) {
            ctx->pc = 0x102508u;
            runtime->cooperativeGuestYield();
            goto label_102508;
        }
    }
    ctx->pc = 0x1025F8u;
    // 0x1025f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1025f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1025fc:
    // 0x1025fc: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1025fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x102600: 0x3e00008  jr          $ra
    ctx->pc = 0x102600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102600u;
            // 0x102604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1023B0u: goto label_1023b0;
            case 0x102440u: goto label_102440;
            case 0x1024B0u: goto label_1024b0;
            case 0x1024CCu: goto label_1024cc;
            case 0x1024ECu: goto label_1024ec;
            case 0x102508u: goto label_102508;
            case 0x102550u: goto label_102550;
            case 0x1025A8u: goto label_1025a8;
            case 0x1025E0u: goto label_1025e0;
            case 0x1025FCu: goto label_1025fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102608u;
}
