#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC398
// Address: 0x1dc398 - 0x1dca78
void sub_001DC398_0x1dc398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC398_0x1dc398");
#endif

    ctx->pc = 0x1dc398u;

label_1dc398:
    // 0x1dc398: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1dc398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1dc39c: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1dc39cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1dc3a0: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1dc3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1dc3a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dc3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3a8: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x1dc3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x1dc3ac: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1dc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dc3b0: 0x788600b0  lq          $a2, 0xB0($a0)
    ctx->pc = 0x1dc3b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1dc3b4: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1dc3b4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1dc3b8: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x1dc3b8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dc3bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dc3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3c0: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x1dc3c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1dc3c4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1dc3c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc3c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc3cc: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x1dc3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc3d0: 0xc0613d0  jal         func_184F40
    ctx->pc = 0x1DC3D0u;
    SET_GPR_U32(ctx, 31, 0x1DC3D8u);
    ctx->pc = 0x1DC3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC3D0u;
            // 0x1dc3d4: 0xfba301a0  sqc2        $vf3, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184F40u;
    if (runtime->hasFunction(0x184F40u)) {
        auto targetFn = runtime->lookupFunction(0x184F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3D8u; }
        if (ctx->pc != 0x1DC3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184F40_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3D8u; }
        if (ctx->pc != 0x1DC3D8u) { return; }
    }
    ctx->pc = 0x1DC3D8u;
    // 0x1dc3d8: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x1dc3d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dc3dc: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1dc3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1dc3e0: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1dc3e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dc3e4: 0xdba301a0  lqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x1dc3e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1dc3e8: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1dc3e8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1dc3ec: 0x4bc118ae  vopmsub.xyz $vf2, $vf3, $vf1
    ctx->pc = 0x1dc3ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1dc3f0: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1dc3f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc3f4: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1dc3f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1dc3f8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1dc3f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc3fc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1dc3fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc400: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1dc400u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc404: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1dc404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1dc408: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1dc408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dc40c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1dc40cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc410: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1dc410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc414: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1dc414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc418: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1dc418u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc41c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1dc41cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc420: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x1dc420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc424: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1dc424u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dc428: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1DC428u;
    SET_GPR_U32(ctx, 31, 0x1DC430u);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC430u; }
        if (ctx->pc != 0x1DC430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC430u; }
        if (ctx->pc != 0x1DC430u) { return; }
    }
    ctx->pc = 0x1DC430u;
    // 0x1dc430: 0xdba301a0  lqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x1dc430u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1dc434: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1dc434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc438: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1dc438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc43c: 0xdba20190  lqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1dc43cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1dc440: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1dc440u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dc444: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dc444u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dc448: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1dc448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc44c: 0x4a0002ff  vnop
    ctx->pc = 0x1dc44cu;
    // NOP operation, no action needed for VU0
    // 0x1dc450: 0x4a0002ff  vnop
    ctx->pc = 0x1dc450u;
    // NOP operation, no action needed for VU0
    // 0x1dc454: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1dc454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc458: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1dc458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc45c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1dc45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1dc460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc464: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1dc464u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1dc468: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x1DC468u;
    SET_GPR_U32(ctx, 31, 0x1DC470u);
    ctx->pc = 0x1DC46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC468u;
            // 0x1dc46c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC470u; }
        if (ctx->pc != 0x1DC470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC470u; }
        if (ctx->pc != 0x1DC470u) { return; }
    }
    ctx->pc = 0x1DC470u;
    // 0x1dc470: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1dc470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1dc474: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1dc474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1dc478: 0xdba20160  lqc2        $vf2, 0x160($sp)
    ctx->pc = 0x1dc478u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1dc47c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1dc47cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc480: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1dc480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc484: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1dc484u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1dc488: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1dc488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1dc48c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1dc48cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1dc490: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x1dc490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc494: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1dc494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc498: 0xfba20170  sqc2        $vf2, 0x170($sp)
    ctx->pc = 0x1dc498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc49c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1dc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1dc4a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1dc4a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dc4a4: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1dc4a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4a8: 0x4be1111a  vmulz.xyzw  $vf4, $vf2, $vf1z
    ctx->pc = 0x1dc4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4ac: 0x4be11159  vmuly.xyzw  $vf5, $vf2, $vf1y
    ctx->pc = 0x1dc4acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4b0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1dc4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4b4: 0x4a842842  vaddz.y     $vf1, $vf5, $vf4z
    ctx->pc = 0x1dc4b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc4bc: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1dc4bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dc4c0: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x1dc4c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4c4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1dc4c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc4c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dc4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4cc: 0x4b0428c3  vaddw.x     $vf3, $vf5, $vf4w
    ctx->pc = 0x1dc4ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4d0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1dc4d0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc4d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d8: 0x4b052047  vsubw.x     $vf1, $vf4, $vf5w
    ctx->pc = 0x1dc4d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4dc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1dc4dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc4e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4e4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1dc4e4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc4e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4ec: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1dc4ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1dc4f0: 0x4b042847  vsubw.x     $vf1, $vf5, $vf4w
    ctx->pc = 0x1dc4f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4f4: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1dc4f4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc4f8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1dc4f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc4fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dc4fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc500: 0x48a44000  qmtc2.ni    $a0, $vf8
    ctx->pc = 0x1dc500u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1dc504: 0xfba80090  sqc2        $vf8, 0x90($sp)
    ctx->pc = 0x1dc504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1dc508: 0x4b041042  vaddz.x     $vf1, $vf2, $vf4z
    ctx->pc = 0x1dc508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc50c: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x1dc50cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc510: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1dc510u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc514: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc518: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1dc518u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc51c: 0x4a822043  vaddw.y     $vf1, $vf4, $vf2w
    ctx->pc = 0x1dc51cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc520: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1dc520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc524: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1dc524u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc528: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc52c: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1dc52cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1dc530: 0x4a822047  vsubw.y     $vf1, $vf4, $vf2w
    ctx->pc = 0x1dc530u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc534: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x1dc534u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc538: 0x4b052103  vaddw.x     $vf4, $vf4, $vf5w
    ctx->pc = 0x1dc538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1dc53c: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x1dc53cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc540: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dc540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc544: 0x48a63800  qmtc2.ni    $a2, $vf7
    ctx->pc = 0x1dc544u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1dc548: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1dc548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc54c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1dc54cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc550: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc554: 0x4b051081  vaddy.x     $vf2, $vf2, $vf5y
    ctx->pc = 0x1dc554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc558: 0xfba700a0  sqc2        $vf7, 0xA0($sp)
    ctx->pc = 0x1dc558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1dc55c: 0x4b023184  vsubx.x     $vf6, $vf6, $vf2x
    ctx->pc = 0x1dc55cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1dc560: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1dc560u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc568: 0x48243000  qmfc2.ni    $a0, $vf6
    ctx->pc = 0x1dc568u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1dc56c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc570: 0xfba80050  sqc2        $vf8, 0x50($sp)
    ctx->pc = 0x1dc570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1dc574: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x1dc574u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1dc578: 0xfba70060  sqc2        $vf7, 0x60($sp)
    ctx->pc = 0x1dc578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1dc57c: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1dc57cu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc580: 0x7ba60180  lq          $a2, 0x180($sp)
    ctx->pc = 0x1dc580u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dc584: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x1dc584u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1dc588: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1dc588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc58c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1dc58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc590: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x1dc590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
    // 0x1dc594: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1dc594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc598: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x1dc598u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dc59c: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x1dc59cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1dc5a0: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x1dc5a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1dc5a4: 0x4be141bc  vmulax.xyzw $ACC, $vf8, $vf1x
    ctx->pc = 0x1dc5a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1dc5a8: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1dc5a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc5ac: 0x48a63000  qmtc2.ni    $a2, $vf6
    ctx->pc = 0x1dc5acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1dc5b0: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x1dc5b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc5b4: 0x4be1304b  vmaddw.xyzw $vf1, $vf6, $vf1w
    ctx->pc = 0x1dc5b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1dc5b8: 0x4be241bc  vmulax.xyzw $ACC, $vf8, $vf2x
    ctx->pc = 0x1dc5b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1dc5bc: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1dc5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc5c0: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1dc5c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc5c4: 0x4be220be  vmaddaz.xyzw $ACC, $vf4, $vf2z
    ctx->pc = 0x1dc5c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc5c8: 0x4be2308b  vmaddw.xyzw $vf2, $vf6, $vf2w
    ctx->pc = 0x1dc5c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1dc5cc: 0x4be341bc  vmulax.xyzw $ACC, $vf8, $vf3x
    ctx->pc = 0x1dc5ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1dc5d0: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1dc5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc5d4: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1dc5d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc5d8: 0x4be320be  vmaddaz.xyzw $ACC, $vf4, $vf3z
    ctx->pc = 0x1dc5d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc5dc: 0x4be330cb  vmaddw.xyzw $vf3, $vf6, $vf3w
    ctx->pc = 0x1dc5dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1dc5e0: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x1dc5e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1dc5e4: 0xfba30120  sqc2        $vf3, 0x120($sp)
    ctx->pc = 0x1dc5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc5e8: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1dc5e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc5ec: 0x4be520be  vmaddaz.xyzw $ACC, $vf4, $vf5z
    ctx->pc = 0x1dc5ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc5f0: 0x4be5310b  vmaddw.xyzw $vf4, $vf6, $vf5w
    ctx->pc = 0x1dc5f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1dc5f4: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x1dc5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc5f8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1dc5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc5fc: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x1dc5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc600: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1dc600u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc604: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x1dc604u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc608: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x1dc608u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc60c: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x1dc60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1dc610: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x1dc610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1dc614: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1dc614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc618: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1dc618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc61c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1dc61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dc620: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC620u;
            // 0x1dc624: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC398u: goto label_1dc398;
            case 0x1DC664u: goto label_1dc664;
            case 0x1DC67Cu: goto label_1dc67c;
            case 0x1DC698u: goto label_1dc698;
            case 0x1DC6E4u: goto label_1dc6e4;
            case 0x1DC788u: goto label_1dc788;
            case 0x1DC7DCu: goto label_1dc7dc;
            case 0x1DC8C8u: goto label_1dc8c8;
            case 0x1DC8CCu: goto label_1dc8cc;
            case 0x1DC900u: goto label_1dc900;
            case 0x1DC908u: goto label_1dc908;
            case 0x1DCA0Cu: goto label_1dca0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC628u;
    // 0x1dc628: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1dc628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1dc62c: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x1dc62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x1dc630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc634: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x1dc634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x1dc638: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x1dc638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x1dc63c: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x1dc63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x1dc640: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dc640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc644: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x1dc644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x1dc648: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x1dc648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x1dc64c: 0xc05ee34  jal         func_17B8D0
    ctx->pc = 0x1DC64Cu;
    SET_GPR_U32(ctx, 31, 0x1DC654u);
    ctx->pc = 0x1DC650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC64Cu;
            // 0x1dc650: 0xe7b401b0  swc1        $f20, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B8D0u;
    if (runtime->hasFunction(0x17B8D0u)) {
        auto targetFn = runtime->lookupFunction(0x17B8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC654u; }
        if (ctx->pc != 0x1DC654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B8D0_0x17b8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC654u; }
        if (ctx->pc != 0x1DC654u) { return; }
    }
    ctx->pc = 0x1DC654u;
    // 0x1dc654: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dc654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dc658: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x1dc658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1dc65c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DC65Cu;
    {
        const bool branch_taken_0x1dc65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc65c) {
            ctx->pc = 0x1DC660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC65Cu;
            // 0x1dc660: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC664u;
            goto label_1dc664;
        }
    }
    ctx->pc = 0x1DC664u;
