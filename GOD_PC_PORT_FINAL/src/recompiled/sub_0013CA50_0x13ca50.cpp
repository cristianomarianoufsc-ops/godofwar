#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CA50
// Address: 0x13ca50 - 0x13cff0
void sub_0013CA50_0x13ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CA50_0x13ca50");
#endif

    ctx->pc = 0x13ca50u;

    // 0x13ca50: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x13ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x13ca54: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x13ca54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x13ca58: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x13ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x13ca5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13ca5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca60: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x13ca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x13ca64: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x13ca64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca68: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x13ca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x13ca6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13ca6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca70: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x13ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x13ca74: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x13ca74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x13ca78: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13ca78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca7c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x13ca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x13ca80: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x13ca80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13ca88: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x13ca88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x13ca8c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x13ca8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13ca90: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x13ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x13ca94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ca98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ca9c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13ca9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13caa0: 0x4be20b3c  vmove.xyzw  $vf2, $vf1
    ctx->pc = 0x13caa0u;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x13caa4: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x13caa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13caa8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x13caa8u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x13caac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13caacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13cab0: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x13cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13cab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13cab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cab8: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x13cab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x13cabc: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x13cabcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x13cac0: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x13cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x13cac4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cacc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13caccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cad0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x13cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13cad4: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13cad4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cad8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x13cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13cadc: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x13cadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13cae0: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x13cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x13cae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cae8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13cae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13caec: 0x0  nop
    ctx->pc = 0x13caecu;
    // NOP
    // 0x13caf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13CAF0u;
    {
        const bool branch_taken_0x13caf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CAF0u;
            // 0x13caf4: 0xdba50070  lqc2        $vf5, 0x70($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13caf0) {
            ctx->pc = 0x13CB00u;
            goto label_13cb00;
        }
    }
    ctx->pc = 0x13CAF8u;
    // 0x13caf8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13caf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13cafc: 0x0  nop
    ctx->pc = 0x13cafcu;
    // NOP
label_13cb00:
    // 0x13cb00: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x13cb00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x13cb04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13cb04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb08: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x13cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x13cb0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13cb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cb14: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x13cb14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cb18: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x13CB18u;
    {
        const bool branch_taken_0x13cb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CB18u;
            // 0x13cb1c: 0x9625000e  lhu         $a1, 0xE($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb18) {
            ctx->pc = 0x13CBF8u;
            goto label_13cbf8;
        }
    }
    ctx->pc = 0x13CB20u;
    // 0x13cb20: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x13cb20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb24: 0x0  nop
    ctx->pc = 0x13cb24u;
    // NOP
label_13cb28:
    // 0x13cb28: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x13cb28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x13cb2c: 0x10a20029  beq         $a1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x13CB2Cu;
    {
        const bool branch_taken_0x13cb2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x13CB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CB2Cu;
            // 0x13cb30: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb2c) {
            ctx->pc = 0x13CBD4u;
            goto label_13cbd4;
        }
    }
    ctx->pc = 0x13CB34u;
    // 0x13cb34: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x13cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x13cb38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cb3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13cb3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cb40: 0x4be428aa  vmul.xyzw   $vf2, $vf5, $vf4
    ctx->pc = 0x13cb40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13cb44: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13cb44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cb48: 0x4a221082  vaddz.w     $vf2, $vf2, $vf2z
    ctx->pc = 0x13cb48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13cb4c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x13cb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13cb50: 0x4b020843  vaddw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x13cb50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cb54: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x13cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13cb58: 0x48b31800  qmtc2.ni    $s3, $vf3
    ctx->pc = 0x13cb58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
    // 0x13cb5c: 0x4b030844  vsubx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x13cb5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cb60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13cb60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cb64: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13cb64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13cb68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13cb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13cb6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cb6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cb70: 0x0  nop
    ctx->pc = 0x13cb70u;
    // NOP
    // 0x13cb74: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x13CB74u;
    {
        const bool branch_taken_0x13cb74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CB74u;
            // 0x13cb78: 0xdba20060  lqc2        $vf2, 0x60($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb74) {
            ctx->pc = 0x13CC68u;
            goto label_13cc68;
        }
    }
    ctx->pc = 0x13CB7Cu;
    // 0x13cb7c: 0x4be410aa  vmul.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x13cb7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13cb80: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13cb80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cb84: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13cb84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cb88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13cb8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13cb8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13cb90: 0x4b020844  vsubx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x13cb90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cb94: 0x4b030858  vmulx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x13cb94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cb98: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x13cb98u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13cb9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13cb9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cba0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cba4: 0x0  nop
    ctx->pc = 0x13cba4u;
    // NOP
    // 0x13cba8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13CBA8u;
    {
        const bool branch_taken_0x13cba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBA8u;
            // 0x13cbac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cba8) {
            ctx->pc = 0x13CBB8u;
            goto label_13cbb8;
        }
    }
    ctx->pc = 0x13CBB0u;
    // 0x13cbb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13cbb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cbb4: 0x0  nop
    ctx->pc = 0x13cbb4u;
    // NOP
