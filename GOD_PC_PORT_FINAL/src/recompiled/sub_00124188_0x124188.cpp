#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124188
// Address: 0x124188 - 0x124488
void sub_00124188_0x124188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124188_0x124188");
#endif

    ctx->pc = 0x124188u;

    // 0x124188: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x124188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x12418c: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x12418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x124190: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x124190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x124194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124198: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x124198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x12419c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12419cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241a0: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x1241a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1241a4: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x1241a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1241a8: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1241a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1241ac: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1241acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1241b0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1241B0u;
    SET_GPR_U32(ctx, 31, 0x1241B8u);
    ctx->pc = 0x1241B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1241B0u;
            // 0x1241b4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1241B8u; }
        if (ctx->pc != 0x1241B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1241B8u; }
        if (ctx->pc != 0x1241B8u) { return; }
    }
    ctx->pc = 0x1241B8u;
    // 0x1241b8: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1241b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x1241bc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1241bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1241c0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1241c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1241c4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1241c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1241c8: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1241c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1241cc: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1241ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1241d0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1241d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1241d4: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1241D4u;
    SET_GPR_U32(ctx, 31, 0x1241DCu);
    ctx->pc = 0x1241D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1241D4u;
            // 0x1241d8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1241DCu; }
        if (ctx->pc != 0x1241DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1241DCu; }
        if (ctx->pc != 0x1241DCu) { return; }
    }
    ctx->pc = 0x1241DCu;
    // 0x1241dc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1241dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1241e0: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x1241e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1241e4: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x1241e4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x1241e8: 0x46150544  c1          0x150544
    ctx->pc = 0x1241e8u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1241ec: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1241ECu;
    SET_GPR_U32(ctx, 31, 0x1241F4u);
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1241F4u; }
        if (ctx->pc != 0x1241F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1241F4u; }
        if (ctx->pc != 0x1241F4u) { return; }
    }
    ctx->pc = 0x1241F4u;
    // 0x1241f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1241f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1241f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1241f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1241fc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1241fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124200: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x124200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x124204: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x124204u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x124208: 0x46140504  c1          0x140504
    ctx->pc = 0x124208u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x12420c: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x12420Cu;
    SET_GPR_U32(ctx, 31, 0x124214u);
    ctx->pc = 0x124210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12420Cu;
            // 0x124210: 0x4615a502  mul.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124214u; }
        if (ctx->pc != 0x124214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124214u; }
        if (ctx->pc != 0x124214u) { return; }
    }
    ctx->pc = 0x124214u;
    // 0x124214: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x124214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124218: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x124218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x12421c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x12421cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x124220: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x124220u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x124224: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x124224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x124228: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x124228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x12422c: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x12422cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x124230: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x124230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x124234: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x124234u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x124238: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x124238u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12423c: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x12423cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x124240: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x124240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x124244: 0xfba60080  sqc2        $vf6, 0x80($sp)
    ctx->pc = 0x124244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x124248: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x124248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12424c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12424cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x124250: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x124250u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x124254: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x124254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x124258: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x124258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12425c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x12425cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x124260: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x124260u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x124264: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x124264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x124268: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x124268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12426c: 0x4be1312a  vmul.xyzw   $vf4, $vf6, $vf1
    ctx->pc = 0x12426cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124270: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x124270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x124274: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x124274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124278: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x124278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12427c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x12427cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124280: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x124280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x124284: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124284u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124288: 0x4a0003bf  vwaitq
    ctx->pc = 0x124288u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12428c: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x12428cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124290: 0x4a0002ff  vnop
    ctx->pc = 0x124290u;
    // NOP operation, no action needed for VU0
    // 0x124294: 0x4a0002ff  vnop
    ctx->pc = 0x124294u;
    // NOP operation, no action needed for VU0
    // 0x124298: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x124298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12429c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x12429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1242a0: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1242a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1242a4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1242a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1242a8: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1242a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1242ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1242acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1242b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1242b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1242b4: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1242b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1242b8: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x1242b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1242bc: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x1242bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1242c0: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1242c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1242c4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1242c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1242c8: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1242c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1242cc: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1242ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1242d0: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1242d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1242d4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1242d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1242d8: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x1242d8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1242dc: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x1242dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1242e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1242e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242e4: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x1242e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1242e8: 0x70442cc8  ppacw       $a1, $v0, $a0
    ctx->pc = 0x1242e8u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1242ec: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1242ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1242f0: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1242f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1242f4: 0x4be2116a  vmul.xyzw   $vf5, $vf2, $vf2
    ctx->pc = 0x1242f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1242f8: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1242f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1242fc: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x1242fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124300: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x124300u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124304: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x124304u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124308: 0x4a0003bf  vwaitq
    ctx->pc = 0x124308u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12430c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x12430cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124310: 0x4a0002ff  vnop
    ctx->pc = 0x124310u;
    // NOP operation, no action needed for VU0
    // 0x124314: 0x4a0002ff  vnop
    ctx->pc = 0x124314u;
    // NOP operation, no action needed for VU0
    // 0x124318: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x124318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12431c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x12431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x124320: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x124320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x124324: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x124324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x124328: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x124328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12432c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x12432cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124330: 0x4be22128  vadd.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x124330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124334: 0x4bc61afe  vopmula.xyz $ACC, $vf3, $vf6
    ctx->pc = 0x124334u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]);
    // 0x124338: 0x4bc330ee  vopmsub.xyz $vf3, $vf6, $vf3
    ctx->pc = 0x124338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12433c: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x12433cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124340: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x124340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124344: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x124344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124348: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x124348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12434c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12434cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124350: 0x4a0003bf  vwaitq
    ctx->pc = 0x124350u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124354: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x124354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124358: 0x4a0002ff  vnop
    ctx->pc = 0x124358u;
    // NOP operation, no action needed for VU0
    // 0x12435c: 0x4a0002ff  vnop
    ctx->pc = 0x12435cu;
    // NOP operation, no action needed for VU0
    // 0x124360: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x124360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x124364: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x124364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x124368: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x124368u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12436c: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x12436cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x124370: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x124370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124374: 0x4be32128  vadd.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x124374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124378: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124378u;
    SET_GPR_U32(ctx, 31, 0x124380u);
    ctx->pc = 0x12437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124378u;
            // 0x12437c: 0xfba40100  sqc2        $vf4, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124380u; }
        if (ctx->pc != 0x124380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124380u; }
        if (ctx->pc != 0x124380u) { return; }
    }
    ctx->pc = 0x124380u;
    // 0x124380: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x124380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124384: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x124384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x124388: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x124388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x12438c: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x12438cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x124390: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x124390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124394: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124394u;
    SET_GPR_U32(ctx, 31, 0x12439Cu);
    ctx->pc = 0x124398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124394u;
            // 0x124398: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12439Cu; }
        if (ctx->pc != 0x12439Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12439Cu; }
        if (ctx->pc != 0x12439Cu) { return; }
    }
    ctx->pc = 0x12439Cu;
    // 0x12439c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12439cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1243a0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1243a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1243a4: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1243a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1243a8: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1243a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1243ac: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1243acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1243b0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x1243B0u;
    SET_GPR_U32(ctx, 31, 0x1243B8u);
    ctx->pc = 0x1243B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1243B0u;
            // 0x1243b4: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243B8u; }
        if (ctx->pc != 0x1243B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243B8u; }
        if (ctx->pc != 0x1243B8u) { return; }
    }
    ctx->pc = 0x1243B8u;
    // 0x1243b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1243b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1243bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1243bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1243c0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1243c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1243c4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1243c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1243c8: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1243c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1243cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1243ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1243d0: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x1243d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1243d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1243d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243d8: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1243d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1243dc: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x1243dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1243e0: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1243e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1243e4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1243e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1243e8: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x1243e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1243ec: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1243ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1243f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1243f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1243f4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1243f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1243f8: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1243f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1243fc: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1243fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x124400: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x124400u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124404: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x124404u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x124408: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x124408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12440c: 0x8c42bde8  lw          $v0, -0x4218($v0)
    ctx->pc = 0x12440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x124410: 0xd84100c0  lqc2        $vf1, 0xC0($v0)
    ctx->pc = 0x124410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x124414: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x124414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x124418: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x124418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x12441c: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x12441cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x124420: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x124420u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124424: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x124424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x124428: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x124428u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12442c: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x12442cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x124430: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x124430u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124434: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x124434u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124438: 0xd8410100  lqc2        $vf1, 0x100($v0)
    ctx->pc = 0x124438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x12443c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x12443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x124440: 0x4be409bc  vmulax.xyzw $ACC, $vf1, $vf4x
    ctx->pc = 0x124440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x124444: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x124444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x124448: 0x4be408bd  vmadday.xyzw $ACC, $vf1, $vf4y
    ctx->pc = 0x124448u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12444c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x12444cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x124450: 0x4be408be  vmaddaz.xyzw $ACC, $vf1, $vf4z
    ctx->pc = 0x124450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124454: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x124454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x124458: 0x4be4084b  vmaddw.xyzw $vf1, $vf1, $vf4w
    ctx->pc = 0x124458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12445c: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x12445cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124460: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x124460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x124464: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x124464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x124468: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x124468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12446c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x12446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x124470: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x124470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x124474: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x124474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x124478: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x124478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12447c: 0x3e00008  jr          $ra
    ctx->pc = 0x12447Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12447Cu;
            // 0x124480: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124484u;
    // 0x124484: 0x0  nop
    ctx->pc = 0x124484u;
    // NOP
}