label_1dc664:
    // 0x1dc664: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1dc664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1dc668: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dc668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc66c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC66Cu;
    {
        const bool branch_taken_0x1dc66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC66Cu;
            // 0x1dc670: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc66c) {
            ctx->pc = 0x1DC67Cu;
            goto label_1dc67c;
        }
    }
    ctx->pc = 0x1DC674u;
    // 0x1dc674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC674u;
    {
        const bool branch_taken_0x1dc674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC674u;
            // 0x1dc678: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc674) {
            ctx->pc = 0x1DC698u;
            goto label_1dc698;
        }
    }
    ctx->pc = 0x1DC67Cu;
label_1dc67c:
    // 0x1dc67c: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1dc67cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1dc680: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1dc680u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1dc684: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC684u;
    {
        const bool branch_taken_0x1dc684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DC688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC684u;
            // 0x1dc688: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc684) {
            ctx->pc = 0x1DC698u;
            goto label_1dc698;
        }
    }
    ctx->pc = 0x1DC68Cu;
    // 0x1dc68c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1DC68Cu;
    SET_GPR_U32(ctx, 31, 0x1DC694u);
    ctx->pc = 0x1DC690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC68Cu;
            // 0x1dc690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC694u; }
        if (ctx->pc != 0x1DC694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC694u; }
        if (ctx->pc != 0x1DC694u) { return; }
    }
    ctx->pc = 0x1DC694u;
    // 0x1dc694: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1dc694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1dc698:
    // 0x1dc698: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1dc698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc69c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc6a0: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1dc6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1dc6a4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1dc6a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc6a8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1dc6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1dc6ac: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1dc6acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1dc6b0: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1dc6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x1dc6b4: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1dc6b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1dc6b8: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x1dc6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x1dc6bc: 0x24710038  addiu       $s1, $v1, 0x38
    ctx->pc = 0x1dc6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1dc6c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc6c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1dc6c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dc6c8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1dc6c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc6cc: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1dc6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6d4: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x1dc6d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc6d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dc6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6dc: 0xc0770e6  jal         func_1DC398
    ctx->pc = 0x1DC6DCu;
    SET_GPR_U32(ctx, 31, 0x1DC6E4u);
    ctx->pc = 0x1DC6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6DCu;
            // 0x1dc6e0: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC398u;
    runtime->cooperativeGuestYield();
    goto label_1dc398;
    ctx->pc = 0x1DC6E4u;
