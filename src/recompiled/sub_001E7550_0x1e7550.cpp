#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7550
// Address: 0x1e7550 - 0x1e7660
void sub_001E7550_0x1e7550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7550_0x1e7550");
#endif

    ctx->pc = 0x1e7550u;

    // 0x1e7550: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e7550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e7554: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1e7554u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e7558: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1e7558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e755c: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1e755cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e7560: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x1e7560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x1e7564: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1e7564u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e7568: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x1e7568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x1e756c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e7570: 0x4be3106a  vmul.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x1e7570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7574: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e7574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e7578: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e7578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e757c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e757cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e7580: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e7580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7584: 0xc060f88  jal         func_183E20
    ctx->pc = 0x1E7584u;
    SET_GPR_U32(ctx, 31, 0x1E758Cu);
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E758Cu; }
        if (ctx->pc != 0x1E758Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E758Cu; }
        if (ctx->pc != 0x1E758Cu) { return; }
    }
    ctx->pc = 0x1E758Cu;
    // 0x1e758c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e758cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7590: 0x0  nop
    ctx->pc = 0x1e7590u;
    // NOP
    // 0x1e7594: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7594u;
    {
        const bool branch_taken_0x1e7594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7594u;
            // 0x1e7598: 0xdba10060  lqc2        $vf1, 0x60($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7594) {
            ctx->pc = 0x1E75A8u;
            goto label_1e75a8;
        }
    }
    ctx->pc = 0x1E759Cu;
    // 0x1e759c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E759Cu;
    {
        const bool branch_taken_0x1e759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E75A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E759Cu;
            // 0x1e75a0: 0x7ba20070  lq          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e759c) {
            ctx->pc = 0x1E764Cu;
            goto label_1e764c;
        }
    }
    ctx->pc = 0x1E75A4u;
    // 0x1e75a4: 0x0  nop
    ctx->pc = 0x1e75a4u;
    // NOP
label_1e75a8:
    // 0x1e75a8: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1e75a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1e75ac: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1e75acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e75b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e75b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1e75b4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1e75b8: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x1e75b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e75bc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1e75bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e75c0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e75c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e75c4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e75c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e75c8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e75c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e75cc: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e75ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e75d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e75d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e75d4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e75d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e75d8: 0x4a0002ff  vnop
    ctx->pc = 0x1e75d8u;
    // NOP operation, no action needed for VU0
    // 0x1e75dc: 0x4a0002ff  vnop
    ctx->pc = 0x1e75dcu;
    // NOP operation, no action needed for VU0
    // 0x1e75e0: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1e75e0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e75e4: 0xc0611d2  jal         func_184748
    ctx->pc = 0x1E75E4u;
    SET_GPR_U32(ctx, 31, 0x1E75ECu);
    ctx->pc = 0x1E75E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E75E4u;
            // 0x1e75e8: 0xfba20040  sqc2        $vf2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184748u;
    if (runtime->hasFunction(0x184748u)) {
        auto targetFn = runtime->lookupFunction(0x184748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75ECu; }
        if (ctx->pc != 0x1E75ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184748_0x184748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75ECu; }
        if (ctx->pc != 0x1E75ECu) { return; }
    }
    ctx->pc = 0x1E75ECu;
    // 0x1e75ec: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1e75ecu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1e75f0: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x1e75f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e75f4: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x1e75f4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e75f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e75f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e75fc: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x1e75fcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7600: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1E7600u;
    SET_GPR_U32(ctx, 31, 0x1E7608u);
    ctx->pc = 0x1E7604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7600u;
            // 0x1e7604: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7608u; }
        if (ctx->pc != 0x1E7608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7608u; }
        if (ctx->pc != 0x1E7608u) { return; }
    }
    ctx->pc = 0x1E7608u;
    // 0x1e7608: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e7608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e760c: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1e760cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7610: 0x4be3095b  vmulw.xyzw  $vf5, $vf1, $vf3w
    ctx->pc = 0x1e7610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e7614: 0x4bc30afe  vopmula.xyz $ACC, $vf1, $vf3
    ctx->pc = 0x1e7614u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]);
    // 0x1e7618: 0x4be1189b  vmulw.xyzw  $vf2, $vf3, $vf1w
    ctx->pc = 0x1e7618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e761c: 0x4be309aa  vmul.xyzw   $vf6, $vf1, $vf3
    ctx->pc = 0x1e761cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1e7620: 0x4bc1192e  vopmsub.xyz $vf4, $vf3, $vf1
    ctx->pc = 0x1e7620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e7624: 0x4be510a8  vadd.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x1e7624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e7628: 0x4b0630c1  vaddy.x     $vf3, $vf6, $vf6y
    ctx->pc = 0x1e7628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e762c: 0xdba50070  lqc2        $vf5, 0x70($sp)
    ctx->pc = 0x1e762cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7630: 0x4b0618c2  vaddz.x     $vf3, $vf3, $vf6z
    ctx->pc = 0x1e7630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e7634: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x1e7634u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e7638: 0x4a25085b  vmulw.w     $vf1, $vf1, $vf5w
    ctx->pc = 0x1e7638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e763c: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1e763cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e7640: 0x4a230844  vsubx.w     $vf1, $vf1, $vf3x
    ctx->pc = 0x1e7640u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e7644: 0x4a220b3c  vmove.w     $vf2, $vf1
    ctx->pc = 0x1e7644u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x1e7648: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1e7648u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1e764c:
    // 0x1e764c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e764cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7650: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1e7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e7654: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7654u;
            // 0x1e7658: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E75A8u: goto label_1e75a8;
            case 0x1E764Cu: goto label_1e764c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E765Cu;
    // 0x1e765c: 0x0  nop
    ctx->pc = 0x1e765cu;
    // NOP
}
