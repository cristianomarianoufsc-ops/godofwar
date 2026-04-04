#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E190
// Address: 0x11e190 - 0x11e3e8
void sub_0011E190_0x11e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E190_0x11e190");
#endif

    ctx->pc = 0x11e190u;

    // 0x11e190: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x11e190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x11e194: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x11e194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11e198: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x11e198u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x11e19c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x11e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x11e1a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1a4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x11e1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x11e1a8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x11e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x11e1ac: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x11e1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x11e1b0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x11e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x11e1b4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x11e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x11e1b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11e1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11e1bc: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x11e1bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x11e1c0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x11e1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e1c4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x11e1c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x11e1c8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x11e1c8u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x11e1cc: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x11e1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11e1d0: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x11e1d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e1d4: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x11e1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x11e1d8: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x11e1d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e1dc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x11e1dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e1e0: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x11e1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x11e1e4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x11e1e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x11e1e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e1ec: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x11e1ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11e1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e1f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11e1f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e1f8: 0x0  nop
    ctx->pc = 0x11e1f8u;
    // NOP
    // 0x11e1fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x11E1FCu;
    {
        const bool branch_taken_0x11e1fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1FCu;
            // 0x11e200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1fc) {
            ctx->pc = 0x11E218u;
            goto label_11e218;
        }
    }
    ctx->pc = 0x11E204u;
    // 0x11e204: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x11E204u;
    {
        const bool branch_taken_0x11e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E204u;
            // 0x11e208: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e204) {
            ctx->pc = 0x11E3BCu;
            goto label_11e3bc;
        }
    }
    ctx->pc = 0x11E20Cu;
    // 0x11e20c: 0x0  nop
    ctx->pc = 0x11e20cu;
    // NOP
label_11e210:
    // 0x11e210: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x11E210u;
    {
        const bool branch_taken_0x11e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E210u;
            // 0x11e214: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e210) {
            ctx->pc = 0x11E380u;
            goto label_11e380;
        }
    }
    ctx->pc = 0x11E218u;
label_11e218:
    // 0x11e218: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x11e21c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x11e21cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x11e220: 0xc4541434  lwc1        $f20, 0x1434($v0)
    ctx->pc = 0x11e220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e224: 0x2610f170  addiu       $s0, $s0, -0xE90
    ctx->pc = 0x11e224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963568));
    // 0x11e228: 0x3c15002c  lui         $s5, 0x2C
    ctx->pc = 0x11e228u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)44 << 16));
    // 0x11e22c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11e230: 0x26a27790  addiu       $v0, $s5, 0x7790
    ctx->pc = 0x11e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 30608));
    // 0x11e234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e238: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x11e238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x11e23c: 0x30740002  andi        $s4, $v1, 0x2
    ctx->pc = 0x11e23cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x11e240: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x11e240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x11e244: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11e244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e248: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x11e248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x11e24c: 0xa4400034  sh          $zero, 0x34($v0)
    ctx->pc = 0x11e24cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e250: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x11e250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x11e254: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x11e254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x11e258: 0xa4400036  sh          $zero, 0x36($v0)
    ctx->pc = 0x11e258u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x11e25c: 0xc08f42a  jal         func_23D0A8
    ctx->pc = 0x11E25Cu;
    SET_GPR_U32(ctx, 31, 0x11E264u);
    ctx->pc = 0x11E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E25Cu;
            // 0x11e260: 0xfba30070  sqc2        $vf3, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D0A8u;
    if (runtime->hasFunction(0x23D0A8u)) {
        auto targetFn = runtime->lookupFunction(0x23D0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E264u; }
        if (ctx->pc != 0x11E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23d0a8_0x23d0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E264u; }
        if (ctx->pc != 0x11E264u) { return; }
    }
    ctx->pc = 0x11E264u;
    // 0x11e264: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x11e264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e268: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11e268u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e26c: 0x4be408a8  vadd.xyzw   $vf2, $vf1, $vf4
    ctx->pc = 0x11e26cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11e270: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x11e270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11e274: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x11e274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x11e278: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x11e278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x11e27c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x11e27cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11e280: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x11e280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11e284: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x11e284u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e288: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x11e288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e28c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x11e28cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11e290: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11e290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11e294: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11e294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e298: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x11e298u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11e29c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11e29cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e2a0: 0x46000004  c1          0x4
    ctx->pc = 0x11e2a0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x11e2a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e2a8: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x11e2a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x11e2ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11e2acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11e2b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x11e2b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e2b4: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x11e2b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11e2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2bc: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x11e2bcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11e2c0: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x11e2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11e2c4: 0xc047824  jal         func_11E090
    ctx->pc = 0x11E2C4u;
    SET_GPR_U32(ctx, 31, 0x11E2CCu);
    ctx->pc = 0x11E2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2C4u;
            // 0x11e2c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E090u;
    if (runtime->hasFunction(0x11E090u)) {
        auto targetFn = runtime->lookupFunction(0x11E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E2CCu; }
        if (ctx->pc != 0x11E2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E090_0x11e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E2CCu; }
        if (ctx->pc != 0x11E2CCu) { return; }
    }
    ctx->pc = 0x11E2CCu;
    // 0x11e2cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e2d0: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11E2D0u;
    {
        const bool branch_taken_0x11e2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2D0u;
            // 0x11e2d4: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2d0) {
            ctx->pc = 0x11E380u;
            goto label_11e380;
        }
    }
    ctx->pc = 0x11E2D8u;
    // 0x11e2d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2dc: 0x0  nop
    ctx->pc = 0x11e2dcu;
    // NOP
