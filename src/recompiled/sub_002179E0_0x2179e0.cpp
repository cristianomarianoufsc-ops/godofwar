#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002179E0
// Address: 0x2179e0 - 0x217bd8
void sub_002179E0_0x2179e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002179E0_0x2179e0");
#endif

    ctx->pc = 0x2179e0u;

    // 0x2179e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2179e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2179e4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2179e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2179e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2179e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2179ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2179ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2179f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2179f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2179f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2179f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179f8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2179f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2179fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2179fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a00: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x217a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x217a04: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x217a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x217a08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x217a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x217a0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x217a10: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x217a10u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x217a14: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x217a14u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x217a18: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x217a18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x217a1c: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x217a1cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x217a20: 0xc6580060  lwc1        $f24, 0x60($s2)
    ctx->pc = 0x217a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x217a24: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x217a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x217a28: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x217a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x217a2c: 0x4600c503  div.s       $f20, $f24, $f0
    ctx->pc = 0x217a2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[24] * 0.0f); } else ctx->f[20] = ctx->f[24] / ctx->f[0];
    // 0x217a30: 0xc085e52  jal         func_217948
    ctx->pc = 0x217A30u;
    SET_GPR_U32(ctx, 31, 0x217A38u);
    ctx->pc = 0x217A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217A30u;
            // 0x217a34: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A38u; }
        if (ctx->pc != 0x217A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A38u; }
        if (ctx->pc != 0x217A38u) { return; }
    }
    ctx->pc = 0x217A38u;
    // 0x217a38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a40: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x217a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217a44: 0xc085e52  jal         func_217948
    ctx->pc = 0x217A44u;
    SET_GPR_U32(ctx, 31, 0x217A4Cu);
    ctx->pc = 0x217A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217A44u;
            // 0x217a48: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A4Cu; }
        if (ctx->pc != 0x217A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A4Cu; }
        if (ctx->pc != 0x217A4Cu) { return; }
    }
    ctx->pc = 0x217A4Cu;
    // 0x217a4c: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x217a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a50: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x217a50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a54: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x217a54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217a58: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x217a58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217a5c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x217a5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217a60: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x217a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217a64: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x217a64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217a68: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x217a68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217a6c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x217a6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x217a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217a74: 0x46010044  c1          0x10044
    ctx->pc = 0x217a74u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x217a78: 0x4be120ec  vsub.xyzw   $vf3, $vf4, $vf1
    ctx->pc = 0x217a78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217a7c: 0x4be318ea  vmul.xyzw   $vf3, $vf3, $vf3
    ctx->pc = 0x217a7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217a80: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x217a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217a84: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x217a84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217a88: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x217a88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217a8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x217a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217a90: 0x46000004  c1          0x4
    ctx->pc = 0x217a90u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x217a94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x217a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217a98: 0x0  nop
    ctx->pc = 0x217a98u;
    // NOP
    // 0x217a9c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x217A9Cu;
    {
        const bool branch_taken_0x217a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217A9Cu;
            // 0x217aa0: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a9c) {
            ctx->pc = 0x217AB0u;
            goto label_217ab0;
        }
    }
    ctx->pc = 0x217AA4u;
    // 0x217aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x217AA4u;
    {
        const bool branch_taken_0x217aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217AA4u;
            // 0x217aa8: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217aa4) {
            ctx->pc = 0x217AB8u;
            goto label_217ab8;
        }
    }
    ctx->pc = 0x217AACu;
    // 0x217aac: 0x0  nop
    ctx->pc = 0x217aacu;
    // NOP
label_217ab0:
    // 0x217ab0: 0x4600a547  neg.s       $f21, $f20
    ctx->pc = 0x217ab0u;
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
    // 0x217ab4: 0x4600c586  mov.s       $f22, $f24
    ctx->pc = 0x217ab4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[24]);
label_217ab8:
    // 0x217ab8: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x217ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x217abc: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x217abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_217ac0:
    // 0x217ac0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x217ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x217ac4: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x217ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
    // 0x217ac8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x217ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x217acc: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x217ACCu;
    {
        const bool branch_taken_0x217acc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x217AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217ACCu;
            // 0x217ad0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217acc) {
            ctx->pc = 0x217B2Cu;
            goto label_217b2c;
        }
    }
    ctx->pc = 0x217AD4u;
    // 0x217ad4: 0x0  nop
    ctx->pc = 0x217ad4u;
    // NOP