label_13cbb8:
    // 0x13cbb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13CBB8u;
    {
        const bool branch_taken_0x13cbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBB8u;
            // 0x13cbbc: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbb8) {
            ctx->pc = 0x13CBD4u;
            goto label_13cbd4;
        }
    }
    ctx->pc = 0x13CBC0u;
    // 0x13cbc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13CBC0u;
    {
        const bool branch_taken_0x13cbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cbc0) {
            ctx->pc = 0x13CBC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBC0u;
            // 0x13cbc4: 0x96240006  lhu         $a0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13CBD8u;
            goto label_13cbd8;
        }
    }
    ctx->pc = 0x13CBC8u;
    // 0x13cbc8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x13cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x13cbcc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13cbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13cbd0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x13cbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_13cbd4:
    // 0x13cbd4: 0x96240006  lhu         $a0, 0x6($s1)
    ctx->pc = 0x13cbd4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_13cbd8:
    // 0x13cbd8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x13cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13cbdc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x13cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x13cbe0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13cbe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13cbe4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13cbe8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13cbe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cbec: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x13cbecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13cbf0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x13CBF0u;
    {
        const bool branch_taken_0x13cbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBF0u;
            // 0x13cbf4: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbf0) {
            ctx->pc = 0x13CB28u;
            runtime->cooperativeGuestYield();
            goto label_13cb28;
        }
    }
    ctx->pc = 0x13CBF8u;
label_13cbf8:
    // 0x13cbf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cbfc: 0x14c2001c  bne         $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13CBFCu;
    {
        const bool branch_taken_0x13cbfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBFCu;
            // 0x13cc00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbfc) {
            ctx->pc = 0x13CC70u;
            goto label_13cc70;
        }
    }
    ctx->pc = 0x13CC04u;
    // 0x13cc04: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x13cc04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x13cc08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cc0c: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x13cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x13cc10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cc14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13cc18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13cc1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13cc20: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x13cc20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cc24: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x13cc24u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cc28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13cc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13cc2c: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x13CC2Cu;
    SET_GPR_U32(ctx, 31, 0x13CC34u);
    ctx->pc = 0x13CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC2Cu;
            // 0x13cc30: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC34u; }
        if (ctx->pc != 0x13CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13cff0_0x13d268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC34u; }
        if (ctx->pc != 0x13CC34u) { return; }
    }
    ctx->pc = 0x13CC34u;
    // 0x13cc34: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x13CC34u;
    {
        const bool branch_taken_0x13cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC34u;
            // 0x13cc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc34) {
            ctx->pc = 0x13CFC4u;
            goto label_13cfc4;
        }
    }
    ctx->pc = 0x13CC3Cu;
    // 0x13cc3c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13cc3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cc40: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x13cc40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cc44: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x13cc44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13cc48: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x13cc48u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13cc4c: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x13cc4cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cc50: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x13cc50u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13cc54: 0xc04f516  jal         func_13D458
    ctx->pc = 0x13CC54u;
    SET_GPR_U32(ctx, 31, 0x13CC5Cu);
    ctx->pc = 0x13CC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC54u;
            // 0x13cc58: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D458u;
    if (runtime->hasFunction(0x13D458u)) {
        auto targetFn = runtime->lookupFunction(0x13D458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC5Cu; }
        if (ctx->pc != 0x13CC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d458_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC5Cu; }
        if (ctx->pc != 0x13CC5Cu) { return; }
    }
    ctx->pc = 0x13CC5Cu;
    // 0x13cc5c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13CC5Cu;
    {
        const bool branch_taken_0x13cc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC5Cu;
            // 0x13cc60: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc5c) {
            ctx->pc = 0x13CCE0u;
            goto label_13cce0;
        }
    }
    ctx->pc = 0x13CC64u;
    // 0x13cc64: 0x0  nop
    ctx->pc = 0x13cc64u;
    // NOP
