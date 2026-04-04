#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D8B0
// Address: 0x20d8b0 - 0x20db88
void sub_0020D8B0_0x20d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D8B0_0x20d8b0");
#endif

    ctx->pc = 0x20d8b0u;

    // 0x20d8b0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x20d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x20d8b4: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x20d8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x20d8b8: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x20d8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x20d8bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d8c0: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x20d8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x20d8c4: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x20d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
    // 0x20d8c8: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x20d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
    // 0x20d8cc: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x20d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
    // 0x20d8d0: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x20d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x20d8d4: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x20d8d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x20d8d8: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x20d8d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x20d8dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20d8e0: 0x8c530104  lw          $s3, 0x104($v0)
    ctx->pc = 0x20d8e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x20d8e4: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x20d8e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x20d8e8: 0xdea5bdf8  ld          $a1, -0x4208($s5)
    ctx->pc = 0x20d8e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x20d8ec: 0xde620040  ld          $v0, 0x40($s3)
    ctx->pc = 0x20d8ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x20d8f0: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D8F0u;
    {
        const bool branch_taken_0x20d8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x20D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8F0u;
            // 0x20d8f4: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8f0) {
            ctx->pc = 0x20D900u;
            goto label_20d900;
        }
    }
    ctx->pc = 0x20D8F8u;
    // 0x20d8f8: 0xc04da64  jal         func_136990
    ctx->pc = 0x20D8F8u;
    SET_GPR_U32(ctx, 31, 0x20D900u);
    ctx->pc = 0x20D8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8F8u;
            // 0x20d8fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D900u; }
        if (ctx->pc != 0x20D900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D900u; }
        if (ctx->pc != 0x20D900u) { return; }
    }
    ctx->pc = 0x20D900u;
label_20d900:
    // 0x20d900: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x20d900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x20d904: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x20d904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x20d908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20d908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d90c: 0xc06149c  jal         func_185270
    ctx->pc = 0x20D90Cu;
    SET_GPR_U32(ctx, 31, 0x20D914u);
    ctx->pc = 0x20D910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D90Cu;
            // 0x20d910: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D914u; }
        if (ctx->pc != 0x20D914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D914u; }
        if (ctx->pc != 0x20D914u) { return; }
    }
    ctx->pc = 0x20D914u;
    // 0x20d914: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20d914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20d918: 0xc0614c6  jal         func_185318
    ctx->pc = 0x20D918u;
    SET_GPR_U32(ctx, 31, 0x20D920u);
    ctx->pc = 0x20D91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D918u;
            // 0x20d91c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D920u; }
        if (ctx->pc != 0x20D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D920u; }
        if (ctx->pc != 0x20D920u) { return; }
    }
    ctx->pc = 0x20D920u;
    // 0x20d920: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20d920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20d924: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x20d924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d928: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x20d928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d92c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x20d92cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d930: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x20d930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d934: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x20d934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d938: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x20d938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d93c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x20d93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x20d940: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20d940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d944: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x20d944u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20d948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d94c: 0x46000544  c1          0x544
    ctx->pc = 0x20d94cu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x20d950: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x20d950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d954: 0x0  nop
    ctx->pc = 0x20d954u;
    // NOP
    // 0x20d958: 0x4502003a  bc1fl       . + 4 + (0x3A << 2)
    ctx->pc = 0x20D958u;
    {
        const bool branch_taken_0x20d958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d958) {
            ctx->pc = 0x20D95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D958u;
            // 0x20d95c: 0x8e34000c  lw          $s4, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DA44u;
            goto label_20da44;
        }
    }
    ctx->pc = 0x20D960u;