label_217ad8:
    // 0x217ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217adc: 0xc085e52  jal         func_217948
    ctx->pc = 0x217ADCu;
    SET_GPR_U32(ctx, 31, 0x217AE4u);
    ctx->pc = 0x217AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217ADCu;
            // 0x217ae0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x217948u;
    if (runtime->hasFunction(0x217948u)) {
        auto targetFn = runtime->lookupFunction(0x217948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217AE4u; }
        if (ctx->pc != 0x217AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217948_0x2179e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217AE4u; }
        if (ctx->pc != 0x217AE4u) { return; }
    }
    ctx->pc = 0x217AE4u;
    // 0x217ae4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217ae8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x217ae8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217aec: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x217aecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217af0: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x217af0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217af4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x217af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217af8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x217af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217afc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x217afcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217b00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x217b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217b04: 0x46000004  c1          0x4
    ctx->pc = 0x217b04u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x217b08: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x217b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217b0c: 0x0  nop
    ctx->pc = 0x217b0cu;
    // NOP
    // 0x217b10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x217B10u;
    {
        const bool branch_taken_0x217b10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217B10u;
            // 0x217b14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b10) {
            ctx->pc = 0x217B20u;
            goto label_217b20;
        }
    }
    ctx->pc = 0x217B18u;
    // 0x217b18: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x217b18u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x217b1c: 0x4600b646  mov.s       $f25, $f22
    ctx->pc = 0x217b1cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[22]);
label_217b20:
    // 0x217b20: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x217b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x217b24: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x217B24u;
    {
        const bool branch_taken_0x217b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217B24u;
            // 0x217b28: 0x4615b580  add.s       $f22, $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b24) {
            ctx->pc = 0x217AD8u;
            runtime->cooperativeGuestYield();
            goto label_217ad8;
        }
    }
    ctx->pc = 0x217B2Cu;
label_217b2c:
    // 0x217b2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x217b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x217b30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217b34: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x217b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217b38: 0x0  nop
    ctx->pc = 0x217b38u;
    // NOP
    // 0x217b3c: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x217B3Cu;
    {
        const bool branch_taken_0x217b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x217b3c) {
            ctx->pc = 0x217B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217B3Cu;
            // 0x217b40: 0xe6790000  swc1        $f25, 0x0($s3) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x217BA0u;
            goto label_217ba0;
        }
    }
    ctx->pc = 0x217B44u;
    // 0x217b44: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x217b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x217b48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217b4c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x217b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217b50: 0x0  nop
    ctx->pc = 0x217b50u;
    // NOP
    // 0x217b54: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x217B54u;
    {
        const bool branch_taken_0x217b54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217b54) {
            ctx->pc = 0x217B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217B54u;
            // 0x217b58: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x217B70u;
            goto label_217b70;
        }
    }
    ctx->pc = 0x217B5Cu;
    // 0x217b5c: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x217b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217b60: 0x0  nop
    ctx->pc = 0x217b60u;
    // NOP
    // 0x217b64: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x217B64u;
    {
        const bool branch_taken_0x217b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x217b64) {
            ctx->pc = 0x217B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217B64u;
            // 0x217b68: 0xe6790000  swc1        $f25, 0x0($s3) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x217BA0u;
            goto label_217ba0;
        }
    }
    ctx->pc = 0x217B6Cu;
    // 0x217b6c: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x217b6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_217b70:
    // 0x217b70: 0x4614c081  sub.s       $f2, $f24, $f20
    ctx->pc = 0x217b70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
    // 0x217b74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x217b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217b78: 0x4600c801  sub.s       $f0, $f25, $f0
    ctx->pc = 0x217b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
    // 0x217b7c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x217b7cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x217b80: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x217b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x217b84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217b88: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x217b88u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x217b8c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x217b8cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x217b90: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x217b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x217b94: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x217b94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x217b98: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x217B98u;
    {
        const bool branch_taken_0x217b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217B98u;
            // 0x217b9c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b98) {
            ctx->pc = 0x217AC0u;
            runtime->cooperativeGuestYield();
            goto label_217ac0;
        }
    }
    ctx->pc = 0x217BA0u;
label_217ba0:
    // 0x217ba0: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x217ba0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
    // 0x217ba4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x217ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x217ba8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x217ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217bac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x217bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217bb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x217bb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217bb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x217bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217bb8: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x217bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x217bbc: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x217bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x217bc0: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x217bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x217bc4: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x217bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x217bc8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x217bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x217bcc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x217bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x217bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x217BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217BD0u;
            // 0x217bd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB8u: goto label_217ab8;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AD8u: goto label_217ad8;
            case 0x217B20u: goto label_217b20;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B70u: goto label_217b70;
            case 0x217BA0u: goto label_217ba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217BD8u;
}