label_13cc68:
    // 0x13cc68: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x13CC68u;
    {
        const bool branch_taken_0x13cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC68u;
            // 0x13cc6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc68) {
            ctx->pc = 0x13CFC4u;
            goto label_13cfc4;
        }
    }
    ctx->pc = 0x13CC70u;
label_13cc70:
    // 0x13cc70: 0x14c20020  bne         $a2, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13CC70u;
    {
        const bool branch_taken_0x13cc70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC70u;
            // 0x13cc74: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc70) {
            ctx->pc = 0x13CCF4u;
            goto label_13ccf4;
        }
    }
    ctx->pc = 0x13CC78u;
    // 0x13cc78: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x13cc78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x13cc7c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x13cc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13cc80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13cc84: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x13cc88: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13cc88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13cc8c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13cc90: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x13cc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13cc94: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13cc98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cc9c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x13cc9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cca0: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x13cca0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13cca4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x13cca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13cca8: 0xc04f49a  jal         func_13D268
    ctx->pc = 0x13CCA8u;
    SET_GPR_U32(ctx, 31, 0x13CCB0u);
    ctx->pc = 0x13CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CCA8u;
            // 0x13ccac: 0x78c60000  lq          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D268u;
    if (runtime->hasFunction(0x13D268u)) {
        auto targetFn = runtime->lookupFunction(0x13D268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CCB0u; }
        if (ctx->pc != 0x13CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D268_0x13d268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CCB0u; }
        if (ctx->pc != 0x13CCB0u) { return; }
    }
    ctx->pc = 0x13CCB0u;
    // 0x13ccb0: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x13CCB0u;
    {
        const bool branch_taken_0x13ccb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CCB0u;
            // 0x13ccb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ccb0) {
            ctx->pc = 0x13CFC4u;
            goto label_13cfc4;
        }
    }
    ctx->pc = 0x13CCB8u;
    // 0x13ccb8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x13ccb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13ccbc: 0x7ba60050  lq          $a2, 0x50($sp)
    ctx->pc = 0x13ccbcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ccc0: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x13ccc0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13ccc4: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x13ccc4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13ccc8: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x13ccc8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13cccc: 0xc04f4ca  jal         func_13D328
    ctx->pc = 0x13CCCCu;
    SET_GPR_U32(ctx, 31, 0x13CCD4u);
    ctx->pc = 0x13CCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CCCCu;
            // 0x13ccd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D328u;
    if (runtime->hasFunction(0x13D328u)) {
        auto targetFn = runtime->lookupFunction(0x13D328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CCD4u; }
        if (ctx->pc != 0x13CCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d328_0x13d458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CCD4u; }
        if (ctx->pc != 0x13CCD4u) { return; }
    }
    ctx->pc = 0x13CCD4u;
    // 0x13ccd4: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x13CCD4u;
    {
        const bool branch_taken_0x13ccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CCD4u;
            // 0x13ccd8: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ccd4) {
            ctx->pc = 0x13CC68u;
            runtime->cooperativeGuestYield();
            goto label_13cc68;
        }
    }
    ctx->pc = 0x13CCDCu;
    // 0x13ccdc: 0x0  nop
    ctx->pc = 0x13ccdcu;
    // NOP
