#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4C20
// Address: 0x1e4c20 - 0x1e4eb8
void sub_001E4C20_0x1e4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4C20_0x1e4c20");
#endif

    ctx->pc = 0x1e4c20u;

    // 0x1e4c20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e4c24: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1e4c24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1e4c28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e4c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e4c2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e4c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e4c30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e4c38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e4c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c3c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1e4c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e4c40: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e4c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e4c48: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1e4c48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e4c4c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1e4c4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e4c50: 0x4be2206c  vsub.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x1e4c50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4c54: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1e4c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4c58: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e4c58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4c5c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e4c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4c60: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x1e4c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x1e4c64: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e4c64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e4c68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4c6c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e4c6cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4c70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e4c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4c74: 0x46000004  c1          0x4
    ctx->pc = 0x1e4c74u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e4c78: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1e4c78u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1e4c7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e4c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1e4c80: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e4c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e4c84: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e4c84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e4c88: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e4c88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4c8c: 0x4be30b3c  vmove.xyzw  $vf3, $vf1
    ctx->pc = 0x1e4c8cu;
    ctx->vu0_vf[3] = ctx->vu0_vf[1];
    // 0x1e4c90: 0x4a8218c0  vaddx.y     $vf3, $vf3, $vf2x
    ctx->pc = 0x1e4c90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4c94: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1e4c94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e4c98: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e4c98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e4c9c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4c9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ca0: 0x4be12068  vadd.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x1e4ca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ca4: 0x4be30968  vadd.xyzw   $vf5, $vf1, $vf3
    ctx->pc = 0x1e4ca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ca8: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1e4ca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4cac: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e4cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4cb4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e4cb4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4cb8: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e4cb8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4cc0: 0xda010130  lqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1e4cc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1e4cc4: 0x4a812105  vsuby.y     $vf4, $vf4, $vf1y
    ctx->pc = 0x1e4cc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e4cc8: 0x4b040041  vaddy.x     $vf1, $vf0, $vf4y
    ctx->pc = 0x1e4cc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ccc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e4cccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4cd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e4cd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e4cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4cdc: 0x0  nop
    ctx->pc = 0x1e4cdcu;
    // NOP
    // 0x1e4ce0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E4CE0u;
    {
        const bool branch_taken_0x1e4ce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4ce0) {
            ctx->pc = 0x1E4CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CE0u;
            // 0x1e4ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4CE8u;
            goto label_1e4ce8;
        }
    }
    ctx->pc = 0x1E4CE8u;
