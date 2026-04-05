#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C3C0
// Address: 0x13c3c0 - 0x13c6a0
void sub_0013C3C0_0x13c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C3C0_0x13c3c0");
#endif

    ctx->pc = 0x13c3c0u;

    // 0x13c3c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13c3c4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x13c3c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3c8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x13c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x13c3cc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x13c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x13c3d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3d4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x13c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x13c3d8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13c3d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3dc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x13c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x13c3e0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x13c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x13c3e4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x13c3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x13c3e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13c3ec: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x13c3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x13c3f0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x13c3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x13c3f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13c3f8: 0x950a0008  lhu         $t2, 0x8($t0)
    ctx->pc = 0x13c3f8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x13c3fc: 0x950b000a  lhu         $t3, 0xA($t0)
    ctx->pc = 0x13c3fcu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x13c400: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x13c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x13c404: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x13c404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x13c408: 0x8d250088  lw          $a1, 0x88($t1)
    ctx->pc = 0x13c408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 136)));
    // 0x13c40c: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x13c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x13c410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c414: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13c418: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13c418u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c41c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13c41cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c420: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x13c420u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13c424: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x13c424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c428: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x13c428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c42c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x13c42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c430: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x13c430u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13c434: 0x4a0003bf  vwaitq
    ctx->pc = 0x13c434u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13c438: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x13c438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13c43c: 0x4a0002ff  vnop
    ctx->pc = 0x13c43cu;
    // NOP operation, no action needed for VU0
    // 0x13c440: 0x4a0002ff  vnop
    ctx->pc = 0x13c440u;
    // NOP operation, no action needed for VU0
    // 0x13c444: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x13c444u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x13c448: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13c448u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c44c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x13c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13c450: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13c454: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x13c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13c458: 0x4be4085b  vmulw.xyzw  $vf1, $vf1, $vf4w
    ctx->pc = 0x13c458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c45c: 0x4be1206c  vsub.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x13c45cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13c460: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x13c460u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x13c464: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x13c464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x13c468: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x13c468u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c46c: 0x95050006  lhu         $a1, 0x6($t0)
    ctx->pc = 0x13c46cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x13c470: 0x95170004  lhu         $s7, 0x4($t0)
    ctx->pc = 0x13c470u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x13c474: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x13c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x13c478: 0x8d230050  lw          $v1, 0x50($t1)
    ctx->pc = 0x13c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x13c47c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x13c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13c480: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x13c480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13c484: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13c488: 0x90550000  lbu         $s5, 0x0($v0)
    ctx->pc = 0x13c488u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c48c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C48Cu;
    {
        const bool branch_taken_0x13c48c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C48Cu;
            // 0x13c490: 0x90760000  lbu         $s6, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c48c) {
            ctx->pc = 0x13C4A0u;
            goto label_13c4a0;
        }
    }
    ctx->pc = 0x13C494u;
    // 0x13c494: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13C494u;
    {
        const bool branch_taken_0x13c494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C494u;
            // 0x13c498: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c494) {
            ctx->pc = 0x13C4C0u;
            goto label_13c4c0;
        }
    }
    ctx->pc = 0x13C49Cu;
    // 0x13c49c: 0x0  nop
    ctx->pc = 0x13c49cu;
    // NOP
label_13c4a0:
    // 0x13c4a0: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x13c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x13c4a4: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x13c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x13c4a8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x13c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x13c4ac: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x13c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x13c4b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13c4b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c4b4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13c4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c4b8: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x13c4b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c4bc: 0x0  nop
    ctx->pc = 0x13c4bcu;
    // NOP
label_13c4c0:
    // 0x13c4c0: 0x8d220044  lw          $v0, 0x44($t1)
    ctx->pc = 0x13c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x13c4c4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C4C4u;
    {
        const bool branch_taken_0x13c4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c4c4) {
            ctx->pc = 0x13C4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4C4u;
            // 0x13c4c8: 0x8d220058  lw          $v0, 0x58($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C4D4u;
            goto label_13c4d4;
        }
    }
    ctx->pc = 0x13C4CCu;
    // 0x13c4cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13C4CCu;
    {
        const bool branch_taken_0x13c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4CCu;
            // 0x13c4d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c4cc) {
            ctx->pc = 0x13C4F0u;
            goto label_13c4f0;
        }
    }
    ctx->pc = 0x13C4D4u;