label_13cce0:
    // 0x13cce0: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x13cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x13cce4: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x13cce4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13cce8: 0xc4540020  lwc1        $f20, 0x20($v0)
    ctx->pc = 0x13cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13ccec: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x13ccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x13ccf0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x13ccf0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13ccf4:
    // 0x13ccf4: 0x48b30800  qmtc2.ni    $s3, $vf1
    ctx->pc = 0x13ccf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
    // 0x13ccf8: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x13ccf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ccfc: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x13ccfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cd00: 0x4be128ec  vsub.xyzw   $vf3, $vf5, $vf1
    ctx->pc = 0x13cd00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13cd04: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x13cd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13cd08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13cd08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd0c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13cd10: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x13CD10u;
    {
        const bool branch_taken_0x13cd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD10u;
            // 0x13cd14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd10) {
            ctx->pc = 0x13CE60u;
            goto label_13ce60;
        }
    }
    ctx->pc = 0x13CD18u;
    // 0x13cd18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13cd1c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x13cd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x13cd20: 0x2448f170  addiu       $t0, $v0, -0xE90
    ctx->pc = 0x13cd20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x13cd24: 0x6a840007  ldl         $a0, 0x7($s4)
    ctx->pc = 0x13cd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13cd28: 0x6e840000  ldr         $a0, 0x0($s4)
    ctx->pc = 0x13cd28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13cd2c: 0x6a85000f  ldl         $a1, 0xF($s4)
    ctx->pc = 0x13cd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13cd30: 0x6e850008  ldr         $a1, 0x8($s4)
    ctx->pc = 0x13cd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13cd34: 0x6a870017  ldl         $a3, 0x17($s4)
    ctx->pc = 0x13cd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13cd38: 0x6e870010  ldr         $a3, 0x10($s4)
    ctx->pc = 0x13cd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13cd3c: 0xb1040007  sdl         $a0, 0x7($t0)
    ctx->pc = 0x13cd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd40: 0xb5040000  sdr         $a0, 0x0($t0)
    ctx->pc = 0x13cd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd44: 0xb105000f  sdl         $a1, 0xF($t0)
    ctx->pc = 0x13cd44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd48: 0xb5050008  sdr         $a1, 0x8($t0)
    ctx->pc = 0x13cd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd4c: 0xb1070017  sdl         $a3, 0x17($t0)
    ctx->pc = 0x13cd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd50: 0xb5070010  sdr         $a3, 0x10($t0)
    ctx->pc = 0x13cd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd54: 0x6a84001f  ldl         $a0, 0x1F($s4)
    ctx->pc = 0x13cd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13cd58: 0x6e840018  ldr         $a0, 0x18($s4)
    ctx->pc = 0x13cd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13cd5c: 0x6a850027  ldl         $a1, 0x27($s4)
    ctx->pc = 0x13cd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13cd60: 0x6e850020  ldr         $a1, 0x20($s4)
    ctx->pc = 0x13cd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13cd64: 0xb104001f  sdl         $a0, 0x1F($t0)
    ctx->pc = 0x13cd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd68: 0xb5040018  sdr         $a0, 0x18($t0)
    ctx->pc = 0x13cd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd6c: 0xb1050027  sdl         $a1, 0x27($t0)
    ctx->pc = 0x13cd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd70: 0xb5050020  sdr         $a1, 0x20($t0)
    ctx->pc = 0x13cd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cd74: 0x24c37790  addiu       $v1, $a2, 0x7790
    ctx->pc = 0x13cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13cd78: 0xf8620010  sqc2        $vf2, 0x10($v1)
    ctx->pc = 0x13cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13cd7c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x13cd7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13cd80: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x13cd80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13cd84: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13cd84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13cd88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13cd8c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13cd90: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13cd94: 0x9625000a  lhu         $a1, 0xA($s1)
    ctx->pc = 0x13cd94u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x13cd98: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CD98u;
    {
        const bool branch_taken_0x13cd98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD98u;
            // 0x13cd9c: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd98) {
            ctx->pc = 0x13CDA8u;
            goto label_13cda8;
        }
    }
    ctx->pc = 0x13CDA0u;
    // 0x13cda0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13CDA0u;
    {
        const bool branch_taken_0x13cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CDA0u;
            // 0x13cda4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cda0) {
            ctx->pc = 0x13CDC4u;
            goto label_13cdc4;
        }
    }
    ctx->pc = 0x13CDA8u;
