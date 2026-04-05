#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EBE8
// Address: 0x16ebe8 - 0x16f160
void sub_0016EBE8_0x16ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EBE8_0x16ebe8");
#endif

    ctx->pc = 0x16ebe8u;

    // 0x16ebe8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x16ebe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x16ebec: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x16ebecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x16ebf0: 0x7fa50130  sq          $a1, 0x130($sp)
    ctx->pc = 0x16ebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 5));
    // 0x16ebf4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x16ebf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebf8: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x16ebf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ebfc: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x16ebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x16ec00: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x16ec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x16ec04: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x16ec04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ec08: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x16ec08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x16ec0c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x16ec0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec10: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x16ec10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x16ec14: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16ec14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x16ec18: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x16ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x16ec1c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16ec1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16ec20: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x16ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x16ec24: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x16ec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
    // 0x16ec28: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x16ec28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16ec2c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x16ec2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16ec30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16EC30u;
    {
        const bool branch_taken_0x16ec30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC30u;
            // 0x16ec34: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec30) {
            ctx->pc = 0x16EC48u;
            goto label_16ec48;
        }
    }
    ctx->pc = 0x16EC38u;
    // 0x16ec38: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x16ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x16ec3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EC3Cu;
    {
        const bool branch_taken_0x16ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC3Cu;
            // 0x16ec40: 0x8d630044  lw          $v1, 0x44($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec3c) {
            ctx->pc = 0x16EC50u;
            goto label_16ec50;
        }
    }
    ctx->pc = 0x16EC44u;
    // 0x16ec44: 0x0  nop
    ctx->pc = 0x16ec44u;
    // NOP
label_16ec48:
    // 0x16ec48: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x16ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x16ec4c: 0x8d630048  lw          $v1, 0x48($t3)
    ctx->pc = 0x16ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 72)));
