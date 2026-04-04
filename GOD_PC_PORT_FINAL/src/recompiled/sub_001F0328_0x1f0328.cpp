#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0328
// Address: 0x1f0328 - 0x1f0448
void sub_001F0328_0x1f0328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0328_0x1f0328");
#endif

    ctx->pc = 0x1f0328u;

    // 0x1f0328: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f0328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f032c: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1f032cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1f0330: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1f0330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f0334: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x1f0334u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f0338: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1f0338u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f033c: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1f033cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1f0340: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1f0340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f0344: 0x4614a342  mul.s       $f13, $f20, $f20
    ctx->pc = 0x1f0344u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1f0348: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x1f0348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1f034c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f0350: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f0350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f0354: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1f0354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0358: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1f0358u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f035c: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1f035cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f0360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f0360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0364: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1f0364u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1f0368: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x1f0368u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f036c: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1f036cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f0370: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f0370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0378: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1f0378u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f037c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f0380: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f0380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f0384: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f0384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f0388: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1F0388u;
    SET_GPR_U32(ctx, 31, 0x1F0390u);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0390u; }
        if (ctx->pc != 0x1F0390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0390u; }
        if (ctx->pc != 0x1F0390u) { return; }
    }
    ctx->pc = 0x1F0390u;
    // 0x1f0390: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0394: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f0394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f0398: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f0398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f039c: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f039cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f03a0: 0x46170042  mul.s       $f1, $f0, $f23
    ctx->pc = 0x1f03a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1f03a4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1f03a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1f03a8: 0xc440e2b4  lwc1        $f0, -0x1D4C($v0)
    ctx->pc = 0x1f03a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f03ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f03acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f03b0: 0x0  nop
    ctx->pc = 0x1f03b0u;
    // NOP
    // 0x1f03b4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F03B4u;
    {
        const bool branch_taken_0x1f03b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F03B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03B4u;
            // 0x1f03b8: 0xdba30000  lqc2        $vf3, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03b4) {
            ctx->pc = 0x1F03D4u;
            goto label_1f03d4;
        }
    }
    ctx->pc = 0x1F03BCu;
    // 0x1f03bc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1f03bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f03c0: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1f03c0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1f03c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f03c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f03c8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f03c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f03cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F03CCu;
    {
        const bool branch_taken_0x1f03cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f03cc) {
            ctx->pc = 0x1F040Cu;
            goto label_1f040c;
        }
    }
    ctx->pc = 0x1F03D4u;
label_1f03d4:
    // 0x1f03d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f03d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f03d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f03d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f03dc: 0x0  nop
    ctx->pc = 0x1f03dcu;
    // NOP
    // 0x1f03e0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1F03E0u;
    {
        const bool branch_taken_0x1f03e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f03e0) {
            ctx->pc = 0x1F03E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03E0u;
            // 0x1f03e4: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0408u;
            goto label_1f0408;
        }
    }
    ctx->pc = 0x1F03E8u;
    // 0x1f03e8: 0x4b030044  vsubx.x     $vf1, $vf0, $vf3x
    ctx->pc = 0x1f03e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f03ec: 0x4b030086  vsubz.x     $vf2, $vf0, $vf3z
    ctx->pc = 0x1f03ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f03f0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f03f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f03f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f03f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f03f8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1f03f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f03fc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1f03fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f0400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0400u;
    {
        const bool branch_taken_0x1f0400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0400) {
            ctx->pc = 0x1F040Cu;
            goto label_1f040c;
        }
    }
    ctx->pc = 0x1F0408u;
label_1f0408:
    // 0x1f0408: 0x4600ab47  neg.s       $f13, $f21
    ctx->pc = 0x1f0408u;
    ctx->f[13] = FPU_NEG_S(ctx->f[21]);
label_1f040c:
    // 0x1f040c: 0xc060efc  jal         func_183BF0
    ctx->pc = 0x1F040Cu;
    SET_GPR_U32(ctx, 31, 0x1F0414u);
    ctx->pc = 0x183BF0u;
    if (runtime->hasFunction(0x183BF0u)) {
        auto targetFn = runtime->lookupFunction(0x183BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0414u; }
        if (ctx->pc != 0x1F0414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183BF0_0x183bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0414u; }
        if (ctx->pc != 0x1F0414u) { return; }
    }
    ctx->pc = 0x1F0414u;
    // 0x1f0414: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1f0414u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x1f0418: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1f0418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1f041c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f041cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f0420: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f0420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0424: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f0424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f042c: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x1f042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f0430: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1f0430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f0434: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1f0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0438: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1f0438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f043c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F043Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F043Cu;
            // 0x1f0440: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F03D4u: goto label_1f03d4;
            case 0x1F0408u: goto label_1f0408;
            case 0x1F040Cu: goto label_1f040c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0444u;
    // 0x1f0444: 0x0  nop
    ctx->pc = 0x1f0444u;
    // NOP
}