label_1e4ce8:
    // 0x1e4ce8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4CE8u;
    {
        const bool branch_taken_0x1e4ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ce8) {
            ctx->pc = 0x1E4CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CE8u;
            // 0x1e4cec: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4D00u;
            goto label_1e4d00;
        }
    }
    ctx->pc = 0x1E4CF0u;
    // 0x1e4cf0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e4cf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e4cf4: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e4cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4cf8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4cfc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1e4cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1e4d00:
    // 0x1e4d00: 0x3c07ff94  lui         $a3, 0xFF94
    ctx->pc = 0x1e4d00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65428 << 16));
    // 0x1e4d04: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x1e4d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x1e4d08: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1e4d08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x1e4d0c: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x1e4d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e4d10: 0x3c08fdff  lui         $t0, 0xFDFF
    ctx->pc = 0x1e4d10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65023 << 16));
    // 0x1e4d14: 0x34e7e00c  ori         $a3, $a3, 0xE00C
    ctx->pc = 0x1e4d14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57356);
    // 0x1e4d18: 0x2522f170  addiu       $v0, $t1, -0xE90
    ctx->pc = 0x1e4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963568));
    // 0x1e4d1c: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x1e4d1cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4d20: 0x3508fffd  ori         $t0, $t0, 0xFFFD
    ctx->pc = 0x1e4d20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65533);
    // 0x1e4d24: 0xad27f170  sw          $a3, -0xE90($t1)
    ctx->pc = 0x1e4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294963568), GPR_U32(ctx, 7));
    // 0x1e4d28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e4d2c: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x1e4d2cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e4d30: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x1e4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x1e4d34: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1e4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1e4d38: 0xac4a0014  sw          $t2, 0x14($v0)
    ctx->pc = 0x1e4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 10));
    // 0x1e4d3c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e4d40: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e4d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e4d44: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e4d48: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e4d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e4d4c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e4d50: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E4D50u;
    SET_GPR_U32(ctx, 31, 0x1E4D58u);
    ctx->pc = 0x1E4D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D50u;
            // 0x1e4d54: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D58u; }
        if (ctx->pc != 0x1E4D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D58u; }
        if (ctx->pc != 0x1E4D58u) { return; }
    }
    ctx->pc = 0x1E4D58u;
    // 0x1e4d58: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E4D58u;
    {
        const bool branch_taken_0x1e4d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D58u;
            // 0x1e4d5c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d58) {
            ctx->pc = 0x1E4E80u;
            goto label_1e4e80;
        }
    }
    ctx->pc = 0x1E4D60u;
    // 0x1e4d60: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1e4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1e4d64: 0x24447790  addiu       $a0, $v0, 0x7790
    ctx->pc = 0x1e4d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1e4d68: 0x8c625e6c  lw          $v0, 0x5E6C($v1)
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e4d6c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x1e4d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1e4d70: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e4d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e4d74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4d78: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1e4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1e4d7c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e4d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e4d80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e4d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e4d84: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1E4D84u;
    {
        const bool branch_taken_0x1e4d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D84u;
            // 0x1e4d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d84) {
            ctx->pc = 0x1E4E98u;
            goto label_1e4e98;
        }
    }
    ctx->pc = 0x1E4D8Cu;
    // 0x1e4d8c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1e4d8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4d90: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1e4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1e4d94: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e4d94u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4d9c: 0xae05023c  sw          $a1, 0x23C($s0)
    ctx->pc = 0x1e4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 5));
    // 0x1e4da0: 0xae030248  sw          $v1, 0x248($s0)
    ctx->pc = 0x1e4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 3));
    // 0x1e4da4: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E4DA4u;
    {
        const bool branch_taken_0x1e4da4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DA4u;
            // 0x1e4da8: 0xe6000230  swc1        $f0, 0x230($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4da4) {
            ctx->pc = 0x1E4E18u;
            goto label_1e4e18;
        }
    }
    ctx->pc = 0x1E4DACu;
    // 0x1e4dac: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e4db0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1e4db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1e4db4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E4DB4u;
    {
        const bool branch_taken_0x1e4db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DB4u;
            // 0x1e4db8: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4db4) {
            ctx->pc = 0x1E4DE8u;
            goto label_1e4de8;
        }
    }
    ctx->pc = 0x1E4DBCu;
    // 0x1e4dbc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e4dbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e4dc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4dc4: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e4dc4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4dcc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e4dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4dd0: 0x0  nop
    ctx->pc = 0x1e4dd0u;
    // NOP
    // 0x1e4dd4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4DD4u;
    {
        const bool branch_taken_0x1e4dd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4dd4) {
            ctx->pc = 0x1E4DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DD4u;
            // 0x1e4dd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4DE0u;
            goto label_1e4de0;
        }
    }
    ctx->pc = 0x1E4DDCu;
    // 0x1e4ddc: 0x0  nop
    ctx->pc = 0x1e4ddcu;
    // NOP
label_1e4de0:
    // 0x1e4de0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1E4DE0u;
    {
        const bool branch_taken_0x1e4de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DE0u;
            // 0x1e4de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4de0) {
            ctx->pc = 0x1E4E98u;
            goto label_1e4e98;
        }
    }
    ctx->pc = 0x1E4DE8u;
