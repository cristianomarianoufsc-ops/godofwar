#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184210
// Address: 0x184210 - 0x184348
void sub_00184210_0x184210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184210_0x184210");
#endif

    ctx->pc = 0x184210u;

    // 0x184210: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x184210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x184214: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x184214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x184218: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x184218u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18421c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x18421cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x184220: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x184220u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x184224: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x184224u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x184228: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x184228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18422c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x18422cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x184230: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x184230u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x184234: 0x4be408aa  vmul.xyzw   $vf2, $vf1, $vf4
    ctx->pc = 0x184234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184238: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x184238u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18423c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x18423cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x184240: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x184240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x184244: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x184244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x184248: 0x4b0210c1  vaddy.x     $vf3, $vf2, $vf2y
    ctx->pc = 0x184248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18424c: 0x4a221082  vaddz.w     $vf2, $vf2, $vf2z
    ctx->pc = 0x18424cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184254: 0x4b021843  vaddw.x     $vf1, $vf3, $vf2w
    ctx->pc = 0x184254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184258: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x184258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18425c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x18425cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184260: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x184260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x184264: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x184264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184268: 0x0  nop
    ctx->pc = 0x184268u;
    // NOP
    // 0x18426c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18426Cu;
    {
        const bool branch_taken_0x18426c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18426Cu;
            // 0x184270: 0xfba20010  sqc2        $vf2, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18426c) {
            ctx->pc = 0x184288u;
            goto label_184288;
        }
    }
    ctx->pc = 0x184274u;
    // 0x184274: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x184274u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184278: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x184278u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18427c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x18427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184280: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x184280u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x184284: 0x0  nop
    ctx->pc = 0x184284u;
    // NOP
label_184288:
    // 0x184288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18428c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x18428cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x184290: 0x3c0133d6  lui         $at, 0x33D6
    ctx->pc = 0x184290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13270 << 16));
    // 0x184294: 0x3421bf95  ori         $at, $at, 0xBF95
    ctx->pc = 0x184294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49045);
    // 0x184298: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x184298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18429c: 0x460cb001  sub.s       $f0, $f22, $f12
    ctx->pc = 0x18429cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    // 0x1842a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1842a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1842a4: 0x0  nop
    ctx->pc = 0x1842a4u;
    // NOP
    // 0x1842a8: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x1842A8u;
    {
        const bool branch_taken_0x1842a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1842a8) {
            ctx->pc = 0x1842ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1842A8u;
            // 0x1842ac: 0x4617b541  sub.s       $f21, $f22, $f23 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1842FCu;
            goto label_1842fc;
        }
    }
    ctx->pc = 0x1842B0u;
    // 0x1842b0: 0xc060f88  jal         func_183E20
    ctx->pc = 0x1842B0u;
    SET_GPR_U32(ctx, 31, 0x1842B8u);
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842B8u; }
        if (ctx->pc != 0x1842B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842B8u; }
        if (ctx->pc != 0x1842B8u) { return; }
    }
    ctx->pc = 0x1842B8u;
    // 0x1842b8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1842b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1842bc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1842bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1842c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1842c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1842c4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1842c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1842c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1842c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1842cc: 0x4614c502  mul.s       $f20, $f24, $f20
    ctx->pc = 0x1842ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x1842d0: 0xc060e80  jal         func_183A00
    ctx->pc = 0x1842D0u;
    SET_GPR_U32(ctx, 31, 0x1842D8u);
    ctx->pc = 0x1842D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1842D0u;
            // 0x1842d4: 0x4614ad00  add.s       $f20, $f21, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842D8u; }
        if (ctx->pc != 0x1842D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842D8u; }
        if (ctx->pc != 0x1842D8u) { return; }
    }
    ctx->pc = 0x1842D8u;
    // 0x1842d8: 0x4600b583  div.s       $f22, $f22, $f0
    ctx->pc = 0x1842d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[0];
    // 0x1842dc: 0x4614bd02  mul.s       $f20, $f23, $f20
    ctx->pc = 0x1842dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x1842e0: 0xc060e80  jal         func_183A00
    ctx->pc = 0x1842E0u;
    SET_GPR_U32(ctx, 31, 0x1842E8u);
    ctx->pc = 0x1842E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1842E0u;
            // 0x1842e4: 0x4614ab01  sub.s       $f12, $f21, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842E8u; }
        if (ctx->pc != 0x1842E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842E8u; }
        if (ctx->pc != 0x1842E8u) { return; }
    }
    ctx->pc = 0x1842E8u;
    // 0x1842e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1842e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1842ec: 0xc060e80  jal         func_183A00
    ctx->pc = 0x1842ECu;
    SET_GPR_U32(ctx, 31, 0x1842F4u);
    ctx->pc = 0x1842F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1842ECu;
            // 0x1842f0: 0x46160542  mul.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842F4u; }
        if (ctx->pc != 0x1842F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1842F4u; }
        if (ctx->pc != 0x1842F4u) { return; }
    }
    ctx->pc = 0x1842F4u;
    // 0x1842f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1842F4u;
    {
        const bool branch_taken_0x1842f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1842F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1842F4u;
            // 0x1842f8: 0x46160302  mul.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842f4) {
            ctx->pc = 0x184300u;
            goto label_184300;
        }
    }
    ctx->pc = 0x1842FCu;
label_1842fc:
    // 0x1842fc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1842fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_184300:
    // 0x184300: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x184300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184304: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x184304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184308: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x184308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18430c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x18430cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184310: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x184310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184314: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x184314u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184318: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x184318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18431c: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x18431cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184320: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x184320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x184324: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x184324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184328: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x184328u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18432c: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x18432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x184330: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x184330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x184334: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x184334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x184338: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x184338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18433c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x18433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x184340: 0x3e00008  jr          $ra
    ctx->pc = 0x184340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184340u;
            // 0x184344: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184288u: goto label_184288;
            case 0x1842FCu: goto label_1842fc;
            case 0x184300u: goto label_184300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184348u;
}
