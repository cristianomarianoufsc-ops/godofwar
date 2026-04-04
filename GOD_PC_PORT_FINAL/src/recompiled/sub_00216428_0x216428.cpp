#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00216428
// Address: 0x216428 - 0x216768
void sub_00216428_0x216428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216428_0x216428");
#endif

    ctx->pc = 0x216428u;

    // 0x216428: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x216428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x21642c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21642cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216430: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x216430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x216434: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x216434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x216438: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21643c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x21643cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x216440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x216440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216444: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x216444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x216448: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x216448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21644c: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x21644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x216450: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x216450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x216454: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x216454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x216458: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x216458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21645c: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x21645cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x216460: 0x8c460104  lw          $a2, 0x104($v0)
    ctx->pc = 0x216460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x216464: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x216464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x216468: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x216468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x21646c: 0x8cd40050  lw          $s4, 0x50($a2)
    ctx->pc = 0x21646cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x216470: 0x8cd50058  lw          $s5, 0x58($a2)
    ctx->pc = 0x216470u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x216474: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x216474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x216478: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x216478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x21647c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x216480: 0x84500004  lh          $s0, 0x4($v0)
    ctx->pc = 0x216480u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216484: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x216484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x216488: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x216488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x21648c: 0xc08cc58  jal         func_233160
    ctx->pc = 0x21648Cu;
    SET_GPR_U32(ctx, 31, 0x216494u);
    ctx->pc = 0x216490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21648Cu;
            // 0x216490: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233160u;
    if (runtime->hasFunction(0x233160u)) {
        auto targetFn = runtime->lookupFunction(0x233160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216494u; }
        if (ctx->pc != 0x216494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233160_0x233160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216494u; }
        if (ctx->pc != 0x216494u) { return; }
    }
    ctx->pc = 0x216494u;
    // 0x216494: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x216494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216498: 0x5202001e  beql        $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x216498u;
    {
        const bool branch_taken_0x216498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x216498) {
            ctx->pc = 0x21649Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216498u;
            // 0x21649c: 0x8e230384  lw          $v1, 0x384($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216514u;
            goto label_216514;
        }
    }
    ctx->pc = 0x2164A0u;
    // 0x2164a0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2164a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2164a4: 0x0  nop
    ctx->pc = 0x2164a4u;
    // NOP
label_2164a8:
    // 0x2164a8: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x2164a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2164ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2164acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2164b0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2164b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2164b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2164B4u;
    {
        const bool branch_taken_0x2164b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2164B4u;
            // 0x2164b8: 0x103180  sll         $a2, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164b4) {
            ctx->pc = 0x216500u;
            goto label_216500;
        }
    }
    ctx->pc = 0x2164BCu;
    // 0x2164bc: 0xdba200e0  lqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x2164bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2164c0: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x2164c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x2164c4: 0xd8c10030  lqc2        $vf1, 0x30($a2)
    ctx->pc = 0x2164c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2164c8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2164c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2164cc: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x2164ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2164d0: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x2164d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2164d4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x2164d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2164d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2164d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164dc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2164dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2164e0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2164e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2164e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2164e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2164e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2164e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2164ec: 0x46000004  c1          0x4
    ctx->pc = 0x2164ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2164f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2164f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2164f4: 0xc08cd08  jal         func_233420
    ctx->pc = 0x2164F4u;
    SET_GPR_U32(ctx, 31, 0x2164FCu);
    ctx->pc = 0x2164F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2164F4u;
            // 0x2164f8: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x233420u;
    if (runtime->hasFunction(0x233420u)) {
        auto targetFn = runtime->lookupFunction(0x233420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2164FCu; }
        if (ctx->pc != 0x2164FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233420_0x233420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2164FCu; }
        if (ctx->pc != 0x2164FCu) { return; }
    }
    ctx->pc = 0x2164FCu;
    // 0x2164fc: 0x0  nop
    ctx->pc = 0x2164fcu;
    // NOP
label_216500:
    // 0x216500: 0x86500006  lh          $s0, 0x6($s2)
    ctx->pc = 0x216500u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x216504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x216504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216508: 0x1602ffe7  bne         $s0, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x216508u;
    {
        const bool branch_taken_0x216508 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21650Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216508u;
            // 0x21650c: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216508) {
            ctx->pc = 0x2164A8u;
            runtime->cooperativeGuestYield();
            goto label_2164a8;
        }
    }
    ctx->pc = 0x216510u;
    // 0x216510: 0x8e230384  lw          $v1, 0x384($s1)
    ctx->pc = 0x216510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