label_13c4d4:
    // 0x13c4d4: 0x8d240048  lw          $a0, 0x48($t1)
    ctx->pc = 0x13c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x13c4d8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x13c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x13c4dc: 0x8d23004c  lw          $v1, 0x4C($t1)
    ctx->pc = 0x13c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x13c4e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13c4e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c4e4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13c4e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13c4e8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x13c4e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c4ec: 0x0  nop
    ctx->pc = 0x13c4ecu;
    // NOP
label_13c4f0:
    // 0x13c4f0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13c4f4: 0x24507790  addiu       $s0, $v0, 0x7790
    ctx->pc = 0x13c4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x13c4f8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x13c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13c4fc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x13c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x13c500: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x13c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13c504: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x13C504u;
    {
        const bool branch_taken_0x13c504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C504u;
            // 0x13c508: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c504) {
            ctx->pc = 0x13C5B0u;
            goto label_13c5b0;
        }
    }
    ctx->pc = 0x13C50Cu;
    // 0x13c50c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x13c50cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c510: 0x244af170  addiu       $t2, $v0, -0xE90
    ctx->pc = 0x13c510u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x13c514: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x13c514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c518: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x13c518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c51c: 0x68c7000f  ldl         $a3, 0xF($a2)
    ctx->pc = 0x13c51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13c520: 0x6cc70008  ldr         $a3, 0x8($a2)
    ctx->pc = 0x13c520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13c524: 0x68c80017  ldl         $t0, 0x17($a2)
    ctx->pc = 0x13c524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13c528: 0x6cc80010  ldr         $t0, 0x10($a2)
    ctx->pc = 0x13c528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13c52c: 0xb1440007  sdl         $a0, 0x7($t2)
    ctx->pc = 0x13c52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c530: 0xb5440000  sdr         $a0, 0x0($t2)
    ctx->pc = 0x13c530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c534: 0xb147000f  sdl         $a3, 0xF($t2)
    ctx->pc = 0x13c534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c538: 0xb5470008  sdr         $a3, 0x8($t2)
    ctx->pc = 0x13c538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c53c: 0xb1480017  sdl         $t0, 0x17($t2)
    ctx->pc = 0x13c53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c540: 0xb5480010  sdr         $t0, 0x10($t2)
    ctx->pc = 0x13c540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c544: 0x68c4001f  ldl         $a0, 0x1F($a2)
    ctx->pc = 0x13c544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c548: 0x6cc40018  ldr         $a0, 0x18($a2)
    ctx->pc = 0x13c548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c54c: 0x68c70027  ldl         $a3, 0x27($a2)
    ctx->pc = 0x13c54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13c550: 0x6cc70020  ldr         $a3, 0x20($a2)
    ctx->pc = 0x13c550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13c554: 0xb144001f  sdl         $a0, 0x1F($t2)
    ctx->pc = 0x13c554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c558: 0xb5440018  sdr         $a0, 0x18($t2)
    ctx->pc = 0x13c558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c55c: 0xb1470027  sdl         $a3, 0x27($t2)
    ctx->pc = 0x13c55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c560: 0xb5470020  sdr         $a3, 0x20($t2)
    ctx->pc = 0x13c560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c564: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x13c564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x13c568: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x13c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13c56c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x13c56cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x13c570: 0xae140030  sw          $s4, 0x30($s0)
    ctx->pc = 0x13c570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 20));
    // 0x13c574: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x13c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x13c578: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13c578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13c57c: 0x8d230054  lw          $v1, 0x54($t1)
    ctx->pc = 0x13c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x13c580: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x13c580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x13c584: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x13c584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x13c588: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13c588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13c58c: 0xa6160034  sh          $s6, 0x34($s0)
    ctx->pc = 0x13c58cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 22));
    // 0x13c590: 0xa6150036  sh          $s5, 0x36($s0)
    ctx->pc = 0x13c590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 21));
    // 0x13c594: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x13c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13c598: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13c598u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c59c: 0x40f809  jalr        $v0
    ctx->pc = 0x13C59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C5A4u);
        ctx->pc = 0x13C5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C59Cu;
            // 0x13c5a0: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13C5A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C4A0u: goto label_13c4a0;
            case 0x13C4C0u: goto label_13c4c0;
            case 0x13C4D4u: goto label_13c4d4;
            case 0x13C4F0u: goto label_13c4f0;
            case 0x13C5B0u: goto label_13c5b0;
            case 0x13C668u: goto label_13c668;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13C5A4u; }
            if (ctx->pc != 0x13C5A4u) { return; }
        }
        }
    }
    ctx->pc = 0x13C5A4u;
    // 0x13c5a4: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x13c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x13c5a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13c5a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13c5ac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x13c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_13c5b0:
    // 0x13c5b0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x13c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13c5b4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x13C5B4u;
    {
        const bool branch_taken_0x13c5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5B4u;
            // 0x13c5b8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5b4) {
            ctx->pc = 0x13C668u;
            goto label_13c668;
        }
    }
    ctx->pc = 0x13C5BCu;
    // 0x13c5bc: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x13c5bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13c5c0: 0x2446f170  addiu       $a2, $v0, -0xE90
    ctx->pc = 0x13c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x13c5c4: 0x6a630007  ldl         $v1, 0x7($s3)
    ctx->pc = 0x13c5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13c5c8: 0x6e630000  ldr         $v1, 0x0($s3)
    ctx->pc = 0x13c5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13c5cc: 0x6a64000f  ldl         $a0, 0xF($s3)
    ctx->pc = 0x13c5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c5d0: 0x6e640008  ldr         $a0, 0x8($s3)
    ctx->pc = 0x13c5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c5d4: 0x6a650017  ldl         $a1, 0x17($s3)
    ctx->pc = 0x13c5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13c5d8: 0x6e650010  ldr         $a1, 0x10($s3)
    ctx->pc = 0x13c5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13c5dc: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13c5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c5e0: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13c5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c5e4: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x13c5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c5e8: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x13c5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c5ec: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x13c5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c5f0: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x13c5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c5f4: 0x6a63001f  ldl         $v1, 0x1F($s3)
    ctx->pc = 0x13c5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13c5f8: 0x6e630018  ldr         $v1, 0x18($s3)
    ctx->pc = 0x13c5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13c5fc: 0x6a640027  ldl         $a0, 0x27($s3)
    ctx->pc = 0x13c5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13c600: 0x6e640020  ldr         $a0, 0x20($s3)
    ctx->pc = 0x13c600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13c604: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x13c604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c608: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x13c608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c60c: 0xb0c40027  sdl         $a0, 0x27($a2)
    ctx->pc = 0x13c60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c610: 0xb4c40020  sdr         $a0, 0x20($a2)
    ctx->pc = 0x13c610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c614: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13c618: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x13c618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c61c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x13c61cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13c620: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x13c620u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13c624: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x13c624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x13c628: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13c62c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x13c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x13c630: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x13c630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x13c634: 0xae14002c  sw          $s4, 0x2C($s0)
    ctx->pc = 0x13c634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 20));
    // 0x13c638: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x13c638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x13c63c: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x13c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x13c640: 0xa6150034  sh          $s5, 0x34($s0)
    ctx->pc = 0x13c640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 21));
    // 0x13c644: 0xa6160036  sh          $s6, 0x36($s0)
    ctx->pc = 0x13c644u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 22));
    // 0x13c648: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x13c648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x13c64c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x13c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13c650: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13c650u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c654: 0x40f809  jalr        $v0
    ctx->pc = 0x13C654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C65Cu);
        ctx->pc = 0x13C658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C654u;
            // 0x13c658: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13C65Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C4A0u: goto label_13c4a0;
            case 0x13C4C0u: goto label_13c4c0;
            case 0x13C4D4u: goto label_13c4d4;
            case 0x13C4F0u: goto label_13c4f0;
            case 0x13C5B0u: goto label_13c5b0;
            case 0x13C668u: goto label_13c668;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13C65Cu; }
            if (ctx->pc != 0x13C65Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13C65Cu;
    // 0x13c65c: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x13c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x13c660: 0x2f02b  sltu        $fp, $zero, $v0
    ctx->pc = 0x13c660u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13c664: 0x0  nop
    ctx->pc = 0x13c664u;
    // NOP
label_13c668:
    // 0x13c668: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x13c668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c66c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x13c66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13c670: 0xfe1021  addu        $v0, $a3, $fp
    ctx->pc = 0x13c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x13c674: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x13c674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13c678: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x13c678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13c67c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x13c67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13c680: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x13c680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c684: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x13c684u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c688: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13c688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c68c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x13c68cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c690: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x13c690u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c694: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13c694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c698: 0x3e00008  jr          $ra
    ctx->pc = 0x13C698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C698u;
            // 0x13c69c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C4A0u: goto label_13c4a0;
            case 0x13C4C0u: goto label_13c4c0;
            case 0x13C4D4u: goto label_13c4d4;
            case 0x13C4F0u: goto label_13c4f0;
            case 0x13C5B0u: goto label_13c5b0;
            case 0x13C668u: goto label_13c668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C6A0u;
}