label_16ec50:
    // 0x16ec50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16ec54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ec58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16ec58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ec5c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x16ec5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16ec60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16ec60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16ec64: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x16ec64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ec68: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x16ec68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16ec6c: 0xdba20130  lqc2        $vf2, 0x130($sp)
    ctx->pc = 0x16ec6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16ec70: 0x4be111ac  vsub.xyzw   $vf6, $vf2, $vf1
    ctx->pc = 0x16ec70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16ec74: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x16ec74u;
    ctx->vu0_vf[6] = ctx->vu0_vf[0];
    // 0x16ec78: 0xdba800b0  lqc2        $vf8, 0xB0($sp)
    ctx->pc = 0x16ec78u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16ec7c: 0x4be83068  vadd.xyzw   $vf1, $vf6, $vf8
    ctx->pc = 0x16ec7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ec80: 0x4be4086a  vmul.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x16ec80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ec84: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x16ec84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ec88: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x16ec88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ec8c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x16ec8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16ec90: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x16ec90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ec94: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x16ec94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ec98: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x16ec98u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16ec9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16ec9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16eca0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x16eca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16eca4: 0x0  nop
    ctx->pc = 0x16eca4u;
    // NOP
    // 0x16eca8: 0x45010125  bc1t        . + 4 + (0x125 << 2)
    ctx->pc = 0x16ECA8u;
    {
        const bool branch_taken_0x16eca8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECA8u;
            // 0x16ecac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eca8) {
            ctx->pc = 0x16F140u;
            goto label_16f140;
        }
    }
    ctx->pc = 0x16ECB0u;
    // 0x16ecb0: 0x4be4306a  vmul.xyzw   $vf1, $vf6, $vf4
    ctx->pc = 0x16ecb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ecb4: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x16ecb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16ecb8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x16ecb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x16ecbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16ecbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ecc0: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x16ecc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ecc4: 0x4b011883  vaddw.x     $vf2, $vf3, $vf1w
    ctx->pc = 0x16ecc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ecc8: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x16ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16eccc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16ecccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16ecd0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x16ecd0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16ecd4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x16ecd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ecd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ecd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ecdc: 0x0  nop
    ctx->pc = 0x16ecdcu;
    // NOP
    // 0x16ece0: 0x45010113  bc1t        . + 4 + (0x113 << 2)
    ctx->pc = 0x16ECE0u;
    {
        const bool branch_taken_0x16ece0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16ECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECE0u;
            // 0x16ece4: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ece0) {
            ctx->pc = 0x16F130u;
            goto label_16f130;
        }
    }
    ctx->pc = 0x16ECE8u;
    // 0x16ece8: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x16ece8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16ecec: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x16ececu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x16ecf0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x16ecf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x16ecf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16ecf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ecf8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16ecf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ecfc: 0x0  nop
    ctx->pc = 0x16ecfcu;
    // NOP
    // 0x16ed00: 0x4501010f  bc1t        . + 4 + (0x10F << 2)
    ctx->pc = 0x16ED00u;
    {
        const bool branch_taken_0x16ed00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16ED04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED00u;
            // 0x16ed04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed00) {
            ctx->pc = 0x16F140u;
            goto label_16f140;
        }
    }
    ctx->pc = 0x16ED08u;
    // 0x16ed08: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x16ed08u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
    // 0x16ed0c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x16ed0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x16ed10: 0xf9240000  sqc2        $vf4, 0x0($t1)
    ctx->pc = 0x16ed10u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16ed14: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x16ed14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16ed18: 0xf9240000  sqc2        $vf4, 0x0($t1)
    ctx->pc = 0x16ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16ed1c: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x16ed1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16ed20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ed24: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x16ed24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x16ed28: 0x4be14058  vmulx.xyzw  $vf1, $vf8, $vf1x
    ctx->pc = 0x16ed28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ed2c: 0x4be13068  vadd.xyzw   $vf1, $vf6, $vf1
    ctx->pc = 0x16ed2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ed30: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x16ed30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ed34: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x16ed34u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16ed38: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x16ed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x16ed3c: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x16ED3Cu;
    {
        const bool branch_taken_0x16ed3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED3Cu;
            // 0x16ed40: 0x30e2ffff  andi        $v0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed3c) {
            ctx->pc = 0x16EEB8u;
            goto label_16eeb8;
        }
    }
    ctx->pc = 0x16ED44u;
    // 0x16ed44: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ed48: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x16ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x16ed4c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x16ed4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ed50: 0x8d630024  lw          $v1, 0x24($t3)
    ctx->pc = 0x16ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
    // 0x16ed54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ed58: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x16ed58u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16ed5c: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x16ed5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ed60: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x16ed60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16ed64: 0x8d68002c  lw          $t0, 0x2C($t3)
    ctx->pc = 0x16ed64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x16ed68: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x16ed68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16ed6c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x16ed6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ed70: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x16ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x16ed74: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x16ed74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ed78: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x16ed78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ed7c: 0x70cb2389  pcpyld      $a0, $a2, $t3
    ctx->pc = 0x16ed7cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 11)));
    // 0x16ed80: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16ed84: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16ed84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16ed88: 0x71623389  pcpyld      $a2, $t3, $v0
    ctx->pc = 0x16ed88u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16ed8c: 0x671018  mult        $v0, $v1, $a3
    ctx->pc = 0x16ed8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ed90: 0x70c434c8  ppacw       $a2, $a2, $a0
    ctx->pc = 0x16ed90u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x16ed94: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x16ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x16ed98: 0x7fa600c0  sq          $a2, 0xC0($sp)
    ctx->pc = 0x16ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
    // 0x16ed9c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x16ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x16eda0: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x16eda0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16eda4: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x16eda4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eda8: 0x714b1389  pcpyld      $v0, $t2, $t3
    ctx->pc = 0x16eda8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x16edac: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16edacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16edb0: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x16edb0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x16edb4: 0x71431b89  pcpyld      $v1, $t2, $v1
    ctx->pc = 0x16edb4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x16edb8: 0xa72018  mult        $a0, $a1, $a3
    ctx->pc = 0x16edb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16edbc: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x16edbcu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16edc0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x16edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x16edc4: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x16edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x16edc8: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x16edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x16edcc: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x16edccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16edd0: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16edd0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16edd4: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x16edd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16edd8: 0x712a2389  pcpyld      $a0, $t1, $t2
    ctx->pc = 0x16edd8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x16eddc: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x16eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16ede0: 0x71651389  pcpyld      $v0, $t3, $a1
    ctx->pc = 0x16ede0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x16ede4: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x16ede4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x16ede8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x16ede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x16edec: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x16edecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x16edf0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x16edf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x16edf4: 0x4be6096c  vsub.xyzw   $vf5, $vf1, $vf6
    ctx->pc = 0x16edf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16edf8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x16edf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16edfc: 0x4be6112c  vsub.xyzw   $vf4, $vf2, $vf6
    ctx->pc = 0x16edfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16ee00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x16ee00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16ee04: 0x4be608ec  vsub.xyzw   $vf3, $vf1, $vf6
    ctx->pc = 0x16ee04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16ee08: 0x4bc32afe  vopmula.xyz $ACC, $vf5, $vf3
    ctx->pc = 0x16ee08u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]);
    // 0x16ee0c: 0x4bc518ae  vopmsub.xyz $vf2, $vf3, $vf5
    ctx->pc = 0x16ee0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16ee10: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16ee10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ee14: 0x4be240aa  vmul.xyzw   $vf2, $vf8, $vf2
    ctx->pc = 0x16ee14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ee18: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16ee18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ee1c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16ee1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ee20: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16ee20u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ee24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ee24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ee28: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16ee28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ee2c: 0x0  nop
    ctx->pc = 0x16ee2cu;
    // NOP
    // 0x16ee30: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x16EE30u;
    {
        const bool branch_taken_0x16ee30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ee30) {
            ctx->pc = 0x16EE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE30u;
            // 0x16ee34: 0x7a040000  lq          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16EEA0u;
            goto label_16eea0;
        }
    }
    ctx->pc = 0x16EE38u;
    // 0x16ee38: 0x4bc41afe  vopmula.xyz $ACC, $vf3, $vf4
    ctx->pc = 0x16ee38u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]);
    // 0x16ee3c: 0x4bc320ae  vopmsub.xyz $vf2, $vf4, $vf3
    ctx->pc = 0x16ee3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16ee40: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16ee40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ee44: 0x4be240aa  vmul.xyzw   $vf2, $vf8, $vf2
    ctx->pc = 0x16ee44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ee48: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16ee48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ee4c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16ee4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ee50: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16ee50u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ee54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16ee54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ee58: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16ee58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ee5c: 0x0  nop
    ctx->pc = 0x16ee5cu;
    // NOP
    // 0x16ee60: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x16EE60u;
    {
        const bool branch_taken_0x16ee60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ee60) {
            ctx->pc = 0x16EE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE60u;
            // 0x16ee64: 0x7a040000  lq          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16EEA0u;
            goto label_16eea0;
        }
    }
    ctx->pc = 0x16EE68u;
    // 0x16ee68: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x16ee68u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x16ee6c: 0x4bc428ae  vopmsub.xyz $vf2, $vf5, $vf4
    ctx->pc = 0x16ee6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16ee70: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16ee70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ee74: 0x4be240aa  vmul.xyzw   $vf2, $vf8, $vf2
    ctx->pc = 0x16ee74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16ee78: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16ee78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ee7c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16ee7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ee80: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x16ee80u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ee84: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x16ee84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ee88: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16ee88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ee8c: 0x0  nop
    ctx->pc = 0x16ee8cu;
    // NOP
    // 0x16ee90: 0x450100ab  bc1t        . + 4 + (0xAB << 2)
    ctx->pc = 0x16EE90u;
    {
        const bool branch_taken_0x16ee90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE90u;
            // 0x16ee94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee90) {
            ctx->pc = 0x16F140u;
            goto label_16f140;
        }
    }
    ctx->pc = 0x16EE98u;
    // 0x16ee98: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x16ee98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ee9c: 0x0  nop
    ctx->pc = 0x16ee9cu;
    // NOP
