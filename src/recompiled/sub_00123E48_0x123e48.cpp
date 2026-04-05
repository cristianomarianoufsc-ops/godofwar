#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123E48
// Address: 0x123e48 - 0x124158
void sub_00123E48_0x123e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123E48_0x123e48");
#endif

    ctx->pc = 0x123e48u;

    // 0x123e48: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x123e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x123e4c: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x123e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x123e50: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x123e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x123e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e58: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x123e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x123e5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x123e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e60: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x123e60u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x123e64: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x123e64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x123e68: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x123e68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x123e6c: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x123e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x123e70: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x123e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x123e74: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123E74u;
    SET_GPR_U32(ctx, 31, 0x123E7Cu);
    ctx->pc = 0x123E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123E74u;
            // 0x123e78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E7Cu; }
        if (ctx->pc != 0x123E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E7Cu; }
        if (ctx->pc != 0x123E7Cu) { return; }
    }
    ctx->pc = 0x123E7Cu;
    // 0x123e7c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x123e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x123e80: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x123e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x123e84: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x123e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x123e88: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x123e88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x123e8c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x123e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123e90: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x123e90u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x123e94: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x123e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123e98: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123E98u;
    SET_GPR_U32(ctx, 31, 0x123EA0u);
    ctx->pc = 0x123E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123E98u;
            // 0x123e9c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EA0u; }
        if (ctx->pc != 0x123EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EA0u; }
        if (ctx->pc != 0x123EA0u) { return; }
    }
    ctx->pc = 0x123EA0u;
    // 0x123ea0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x123ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x123ea4: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x123ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x123ea8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x123ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x123eac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x123eacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x123eb0: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x123eb0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x123eb4: 0x46150544  c1          0x150544
    ctx->pc = 0x123eb4u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x123eb8: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x123EB8u;
    SET_GPR_U32(ctx, 31, 0x123EC0u);
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EC0u; }
        if (ctx->pc != 0x123EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123EC0u; }
        if (ctx->pc != 0x123EC0u) { return; }
    }
    ctx->pc = 0x123EC0u;
    // 0x123ec0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x123ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x123ec4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x123ec4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x123ec8: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123EC8u;
    SET_GPR_U32(ctx, 31, 0x123ED0u);
    ctx->pc = 0x123ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123EC8u;
            // 0x123ecc: 0x4615a502  mul.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123ED0u; }
        if (ctx->pc != 0x123ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123ED0u; }
        if (ctx->pc != 0x123ED0u) { return; }
    }
    ctx->pc = 0x123ED0u;
    // 0x123ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123ed4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x123ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x123ed8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x123edc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x123edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x123ee0: 0x4615b582  mul.s       $f22, $f22, $f21
    ctx->pc = 0x123ee0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x123ee4: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x123ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x123ee8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x123ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x123eec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x123eecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x123ef0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x123ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x123ef4: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x123ef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x123ef8: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x123ef8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x123efc: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x123efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x123f00: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x123f00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x123f04: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x123f04u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x123f08: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x123f08u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x123f0c: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x123f0cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x123f10: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x123f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123f14: 0xfba60080  sqc2        $vf6, 0x80($sp)
    ctx->pc = 0x123f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123f18: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x123f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x123f1c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x123f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x123f20: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x123f20u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x123f24: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x123f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x123f28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x123f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x123f2c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x123f2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x123f30: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x123f30u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x123f34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123f34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x123f38: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x123f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x123f3c: 0x4be1312a  vmul.xyzw   $vf4, $vf6, $vf1
    ctx->pc = 0x123f3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x123f40: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x123f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x123f44: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x123f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123f48: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x123f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123f4c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x123f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123f50: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x123f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123f54: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x123f54u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x123f58: 0x4a0003bf  vwaitq
    ctx->pc = 0x123f58u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x123f5c: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x123f5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x123f60: 0x4a0002ff  vnop
    ctx->pc = 0x123f60u;
    // NOP operation, no action needed for VU0
    // 0x123f64: 0x4a0002ff  vnop
    ctx->pc = 0x123f64u;
    // NOP operation, no action needed for VU0
    // 0x123f68: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x123f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123f6c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x123f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123f70: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x123f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x123f74: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x123f74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x123f78: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x123f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x123f7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x123f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x123f80: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x123f84: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x123f84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123f88: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x123f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123f8c: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x123f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123f90: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x123f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x123f94: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x123f94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x123f98: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x123f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123f9c: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x123f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x123fa0: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x123fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x123fa4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x123fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123fa8: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x123fa8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x123fac: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x123facu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123fb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fb4: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x123fb4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x123fb8: 0x70442cc8  ppacw       $a1, $v0, $a0
    ctx->pc = 0x123fb8u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x123fbc: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x123fbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x123fc0: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x123fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123fc4: 0x4be2116a  vmul.xyzw   $vf5, $vf2, $vf2
    ctx->pc = 0x123fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123fc8: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x123fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123fcc: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x123fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123fd0: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x123fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123fd4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x123fd4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x123fd8: 0x4a0003bf  vwaitq
    ctx->pc = 0x123fd8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x123fdc: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x123fdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123fe0: 0x4a0002ff  vnop
    ctx->pc = 0x123fe0u;
    // NOP operation, no action needed for VU0
    // 0x123fe4: 0x4a0002ff  vnop
    ctx->pc = 0x123fe4u;
    // NOP operation, no action needed for VU0
    // 0x123fe8: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x123fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123fec: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x123fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123ff0: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x123ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x123ff4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x123ff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x123ff8: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x123ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123ffc: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x123ffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124000: 0x4be22128  vadd.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x124000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124004: 0x4bc61afe  vopmula.xyz $ACC, $vf3, $vf6
    ctx->pc = 0x124004u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]);
    // 0x124008: 0x4bc330ee  vopmsub.xyz $vf3, $vf6, $vf3
    ctx->pc = 0x124008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12400c: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x12400cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124010: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x124010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x124014: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x124014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x124018: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x124018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12401c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x12401cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x124020: 0x4a0003bf  vwaitq
    ctx->pc = 0x124020u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x124024: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x124024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124028: 0x4a0002ff  vnop
    ctx->pc = 0x124028u;
    // NOP operation, no action needed for VU0
    // 0x12402c: 0x4a0002ff  vnop
    ctx->pc = 0x12402cu;
    // NOP operation, no action needed for VU0
    // 0x124030: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x124030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x124034: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x124034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x124038: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x124038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12403c: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x12403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x124040: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x124040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x124044: 0x4be32128  vadd.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x124044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x124048: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124048u;
    SET_GPR_U32(ctx, 31, 0x124050u);
    ctx->pc = 0x12404Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124048u;
            // 0x12404c: 0xfba40100  sqc2        $vf4, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124050u; }
        if (ctx->pc != 0x124050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124050u; }
        if (ctx->pc != 0x124050u) { return; }
    }
    ctx->pc = 0x124050u;
    // 0x124050: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x124050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x124054: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x124054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x124058: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x124058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x12405c: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x12405cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x124060: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x124060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124064: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124064u;
    SET_GPR_U32(ctx, 31, 0x12406Cu);
    ctx->pc = 0x124068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124064u;
            // 0x124068: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12406Cu; }
        if (ctx->pc != 0x12406Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12406Cu; }
        if (ctx->pc != 0x12406Cu) { return; }
    }
    ctx->pc = 0x12406Cu;
    // 0x12406c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12406cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x124070: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x124070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x124074: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x124074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x124078: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x124078u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x12407c: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x12407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124080: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x124080u;
    SET_GPR_U32(ctx, 31, 0x124088u);
    ctx->pc = 0x124084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124080u;
            // 0x124084: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124088u; }
        if (ctx->pc != 0x124088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124088u; }
        if (ctx->pc != 0x124088u) { return; }
    }
    ctx->pc = 0x124088u;
    // 0x124088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12408c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12408cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124090: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x124090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x124094: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x124094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x124098: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x124098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12409c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12409cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1240a0: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x1240a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1240a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1240a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240a8: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1240a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1240ac: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x1240acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1240b0: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1240b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1240b4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1240b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1240b8: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x1240b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1240bc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1240bcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1240c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1240c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1240c4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1240c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1240c8: 0x4be12128  vadd.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1240c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1240cc: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1240ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1240d0: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x1240d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1240d4: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1240d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1240d8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1240d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1240dc: 0x8c42bde8  lw          $v0, -0x4218($v0)
    ctx->pc = 0x1240dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x1240e0: 0xd84100c0  lqc2        $vf1, 0xC0($v0)
    ctx->pc = 0x1240e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1240e4: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x1240e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1240e8: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1240e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1240ec: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1240ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1240f0: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1240f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1240f4: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1240f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1240f8: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1240f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1240fc: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1240fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x124100: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x124100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x124104: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x124104u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124108: 0xd8410100  lqc2        $vf1, 0x100($v0)
    ctx->pc = 0x124108u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x12410c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x124110: 0x4be409bc  vmulax.xyzw $ACC, $vf1, $vf4x
    ctx->pc = 0x124110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x124114: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x124114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x124118: 0x4be408bd  vmadday.xyzw $ACC, $vf1, $vf4y
    ctx->pc = 0x124118u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12411c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x12411cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x124120: 0x4be408be  vmaddaz.xyzw $ACC, $vf1, $vf4z
    ctx->pc = 0x124120u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x124124: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x124124u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x124128: 0x4be4084b  vmaddw.xyzw $vf1, $vf1, $vf4w
    ctx->pc = 0x124128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12412c: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x12412cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x124130: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x124130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x124134: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x124134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x124138: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x124138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12413c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x12413cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x124140: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x124140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x124144: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x124144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x124148: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x124148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12414c: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x12414cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124150: 0x3e00008  jr          $ra
    ctx->pc = 0x124150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124150u;
            // 0x124154: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124158u;
}