label_216514:
    // 0x216514: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x216514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x216518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x216518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21651c: 0xae330054  sw          $s3, 0x54($s1)
    ctx->pc = 0x21651cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 19));
    // 0x216520: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x216520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216524: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x216524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x216528: 0x138180  sll         $s0, $s3, 6
    ctx->pc = 0x216528u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x21652c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x21652cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x216530: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x216530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x216534: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x216534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216538: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x216538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x21653c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x21653Cu;
    SET_GPR_U32(ctx, 31, 0x216544u);
    ctx->pc = 0x216540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21653Cu;
            // 0x216540: 0xe6210060  swc1        $f1, 0x60($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216544u; }
        if (ctx->pc != 0x216544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216544u; }
        if (ctx->pc != 0x216544u) { return; }
    }
    ctx->pc = 0x216544u;
    // 0x216544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216548: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x216548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21654c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x21654Cu;
    SET_GPR_U32(ctx, 31, 0x216554u);
    ctx->pc = 0x216550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21654Cu;
            // 0x216550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216554u; }
        if (ctx->pc != 0x216554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216554u; }
        if (ctx->pc != 0x216554u) { return; }
    }
    ctx->pc = 0x216554u;
    // 0x216554: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x216554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216558: 0x8e260048  lw          $a2, 0x48($s1)
    ctx->pc = 0x216558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x21655c: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x21655cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x216560: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x216560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x216564: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x216564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x216568: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x216568u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x21656c: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x21656cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x216570: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x216570u;
    {
        const bool branch_taken_0x216570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x216570) {
            ctx->pc = 0x216574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216570u;
            // 0x216574: 0x8ca2008c  lw          $v0, 0x8C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216588u;
            goto label_216588;
        }
    }
    ctx->pc = 0x216578u;
    // 0x216578: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x216578u;
    SET_GPR_U32(ctx, 31, 0x216580u);
    ctx->pc = 0x21657Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216578u;
            // 0x21657c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216580u; }
        if (ctx->pc != 0x216580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216580u; }
        if (ctx->pc != 0x216580u) { return; }
    }
    ctx->pc = 0x216580u;
    // 0x216580: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x216580u;
    {
        const bool branch_taken_0x216580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216580u;
            // 0x216584: 0xdba10050  lqc2        $vf1, 0x50($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216580) {
            ctx->pc = 0x2165B4u;
            goto label_2165b4;
        }
    }
    ctx->pc = 0x216588u;
label_216588:
    // 0x216588: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x216588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x21658c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216590: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x216590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216594: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x216594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x216598: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x216598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21659c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x21659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2165a0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x2165a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2165a4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2165a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2165a8: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x2165a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2165ac: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2165acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2165b0: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2165b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2165b4:
    // 0x2165b4: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x2165b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x2165b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2165b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2165bc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2165bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2165c0: 0x4be20918  vmulx.xyzw  $vf4, $vf1, $vf2x
    ctx->pc = 0x2165c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2165c4: 0x8e240384  lw          $a0, 0x384($s1)
    ctx->pc = 0x2165c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
    // 0x2165c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2165c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2165cc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2165CCu;
    {
        const bool branch_taken_0x2165cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2165CCu;
            // 0x2165d0: 0x8e270054  lw          $a3, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165cc) {
            ctx->pc = 0x216660u;
            goto label_216660;
        }
    }
    ctx->pc = 0x2165D4u;
    // 0x2165d4: 0x8c88001c  lw          $t0, 0x1C($a0)
    ctx->pc = 0x2165d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2165d8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2165d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2165dc: 0x71021b89  pcpyld      $v1, $t0, $v0
    ctx->pc = 0x2165dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x2165e0: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x2165e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2165e4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2165e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2165e8: 0x71041389  pcpyld      $v0, $t0, $a0
    ctx->pc = 0x2165e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 4)));
    // 0x2165ec: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x2165ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2165f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2165f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2165f4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2165f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2165f8: 0x4be408ec  vsub.xyzw   $vf3, $vf1, $vf4
    ctx->pc = 0x2165f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2165fc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2165fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x216600: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x216600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216604: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x216604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216608: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x216608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21660c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x21660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x216610: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x216610u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x216614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216618: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x216618u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21661c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21661cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x216620: 0x46000004  c1          0x4
    ctx->pc = 0x216620u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x216624: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x216624u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x216628: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x216628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x21662c: 0xe622005c  swc1        $f2, 0x5C($s1)
    ctx->pc = 0x21662cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x216630: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x216630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21663c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x21663cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x216640: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x216640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x216644: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x216644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x216648: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x216648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21664c: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x21664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216650: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x216650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216654: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x216654u;
    {
        const bool branch_taken_0x216654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216654u;
            // 0x216658: 0xfba300d0  sqc2        $vf3, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216654) {
            ctx->pc = 0x216688u;
            goto label_216688;
        }
    }
    ctx->pc = 0x21665Cu;
    // 0x21665c: 0x0  nop
    ctx->pc = 0x21665cu;
    // NOP