label_20d960:
    // 0x20d960: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x20d960u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[21];
    // 0x20d964: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x20d964u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d968: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x20d968u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d96c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x20d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x20d970: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x20D970u;
    SET_GPR_U32(ctx, 31, 0x20D978u);
    ctx->pc = 0x20D974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D970u;
            // 0x20d974: 0x7ba70020  lq          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D978u; }
        if (ctx->pc != 0x20D978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D978u; }
        if (ctx->pc != 0x20D978u) { return; }
    }
    ctx->pc = 0x20D978u;
    // 0x20d978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20d978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20d97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20d97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d980: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20d984: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20d984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x20d988: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x20d988u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d98c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x20d98cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d990: 0x7ba50140  lq          $a1, 0x140($sp)
    ctx->pc = 0x20d990u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x20d994: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20d994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20d998: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20d998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20d99c: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x20d99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20d9a0: 0xfba20160  sqc2        $vf2, 0x160($sp)
    ctx->pc = 0x20d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20d9a4: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x20d9a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20d9a8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x20d9a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20d9ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20d9acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20d9b0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x20d9b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d9b4: 0x4be21868  vadd.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x20d9b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d9b8: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x20d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d9bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20d9bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20d9c0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x20d9c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20d9c4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x20d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20d9c8: 0xc061084  jal         func_184210
    ctx->pc = 0x20D9C8u;
    SET_GPR_U32(ctx, 31, 0x20D9D0u);
    ctx->pc = 0x20D9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D9C8u;
            // 0x20d9cc: 0x78440000  lq          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D9D0u; }
        if (ctx->pc != 0x20D9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D9D0u; }
        if (ctx->pc != 0x20D9D0u) { return; }
    }
    ctx->pc = 0x20D9D0u;
    // 0x20d9d0: 0x700234a9  por         $a2, $zero, $v0
    ctx->pc = 0x20d9d0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x20d9d4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x20d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x20d9d8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x20d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20d9dc: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x20D9DCu;
    {
        const bool branch_taken_0x20d9dc = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x20d9dc) {
            ctx->pc = 0x20DA14u;
            goto label_20da14;
        }
    }
    ctx->pc = 0x20D9E4u;
    // 0x20d9e4: 0x0  nop
    ctx->pc = 0x20d9e4u;
    // NOP
label_20d9e8:
    // 0x20d9e8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x20d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20d9ec: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x20d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20d9f0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x20d9f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x20d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20d9f8: 0x7862fff0  lq          $v0, -0x10($v1)
    ctx->pc = 0x20d9f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x20d9fc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20da00: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20da04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20da08: 0x7882fff0  lq          $v0, -0x10($a0)
    ctx->pc = 0x20da08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x20da0c: 0x1ca0fff6  bgtz        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x20DA0Cu;
    {
        const bool branch_taken_0x20da0c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x20DA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA0Cu;
            // 0x20da10: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da0c) {
            ctx->pc = 0x20D9E8u;
            runtime->cooperativeGuestYield();
            goto label_20d9e8;
        }
    }
    ctx->pc = 0x20DA14u;
label_20da14:
    // 0x20da14: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x20da14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x20da18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20da18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20da1c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x20da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20da20: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x20da20u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x20da24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x20da24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x20da28: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x20da28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x20da2c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x20da2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20da30: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20da34: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x20da34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x20da38: 0x4501ffc9  bc1t        . + 4 + (-0x37 << 2)
    ctx->pc = 0x20DA38u;
    {
        const bool branch_taken_0x20da38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA38u;
            // 0x20da3c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da38) {
            ctx->pc = 0x20D960u;
            runtime->cooperativeGuestYield();
            goto label_20d960;
        }
    }
    ctx->pc = 0x20DA40u;
    // 0x20da40: 0x8e34000c  lw          $s4, 0xC($s1)
    ctx->pc = 0x20da40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20da44:
    // 0x20da44: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x20da44u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
    // 0x20da48: 0x1a800037  blez        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x20DA48u;
    {
        const bool branch_taken_0x20da48 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x20DA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA48u;
            // 0x20da4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da48) {
            ctx->pc = 0x20DB28u;
            goto label_20db28;
        }
    }
    ctx->pc = 0x20DA50u;
