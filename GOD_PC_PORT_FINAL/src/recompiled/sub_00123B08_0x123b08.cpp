#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123B08
// Address: 0x123b08 - 0x123e18
void sub_00123B08_0x123b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123B08_0x123b08");
#endif

    ctx->pc = 0x123b08u;

    // 0x123b08: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x123b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x123b0c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x123b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x123b10: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x123b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x123b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b18: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x123b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x123b1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x123b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b20: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x123b20u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x123b24: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x123b24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x123b28: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x123b28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x123b2c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x123b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x123b30: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x123b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x123b34: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123B34u;
    SET_GPR_U32(ctx, 31, 0x123B3Cu);
    ctx->pc = 0x123B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123B34u;
            // 0x123b38: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B3Cu; }
        if (ctx->pc != 0x123B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B3Cu; }
        if (ctx->pc != 0x123B3Cu) { return; }
    }
    ctx->pc = 0x123B3Cu;
    // 0x123b3c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x123b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x123b40: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x123b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x123b44: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x123b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x123b48: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x123b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x123b4c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x123b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123b50: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x123b50u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x123b54: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x123b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123b58: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123B58u;
    SET_GPR_U32(ctx, 31, 0x123B60u);
    ctx->pc = 0x123B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123B58u;
            // 0x123b5c: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B60u; }
        if (ctx->pc != 0x123B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B60u; }
        if (ctx->pc != 0x123B60u) { return; }
    }
    ctx->pc = 0x123B60u;
    // 0x123b60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x123b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x123b64: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x123b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x123b68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x123b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123b70: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x123b70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x123b74: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x123b74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x123b78: 0xc060f88  jal         func_183E20
    ctx->pc = 0x123B78u;
    SET_GPR_U32(ctx, 31, 0x123B80u);
    ctx->pc = 0x123B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123B78u;
            // 0x123b7c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B80u; }
        if (ctx->pc != 0x123B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B80u; }
        if (ctx->pc != 0x123B80u) { return; }
    }
    ctx->pc = 0x123B80u;
    // 0x123b80: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123B80u;
    SET_GPR_U32(ctx, 31, 0x123B88u);
    ctx->pc = 0x123B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123B80u;
            // 0x123b84: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B88u; }
        if (ctx->pc != 0x123B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B88u; }
        if (ctx->pc != 0x123B88u) { return; }
    }
    ctx->pc = 0x123B88u;
    // 0x123b88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x123b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x123b8c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x123b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x123b90: 0xc060fb2  jal         func_183EC8
    ctx->pc = 0x123B90u;
    SET_GPR_U32(ctx, 31, 0x123B98u);
    ctx->pc = 0x123B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123B90u;
            // 0x123b94: 0x46176302  mul.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183EC8u;
    if (runtime->hasFunction(0x183EC8u)) {
        auto targetFn = runtime->lookupFunction(0x183EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B98u; }
        if (ctx->pc != 0x123B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183ec8_0x183f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B98u; }
        if (ctx->pc != 0x123B98u) { return; }
    }
    ctx->pc = 0x123B98u;
    // 0x123b98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x123b98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x123b9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x123b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x123ba0: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x123BA0u;
    SET_GPR_U32(ctx, 31, 0x123BA8u);
    ctx->pc = 0x123BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123BA0u;
            // 0x123ba4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123BA8u; }
        if (ctx->pc != 0x123BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123BA8u; }
        if (ctx->pc != 0x123BA8u) { return; }
    }
    ctx->pc = 0x123BA8u;
    // 0x123ba8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x123ba8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x123bac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x123bacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x123bb0: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x123BB0u;
    SET_GPR_U32(ctx, 31, 0x123BB8u);
    ctx->pc = 0x123BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123BB0u;
            // 0x123bb4: 0x27a40064  addiu       $a0, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123BB8u; }
        if (ctx->pc != 0x123BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123BB8u; }
        if (ctx->pc != 0x123BB8u) { return; }
    }
    ctx->pc = 0x123BB8u;
    // 0x123bb8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x123bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123bbc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x123bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x123bc0: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x123bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x123bc4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x123bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x123bc8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x123bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x123bcc: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x123bccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x123bd0: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x123bd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x123bd4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x123bd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x123bd8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x123bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x123bdc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x123bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x123be0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x123be0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x123be4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x123be4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x123be8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x123be8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x123bec: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x123becu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x123bf0: 0x48a43000  qmtc2.ni    $a0, $vf6
    ctx->pc = 0x123bf0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x123bf4: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x123bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123bf8: 0x4be630aa  vmul.xyzw   $vf2, $vf6, $vf6
    ctx->pc = 0x123bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123bfc: 0xfba60070  sqc2        $vf6, 0x70($sp)
    ctx->pc = 0x123bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123c00: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x123c00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123c04: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x123c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123c08: 0x4be5333c  vmove.xyzw  $vf5, $vf6
    ctx->pc = 0x123c08u;
    ctx->vu0_vf[5] = ctx->vu0_vf[6];
    // 0x123c0c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x123c0cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x123c10: 0x4a0003bf  vwaitq
    ctx->pc = 0x123c10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x123c14: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x123c14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123c18: 0x4a0002ff  vnop
    ctx->pc = 0x123c18u;
    // NOP operation, no action needed for VU0
    // 0x123c1c: 0x4a0002ff  vnop
    ctx->pc = 0x123c1cu;
    // NOP operation, no action needed for VU0
    // 0x123c20: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x123c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123c24: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x123c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123c28: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x123c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123c2c: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x123c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x123c30: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x123c30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x123c34: 0x4be12958  vmulx.xyzw  $vf5, $vf5, $vf1x
    ctx->pc = 0x123c34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123c38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x123c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x123c3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123c3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x123c40: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x123c40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123c44: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x123c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123c48: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x123c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123c4c: 0x8c660048  lw          $a2, 0x48($v1)
    ctx->pc = 0x123c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x123c50: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x123c50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x123c54: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x123c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123c58: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x123c58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123c5c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x123c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x123c60: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x123c60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123c64: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x123c64u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x123c68: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x123c68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123c6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c70: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x123c70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x123c74: 0x70442cc8  ppacw       $a1, $v0, $a0
    ctx->pc = 0x123c74u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x123c78: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x123c78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x123c7c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x123c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123c80: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x123c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x123c84: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x123c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123c88: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x123c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123c8c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x123c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123c90: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x123c90u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x123c94: 0x4a0003bf  vwaitq
    ctx->pc = 0x123c94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x123c98: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x123c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123c9c: 0x4a0002ff  vnop
    ctx->pc = 0x123c9cu;
    // NOP operation, no action needed for VU0
    // 0x123ca0: 0x4a0002ff  vnop
    ctx->pc = 0x123ca0u;
    // NOP operation, no action needed for VU0
    // 0x123ca4: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x123ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123ca8: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x123ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123cac: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x123cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x123cb0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x123cb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x123cb4: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x123cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x123cb8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x123cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123cbc: 0x4be22968  vadd.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x123cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123cc0: 0x4bc61afe  vopmula.xyz $ACC, $vf3, $vf6
    ctx->pc = 0x123cc0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[6]);
    // 0x123cc4: 0x4bc330ee  vopmsub.xyz $vf3, $vf6, $vf3
    ctx->pc = 0x123cc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123cc8: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x123cc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123ccc: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x123cccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x123cd0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x123cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123cd4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x123cd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123cd8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x123cd8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x123cdc: 0x4a0003bf  vwaitq
    ctx->pc = 0x123cdcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x123ce0: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x123ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123ce4: 0x4a0002ff  vnop
    ctx->pc = 0x123ce4u;
    // NOP operation, no action needed for VU0
    // 0x123ce8: 0x4a0002ff  vnop
    ctx->pc = 0x123ce8u;
    // NOP operation, no action needed for VU0
    // 0x123cec: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x123cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123cf0: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x123cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x123cf4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x123cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x123cf8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x123cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x123cfc: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x123cfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x123d00: 0x4be32968  vadd.xyzw   $vf5, $vf5, $vf3
    ctx->pc = 0x123d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123d04: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123D04u;
    SET_GPR_U32(ctx, 31, 0x123D0Cu);
    ctx->pc = 0x123D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123D04u;
            // 0x123d08: 0xfba500e0  sqc2        $vf5, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D0Cu; }
        if (ctx->pc != 0x123D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D0Cu; }
        if (ctx->pc != 0x123D0Cu) { return; }
    }
    ctx->pc = 0x123D0Cu;
    // 0x123d0c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x123d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x123d10: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x123d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x123d14: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x123d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123d18: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x123d18u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x123d1c: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x123d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123d20: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123D20u;
    SET_GPR_U32(ctx, 31, 0x123D28u);
    ctx->pc = 0x123D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123D20u;
            // 0x123d24: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D28u; }
        if (ctx->pc != 0x123D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D28u; }
        if (ctx->pc != 0x123D28u) { return; }
    }
    ctx->pc = 0x123D28u;
    // 0x123d28: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x123d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x123d2c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x123d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x123d30: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x123d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123d34: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x123d34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x123d38: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x123d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123d3c: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x123D3Cu;
    SET_GPR_U32(ctx, 31, 0x123D44u);
    ctx->pc = 0x123D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123D3Cu;
            // 0x123d40: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (runtime->hasFunction(0x28C0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28C0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D44u; }
        if (ctx->pc != 0x123D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28c0c8_0x28c0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D44u; }
        if (ctx->pc != 0x123D44u) { return; }
    }
    ctx->pc = 0x123D44u;
    // 0x123d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123d48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x123d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x123d4c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x123d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x123d50: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x123d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x123d54: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x123d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123d58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x123d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x123d5c: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x123d5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x123d60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d64: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x123d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x123d68: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x123d68u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x123d6c: 0xdba500e0  lqc2        $vf5, 0xE0($sp)
    ctx->pc = 0x123d6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x123d70: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x123d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x123d74: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x123d74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x123d78: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x123d78u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x123d7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123d7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x123d80: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x123d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x123d84: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x123d84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123d88: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x123d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x123d8c: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x123d8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123d90: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x123d90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123d94: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x123d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x123d98: 0x8c42bde8  lw          $v0, -0x4218($v0)
    ctx->pc = 0x123d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x123d9c: 0xd84100c0  lqc2        $vf1, 0xC0($v0)
    ctx->pc = 0x123d9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x123da0: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x123da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x123da4: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x123da4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123da8: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x123da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x123dac: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x123dacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123db0: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x123db0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x123db4: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x123db4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123db8: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x123db8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x123dbc: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x123dbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123dc0: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x123dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123dc4: 0xd8410100  lqc2        $vf1, 0x100($v0)
    ctx->pc = 0x123dc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x123dc8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x123dcc: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x123dccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x123dd0: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x123dd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x123dd4: 0x4be508bd  vmadday.xyzw $ACC, $vf1, $vf5y
    ctx->pc = 0x123dd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123dd8: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x123dd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x123ddc: 0x4be508be  vmaddaz.xyzw $ACC, $vf1, $vf5z
    ctx->pc = 0x123ddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x123de0: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x123de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x123de4: 0x4be5084b  vmaddw.xyzw $vf1, $vf1, $vf5w
    ctx->pc = 0x123de4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x123de8: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x123de8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123dec: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x123decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x123df0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x123df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x123df4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x123df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x123df8: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x123df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x123dfc: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x123dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x123e00: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x123e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x123e04: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x123e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x123e08: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x123e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x123e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x123E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E0Cu;
            // 0x123e10: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123E14u;
    // 0x123e14: 0x0  nop
    ctx->pc = 0x123e14u;
    // NOP
}