label_216660:
    // 0x216660: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x216660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x216664: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x216664u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x216668: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x216668u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21666c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x21666cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216670: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x216670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216674: 0x8e28005c  lw          $t0, 0x5C($s1)
    ctx->pc = 0x216674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x216678: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x216678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x21667c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x21667cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216680: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x216680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216684: 0x0  nop
    ctx->pc = 0x216684u;
    // NOP
label_216688:
    // 0x216688: 0x18e00013  blez        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x216688u;
    {
        const bool branch_taken_0x216688 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x21668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216688u;
            // 0x21668c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216688) {
            ctx->pc = 0x2166D8u;
            goto label_2166d8;
        }
    }
    ctx->pc = 0x216690u;
label_216690:
    // 0x216690: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x216690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x216694: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x216694u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21669c: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x21669cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2166a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2166a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2166a4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2166a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2166a8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2166a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2166ac: 0xdba100d0  lqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2166acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2166b0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2166b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2166b4: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x2166b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2166b8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2166b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2166bc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x2166bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2166c0: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x2166c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2166c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2166c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2166c8: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2166c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2166cc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2166CCu;
    {
        const bool branch_taken_0x2166cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2166D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2166CCu;
            // 0x2166d0: 0xf8610020  sqc2        $vf1, 0x20($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166cc) {
            ctx->pc = 0x216690u;
            runtime->cooperativeGuestYield();
            goto label_216690;
        }
    }
    ctx->pc = 0x2166D4u;
    // 0x2166d4: 0x0  nop
    ctx->pc = 0x2166d4u;
    // NOP
label_2166d8:
    // 0x2166d8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2166d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2166dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2166DCu;
    {
        const bool branch_taken_0x2166dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2166DCu;
            // 0x2166e0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166dc) {
            ctx->pc = 0x2166F0u;
            goto label_2166f0;
        }
    }
    ctx->pc = 0x2166E4u;
    // 0x2166e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2166E4u;
    {
        const bool branch_taken_0x2166e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2166E4u;
            // 0x2166e8: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166e4) {
            ctx->pc = 0x2166F4u;
            goto label_2166f4;
        }
    }
    ctx->pc = 0x2166ECu;
    // 0x2166ec: 0x0  nop
    ctx->pc = 0x2166ecu;
    // NOP
label_2166f0:
    // 0x2166f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2166f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2166f4:
    // 0x2166f4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2166f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2166f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2166F8u;
    {
        const bool branch_taken_0x2166f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2166F8u;
            // 0x2166fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166f8) {
            ctx->pc = 0x216738u;
            goto label_216738;
        }
    }
    ctx->pc = 0x216700u;
    // 0x216700: 0x8e270044  lw          $a3, 0x44($s1)
    ctx->pc = 0x216700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x216704: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x216704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_216708:
    // 0x216708: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x216708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21670c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x21670cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x216710: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x216710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x216714: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x216714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x216718: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x216718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21671c: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x21671cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x216720: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x216720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x216724: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x216724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x216728: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x216728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21672c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21672Cu;
    {
        const bool branch_taken_0x21672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21672Cu;
            // 0x216730: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21672c) {
            ctx->pc = 0x216708u;
            runtime->cooperativeGuestYield();
            goto label_216708;
        }
    }
    ctx->pc = 0x216734u;
    // 0x216734: 0x0  nop
    ctx->pc = 0x216734u;
    // NOP
label_216738:
    // 0x216738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x216738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21673c: 0xc091386  jal         func_244E18
    ctx->pc = 0x21673Cu;
    SET_GPR_U32(ctx, 31, 0x216744u);
    ctx->pc = 0x216740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21673Cu;
            // 0x216740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244E18u;
    if (runtime->hasFunction(0x244E18u)) {
        auto targetFn = runtime->lookupFunction(0x244E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216744u; }
        if (ctx->pc != 0x216744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244E18_0x244e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216744u; }
        if (ctx->pc != 0x216744u) { return; }
    }
    ctx->pc = 0x216744u;
    // 0x216744: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x216744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x216748: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x216748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x21674c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x21674cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x216750: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x216750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x216754: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x216754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x216758: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x216758u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21675c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x21675cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x216760: 0x3e00008  jr          $ra
    ctx->pc = 0x216760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216760u;
            // 0x216764: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2164A8u: goto label_2164a8;
            case 0x216500u: goto label_216500;
            case 0x216514u: goto label_216514;
            case 0x216588u: goto label_216588;
            case 0x2165B4u: goto label_2165b4;
            case 0x216660u: goto label_216660;
            case 0x216688u: goto label_216688;
            case 0x216690u: goto label_216690;
            case 0x2166D8u: goto label_2166d8;
            case 0x2166F0u: goto label_2166f0;
            case 0x2166F4u: goto label_2166f4;
            case 0x216708u: goto label_216708;
            case 0x216738u: goto label_216738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216768u;
}