label_16eea0:
    // 0x16eea0: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x16eea0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16eea4: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x16eea4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16eea8: 0xc05b97a  jal         func_16E5E8
    ctx->pc = 0x16EEA8u;
    SET_GPR_U32(ctx, 31, 0x16EEB0u);
    ctx->pc = 0x16EEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EEA8u;
            // 0x16eeac: 0x7ba700e0  lq          $a3, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E8u;
    if (runtime->hasFunction(0x16E5E8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEB0u; }
        if (ctx->pc != 0x16EEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16e5e8_0x16e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEB0u; }
        if (ctx->pc != 0x16EEB0u) { return; }
    }
    ctx->pc = 0x16EEB0u;
    // 0x16eeb0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x16EEB0u;
    {
        const bool branch_taken_0x16eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EEB0u;
            // 0x16eeb4: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eeb0) {
            ctx->pc = 0x16F090u;
            goto label_16f090;
        }
    }
    ctx->pc = 0x16EEB8u;
label_16eeb8:
    // 0x16eeb8: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x16eeb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16eebc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x16eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16eec0: 0x8d640028  lw          $a0, 0x28($t3)
    ctx->pc = 0x16eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x16eec4: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x16eec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16eec8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16eecc: 0x9486000a  lhu         $a2, 0xA($a0)
    ctx->pc = 0x16eeccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x16eed0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x16eed0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16eed4: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x16eed4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x16eed8: 0x94840008  lhu         $a0, 0x8($a0)
    ctx->pc = 0x16eed8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16eedc: 0x8d6c002c  lw          $t4, 0x2C($t3)
    ctx->pc = 0x16eedcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x16eee0: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x16eee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16eee4: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x16eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x16eee8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x16eee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16eeec: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x16eeecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eef0: 0x70eb2b89  pcpyld      $a1, $a3, $t3
    ctx->pc = 0x16eef0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 11)));
    // 0x16eef4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16eef8: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16eef8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16eefc: 0x71623b89  pcpyld      $a3, $t3, $v0
    ctx->pc = 0x16eefcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 2)));
    // 0x16ef00: 0x681018  mult        $v0, $v1, $t0
    ctx->pc = 0x16ef00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ef04: 0x70e53cc8  ppacw       $a3, $a3, $a1
    ctx->pc = 0x16ef04u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 7), GPR_VEC(ctx, 5)));
    // 0x16ef08: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x16ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
    // 0x16ef0c: 0x7fa700f0  sq          $a3, 0xF0($sp)
    ctx->pc = 0x16ef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 7));
    // 0x16ef10: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x16ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x16ef14: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x16ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16ef18: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x16ef18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ef1c: 0x70ab1389  pcpyld      $v0, $a1, $t3
    ctx->pc = 0x16ef1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 11)));
    // 0x16ef20: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16ef24: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16ef24u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16ef28: 0x71632b89  pcpyld      $a1, $t3, $v1
    ctx->pc = 0x16ef28u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x16ef2c: 0x881818  mult        $v1, $a0, $t0
    ctx->pc = 0x16ef2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16ef30: 0x70a22cc8  ppacw       $a1, $a1, $v0
    ctx->pc = 0x16ef30u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x16ef34: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x16ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x16ef38: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x16ef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x16ef3c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x16ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x16ef40: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x16ef40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ef44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ef48: 0x71631389  pcpyld      $v0, $t3, $v1
    ctx->pc = 0x16ef48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x16ef4c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x16ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16ef50: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x16ef50u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x16ef54: 0x71641b89  pcpyld      $v1, $t3, $a0
    ctx->pc = 0x16ef54u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 4)));
    // 0x16ef58: 0xc82018  mult        $a0, $a2, $t0
    ctx->pc = 0x16ef58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16ef5c: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x16ef5cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16ef60: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x16ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x16ef64: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x16ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x16ef68: 0x8c3021  addu        $a2, $a0, $t4
    ctx->pc = 0x16ef68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x16ef6c: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x16ef6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16ef70: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x16ef70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16ef74: 0x714b2389  pcpyld      $a0, $t2, $t3
    ctx->pc = 0x16ef74u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x16ef78: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x16ef78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16ef7c: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x16ef7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x16ef80: 0x71461389  pcpyld      $v0, $t2, $a2
    ctx->pc = 0x16ef80u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 6)));
    // 0x16ef84: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x16ef84u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x16ef88: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x16ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x16ef8c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x16ef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x16ef90: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x16ef90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x16ef94: 0x4be609ec  vsub.xyzw   $vf7, $vf1, $vf6
    ctx->pc = 0x16ef94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16ef98: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x16ef98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x16ef9c: 0x4be6116c  vsub.xyzw   $vf5, $vf2, $vf6
    ctx->pc = 0x16ef9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16efa0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x16efa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16efa4: 0x4be6092c  vsub.xyzw   $vf4, $vf1, $vf6
    ctx->pc = 0x16efa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16efa8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16efa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16efac: 0x4be610ec  vsub.xyzw   $vf3, $vf2, $vf6
    ctx->pc = 0x16efacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16efb0: 0x4bc33afe  vopmula.xyz $ACC, $vf7, $vf3
    ctx->pc = 0x16efb0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]);
    // 0x16efb4: 0x4bc718ae  vopmsub.xyz $vf2, $vf3, $vf7
    ctx->pc = 0x16efb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16efb8: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16efb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16efbc: 0x4be240aa  vmul.xyzw   $vf2, $vf8, $vf2
    ctx->pc = 0x16efbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16efc0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16efc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16efc4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16efc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16efc8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16efc8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16efcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16efccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16efd0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16efd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16efd4: 0x0  nop
    ctx->pc = 0x16efd4u;
    // NOP
    // 0x16efd8: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x16EFD8u;
    {
        const bool branch_taken_0x16efd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16efd8) {
            ctx->pc = 0x16EFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16EFD8u;
            // 0x16efdc: 0x7a040000  lq          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F078u;
            goto label_16f078;
        }
    }
    ctx->pc = 0x16EFE0u;
    // 0x16efe0: 0x4bc41afe  vopmula.xyz $ACC, $vf3, $vf4
    ctx->pc = 0x16efe0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]);
    // 0x16efe4: 0x4bc320ae  vopmsub.xyz $vf2, $vf4, $vf3
    ctx->pc = 0x16efe4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16efe8: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16efe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16efec: 0x4be240aa  vmul.xyzw   $vf2, $vf8, $vf2
    ctx->pc = 0x16efecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eff0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16eff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eff4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16eff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16eff8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16eff8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16effc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16effcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f000: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16f000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f004: 0x0  nop
    ctx->pc = 0x16f004u;
    // NOP
    // 0x16f008: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x16F008u;
    {
        const bool branch_taken_0x16f008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f008) {
            ctx->pc = 0x16F00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F008u;
            // 0x16f00c: 0x7a040000  lq          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F078u;
            goto label_16f078;
        }
    }
    ctx->pc = 0x16F010u;
    // 0x16f010: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x16f010u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x16f014: 0x4bc428ae  vopmsub.xyz $vf2, $vf5, $vf4
    ctx->pc = 0x16f014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16f018: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16f018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16f01c: 0x4be240aa  vmul.xyzw   $vf2, $vf8, $vf2
    ctx->pc = 0x16f01cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16f020: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16f020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16f024: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16f024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16f028: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x16f028u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16f02c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x16f02cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f030: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16f030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f034: 0x0  nop
    ctx->pc = 0x16f034u;
    // NOP
    // 0x16f038: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x16F038u;
    {
        const bool branch_taken_0x16f038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f038) {
            ctx->pc = 0x16F03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F038u;
            // 0x16f03c: 0x7a040000  lq          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F078u;
            goto label_16f078;
        }
    }
    ctx->pc = 0x16F040u;
    // 0x16f040: 0x4bc72afe  vopmula.xyz $ACC, $vf5, $vf7
    ctx->pc = 0x16f040u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[7]);
    // 0x16f044: 0x4bc538ae  vopmsub.xyz $vf2, $vf7, $vf5
    ctx->pc = 0x16f044u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x16f048: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x16f048u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16f04c: 0x4be240aa  vmul.xyzw   $vf2, $vf8, $vf2
    ctx->pc = 0x16f04cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16f050: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16f050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16f054: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16f054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16f058: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x16f058u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16f05c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x16f05cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f060: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16f060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f064: 0x0  nop
    ctx->pc = 0x16f064u;
    // NOP
    // 0x16f068: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x16F068u;
    {
        const bool branch_taken_0x16f068 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F068u;
            // 0x16f06c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f068) {
            ctx->pc = 0x16F140u;
            goto label_16f140;
        }
    }
    ctx->pc = 0x16F070u;
    // 0x16f070: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x16f070u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16f074: 0x0  nop
    ctx->pc = 0x16f074u;
    // NOP