label_20da50:
    // 0x20da50: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x20da50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20da54: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20da54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x20da58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x20da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x20da5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20da5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da60: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x20da60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20da64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20da64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da68: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x20da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20da6c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x20da6cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x20da70: 0xc08354c  jal         func_20D530
    ctx->pc = 0x20DA70u;
    SET_GPR_U32(ctx, 31, 0x20DA78u);
    ctx->pc = 0x20DA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA70u;
            // 0x20da74: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D530u;
    if (runtime->hasFunction(0x20D530u)) {
        auto targetFn = runtime->lookupFunction(0x20D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DA78u; }
        if (ctx->pc != 0x20DA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D530_0x20d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DA78u; }
        if (ctx->pc != 0x20DA78u) { return; }
    }
    ctx->pc = 0x20DA78u;
    // 0x20da78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20da7c: 0xdba60040  lqc2        $vf6, 0x40($sp)
    ctx->pc = 0x20da7cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20da80: 0xdba70050  lqc2        $vf7, 0x50($sp)
    ctx->pc = 0x20da80u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20da84: 0xdba80060  lqc2        $vf8, 0x60($sp)
    ctx->pc = 0x20da84u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20da88: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x20da88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20da8c: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x20da8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20da90: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x20da90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20da94: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x20da94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20da98: 0xdba500b0  lqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x20da98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20da9c: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x20da9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20daa0: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x20daa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20daa4: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x20daa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20daa8: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x20daa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20daac: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x20daacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20dab0: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x20dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20dab4: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x20dab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20dab8: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x20dab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20dabc: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x20dabcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20dac0: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x20dac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20dac4: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x20dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20dac8: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x20dac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20dacc: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x20daccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20dad0: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x20dad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20dad4: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x20dad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20dad8: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x20dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20dadc: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x20dadcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20dae0: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x20dae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20dae4: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x20dae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20dae8: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x20dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20daec: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x20daecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20daf0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x20daf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20daf4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20daf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20daf8: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x20daf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20dafc: 0x254202a  slt         $a0, $s2, $s4
    ctx->pc = 0x20dafcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x20db00: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x20db00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20db04: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x20db04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20db08: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x20db08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20db0c: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x20db0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x20db10: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x20db10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20db14: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x20db14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x20db18: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x20db18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20db1c: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x20DB1Cu;
    {
        const bool branch_taken_0x20db1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB1Cu;
            // 0x20db20: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db1c) {
            ctx->pc = 0x20DA50u;
            runtime->cooperativeGuestYield();
            goto label_20da50;
        }
    }
    ctx->pc = 0x20DB24u;
    // 0x20db24: 0x0  nop
    ctx->pc = 0x20db24u;
    // NOP
label_20db28:
    // 0x20db28: 0xdea2bdf8  ld          $v0, -0x4208($s5)
    ctx->pc = 0x20db28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294950392)));
    // 0x20db2c: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x20db2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x20db30: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x20db30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x20db34: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x20db34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x20db38: 0xfea2bdf8  sd          $v0, -0x4208($s5)
    ctx->pc = 0x20db38u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294950392), GPR_U64(ctx, 2));
    // 0x20db3c: 0xfe600040  sd          $zero, 0x40($s3)
    ctx->pc = 0x20db3cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 0));
    // 0x20db40: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x20db40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x20db44: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x20db44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x20db48: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x20db48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x20db4c: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x20db4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x20db50: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x20db50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x20db54: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x20db54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20db58: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x20db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20db5c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB5Cu;
            // 0x20db60: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D900u: goto label_20d900;
            case 0x20D960u: goto label_20d960;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA50u: goto label_20da50;
            case 0x20DB28u: goto label_20db28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DB64u;
    // 0x20db64: 0x0  nop
    ctx->pc = 0x20db64u;
    // NOP
    // 0x20db68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20db6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20db70: 0xc0834a0  jal         func_20D280
    ctx->pc = 0x20DB70u;
    SET_GPR_U32(ctx, 31, 0x20DB78u);
    ctx->pc = 0x20DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB70u;
            // 0x20db74: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D280u;
    if (runtime->hasFunction(0x20D280u)) {
        auto targetFn = runtime->lookupFunction(0x20D280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DB78u; }
        if (ctx->pc != 0x20DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D280_0x20d280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DB78u; }
        if (ctx->pc != 0x20DB78u) { return; }
    }
    ctx->pc = 0x20DB78u;
    // 0x20db78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20db78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20db7c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB7Cu;
            // 0x20db80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D900u: goto label_20d900;
            case 0x20D960u: goto label_20d960;
            case 0x20D9E8u: goto label_20d9e8;
            case 0x20DA14u: goto label_20da14;
            case 0x20DA44u: goto label_20da44;
            case 0x20DA50u: goto label_20da50;
            case 0x20DB28u: goto label_20db28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DB84u;
    // 0x20db84: 0x0  nop
    ctx->pc = 0x20db84u;
    // NOP
}