label_1e4de8:
    // 0x1e4de8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1e4de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e4dec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e4decu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e4df0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e4df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e4df4: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e4df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4df8: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1e4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e4dfc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e4dfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e4e00: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4e04: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1e4e04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1e4e08: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e4e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4e0c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E4E0Cu;
    {
        const bool branch_taken_0x1e4e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E0Cu;
            // 0x1e4e10: 0xfa0100e0  sqc2        $vf1, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e0c) {
            ctx->pc = 0x1E4E78u;
            goto label_1e4e78;
        }
    }
    ctx->pc = 0x1E4E14u;
    // 0x1e4e14: 0x0  nop
    ctx->pc = 0x1e4e14u;
    // NOP
label_1e4e18:
    // 0x1e4e18: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1e4e18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1e4e1c: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1e4e1cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1e4e20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e4e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4e24: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e4e24u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4e2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4e30: 0x0  nop
    ctx->pc = 0x1e4e30u;
    // NOP
    // 0x1e4e34: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E4E34u;
    {
        const bool branch_taken_0x1e4e34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E34u;
            // 0x1e4e38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e34) {
            ctx->pc = 0x1E4E54u;
            goto label_1e4e54;
        }
    }
    ctx->pc = 0x1E4E3Cu;
    // 0x1e4e3c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e4e3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e4e40: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e4e40u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4e48: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1e4e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4e4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4E4Cu;
    {
        const bool branch_taken_0x1e4e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e4c) {
            ctx->pc = 0x1E4E68u;
            goto label_1e4e68;
        }
    }
    ctx->pc = 0x1E4E54u;
label_1e4e54:
    // 0x1e4e54: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e4e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e4e58: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e4e58u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4e60: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e4e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4e64: 0x0  nop
    ctx->pc = 0x1e4e64u;
    // NOP
label_1e4e68:
    // 0x1e4e68: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E4E68u;
    {
        const bool branch_taken_0x1e4e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4e68) {
            ctx->pc = 0x1E4E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E68u;
            // 0x1e4e6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4E70u;
            goto label_1e4e70;
        }
    }
    ctx->pc = 0x1E4E70u;
label_1e4e70:
    // 0x1e4e70: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4E70u;
    {
        const bool branch_taken_0x1e4e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E70u;
            // 0x1e4e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e70) {
            ctx->pc = 0x1E4E98u;
            goto label_1e4e98;
        }
    }
    ctx->pc = 0x1E4E78u;
label_1e4e78:
    // 0x1e4e78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E4E78u;
    {
        const bool branch_taken_0x1e4e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E78u;
            // 0x1e4e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e78) {
            ctx->pc = 0x1E4E98u;
            goto label_1e4e98;
        }
    }
    ctx->pc = 0x1E4E80u;
label_1e4e80:
    // 0x1e4e80: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1e4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1e4e84: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x1e4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x1e4e88: 0xc4406f6c  lwc1        $f0, 0x6F6C($v0)
    ctx->pc = 0x1e4e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4e8c: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x1e4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x1e4e90: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1e4e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x1e4e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e4e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e98:
    // 0x1e4e98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e4e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4e9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e4e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ea8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1e4ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e4eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EACu;
            // 0x1e4eb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4CE8u: goto label_1e4ce8;
            case 0x1E4D00u: goto label_1e4d00;
            case 0x1E4DE0u: goto label_1e4de0;
            case 0x1E4DE8u: goto label_1e4de8;
            case 0x1E4E18u: goto label_1e4e18;
            case 0x1E4E54u: goto label_1e4e54;
            case 0x1E4E68u: goto label_1e4e68;
            case 0x1E4E70u: goto label_1e4e70;
            case 0x1E4E78u: goto label_1e4e78;
            case 0x1E4E80u: goto label_1e4e80;
            case 0x1E4E98u: goto label_1e4e98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4EB4u;
    // 0x1e4eb4: 0x0  nop
    ctx->pc = 0x1e4eb4u;
    // NOP
}