label_16f078:
    // 0x16f078: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x16f078u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16f07c: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x16f07cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16f080: 0x7ba70110  lq          $a3, 0x110($sp)
    ctx->pc = 0x16f080u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16f084: 0xc05ba1c  jal         func_16E870
    ctx->pc = 0x16F084u;
    SET_GPR_U32(ctx, 31, 0x16F08Cu);
    ctx->pc = 0x16F088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F084u;
            // 0x16f088: 0x7ba80120  lq          $t0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E870u;
    if (runtime->hasFunction(0x16E870u)) {
        auto targetFn = runtime->lookupFunction(0x16E870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F08Cu; }
        if (ctx->pc != 0x16F08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16e870_0x16ebe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F08Cu; }
        if (ctx->pc != 0x16F08Cu) { return; }
    }
    ctx->pc = 0x16F08Cu;
    // 0x16f08c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x16f08cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_16f090:
    // 0x16f090: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x16f090u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16f094: 0xdba10130  lqc2        $vf1, 0x130($sp)
    ctx->pc = 0x16f094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16f098: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x16f098u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16f09c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x16f09cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16f0a0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x16f0a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16f0a4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x16f0a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16f0a8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16f0a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16f0ac: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x16f0acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16f0b0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16f0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16f0b4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x16f0b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16f0b8: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x16f0b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16f0bc: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x16f0bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16f0c0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x16f0c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16f0c4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x16f0c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16f0c8: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x16f0c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x16f0cc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16f0ccu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16f0d0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16f0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16f0d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16f0d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f0d8: 0x46150103  div.s       $f4, $f0, $f21
    ctx->pc = 0x16f0d8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[21];
    // 0x16f0dc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x16f0dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16f0e0: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x16f0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x16f0e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16f0e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16f0e8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x16f0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f0ec: 0x0  nop
    ctx->pc = 0x16f0ecu;
    // NOP
    // 0x16f0f0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x16F0F0u;
    {
        const bool branch_taken_0x16f0f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0F0u;
            // 0x16f0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0f0) {
            ctx->pc = 0x16F140u;
            goto label_16f140;
        }
    }
    ctx->pc = 0x16F0F8u;
    // 0x16f0f8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x16f0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x16f0fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16f0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f100: 0x46010044  c1          0x10044
    ctx->pc = 0x16f100u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x16f104: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x16f104u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x16f108: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16f108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16f10c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f110: 0x0  nop
    ctx->pc = 0x16f110u;
    // NOP
    // 0x16f114: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x16F114u;
    {
        const bool branch_taken_0x16f114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F114u;
            // 0x16f118: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f114) {
            ctx->pc = 0x16F144u;
            goto label_16f144;
        }
    }
    ctx->pc = 0x16F11Cu;
    // 0x16f11c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x16f11cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f120: 0x0  nop
    ctx->pc = 0x16f120u;
    // NOP
    // 0x16f124: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16F124u;
    {
        const bool branch_taken_0x16f124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F124u;
            // 0x16f128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f124) {
            ctx->pc = 0x16F138u;
            goto label_16f138;
        }
    }
    ctx->pc = 0x16F12Cu;
    // 0x16f12c: 0x0  nop
    ctx->pc = 0x16f12cu;
    // NOP
