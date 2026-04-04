#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c8d18
// Address: 0x1c8d18 - 0x1c8eb8
void entry_1c8d18_0x1c8eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c8d18_0x1c8eb8");
#endif

    ctx->pc = 0x1c8d18u;

    // 0x1c8d18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1c8d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1c8d1c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c8d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c8d20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8d24: 0xc4405e98  lwc1        $f0, 0x5E98($v0)
    ctx->pc = 0x1c8d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8d28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c8d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c8d2c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c8d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1c8d30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8d34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c8d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d38: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x1c8d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x1c8d3c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c8d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c8d40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c8d40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c8d44: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c8d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c8d48: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c8d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1c8d4c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c8d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c8d50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c8d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c8d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d58: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1c8d58u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1c8d5c: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1c8d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c8d60: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1c8d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c8d64: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1c8d64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1c8d68: 0xda4400e0  lqc2        $vf4, 0xE0($s2)
    ctx->pc = 0x1c8d68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x1c8d6c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1c8d6cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1c8d70: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x1c8d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c8d74: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1c8d74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c8d78: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c8d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1c8d7c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c8d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c8d80: 0x4be320d8  vmulx.xyzw  $vf3, $vf4, $vf3x
    ctx->pc = 0x1c8d80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c8d84: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c8d84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8d88: 0x4be308e8  vadd.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x1c8d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c8d8c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c8d90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c8d90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c8d94: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1c8d94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c8d98: 0x4be22898  vmulx.xyzw  $vf2, $vf5, $vf2x
    ctx->pc = 0x1c8d98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8d9c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1c8d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c8da0: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x1c8da0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1c8da4: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1c8da4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c8da8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c8da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c8dac: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1c8dacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8db0: 0x4be11968  vadd.xyzw   $vf5, $vf3, $vf1
    ctx->pc = 0x1c8db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c8db4: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x1c8db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1c8db8: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x1c8db8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c8dbc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c8dbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c8dc0: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1c8dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c8dc4: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c8dc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8dc8: 0x4be40928  vadd.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x1c8dc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c8dcc: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1c8dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c8dd0: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x1c8dd0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1c8dd4: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x1c8dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c8dd8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c8dd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c8ddc: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1c8ddcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8de0: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x1c8de0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c8de4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1c8de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1c8de8: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1c8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1c8dec: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1c8decu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1c8df0: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1c8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1c8df4: 0x8e64bcf8  lw          $a0, -0x4308($s3)
    ctx->pc = 0x1c8df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950136)));
    // 0x1c8df8: 0x24a58cc0  addiu       $a1, $a1, -0x7340
    ctx->pc = 0x1c8df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937792));
    // 0x1c8dfc: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1c8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1c8e00: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1c8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1c8e04: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1c8e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1c8e08: 0x7ba50050  lq          $a1, 0x50($sp)
    ctx->pc = 0x1c8e08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8e0c: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x1c8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x1c8e10: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c8e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8e14: 0x4be22068  vadd.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x1c8e14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8e18: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1c8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1c8e1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c8e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c8e20: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1c8e20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1c8e24: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1c8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1c8e28: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1c8e28u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8e2c: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x1c8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x1c8e30: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1c8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1c8e34: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1c8e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1c8e38: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1c8e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1c8e3c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1c8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1c8e40: 0xc047864  jal         func_11E190
    ctx->pc = 0x1C8E40u;
    SET_GPR_U32(ctx, 31, 0x1C8E48u);
    ctx->pc = 0x1C8E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E40u;
            // 0x1c8e44: 0xae20cd40  sw          $zero, -0x32C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294954304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E48u; }
        if (ctx->pc != 0x1C8E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E48u; }
        if (ctx->pc != 0x1C8E48u) { return; }
    }
    ctx->pc = 0x1C8E48u;
    // 0x1c8e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e4c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8E4Cu;
    {
        const bool branch_taken_0x1c8e4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E4Cu;
            // 0x1c8e50: 0x8e22cd40  lw          $v0, -0x32C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e4c) {
            ctx->pc = 0x1C8E70u;
            goto label_1c8e70;
        }
    }
    ctx->pc = 0x1C8E54u;
    // 0x1c8e54: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8E54u;
    {
        const bool branch_taken_0x1c8e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e54) {
            ctx->pc = 0x1C8E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E54u;
            // 0x1c8e58: 0x8e4202d8  lw          $v0, 0x2D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E7Cu;
            goto label_1c8e7c;
        }
    }
    ctx->pc = 0x1C8E5Cu;
    // 0x1c8e5c: 0x8e64bcf8  lw          $a0, -0x4308($s3)
    ctx->pc = 0x1c8e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950136)));
    // 0x1c8e60: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x1c8e60u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8e64: 0xc047864  jal         func_11E190
    ctx->pc = 0x1C8E64u;
    SET_GPR_U32(ctx, 31, 0x1C8E6Cu);
    ctx->pc = 0x1C8E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E64u;
            // 0x1c8e68: 0x7ba60050  lq          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E6Cu; }
        if (ctx->pc != 0x1C8E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8E6Cu; }
        if (ctx->pc != 0x1C8E6Cu) { return; }
    }
    ctx->pc = 0x1C8E6Cu;
    // 0x1c8e6c: 0x8e22cd40  lw          $v0, -0x32C0($s1)
    ctx->pc = 0x1c8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954304)));
label_1c8e70:
    // 0x1c8e70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E70u;
    {
        const bool branch_taken_0x1c8e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e70) {
            ctx->pc = 0x1C8E8Cu;
            goto label_1c8e8c;
        }
    }
    ctx->pc = 0x1C8E78u;
    // 0x1c8e78: 0x8e4202d8  lw          $v0, 0x2D8($s2)
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
label_1c8e7c:
    // 0x1c8e7c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c8e80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c8e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c8e84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8E84u;
    {
        const bool branch_taken_0x1c8e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E84u;
            // 0x1c8e88: 0xae4202d8  sw          $v0, 0x2D8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e84) {
            ctx->pc = 0x1C8E94u;
            goto label_1c8e94;
        }
    }
    ctx->pc = 0x1C8E8Cu;
label_1c8e8c:
    // 0x1c8e8c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8E8Cu;
    {
        const bool branch_taken_0x1c8e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8E8Cu;
            // 0x1c8e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e8c) {
            ctx->pc = 0x1C8E98u;
            goto label_1c8e98;
        }
    }
    ctx->pc = 0x1C8E94u;
label_1c8e94:
    // 0x1c8e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8e98:
    // 0x1c8e98: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c8e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8e9c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c8e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8ea0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c8ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8ea4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c8ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c8ea8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c8ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8EACu;
            // 0x1c8eb0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8E70u: goto label_1c8e70;
            case 0x1C8E7Cu: goto label_1c8e7c;
            case 0x1C8E8Cu: goto label_1c8e8c;
            case 0x1C8E94u: goto label_1c8e94;
            case 0x1C8E98u: goto label_1c8e98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8EB4u;
    // 0x1c8eb4: 0x0  nop
    ctx->pc = 0x1c8eb4u;
    // NOP
}