label_13cda8:
    // 0x13cda8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x13cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x13cdac: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x13cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x13cdb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13cdb4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x13cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x13cdb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13cdb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cdbc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13cdbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13cdc0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13cdc4:
    // 0x13cdc4: 0x24c27790  addiu       $v0, $a2, 0x7790
    ctx->pc = 0x13cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13cdc8: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x13cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x13cdcc: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x13cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x13cdd0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CDD0u;
    {
        const bool branch_taken_0x13cdd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CDD0u;
            // 0x13cdd4: 0x96250008  lhu         $a1, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdd0) {
            ctx->pc = 0x13CDE0u;
            goto label_13cde0;
        }
    }
    ctx->pc = 0x13CDD8u;
    // 0x13cdd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13CDD8u;
    {
        const bool branch_taken_0x13cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CDD8u;
            // 0x13cddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdd8) {
            ctx->pc = 0x13CE00u;
            goto label_13ce00;
        }
    }
    ctx->pc = 0x13CDE0u;
label_13cde0:
    // 0x13cde0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x13cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x13cde4: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x13cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x13cde8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13cdec: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x13cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x13cdf0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13cdf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cdf4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13cdf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13cdf8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cdfc: 0x0  nop
    ctx->pc = 0x13cdfcu;
    // NOP
label_13ce00:
    // 0x13ce00: 0x24c67790  addiu       $a2, $a2, 0x7790
    ctx->pc = 0x13ce00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13ce04: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x13ce04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x13ce08: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x13ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x13ce0c: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x13ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x13ce10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ce14: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x13ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13ce18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13ce18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ce20: 0xa4c20034  sh          $v0, 0x34($a2)
    ctx->pc = 0x13ce20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x13ce24: 0x8c67004c  lw          $a3, 0x4C($v1)
    ctx->pc = 0x13ce24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x13ce28: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x13ce28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ce2c: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x13ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x13ce30: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13ce30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13ce34: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13ce34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ce38: 0xacc70028  sw          $a3, 0x28($a2)
    ctx->pc = 0x13ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 7));
    // 0x13ce3c: 0xa4c30036  sh          $v1, 0x36($a2)
    ctx->pc = 0x13ce3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x13ce40: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13ce44: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x13ce44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x13ce48: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13ce4c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x13ce4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ce50: 0x40f809  jalr        $v0
    ctx->pc = 0x13CE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CE58u);
        ctx->pc = 0x13CE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CE50u;
            // 0x13ce54: 0xacc30038  sw          $v1, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13CE58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CB00u: goto label_13cb00;
            case 0x13CB28u: goto label_13cb28;
            case 0x13CBB8u: goto label_13cbb8;
            case 0x13CBD4u: goto label_13cbd4;
            case 0x13CBD8u: goto label_13cbd8;
            case 0x13CBF8u: goto label_13cbf8;
            case 0x13CC68u: goto label_13cc68;
            case 0x13CC70u: goto label_13cc70;
            case 0x13CCE0u: goto label_13cce0;
            case 0x13CCF4u: goto label_13ccf4;
            case 0x13CDA8u: goto label_13cda8;
            case 0x13CDC4u: goto label_13cdc4;
            case 0x13CDE0u: goto label_13cde0;
            case 0x13CE00u: goto label_13ce00;
            case 0x13CE60u: goto label_13ce60;
            case 0x13CF08u: goto label_13cf08;
            case 0x13CF28u: goto label_13cf28;
            case 0x13CF44u: goto label_13cf44;
            case 0x13CF60u: goto label_13cf60;
            case 0x13CFC0u: goto label_13cfc0;
            case 0x13CFC4u: goto label_13cfc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13CE58u; }
            if (ctx->pc != 0x13CE58u) { return; }
        }
        }
    }
    ctx->pc = 0x13CE58u;
    // 0x13ce58: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x13ce58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x13ce5c: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x13ce5cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13ce60:
    // 0x13ce60: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x13ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13ce64: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x13CE64u;
    {
        const bool branch_taken_0x13ce64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CE64u;
            // 0x13ce68: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce64) {
            ctx->pc = 0x13CFC0u;
            goto label_13cfc0;
        }
    }
    ctx->pc = 0x13CE6Cu;
    // 0x13ce6c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x13ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x13ce70: 0x2448f170  addiu       $t0, $v0, -0xE90
    ctx->pc = 0x13ce70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x13ce74: 0x6aa50007  ldl         $a1, 0x7($s5)
    ctx->pc = 0x13ce74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13ce78: 0x6ea50000  ldr         $a1, 0x0($s5)
    ctx->pc = 0x13ce78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13ce7c: 0x6aa6000f  ldl         $a2, 0xF($s5)
    ctx->pc = 0x13ce7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13ce80: 0x6ea60008  ldr         $a2, 0x8($s5)
    ctx->pc = 0x13ce80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13ce84: 0x6aa70017  ldl         $a3, 0x17($s5)
    ctx->pc = 0x13ce84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13ce88: 0x6ea70010  ldr         $a3, 0x10($s5)
    ctx->pc = 0x13ce88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13ce8c: 0xb1050007  sdl         $a1, 0x7($t0)
    ctx->pc = 0x13ce8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce90: 0xb5050000  sdr         $a1, 0x0($t0)
    ctx->pc = 0x13ce90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce94: 0xb106000f  sdl         $a2, 0xF($t0)
    ctx->pc = 0x13ce94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce98: 0xb5060008  sdr         $a2, 0x8($t0)
    ctx->pc = 0x13ce98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ce9c: 0xb1070017  sdl         $a3, 0x17($t0)
    ctx->pc = 0x13ce9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cea0: 0xb5070010  sdr         $a3, 0x10($t0)
    ctx->pc = 0x13cea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cea4: 0x6aa5001f  ldl         $a1, 0x1F($s5)
    ctx->pc = 0x13cea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13cea8: 0x6ea50018  ldr         $a1, 0x18($s5)
    ctx->pc = 0x13cea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13ceac: 0x6aa60027  ldl         $a2, 0x27($s5)
    ctx->pc = 0x13ceacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13ceb0: 0x6ea60020  ldr         $a2, 0x20($s5)
    ctx->pc = 0x13ceb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13ceb4: 0xb105001f  sdl         $a1, 0x1F($t0)
    ctx->pc = 0x13ceb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13ceb8: 0xb5050018  sdr         $a1, 0x18($t0)
    ctx->pc = 0x13ceb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cebc: 0xb1060027  sdl         $a2, 0x27($t0)
    ctx->pc = 0x13cebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cec0: 0xb5060020  sdr         $a2, 0x20($t0)
    ctx->pc = 0x13cec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cec4: 0x24837790  addiu       $v1, $a0, 0x7790
    ctx->pc = 0x13cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30608));
    // 0x13cec8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x13cec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13cecc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13ceccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13ced0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13ced0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13ced4: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x13ced4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ced8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x13ced8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cedc: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x13cedcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13cee0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13cee4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13cee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cee8: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x13cee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13ceec: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13cef0: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x13cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x13cef4: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x13cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x13cef8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CEF8u;
    {
        const bool branch_taken_0x13cef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CEF8u;
            // 0x13cefc: 0x96230008  lhu         $v1, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cef8) {
            ctx->pc = 0x13CF08u;
            goto label_13cf08;
        }
    }
    ctx->pc = 0x13CF00u;
    // 0x13cf00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13CF00u;
    {
        const bool branch_taken_0x13cf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CF00u;
            // 0x13cf04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf00) {
            ctx->pc = 0x13CF28u;
            goto label_13cf28;
        }
    }
    ctx->pc = 0x13CF08u;
