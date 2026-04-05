#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5730
// Address: 0x1f5730 - 0x1f5858
void sub_001F5730_0x1f5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5730_0x1f5730");
#endif

    ctx->pc = 0x1f5730u;

    // 0x1f5730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f5734: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f5734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f5738: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f5738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f573c: 0x24423440  addiu       $v0, $v0, 0x3440
    ctx->pc = 0x1f573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13376));
    // 0x1f5740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5744: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1f5744u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f5748: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x1f5748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1f574c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1f574cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f5750: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f5750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5754: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1f5754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f5758: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1f5758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1f575c: 0x24423430  addiu       $v0, $v0, 0x3430
    ctx->pc = 0x1f575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13360));
    // 0x1f5760: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1f5760u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5764: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1f5764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f5768: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1f5768u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1f576c: 0x26023370  addiu       $v0, $s0, 0x3370
    ctx->pc = 0x1f576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13168));
    // 0x1f5770: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f5770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5774: 0x4a810081  vaddy.y     $vf2, $vf0, $vf1y
    ctx->pc = 0x1f5774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f5778: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f5778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f577c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1f577cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f5780: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1f5780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f5784: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1f5784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f5788: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f5788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f578c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f5790: 0xc461e36c  lwc1        $f1, -0x1C94($v1)
    ctx->pc = 0x1f5790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5794: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1f5794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f5798: 0xc443e35c  lwc1        $f3, -0x1CA4($v0)
    ctx->pc = 0x1f5798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f579c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1f579cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f57a0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f57a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f57a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f57a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f57a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f57a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f57ac: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x1f57acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1f57b0: 0x46000404  c1          0x404
    ctx->pc = 0x1f57b0u;
    ctx->f[16] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f57b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f57b8: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x1f57b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1f57bc: 0xc44fe368  lwc1        $f15, -0x1C98($v0)
    ctx->pc = 0x1f57bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1f57c0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1f57c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1f57c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f57c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f57c8: 0x46028034  c.lt.s      $f16, $f2
    ctx->pc = 0x1f57c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f57cc: 0x0  nop
    ctx->pc = 0x1f57ccu;
    // NOP
    // 0x1f57d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F57D0u;
    {
        const bool branch_taken_0x1f57d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F57D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F57D0u;
            // 0x1f57d4: 0x460f0b82  mul.s       $f14, $f1, $f15 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57d0) {
            ctx->pc = 0x1F57E8u;
            goto label_1f57e8;
        }
    }
    ctx->pc = 0x1F57D8u;
    // 0x1f57d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f57d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f57dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F57DCu;
    {
        const bool branch_taken_0x1f57dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F57E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F57DCu;
            // 0x1f57e0: 0x26023370  addiu       $v0, $s0, 0x3370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57dc) {
            ctx->pc = 0x1F5824u;
            goto label_1f5824;
        }
    }
    ctx->pc = 0x1F57E4u;
    // 0x1f57e4: 0x0  nop
    ctx->pc = 0x1f57e4u;
    // NOP
label_1f57e8:
    // 0x1f57e8: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x1f57e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f57ec: 0x0  nop
    ctx->pc = 0x1f57ecu;
    // NOP
    // 0x1f57f0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1F57F0u;
    {
        const bool branch_taken_0x1f57f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f57f0) {
            ctx->pc = 0x1F57F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F57F0u;
            // 0x1f57f4: 0x46141802  mul.s       $f0, $f3, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5818u;
            goto label_1f5818;
        }
    }
    ctx->pc = 0x1F57F8u;
    // 0x1f57f8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f57f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f57fc: 0x46028401  sub.s       $f16, $f16, $f2
    ctx->pc = 0x1f57fcu;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[2]);
    // 0x1f5800: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f5800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5804: 0x46008403  div.s       $f16, $f16, $f0
    ctx->pc = 0x1f5804u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[16] * 0.0f); } else ctx->f[16] = ctx->f[16] / ctx->f[0];
    // 0x1f5808: 0xc07d190  jal         func_1F4640
    ctx->pc = 0x1F5808u;
    SET_GPR_U32(ctx, 31, 0x1F5810u);
    ctx->pc = 0x1F580Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5808u;
            // 0x1f580c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4640u;
    if (runtime->hasFunction(0x1F4640u)) {
        auto targetFn = runtime->lookupFunction(0x1F4640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5810u; }
        if (ctx->pc != 0x1F5810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f4640_0x1f46a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5810u; }
        if (ctx->pc != 0x1F5810u) { return; }
    }
    ctx->pc = 0x1F5810u;
    // 0x1f5810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5810u;
    {
        const bool branch_taken_0x1f5810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5810u;
            // 0x1f5814: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5810) {
            ctx->pc = 0x1F5820u;
            goto label_1f5820;
        }
    }
    ctx->pc = 0x1F5818u;
label_1f5818:
    // 0x1f5818: 0x46008001  sub.s       $f0, $f16, $f0
    ctx->pc = 0x1f5818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
    // 0x1f581c: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x1f581cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
label_1f5820:
    // 0x1f5820: 0x26023370  addiu       $v0, $s0, 0x3370
    ctx->pc = 0x1f5820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13168));
label_1f5824:
    // 0x1f5824: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1f5824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1f5828: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1f5828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f582c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f582cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5830: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1f5830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f5834: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f5834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5838: 0x4a810081  vaddy.y     $vf2, $vf0, $vf1y
    ctx->pc = 0x1f5838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f583c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f583cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5840: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5844: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1f5844u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f5848: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1f5848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f584c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F584Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F584Cu;
            // 0x1f5850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F57E8u: goto label_1f57e8;
            case 0x1F5818u: goto label_1f5818;
            case 0x1F5820u: goto label_1f5820;
            case 0x1F5824u: goto label_1f5824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5854u;
    // 0x1f5854: 0x0  nop
    ctx->pc = 0x1f5854u;
    // NOP
}