label_1dc6e4:
    // 0x1dc6e4: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1dc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1dc6e8: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x1DC6E8u;
    {
        const bool branch_taken_0x1dc6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc6e8) {
            ctx->pc = 0x1DC6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6E8u;
            // 0x1dc6ec: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC8CCu;
            goto label_1dc8cc;
        }
    }
    ctx->pc = 0x1DC6F0u;
    // 0x1dc6f0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1dc6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc6f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc6f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dc6f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc6fc: 0x0  nop
    ctx->pc = 0x1dc6fcu;
    // NOP
    // 0x1dc700: 0x45000071  bc1f        . + 4 + (0x71 << 2)
    ctx->pc = 0x1DC700u;
    {
        const bool branch_taken_0x1dc700 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC700u;
            // 0x1dc704: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc700) {
            ctx->pc = 0x1DC8C8u;
            goto label_1dc8c8;
        }
    }
    ctx->pc = 0x1DC708u;
    // 0x1dc708: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x1dc708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc70c: 0xc077042  jal         func_1DC108
    ctx->pc = 0x1DC70Cu;
    SET_GPR_U32(ctx, 31, 0x1DC714u);
    ctx->pc = 0x1DC710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC70Cu;
            // 0x1dc710: 0xc60d0104  lwc1        $f13, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC108u;
    if (runtime->hasFunction(0x1DC108u)) {
        auto targetFn = runtime->lookupFunction(0x1DC108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC714u; }
        if (ctx->pc != 0x1DC714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc108_0x1dc160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC714u; }
        if (ctx->pc != 0x1DC714u) { return; }
    }
    ctx->pc = 0x1DC714u;
    // 0x1dc714: 0xc681d28c  lwc1        $f1, -0x2D74($s4)
    ctx->pc = 0x1dc714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294955660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc718: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1dc718u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc71c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1dc71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc720: 0x0  nop
    ctx->pc = 0x1dc720u;
    // NOP
    // 0x1dc724: 0x45020078  bc1fl       . + 4 + (0x78 << 2)
    ctx->pc = 0x1DC724u;
    {
        const bool branch_taken_0x1dc724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc724) {
            ctx->pc = 0x1DC728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC724u;
            // 0x1dc728: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC908u;
            goto label_1dc908;
        }
    }
    ctx->pc = 0x1DC72Cu;
    // 0x1dc72c: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1dc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1dc730: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1DC730u;
    {
        const bool branch_taken_0x1dc730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC730u;
            // 0x1dc734: 0x26130060  addiu       $s3, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc730) {
            ctx->pc = 0x1DC900u;
            goto label_1dc900;
        }
    }
    ctx->pc = 0x1DC738u;
    // 0x1dc738: 0x7a050060  lq          $a1, 0x60($s0)
    ctx->pc = 0x1dc738u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1dc73c: 0x7a660010  lq          $a2, 0x10($s3)
    ctx->pc = 0x1dc73cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1dc740: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1dc740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dc744: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1DC744u;
    SET_GPR_U32(ctx, 31, 0x1DC74Cu);
    ctx->pc = 0x1DC748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC744u;
            // 0x1dc748: 0x7a670020  lq          $a3, 0x20($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC74Cu; }
        if (ctx->pc != 0x1DC74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC74Cu; }
        if (ctx->pc != 0x1DC74Cu) { return; }
    }
    ctx->pc = 0x1DC74Cu;
    // 0x1dc74c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1dc74cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc750: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1dc750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dc754: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x1dc754u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc758: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x1dc758u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc75c: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x1dc75cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc760: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1DC760u;
    SET_GPR_U32(ctx, 31, 0x1DC768u);
    ctx->pc = 0x1DC764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC760u;
            // 0x1dc764: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC768u; }
        if (ctx->pc != 0x1DC768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC768u; }
        if (ctx->pc != 0x1DC768u) { return; }
    }
    ctx->pc = 0x1DC768u;
    // 0x1dc768: 0xc680d28c  lwc1        $f0, -0x2D74($s4)
    ctx->pc = 0x1dc768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294955660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc76c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1dc76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc770: 0x0  nop
    ctx->pc = 0x1dc770u;
    // NOP
    // 0x1dc774: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1DC774u;
    {
        const bool branch_taken_0x1dc774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC774u;
            // 0x1dc778: 0x7bb200f0  lq          $s2, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc774) {
            ctx->pc = 0x1DC7DCu;
            goto label_1dc7dc;
        }
    }
    ctx->pc = 0x1DC77Cu;
    // 0x1dc77c: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1dc77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1dc780: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DC780u;
    {
        const bool branch_taken_0x1dc780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc780) {
            ctx->pc = 0x1DC7DCu;
            goto label_1dc7dc;
        }
    }
    ctx->pc = 0x1DC788u;