label_16f130:
    // 0x16f130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F130u;
    {
        const bool branch_taken_0x16f130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F130u;
            // 0x16f134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f130) {
            ctx->pc = 0x16F140u;
            goto label_16f140;
        }
    }
    ctx->pc = 0x16F138u;
label_16f138:
    // 0x16f138: 0x46150803  div.s       $f0, $f1, $f21
    ctx->pc = 0x16f138u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[21];
    // 0x16f13c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x16f13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_16f140:
    // 0x16f140: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x16f140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_16f144:
    // 0x16f144: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x16f144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16f148: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x16f148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x16f14c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x16f14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f150: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x16f150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16f154: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x16f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16f158: 0x3e00008  jr          $ra
    ctx->pc = 0x16F158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F158u;
            // 0x16f15c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EC48u: goto label_16ec48;
            case 0x16EC50u: goto label_16ec50;
            case 0x16EEA0u: goto label_16eea0;
            case 0x16EEB8u: goto label_16eeb8;
            case 0x16F078u: goto label_16f078;
            case 0x16F090u: goto label_16f090;
            case 0x16F130u: goto label_16f130;
            case 0x16F138u: goto label_16f138;
            case 0x16F140u: goto label_16f140;
            case 0x16F144u: goto label_16f144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F160u;
}
