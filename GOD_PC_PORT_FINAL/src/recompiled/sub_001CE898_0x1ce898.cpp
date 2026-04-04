#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE898
// Address: 0x1ce898 - 0x1cea10
void sub_001CE898_0x1ce898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE898_0x1ce898");
#endif

    ctx->pc = 0x1ce898u;

    // 0x1ce898: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ce898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ce89c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce8a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce8a4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1ce8a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ce8a8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ce8a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1ce8ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ce8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ce8b0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1ce8b0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1ce8b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ce8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ce8b8: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1ce8b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1ce8bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8c0: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1ce8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1ce8c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ce8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ce8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ce8cc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1ce8ccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1ce8d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ce8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce8d8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1ce8d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1ce8dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ce8dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ce8e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ce8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ce8e4: 0x8c520320  lw          $s2, 0x320($v0)
    ctx->pc = 0x1ce8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1ce8e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ce8e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ce8ec: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1ce8ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1ce8f0: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1ce8f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce8f4: 0x1100003a  beqz        $t0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1CE8F4u;
    {
        const bool branch_taken_0x1ce8f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8F4u;
            // 0x1ce8f8: 0xfa010000  sqc2        $vf1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8f4) {
            ctx->pc = 0x1CE9E0u;
            goto label_1ce9e0;
        }
    }
    ctx->pc = 0x1CE8FCu;
    // 0x1ce8fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ce8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce900: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CE900u;
    SET_GPR_U32(ctx, 31, 0x1CE908u);
    ctx->pc = 0x1CE904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE900u;
            // 0x1ce904: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE908u; }
        if (ctx->pc != 0x1CE908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE908u; }
        if (ctx->pc != 0x1CE908u) { return; }
    }
    ctx->pc = 0x1CE908u;
    // 0x1ce908: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ce908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ce90c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ce90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ce910: 0xc4400174  lwc1        $f0, 0x174($v0)
    ctx->pc = 0x1ce910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce914: 0xc661c658  lwc1        $f1, -0x39A8($s3)
    ctx->pc = 0x1ce914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce918: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce91c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ce91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1ce920: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ce920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce924: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1CE924u;
    {
        const bool branch_taken_0x1ce924 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce924) {
            ctx->pc = 0x1CE958u;
            goto label_1ce958;
        }
    }
    ctx->pc = 0x1CE92Cu;
    // 0x1ce92c: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ce92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ce930: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ce930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ce934: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1ce934u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1ce938: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ce93c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1ce940: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1ce940u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1ce944: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1ce944u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ce948: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1ce948u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1ce94c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1CE94Cu;
    {
        const bool branch_taken_0x1ce94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE94Cu;
            // 0x1ce950: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce94c) {
            ctx->pc = 0x1CE9E8u;
            goto label_1ce9e8;
        }
    }
    ctx->pc = 0x1CE954u;
    // 0x1ce954: 0x0  nop
    ctx->pc = 0x1ce954u;
    // NOP
label_1ce958:
    // 0x1ce958: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1CE958u;
    SET_GPR_U32(ctx, 31, 0x1CE960u);
    ctx->pc = 0x1CE95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE958u;
            // 0x1ce95c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE960u; }
        if (ctx->pc != 0x1CE960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE960u; }
        if (ctx->pc != 0x1CE960u) { return; }
    }
    ctx->pc = 0x1CE960u;
    // 0x1ce960: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x1ce960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce964: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x1ce964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce968: 0xc661c658  lwc1        $f1, -0x39A8($s3)
    ctx->pc = 0x1ce968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce96c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce970: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE970u;
    {
        const bool branch_taken_0x1ce970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE970u;
            // 0x1ce974: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce970) {
            ctx->pc = 0x1CE988u;
            goto label_1ce988;
        }
    }
    ctx->pc = 0x1CE978u;
    // 0x1ce978: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1ce978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce97c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1ce97cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce980: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CE980u;
    {
        const bool branch_taken_0x1ce980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE980u;
            // 0x1ce984: 0xfa010000  sqc2        $vf1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce980) {
            ctx->pc = 0x1CE9E8u;
            goto label_1ce9e8;
        }
    }
    ctx->pc = 0x1CE988u;
label_1ce988:
    // 0x1ce988: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ce988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce98c: 0x0  nop
    ctx->pc = 0x1ce98cu;
    // NOP
    // 0x1ce990: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x1CE990u;
    {
        const bool branch_taken_0x1ce990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce990) {
            ctx->pc = 0x1CE994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE990u;
            // 0x1ce994: 0xda010000  lqc2        $vf1, 0x0($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CE9E0u;
            goto label_1ce9e0;
        }
    }
    ctx->pc = 0x1CE998u;
    // 0x1ce998: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1ce998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ce99c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1ce99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1ce9a0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ce9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ce9a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE9A4u;
    {
        const bool branch_taken_0x1ce9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9A4u;
            // 0x1ce9a8: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9a4) {
            ctx->pc = 0x1CE9BCu;
            goto label_1ce9bc;
        }
    }
    ctx->pc = 0x1CE9ACu;
    // 0x1ce9ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ce9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ce9b0: 0x8c8202d8  lw          $v0, 0x2D8($a0)
    ctx->pc = 0x1ce9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x1ce9b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ce9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ce9b8: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x1ce9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
label_1ce9bc:
    // 0x1ce9bc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1ce9bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x1ce9c0: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1ce9c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ce9c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ce9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ce9c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ce9c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ce9cc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1ce9ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce9d0: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1ce9d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce9d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE9D4u;
    {
        const bool branch_taken_0x1ce9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9D4u;
            // 0x1ce9d8: 0xfa010000  sqc2        $vf1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9d4) {
            ctx->pc = 0x1CE9E8u;
            goto label_1ce9e8;
        }
    }
    ctx->pc = 0x1CE9DCu;
    // 0x1ce9dc: 0x0  nop
    ctx->pc = 0x1ce9dcu;
    // NOP
label_1ce9e0:
    // 0x1ce9e0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1ce9e0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1ce9e4: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1ce9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1ce9e8:
    // 0x1ce9e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ce9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce9ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ce9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce9f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ce9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce9f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ce9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce9f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce9fc: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1ce9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cea00: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1cea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cea04: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1cea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cea08: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEA08u;
            // 0x1cea0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE958u: goto label_1ce958;
            case 0x1CE988u: goto label_1ce988;
            case 0x1CE9BCu: goto label_1ce9bc;
            case 0x1CE9E0u: goto label_1ce9e0;
            case 0x1CE9E8u: goto label_1ce9e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEA10u;
}