label_1dc788:
    // 0x1dc788: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x1dc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc78c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1dc78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dc790: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dc790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc794: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc798: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dc798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dc79c: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x1dc79cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dc7a0: 0xc440d290  lwc1        $f0, -0x2D70($v0)
    ctx->pc = 0x1dc7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7a4: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x1dc7a4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x1dc7a8: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1dc7a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1dc7ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1dc7acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dc7b0: 0xc061084  jal         func_184210
    ctx->pc = 0x1DC7B0u;
    SET_GPR_U32(ctx, 31, 0x1DC7B8u);
    ctx->pc = 0x1DC7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7B0u;
            // 0x1dc7b4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7B8u; }
        if (ctx->pc != 0x1DC7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7B8u; }
        if (ctx->pc != 0x1DC7B8u) { return; }
    }
    ctx->pc = 0x1DC7B8u;
    // 0x1dc7b8: 0xc680d28c  lwc1        $f0, -0x2D74($s4)
    ctx->pc = 0x1dc7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294955660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7bc: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1dc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1dc7c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1dc7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc7c4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1dc7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1dc7c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dc7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dc7cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC7CCu;
    {
        const bool branch_taken_0x1dc7cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7CCu;
            // 0x1dc7d0: 0xae030100  sw          $v1, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7cc) {
            ctx->pc = 0x1DC7DCu;
            goto label_1dc7dc;
        }
    }
    ctx->pc = 0x1DC7D4u;
    // 0x1dc7d4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DC7D4u;
    {
        const bool branch_taken_0x1dc7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc7d4) {
            ctx->pc = 0x1DC788u;
            runtime->cooperativeGuestYield();
            goto label_1dc788;
        }
    }
    ctx->pc = 0x1DC7DCu;