label_13cf08:
    // 0x13cf08: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x13cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x13cf0c: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x13cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x13cf10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cf14: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13cf14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cf18: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x13cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x13cf1c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13cf1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13cf20: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13cf24: 0x0  nop
    ctx->pc = 0x13cf24u;
    // NOP
label_13cf28:
    // 0x13cf28: 0x24c27790  addiu       $v0, $a2, 0x7790
    ctx->pc = 0x13cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13cf2c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x13cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13cf30: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x13cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x13cf34: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CF34u;
    {
        const bool branch_taken_0x13cf34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CF34u;
            // 0x13cf38: 0x9625000a  lhu         $a1, 0xA($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf34) {
            ctx->pc = 0x13CF44u;
            goto label_13cf44;
        }
    }
    ctx->pc = 0x13CF3Cu;
    // 0x13cf3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13CF3Cu;
    {
        const bool branch_taken_0x13cf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CF3Cu;
            // 0x13cf40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf3c) {
            ctx->pc = 0x13CF60u;
            goto label_13cf60;
        }
    }
    ctx->pc = 0x13CF44u;
label_13cf44:
    // 0x13cf44: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x13cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x13cf48: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x13cf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x13cf4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13cf50: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x13cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x13cf54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13cf54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cf58: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13cf58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13cf5c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x13cf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13cf60:
    // 0x13cf60: 0x24c67790  addiu       $a2, $a2, 0x7790
    ctx->pc = 0x13cf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13cf64: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x13cf64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13cf68: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x13cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13cf6c: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x13cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x13cf70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cf74: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x13cf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x13cf78: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13cf78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cf7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13cf80: 0xa4c20034  sh          $v0, 0x34($a2)
    ctx->pc = 0x13cf80u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x13cf84: 0x8c67004c  lw          $a3, 0x4C($v1)
    ctx->pc = 0x13cf84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x13cf88: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x13cf88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x13cf8c: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x13cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x13cf90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13cf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13cf94: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13cf94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13cf98: 0xacc70028  sw          $a3, 0x28($a2)
    ctx->pc = 0x13cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 7));
    // 0x13cf9c: 0xa4c30036  sh          $v1, 0x36($a2)
    ctx->pc = 0x13cf9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x13cfa0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x13cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13cfa4: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x13cfa4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13cfa8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13cfac: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x13cfacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13cfb0: 0x40f809  jalr        $v0
    ctx->pc = 0x13CFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CFB8u);
        ctx->pc = 0x13CFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CFB0u;
            // 0x13cfb4: 0xacc30038  sw          $v1, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13CFB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CB00u: goto label_13cb00;
            case 0x13CB28u: goto label_13cb28;
            case 0x13CBB8u: goto label_13cbb8;
            case 0x13CBD4u: goto label_13cbd4;
            case 0x13CBD8u: goto label_13cbd8;
            case 0x13CBF8u: goto label_13cbf8;
            case 0x13CC68u: goto label_13cc68;
            case 0x13CC70u: goto label_13cc70;
            case 0x13CCE0u: goto label_13cce0;
            case 0x13CCF4u: goto label_13ccf4;
            case 0x13CDA8u: goto label_13cda8;
            case 0x13CDC4u: goto label_13cdc4;
            case 0x13CDE0u: goto label_13cde0;
            case 0x13CE00u: goto label_13ce00;
            case 0x13CE60u: goto label_13ce60;
            case 0x13CF08u: goto label_13cf08;
            case 0x13CF28u: goto label_13cf28;
            case 0x13CF44u: goto label_13cf44;
            case 0x13CF60u: goto label_13cf60;
            case 0x13CFC0u: goto label_13cfc0;
            case 0x13CFC4u: goto label_13cfc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13CFB8u; }
            if (ctx->pc != 0x13CFB8u) { return; }
        }
        }
    }
    ctx->pc = 0x13CFB8u;
    // 0x13cfb8: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x13cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x13cfbc: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x13cfbcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13cfc0:
    // 0x13cfc0: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x13cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_13cfc4:
    // 0x13cfc4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x13cfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13cfc8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x13cfc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13cfcc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x13cfccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13cfd0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x13cfd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13cfd4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x13cfd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13cfd8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x13cfd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13cfdc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x13cfdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13cfe0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13cfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13cfe4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x13cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CFE8u;
            // 0x13cfec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13CB00u: goto label_13cb00;
            case 0x13CB28u: goto label_13cb28;
            case 0x13CBB8u: goto label_13cbb8;
            case 0x13CBD4u: goto label_13cbd4;
            case 0x13CBD8u: goto label_13cbd8;
            case 0x13CBF8u: goto label_13cbf8;
            case 0x13CC68u: goto label_13cc68;
            case 0x13CC70u: goto label_13cc70;
            case 0x13CCE0u: goto label_13cce0;
            case 0x13CCF4u: goto label_13ccf4;
            case 0x13CDA8u: goto label_13cda8;
            case 0x13CDC4u: goto label_13cdc4;
            case 0x13CDE0u: goto label_13cde0;
            case 0x13CE00u: goto label_13ce00;
            case 0x13CE60u: goto label_13ce60;
            case 0x13CF08u: goto label_13cf08;
            case 0x13CF28u: goto label_13cf28;
            case 0x13CF44u: goto label_13cf44;
            case 0x13CF60u: goto label_13cf60;
            case 0x13CFC0u: goto label_13cfc0;
            case 0x13CFC4u: goto label_13cfc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13CFF0u;
}