label_11e2e0:
    // 0x11e2e0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E2E0u;
    {
        const bool branch_taken_0x11e2e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2E0u;
            // 0x11e2e4: 0x8c860018  lw          $a2, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2e0) {
            ctx->pc = 0x11E2F0u;
            goto label_11e2f0;
        }
    }
    ctx->pc = 0x11E2E8u;
    // 0x11e2e8: 0x52460022  beql        $s2, $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x11E2E8u;
    {
        const bool branch_taken_0x11e2e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        if (branch_taken_0x11e2e8) {
            ctx->pc = 0x11E2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2E8u;
            // 0x11e2ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E374u;
            goto label_11e374;
        }
    }
    ctx->pc = 0x11E2F0u;
label_11e2f0:
    // 0x11e2f0: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x11e2f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e2f4: 0x26b07790  addiu       $s0, $s5, 0x7790
    ctx->pc = 0x11e2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 30608));
    // 0x11e2f8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x11e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x11e2fc: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x11e2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x11e300: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x11e300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x11e304: 0x7ba60060  lq          $a2, 0x60($sp)
    ctx->pc = 0x11e304u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e308: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x11e308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x11e30c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11e310: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x11e310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x11e314: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x11e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x11e318: 0x40f809  jalr        $v0
    ctx->pc = 0x11E318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E320u);
        ctx->pc = 0x11E31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E318u;
            // 0x11e31c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11E320u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E210u: goto label_11e210;
            case 0x11E218u: goto label_11e218;
            case 0x11E2E0u: goto label_11e2e0;
            case 0x11E2F0u: goto label_11e2f0;
            case 0x11E368u: goto label_11e368;
            case 0x11E36Cu: goto label_11e36c;
            case 0x11E374u: goto label_11e374;
            case 0x11E380u: goto label_11e380;
            case 0x11E3B8u: goto label_11e3b8;
            case 0x11E3BCu: goto label_11e3bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11E320u; }
            if (ctx->pc != 0x11E320u) { return; }
        }
        }
    }
    ctx->pc = 0x11E320u;
    // 0x11e320: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11e320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e324: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E324u;
    {
        const bool branch_taken_0x11e324 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E324u;
            // 0x11e328: 0x2669825  or          $s3, $s3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e324) {
            ctx->pc = 0x11E368u;
            goto label_11e368;
        }
    }
    ctx->pc = 0x11E32Cu;
    // 0x11e32c: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x11E32Cu;
    {
        const bool branch_taken_0x11e32c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E32Cu;
            // 0x11e330: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e32c) {
            ctx->pc = 0x11E368u;
            goto label_11e368;
        }
    }
    ctx->pc = 0x11E334u;
    // 0x11e334: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x11e334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e338: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e33c: 0x0  nop
    ctx->pc = 0x11e33cu;
    // NOP
    // 0x11e340: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x11E340u;
    {
        const bool branch_taken_0x11e340 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E340u;
            // 0x11e344: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e340) {
            ctx->pc = 0x11E36Cu;
            goto label_11e36c;
        }
    }
    ctx->pc = 0x11E348u;
    // 0x11e348: 0x7a050030  lq          $a1, 0x30($s0)
    ctx->pc = 0x11e348u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11e34c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x11e34cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11e350: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x11e350u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11e354: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x11e354u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x11e358: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11e358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x11e35c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x11e35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x11e360: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x11e360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x11e364: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x11e364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_11e368:
    // 0x11e368: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11e36c:
    // 0x11e36c: 0x10c2ffa8  beq         $a2, $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x11E36Cu;
    {
        const bool branch_taken_0x11e36c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E36Cu;
            // 0x11e370: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e36c) {
            ctx->pc = 0x11E210u;
            runtime->cooperativeGuestYield();
            goto label_11e210;
        }
    }
    ctx->pc = 0x11E374u;