label_1dc7dc:
    // 0x1dc7dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1dc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1dc7e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1dc7e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dc7e4: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1dc7e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dc7e8: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1dc7e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc7ec: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x1dc7ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1dc7f0: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x1dc7f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dc7f4: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1dc7f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1dc7f8: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x1dc7f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc7fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc800: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1dc800u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dc804: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x1dc804u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc808: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1dc808u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc80c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dc80cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc810: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x1dc810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc814: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1dc814u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc818: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc81c: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x1dc81cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc820: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1dc820u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc828: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1dc828u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc82c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc830: 0x70c22b89  pcpyld      $a1, $a2, $v0
    ctx->pc = 0x1dc830u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1dc834: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x1dc834u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc838: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x1dc838u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1dc83c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1dc83cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc840: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dc840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc844: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x1dc844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x1dc848: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x1dc848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc84c: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x1dc84cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc850: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1dc850u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc854: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc858: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc85c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1dc85cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc860: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1dc860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc864: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1dc864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc868: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1dc868u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc86c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc870: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x1dc870u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1dc874: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1dc874u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc878: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x1dc878u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1dc87c: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x1dc87cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1dc880: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1dc880u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1dc884: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dc884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc888: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x1dc888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1dc88c: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1dc88cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc890: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1dc890u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc894: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1dc894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc898: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x1dc898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x1dc89c: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x1dc89cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1dc8a0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1dc8a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc8a4: 0x7e650000  sq          $a1, 0x0($s3)
    ctx->pc = 0x1dc8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 5));
    // 0x1dc8a8: 0x48263000  qmfc2.ni    $a2, $vf6
    ctx->pc = 0x1dc8a8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1dc8ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1dc8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc8b0: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1dc8b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1dc8b4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1dc8b4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc8b8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1dc8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1dc8bc: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x1dc8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
    // 0x1dc8c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DC8C0u;
    {
        const bool branch_taken_0x1dc8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8C0u;
            // 0x1dc8c4: 0x7e640010  sq          $a0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8c0) {
            ctx->pc = 0x1DC900u;
            goto label_1dc900;
        }
    }
    ctx->pc = 0x1DC8C8u;
