#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_105f38
// Address: 0x105f38 - 0x106180
void entry_105f38_0x106180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_105f38_0x106180");
#endif

    ctx->pc = 0x105f38u;

    // 0x105f38: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x105f38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f3c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x105f3cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f40: 0xad260030  sw          $a2, 0x30($t1)
    ctx->pc = 0x105f40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 6));
    // 0x105f44: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x105f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x105f48: 0x440a6000  mfc1        $t2, $f12
    ctx->pc = 0x105f48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x105f4c: 0x8deb0050  lw          $t3, 0x50($t7)
    ctx->pc = 0x105f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 80)));
    // 0x105f50: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x105f50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x105f54: 0xad2b002c  sw          $t3, 0x2C($t1)
    ctx->pc = 0x105f54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 11));
    // 0x105f58: 0xd9e10040  lqc2        $vf1, 0x40($t7)
    ctx->pc = 0x105f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x105f5c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x105f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105f60: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x105f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105f64: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x105f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105f68: 0x27ac0020  addiu       $t4, $sp, 0x20
    ctx->pc = 0x105f68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x105f6c: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x105f6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x105f70: 0x8de30020  lw          $v1, 0x20($t7)
    ctx->pc = 0x105f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x105f74: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x105f74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x105f78: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x105f78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105f7c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x105f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x105f80: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x105f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105f84: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x105f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x105f88: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x105F88u;
    {
        const bool branch_taken_0x105f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F88u;
            // 0x105f8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f88) {
            ctx->pc = 0x106134u;
            goto label_106134;
        }
    }
    ctx->pc = 0x105F90u;
    // 0x105f90: 0x8de200b0  lw          $v0, 0xB0($t7)
    ctx->pc = 0x105f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 176)));
    // 0x105f94: 0x144b0067  bne         $v0, $t3, . + 4 + (0x67 << 2)
    ctx->pc = 0x105F94u;
    {
        const bool branch_taken_0x105f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x105F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F94u;
            // 0x105f98: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f94) {
            ctx->pc = 0x106134u;
            goto label_106134;
        }
    }
    ctx->pc = 0x105F9Cu;
    // 0x105f9c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x105f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_105fa0:
    // 0x105fa0: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x105fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x105fa4: 0x1032818  mult        $a1, $t0, $v1
    ctx->pc = 0x105fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x105fa8: 0xaf1021  addu        $v0, $a1, $t7
    ctx->pc = 0x105fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x105fac: 0xd8430040  lqc2        $vf3, 0x40($v0)
    ctx->pc = 0x105facu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x105fb0: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x105fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x105fb4: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x105fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x105fb8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x105fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x105fbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x105fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fc0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x105fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x105fc4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x105fc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x105fc8: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x105fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x105fcc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x105fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x105fd0: 0x4a2130c0  vaddx.w     $vf3, $vf6, $vf1x
    ctx->pc = 0x105fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x105fd4: 0xdba50020  lqc2        $vf5, 0x20($sp)
    ctx->pc = 0x105fd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105fd8: 0x4b030103  vaddw.x     $vf4, $vf0, $vf3w
    ctx->pc = 0x105fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105fdc: 0x4b051884  vsubx.x     $vf2, $vf3, $vf5x
    ctx->pc = 0x105fdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105fe0: 0x4a851845  vsuby.y     $vf1, $vf3, $vf5y
    ctx->pc = 0x105fe0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105fe4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x105fe4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105fe8: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x105fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x105fec: 0x482d0800  qmfc2.ni    $t5, $vf1
    ctx->pc = 0x105fecu;
    SET_GPR_VEC(ctx, 13, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105ff0: 0x700d17c9  prot3w      $v0, $t5
    ctx->pc = 0x105ff0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x105ff4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x105ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x105ff8: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x105ff8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x105ffc: 0x4b050043  vaddw.x     $vf1, $vf0, $vf5w
    ctx->pc = 0x105ffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x106000: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x106000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x106004: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x106004u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x106008: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x106008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10600c: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x10600cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x106010: 0x4a451846  vsubz.z     $vf1, $vf3, $vf5z
    ctx->pc = 0x106010u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x106014: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x106014u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106018: 0x482e0800  qmfc2.ni    $t6, $vf1
    ctx->pc = 0x106018u;
    SET_GPR_VEC(ctx, 14, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10601c: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x10601cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x106020: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x106020u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x106024: 0x700e1789  pexew       $v0, $t6
    ctx->pc = 0x106024u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x106028: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x106028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10602c: 0x46074101  sub.s       $f4, $f8, $f7
    ctx->pc = 0x10602cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x106030: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x106030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x106034: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x106034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x106038: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x106038u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x10603c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x10603cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106040: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x106040u;
    {
        const bool branch_taken_0x106040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106040) {
            ctx->pc = 0x10606Cu;
            goto label_10606c;
        }
    }
    ctx->pc = 0x106048u;
    // 0x106048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x106048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10604c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x10604cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106050: 0x0  nop
    ctx->pc = 0x106050u;
    // NOP
    // 0x106054: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x106054u;
    {
        const bool branch_taken_0x106054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106054u;
            // 0x106058: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106054) {
            ctx->pc = 0x106060u;
            goto label_106060;
        }
    }
    ctx->pc = 0x10605Cu;
    // 0x10605c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10605cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_106060:
    // 0x106060: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x106060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106064: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x106064u;
    {
        const bool branch_taken_0x106064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106064u;
            // 0x106068: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106064) {
            ctx->pc = 0x106108u;
            goto label_106108;
        }
    }
    ctx->pc = 0x10606Cu;