label_11e374:
    // 0x11e374: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x11e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11e378: 0x1480ffd9  bnez        $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x11E378u;
    {
        const bool branch_taken_0x11e378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e378) {
            ctx->pc = 0x11E2E0u;
            runtime->cooperativeGuestYield();
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E380u;
label_11e380:
    // 0x11e380: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x11E380u;
    {
        const bool branch_taken_0x11e380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E380u;
            // 0x11e384: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e380) {
            ctx->pc = 0x11E3B8u;
            goto label_11e3b8;
        }
    }
    ctx->pc = 0x11E388u;
    // 0x11e388: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x11E388u;
    {
        const bool branch_taken_0x11e388 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E388u;
            // 0x11e38c: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e388) {
            ctx->pc = 0x11E3B8u;
            goto label_11e3b8;
        }
    }
    ctx->pc = 0x11E390u;
    // 0x11e390: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x11e390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x11e394: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x11e394u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e398: 0x24637790  addiu       $v1, $v1, 0x7790
    ctx->pc = 0x11e398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x11e39c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x11e39cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e3a0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x11e3a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e3a4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x11e3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x11e3a8: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x11e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x11e3ac: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x11e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x11e3b0: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x11e3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
    // 0x11e3b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x11e3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11e3b8:
    // 0x11e3b8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x11e3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_11e3bc:
    // 0x11e3bc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x11e3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11e3c0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x11e3c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11e3c4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x11e3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11e3c8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x11e3c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11e3cc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x11e3ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11e3d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11e3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e3d4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x11e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11e3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3D8u;
            // 0x11e3dc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E210u: goto label_11e210;
            case 0x11E218u: goto label_11e218;
            case 0x11E2E0u: goto label_11e2e0;
            case 0x11E2F0u: goto label_11e2f0;
            case 0x11E368u: goto label_11e368;
            case 0x11E36Cu: goto label_11e36c;
            case 0x11E374u: goto label_11e374;
            case 0x11E380u: goto label_11e380;
            case 0x11E3B8u: goto label_11e3b8;
            case 0x11E3BCu: goto label_11e3bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E3E0u;
    // 0x11e3e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x11e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x11e3e4: 0x0  nop
    ctx->pc = 0x11e3e4u;
    // NOP
}