label_1dc8c8:
    // 0x1dc8c8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1dc8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc8cc:
    // 0x1dc8cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dc8d0: 0x8c42d298  lw          $v0, -0x2D68($v0)
    ctx->pc = 0x1dc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955672)));
    // 0x1dc8d4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1dc8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1dc8d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC8D8u;
    {
        const bool branch_taken_0x1dc8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8D8u;
            // 0x1dc8dc: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8d8) {
            ctx->pc = 0x1DC900u;
            goto label_1dc900;
        }
    }
    ctx->pc = 0x1DC8E0u;
    // 0x1dc8e0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1dc8e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc8e4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1dc8e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc8e8: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x1dc8e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc8ec: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1dc8ecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc8f0: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x1dc8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x1dc8f4: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x1dc8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
    // 0x1dc8f8: 0x7e040080  sq          $a0, 0x80($s0)
    ctx->pc = 0x1dc8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 4));
    // 0x1dc8fc: 0x7e050090  sq          $a1, 0x90($s0)
    ctx->pc = 0x1dc8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 5));
label_1dc900:
    // 0x1dc900: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1dc900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1dc904: 0x0  nop
    ctx->pc = 0x1dc904u;
    // NOP
label_1dc908:
    // 0x1dc908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc90c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1dc90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1dc910: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1dc910u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1dc914: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1dc914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1dc918: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x1dc918u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1dc91c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1dc91cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1dc920: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1dc920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dc924: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1dc924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1dc928: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1dc928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1dc92c: 0x4b020045  vsuby.x     $vf1, $vf0, $vf2y
    ctx->pc = 0x1dc92cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc930: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1dc930u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc934: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dc934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc938: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x1dc938u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x1dc93c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1dc93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc940: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x1dc940u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1dc944: 0x71031389  pcpyld      $v0, $t0, $v1
    ctx->pc = 0x1dc944u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x1dc948: 0xda010060  lqc2        $vf1, 0x60($s0)
    ctx->pc = 0x1dc948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1dc94c: 0x70442cc8  ppacw       $a1, $v0, $a0
    ctx->pc = 0x1dc94cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1dc950: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x1dc950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1dc954: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1dc954u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1dc958: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1dc958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc95c: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1dc95cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1dc960: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1dc960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc964: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1dc964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dc968: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1dc968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc96c: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1dc96cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dc970: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1dc970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc974: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1dc974u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1dc978: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1dc978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1dc97c: 0xfa0100d0  sqc2        $vf1, 0xD0($s0)
    ctx->pc = 0x1dc97cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc980: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1dc980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1dc984: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1dc984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1dc988: 0xdba30140  lqc2        $vf3, 0x140($sp)
    ctx->pc = 0x1dc988u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1dc98c: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1dc98cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc990: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc994: 0xfa0100d0  sqc2        $vf1, 0xD0($s0)
    ctx->pc = 0x1dc994u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc998: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x1dc998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1dc99c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1dc99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc9a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1dc9a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1dc9a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dc9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dc9a8: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x1dc9a8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1dc9ac: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1dc9acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1dc9b0: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x1dc9b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1dc9b4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dc9b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc9b8: 0x704444c8  ppacw       $t0, $v0, $a0
    ctx->pc = 0x1dc9b8u;
    SET_GPR_VEC(ctx, 8, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1dc9bc: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1dc9bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc9c0: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x1dc9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1dc9c4: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x1dc9c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1dc9c8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1dc9c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc9cc: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x1dc9ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc9d0: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1dc9d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc9d4: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x1dc9d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dc9d8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1dc9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc9dc: 0x4be1108b  vmaddw.xyzw $vf2, $vf2, $vf1w
    ctx->pc = 0x1dc9dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1dc9e0: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1dc9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc9e4: 0xfa0200e0  sqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1dc9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc9e8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1dc9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dc9ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1dc9ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1dc9f0: 0xdba30140  lqc2        $vf3, 0x140($sp)
    ctx->pc = 0x1dc9f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1dc9f4: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x1dc9f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc9f8: 0xfa0200e0  sqc2        $vf2, 0xE0($s0)
    ctx->pc = 0x1dc9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dc9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca00: 0x7a0500a0  lq          $a1, 0xA0($s0)
    ctx->pc = 0x1dca00u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1dca04: 0xc0770e6  jal         func_1DC398
    ctx->pc = 0x1DCA04u;
    SET_GPR_U32(ctx, 31, 0x1DCA0Cu);
    ctx->pc = 0x1DCA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA04u;
            // 0x1dca08: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC398u;
    runtime->cooperativeGuestYield();
    goto label_1dc398;
    ctx->pc = 0x1DCA0Cu;
label_1dca0c:
    // 0x1dca0c: 0xdba20120  lqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1dca0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1dca10: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1dca10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dca14: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1dca14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1dca18: 0xdba100b0  lqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1dca18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dca1c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1dca1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dca20: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1dca20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dca24: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1dca24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1dca28: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1dca28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dca2c: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1dca2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1dca30: 0xfa0100f0  sqc2        $vf1, 0xF0($s0)
    ctx->pc = 0x1dca30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dca34: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x1dca34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1dca38: 0x48b11000  qmtc2.ni    $s1, $vf2
    ctx->pc = 0x1dca38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1dca3c: 0xdba30140  lqc2        $vf3, 0x140($sp)
    ctx->pc = 0x1dca3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1dca40: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1dca40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dca44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dca48: 0xfa0100f0  sqc2        $vf1, 0xF0($s0)
    ctx->pc = 0x1dca48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dca4c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x1dca4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1dca50: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x1dca50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1dca54: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x1dca54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dca58: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x1dca58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1dca5c: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x1dca5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1dca60: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x1dca60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1dca64: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1dca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dca68: 0xac40d298  sw          $zero, -0x2D68($v0)
    ctx->pc = 0x1dca68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955672), GPR_U32(ctx, 0));
    // 0x1dca6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA6Cu;
            // 0x1dca70: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC398u: goto label_1dc398;
            case 0x1DC664u: goto label_1dc664;
            case 0x1DC67Cu: goto label_1dc67c;
            case 0x1DC698u: goto label_1dc698;
            case 0x1DC6E4u: goto label_1dc6e4;
            case 0x1DC788u: goto label_1dc788;
            case 0x1DC7DCu: goto label_1dc7dc;
            case 0x1DC8C8u: goto label_1dc8c8;
            case 0x1DC8CCu: goto label_1dc8cc;
            case 0x1DC900u: goto label_1dc900;
            case 0x1DC908u: goto label_1dc908;
            case 0x1DCA0Cu: goto label_1dca0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCA74u;
    // 0x1dca74: 0x0  nop
    ctx->pc = 0x1dca74u;
    // NOP
}