label_10606c:
    // 0x10606c: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x10606cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x106070: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x106070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x106074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x106074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106078: 0x46020084  c1          0x20084
    ctx->pc = 0x106078u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x10607c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x10607cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106080: 0x0  nop
    ctx->pc = 0x106080u;
    // NOP
    // 0x106084: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x106084u;
    {
        const bool branch_taken_0x106084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106084) {
            ctx->pc = 0x106088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106084u;
            // 0x106088: 0x46071000  add.s       $f0, $f2, $f7 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1060E0u;
            goto label_1060e0;
        }
    }
    ctx->pc = 0x10608Cu;
    // 0x10608c: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x10608cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x106090: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x106090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x106094: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x106094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x106098: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x106098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10609c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x10609cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1060a0: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x1060a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1060a4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1060a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060a8: 0x440d3000  mfc1        $t5, $f6
    ctx->pc = 0x1060a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1060ac: 0x704d1b89  pcpyld      $v1, $v0, $t5
    ctx->pc = 0x1060acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 13)));
    // 0x1060b0: 0x440d1800  mfc1        $t5, $f3
    ctx->pc = 0x1060b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x1060b4: 0x71cd1389  pcpyld      $v0, $t6, $t5
    ctx->pc = 0x1060b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 13)));
    // 0x1060b8: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x1060b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x1060bc: 0x48ae0800  qmtc2.ni    $t6, $vf1
    ctx->pc = 0x1060bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x1060c0: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1060c0u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1060c4: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x1060c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x1060c8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1060c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1060cc: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1060ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1060d0: 0x4be12868  vadd.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x1060d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1060d4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1060d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1060d8: 0x46071000  add.s       $f0, $f2, $f7
    ctx->pc = 0x1060d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x1060dc: 0x0  nop
    ctx->pc = 0x1060dcu;
    // NOP
label_1060e0:
    // 0x1060e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1060e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1060e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1060e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1060e8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1060e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1060ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1060ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1060f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1060f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1060f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1060f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1060f8: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1060f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1060fc: 0x4a223040  vaddx.w     $vf1, $vf6, $vf2x
    ctx->pc = 0x1060fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x106100: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x106100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x106104: 0x0  nop
    ctx->pc = 0x106104u;
    // NOP
label_106108:
    // 0x106108: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10610c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x10610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x106110: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x106110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x106114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106114u;
    {
        const bool branch_taken_0x106114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106114u;
            // 0x106118: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106114) {
            ctx->pc = 0x106130u;
            goto label_106130;
        }
    }
    ctx->pc = 0x10611Cu;
    // 0x10611c: 0x1021818  mult        $v1, $t0, $v0
    ctx->pc = 0x10611cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106120: 0x6f1021  addu        $v0, $v1, $t7
    ctx->pc = 0x106120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x106124: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x106124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x106128: 0x104bff9d  beq         $v0, $t3, . + 4 + (-0x63 << 2)
    ctx->pc = 0x106128u;
    {
        const bool branch_taken_0x106128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        ctx->pc = 0x10612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106128u;
            // 0x10612c: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106128) {
            ctx->pc = 0x105FA0u;
            runtime->cooperativeGuestYield();
            goto label_105fa0;
        }
    }
    ctx->pc = 0x106130u;
label_106130:
    // 0x106130: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x106130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_106134:
    // 0x106134: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x106134u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x106138: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10613c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10613cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106140: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x106140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106144: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x106144u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x106148: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x106148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10614c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x10614cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x106150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x106150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x106154: 0xe5210020  swc1        $f1, 0x20($t1)
    ctx->pc = 0x106154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
    // 0x106158: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x106158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10615c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x10615cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x106160: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x106160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x106164: 0xf9210010  sqc2        $vf1, 0x10($t1)
    ctx->pc = 0x106164u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x106168: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x106168u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x10616c: 0xf9210010  sqc2        $vf1, 0x10($t1)
    ctx->pc = 0x10616cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x106170: 0xad280034  sw          $t0, 0x34($t1)
    ctx->pc = 0x106170u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 8));
    // 0x106174: 0x3e00008  jr          $ra
    ctx->pc = 0x106174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106174u;
            // 0x106178: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105FA0u: goto label_105fa0;
            case 0x106060u: goto label_106060;
            case 0x10606Cu: goto label_10606c;
            case 0x1060E0u: goto label_1060e0;
            case 0x106108u: goto label_106108;
            case 0x106130u: goto label_106130;
            case 0x106134u: goto label_106134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10617Cu;
    // 0x10617c: 0x0  nop
    ctx->pc = 0x10617cu;
    // NOP
}
