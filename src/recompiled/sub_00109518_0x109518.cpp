#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109518
// Address: 0x109518 - 0x10a530
void sub_00109518_0x109518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109518_0x109518");
#endif

    ctx->pc = 0x109518u;

    // 0x109518: 0x27bdf110  addiu       $sp, $sp, -0xEF0
    ctx->pc = 0x109518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963472));
    // 0x10951c: 0x48a66800  qmtc2.ni    $a2, $vf13
    ctx->pc = 0x10951cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x109520: 0x7fb30ea0  sq          $s3, 0xEA0($sp)
    ctx->pc = 0x109520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3744), GPR_VEC(ctx, 19));
    // 0x109524: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x109524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x109528: 0x7fb70e60  sq          $s7, 0xE60($sp)
    ctx->pc = 0x109528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3680), GPR_VEC(ctx, 23));
    // 0x10952c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10952cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109530: 0xe7b40ee0  swc1        $f20, 0xEE0($sp)
    ctx->pc = 0x109530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3808), bits); }
    // 0x109534: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x109534u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109538: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x109538u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10953c: 0x7fb00ed0  sq          $s0, 0xED0($sp)
    ctx->pc = 0x10953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3792), GPR_VEC(ctx, 16));
    // 0x109540: 0x7fb10ec0  sq          $s1, 0xEC0($sp)
    ctx->pc = 0x109540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3776), GPR_VEC(ctx, 17));
    // 0x109544: 0x7fb20eb0  sq          $s2, 0xEB0($sp)
    ctx->pc = 0x109544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3760), GPR_VEC(ctx, 18));
    // 0x109548: 0x7fb40e90  sq          $s4, 0xE90($sp)
    ctx->pc = 0x109548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3728), GPR_VEC(ctx, 20));
    // 0x10954c: 0x7fb50e80  sq          $s5, 0xE80($sp)
    ctx->pc = 0x10954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3712), GPR_VEC(ctx, 21));
    // 0x109550: 0x7fb60e70  sq          $s6, 0xE70($sp)
    ctx->pc = 0x109550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3696), GPR_VEC(ctx, 22));
    // 0x109554: 0x7fbe0e50  sq          $fp, 0xE50($sp)
    ctx->pc = 0x109554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3664), GPR_VEC(ctx, 30));
    // 0x109558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x109558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10955c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x10955cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109560: 0x0  nop
    ctx->pc = 0x109560u;
    // NOP
    // 0x109564: 0x450103e5  bc1t        . + 4 + (0x3E5 << 2)
    ctx->pc = 0x109564u;
    {
        const bool branch_taken_0x109564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x109568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109564u;
            // 0x109568: 0xffbf0e40  sd          $ra, 0xE40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 3648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109564) {
            ctx->pc = 0x10A4FCu;
            goto label_10a4fc;
        }
    }
    ctx->pc = 0x10956Cu;
    // 0x10956c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x10956cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x109570: 0xde630040  ld          $v1, 0x40($s3)
    ctx->pc = 0x109570u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x109574: 0xdce2bdf8  ld          $v0, -0x4208($a3)
    ctx->pc = 0x109574u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
    // 0x109578: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109578u;
    {
        const bool branch_taken_0x109578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109578) {
            ctx->pc = 0x10957Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109578u;
            // 0x10957c: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109588u;
            goto label_109588;
        }
    }
    ctx->pc = 0x109580u;
    // 0x109580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x109580u;
    {
        const bool branch_taken_0x109580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109580u;
            // 0x109584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109580) {
            ctx->pc = 0x109594u;
            goto label_109594;
        }
    }
    ctx->pc = 0x109588u;
label_109588:
    // 0x109588: 0xdc420068  ld          $v0, 0x68($v0)
    ctx->pc = 0x109588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x10958c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x10958cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x109590: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x109590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_109594:
    // 0x109594: 0x104003da  beqz        $v0, . + 4 + (0x3DA << 2)
    ctx->pc = 0x109594u;
    {
        const bool branch_taken_0x109594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109594u;
            // 0x109598: 0x7bb00ed0  lq          $s0, 0xED0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109594) {
            ctx->pc = 0x10A500u;
            goto label_10a500;
        }
    }
    ctx->pc = 0x10959Cu;
    // 0x10959c: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x10959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x1095a0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1095a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1095a4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1095a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1095a8: 0x104003d6  beqz        $v0, . + 4 + (0x3D6 << 2)
    ctx->pc = 0x1095A8u;
    {
        const bool branch_taken_0x1095a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1095ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1095A8u;
            // 0x1095ac: 0x7bb10ec0  lq          $s1, 0xEC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095a8) {
            ctx->pc = 0x10A504u;
            goto label_10a504;
        }
    }
    ctx->pc = 0x1095B0u;
    // 0x1095b0: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1095b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1095b4: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1095b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1095b8: 0x70651389  pcpyld      $v0, $v1, $a1
    ctx->pc = 0x1095b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x1095bc: 0x8e76008c  lw          $s6, 0x8C($s3)
    ctx->pc = 0x1095bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1095c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1095c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1095c4: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1095c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1095c8: 0x70652389  pcpyld      $a0, $v1, $a1
    ctx->pc = 0x1095c8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x1095cc: 0x173180  sll         $a2, $s7, 6
    ctx->pc = 0x1095ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1095d0: 0x708224c8  ppacw       $a0, $a0, $v0
    ctx->pc = 0x1095d0u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1095d4: 0xd62821  addu        $a1, $a2, $s6
    ctx->pc = 0x1095d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x1095d8: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1095d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1095dc: 0x7fa40c60  sq          $a0, 0xC60($sp)
    ctx->pc = 0x1095dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3168), GPR_VEC(ctx, 4));
    // 0x1095e0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1095e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1095e4: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x1095e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1095e8: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x1095e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1095ec: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x1095ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x1095f0: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x1095f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1095f4: 0x668821  addu        $s1, $v1, $a2
    ctx->pc = 0x1095f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1095f8: 0xd8a20020  lqc2        $vf2, 0x20($a1)
    ctx->pc = 0x1095f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1095fc: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1095fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x109600: 0x4be11328  vadd.xyzw   $vf12, $vf2, $vf1
    ctx->pc = 0x109600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x109604: 0x4bec60aa  vmul.xyzw   $vf2, $vf12, $vf12
    ctx->pc = 0x109604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109608: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x109608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10960c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x10960cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109610: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x109610u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x109614: 0x4a0003bf  vwaitq
    ctx->pc = 0x109614u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x109618: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x109618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x10961c: 0x4a0002ff  vnop
    ctx->pc = 0x10961cu;
    // NOP operation, no action needed for VU0
    // 0x109620: 0x4a0002ff  vnop
    ctx->pc = 0x109620u;
    // NOP operation, no action needed for VU0
    // 0x109624: 0x4be1633c  vmove.xyzw  $vf1, $vf12
    ctx->pc = 0x109624u;
    ctx->vu0_vf[1] = ctx->vu0_vf[12];
    // 0x109628: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x109628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10962c: 0xd8a20080  lqc2        $vf2, 0x80($a1)
    ctx->pc = 0x10962cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x109630: 0x4be410ea  vmul.xyzw   $vf3, $vf2, $vf4
    ctx->pc = 0x109630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109634: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x109634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109638: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x109638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10963c: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x10963cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109640: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x109640u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109644: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x109644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109648: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x109648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10964c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x10964cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109650: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x109650u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x109654: 0x4a0003bf  vwaitq
    ctx->pc = 0x109654u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x109658: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x109658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10965c: 0x4a0002ff  vnop
    ctx->pc = 0x10965cu;
    // NOP operation, no action needed for VU0
    // 0x109660: 0x4a0002ff  vnop
    ctx->pc = 0x109660u;
    // NOP operation, no action needed for VU0
    // 0x109664: 0x4be4133c  vmove.xyzw  $vf4, $vf2
    ctx->pc = 0x109664u;
    ctx->vu0_vf[4] = ctx->vu0_vf[2];
    // 0x109668: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x109668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10966c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10966cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x109670: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x109670u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x109674: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x109674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109678: 0x4a420840  vaddx.z     $vf1, $vf1, $vf2x
    ctx->pc = 0x109678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10967c: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x10967cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x109680: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x109680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109684: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x109684u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109688: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x109688u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10968c: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x10968cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109690: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x109690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109694: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x109694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109698: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x109698u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x10969c: 0x4a0003bf  vwaitq
    ctx->pc = 0x10969cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1096a0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1096a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1096a4: 0x4a0002ff  vnop
    ctx->pc = 0x1096a4u;
    // NOP operation, no action needed for VU0
    // 0x1096a8: 0x4a0002ff  vnop
    ctx->pc = 0x1096a8u;
    // NOP operation, no action needed for VU0
    // 0x1096ac: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x1096acu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]);
    // 0x1096b0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1096b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1096b4: 0x4bc120ae  vopmsub.xyz $vf2, $vf4, $vf1
    ctx->pc = 0x1096b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1096b8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1096b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1096bc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1096bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1096c0: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1096c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1096c4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1096c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1096c8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1096c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1096cc: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x1096ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x1096d0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1096d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1096d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1096d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1096d8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1096d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1096dc: 0x4a0002ff  vnop
    ctx->pc = 0x1096dcu;
    // NOP operation, no action needed for VU0
    // 0x1096e0: 0x4a0002ff  vnop
    ctx->pc = 0x1096e0u;
    // NOP operation, no action needed for VU0
    // 0x1096e4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1096e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1096e8: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1096e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1096ec: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1096ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1096f0: 0xd8a60030  lqc2        $vf6, 0x30($a1)
    ctx->pc = 0x1096f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1096f4: 0xd8a300b0  lqc2        $vf3, 0xB0($a1)
    ctx->pc = 0x1096f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x1096f8: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1096f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1096fc: 0x4be6186c  vsub.xyzw   $vf1, $vf3, $vf6
    ctx->pc = 0x1096fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109700: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x109700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109704: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x109704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109708: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x109708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10970c: 0x4be6696c  vsub.xyzw   $vf5, $vf13, $vf6
    ctx->pc = 0x10970cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109710: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x109710u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x109714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109718: 0x46000104  c1          0x104
    ctx->pc = 0x109718u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x10971c: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x10971cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109720: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x109720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109724: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x109724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109728: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x109728u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10972c: 0x4be620ac  vsub.xyzw   $vf2, $vf4, $vf6
    ctx->pc = 0x10972cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109730: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x109730u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109734: 0x460000c4  c1          0xC4
    ctx->pc = 0x109734u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x109738: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x109738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10973c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x10973cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109740: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x109740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109744: 0x4be418ec  vsub.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x109744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109748: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x109748u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10974c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x10974cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x109750: 0x46010044  c1          0x10044
    ctx->pc = 0x109750u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x109754: 0x4be318ea  vmul.xyzw   $vf3, $vf3, $vf3
    ctx->pc = 0x109754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109758: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x109758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10975c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x10975cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109760: 0x3c013f5d  lui         $at, 0x3F5D
    ctx->pc = 0x109760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16221 << 16));
    // 0x109764: 0x3421b22d  ori         $at, $at, 0xB22D
    ctx->pc = 0x109764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45613);
    // 0x109768: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x109768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10976c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x10976cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x109770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109774: 0x46000004  c1          0x4
    ctx->pc = 0x109774u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x109778: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x109778u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10977c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x10977cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x109780: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x109780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109784: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x109784u;
    {
        const bool branch_taken_0x109784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x109784) {
            ctx->pc = 0x109798u;
            goto label_109798;
        }
    }
    ctx->pc = 0x10978Cu;
    // 0x10978c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10978Cu;
    {
        const bool branch_taken_0x10978c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10978Cu;
            // 0x109790: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10978c) {
            ctx->pc = 0x1097C0u;
            goto label_1097c0;
        }
    }
    ctx->pc = 0x109794u;
    // 0x109794: 0x0  nop
    ctx->pc = 0x109794u;
    // NOP
label_109798:
    // 0x109798: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x109798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10979c: 0x0  nop
    ctx->pc = 0x10979cu;
    // NOP
    // 0x1097a0: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x1097A0u;
    {
        const bool branch_taken_0x1097a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1097a0) {
            ctx->pc = 0x1097A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1097A0u;
            // 0x1097a4: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109810u;
            goto label_109810;
        }
    }
    ctx->pc = 0x1097A8u;
    // 0x1097a8: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1097a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1097ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1097acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1097b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1097b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1097b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1097b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1097b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1097b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1097bc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1097bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1097c0:
    // 0x1097c0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1097c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1097c4: 0x0  nop
    ctx->pc = 0x1097c4u;
    // NOP
    // 0x1097c8: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x1097C8u;
    {
        const bool branch_taken_0x1097c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1097c8) {
            ctx->pc = 0x1097CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1097C8u;
            // 0x1097cc: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109810u;
            goto label_109810;
        }
    }
    ctx->pc = 0x1097D0u;
    // 0x1097d0: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x1097d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1097d4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1097d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1097d8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1097d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1097dc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1097dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1097e0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1097e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1097e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1097e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1097e8: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x1097e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1097ec: 0x4a0002ff  vnop
    ctx->pc = 0x1097ecu;
    // NOP operation, no action needed for VU0
    // 0x1097f0: 0x4a0002ff  vnop
    ctx->pc = 0x1097f0u;
    // NOP operation, no action needed for VU0
    // 0x1097f4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1097f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1097f8: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x1097f8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x1097fc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1097fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109800: 0xfba10c70  sqc2        $vf1, 0xC70($sp)
    ctx->pc = 0x109800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3184), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109804: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x109804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109808: 0x4be60b68  vadd.xyzw   $vf13, $vf1, $vf6
    ctx->pc = 0x109808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x10980c: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x10980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_109810:
    // 0x109810: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x109810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x109814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109818: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x109818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10981c: 0x4610019  bgez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x10981Cu;
    {
        const bool branch_taken_0x10981c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x109820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10981Cu;
            // 0x109820: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10981c) {
            ctx->pc = 0x109884u;
            goto label_109884;
        }
    }
    ctx->pc = 0x109824u;
    // 0x109824: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x109824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x109828: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x109828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10982c: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x10982cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x109830: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109830u;
    {
        const bool branch_taken_0x109830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x109834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109830u;
            // 0x109834: 0xdce5bdf8  ld          $a1, -0x4208($a3) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294950392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109830) {
            ctx->pc = 0x109840u;
            goto label_109840;
        }
    }
    ctx->pc = 0x109838u;
    // 0x109838: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x109838u;
    {
        const bool branch_taken_0x109838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109838u;
            // 0x10983c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109838) {
            ctx->pc = 0x109864u;
            goto label_109864;
        }
    }
    ctx->pc = 0x109840u;
label_109840:
    // 0x109840: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x109840u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x109844: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x109844u;
    {
        const bool branch_taken_0x109844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x109848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109844u;
            // 0x109848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109844) {
            ctx->pc = 0x109860u;
            goto label_109860;
        }
    }
    ctx->pc = 0x10984Cu;
    // 0x10984c: 0xfbac0e20  sqc2        $vf12, 0xE20($sp)
    ctx->pc = 0x10984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3616), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x109850: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x109850u;
    SET_GPR_U32(ctx, 31, 0x109858u);
    ctx->pc = 0x109854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109850u;
            // 0x109854: 0xfbad0e30  sqc2        $vf13, 0xE30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 3632), _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109858u; }
        if (ctx->pc != 0x109858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109858u; }
        if (ctx->pc != 0x109858u) { return; }
    }
    ctx->pc = 0x109858u;
    // 0x109858: 0xdbad0e30  lqc2        $vf13, 0xE30($sp)
    ctx->pc = 0x109858u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3632)));
    // 0x10985c: 0xdbac0e20  lqc2        $vf12, 0xE20($sp)
    ctx->pc = 0x10985cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3616)));
label_109860:
    // 0x109860: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x109860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_109864:
    // 0x109864: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x109864u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109868: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x109868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x10986c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x10986cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109870: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x109870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x109874: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x109874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x109878: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x109878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x10987c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10987Cu;
    {
        const bool branch_taken_0x10987c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10987Cu;
            // 0x109880: 0x78820030  lq          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10987c) {
            ctx->pc = 0x1098A4u;
            goto label_1098a4;
        }
    }
    ctx->pc = 0x109884u;
label_109884:
    // 0x109884: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x109884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x109888: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x109888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10988c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x10988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x109890: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x109890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x109894: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x109894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x109898: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x109898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x10989c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x10989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1098a0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1098a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_1098a4:
    // 0x1098a4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1098a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1098a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1098a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1098ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1098acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1098b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1098b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1098b4: 0x0  nop
    ctx->pc = 0x1098b4u;
    // NOP
label_1098b8:
    // 0x1098b8: 0x0  nop
    ctx->pc = 0x1098b8u;
    // NOP
    // 0x1098bc: 0x0  nop
    ctx->pc = 0x1098bcu;
    // NOP
    // 0x1098c0: 0x0  nop
    ctx->pc = 0x1098c0u;
    // NOP
    // 0x1098c4: 0x0  nop
    ctx->pc = 0x1098c4u;
    // NOP
    // 0x1098c8: 0x0  nop
    ctx->pc = 0x1098c8u;
    // NOP
    // 0x1098cc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1098CCu;
    {
        const bool branch_taken_0x1098cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1098D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1098CCu;
            // 0x1098d0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098cc) {
            ctx->pc = 0x1098B8u;
            runtime->cooperativeGuestYield();
            goto label_1098b8;
        }
    }
    ctx->pc = 0x1098D4u;
    // 0x1098d4: 0xdba900a0  lqc2        $vf9, 0xA0($sp)
    ctx->pc = 0x1098d4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1098d8: 0xdbaa00b0  lqc2        $vf10, 0xB0($sp)
    ctx->pc = 0x1098d8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1098dc: 0xdbab00c0  lqc2        $vf11, 0xC0($sp)
    ctx->pc = 0x1098dcu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1098e0: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1098e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1098e4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1098e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1098e8: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1098e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1098ec: 0xda450020  lqc2        $vf5, 0x20($s2)
    ctx->pc = 0x1098ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1098f0: 0xda430030  lqc2        $vf3, 0x30($s2)
    ctx->pc = 0x1098f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1098f4: 0x4be149bc  vmulax.xyzw $ACC, $vf9, $vf1x
    ctx->pc = 0x1098f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1098f8: 0x4be150bd  vmadday.xyzw $ACC, $vf10, $vf1y
    ctx->pc = 0x1098f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1098fc: 0x4be158be  vmaddaz.xyzw $ACC, $vf11, $vf1z
    ctx->pc = 0x1098fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109900: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x109900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109904: 0x4be449bc  vmulax.xyzw $ACC, $vf9, $vf4x
    ctx->pc = 0x109904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109908: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x109908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10990c: 0x4be450bd  vmadday.xyzw $ACC, $vf10, $vf4y
    ctx->pc = 0x10990cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109910: 0x4be458be  vmaddaz.xyzw $ACC, $vf11, $vf4z
    ctx->pc = 0x109910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109914: 0x4be4110b  vmaddw.xyzw $vf4, $vf2, $vf4w
    ctx->pc = 0x109914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109918: 0x4be549bc  vmulax.xyzw $ACC, $vf9, $vf5x
    ctx->pc = 0x109918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10991c: 0xfba401f0  sqc2        $vf4, 0x1F0($sp)
    ctx->pc = 0x10991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109920: 0x4be550bd  vmadday.xyzw $ACC, $vf10, $vf5y
    ctx->pc = 0x109920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109924: 0x4be558be  vmaddaz.xyzw $ACC, $vf11, $vf5z
    ctx->pc = 0x109924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109928: 0x4be5114b  vmaddw.xyzw $vf5, $vf2, $vf5w
    ctx->pc = 0x109928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10992c: 0x4be349bc  vmulax.xyzw $ACC, $vf9, $vf3x
    ctx->pc = 0x10992cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109930: 0xfba50200  sqc2        $vf5, 0x200($sp)
    ctx->pc = 0x109930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109934: 0x4be350bd  vmadday.xyzw $ACC, $vf10, $vf3y
    ctx->pc = 0x109934u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109938: 0x4be358be  vmaddaz.xyzw $ACC, $vf11, $vf3z
    ctx->pc = 0x109938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10993c: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x10993cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109940: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x109940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109944: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x109944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109948: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x109948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10994c: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x10994cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x109950: 0xfba501c0  sqc2        $vf5, 0x1C0($sp)
    ctx->pc = 0x109950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109954: 0xfba201d0  sqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x109954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109958: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x109958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10995c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x10995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109960: 0xfba50100  sqc2        $vf5, 0x100($sp)
    ctx->pc = 0x109960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109964: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x109964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109968: 0xda430040  lqc2        $vf3, 0x40($s2)
    ctx->pc = 0x109968u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x10996c: 0xda060010  lqc2        $vf6, 0x10($s0)
    ctx->pc = 0x10996cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109970: 0xda070020  lqc2        $vf7, 0x20($s0)
    ctx->pc = 0x109970u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x109974: 0xda080030  lqc2        $vf8, 0x30($s0)
    ctx->pc = 0x109974u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x109978: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x109978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10997c: 0x4be320bd  vmadday.xyzw $ACC, $vf4, $vf3y
    ctx->pc = 0x10997cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109980: 0x4be328be  vmaddaz.xyzw $ACC, $vf5, $vf3z
    ctx->pc = 0x109980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109984: 0x4be310cb  vmaddw.xyzw $vf3, $vf2, $vf3w
    ctx->pc = 0x109984u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109988: 0x4be609bc  vmulax.xyzw $ACC, $vf1, $vf6x
    ctx->pc = 0x109988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10998c: 0xfba30260  sqc2        $vf3, 0x260($sp)
    ctx->pc = 0x10998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109990: 0x4be620bd  vmadday.xyzw $ACC, $vf4, $vf6y
    ctx->pc = 0x109990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109994: 0x4be628be  vmaddaz.xyzw $ACC, $vf5, $vf6z
    ctx->pc = 0x109994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109998: 0x4be6118b  vmaddw.xyzw $vf6, $vf2, $vf6w
    ctx->pc = 0x109998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10999c: 0x4be709bc  vmulax.xyzw $ACC, $vf1, $vf7x
    ctx->pc = 0x10999cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1099a0: 0xfba60270  sqc2        $vf6, 0x270($sp)
    ctx->pc = 0x1099a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1099a4: 0x4be720bd  vmadday.xyzw $ACC, $vf4, $vf7y
    ctx->pc = 0x1099a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1099a8: 0x4be728be  vmaddaz.xyzw $ACC, $vf5, $vf7z
    ctx->pc = 0x1099a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1099ac: 0x4be711cb  vmaddw.xyzw $vf7, $vf2, $vf7w
    ctx->pc = 0x1099acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1099b0: 0x4be809bc  vmulax.xyzw $ACC, $vf1, $vf8x
    ctx->pc = 0x1099b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1099b4: 0xfba70280  sqc2        $vf7, 0x280($sp)
    ctx->pc = 0x1099b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1099b8: 0x4be820bd  vmadday.xyzw $ACC, $vf4, $vf8y
    ctx->pc = 0x1099b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1099bc: 0x4be828be  vmaddaz.xyzw $ACC, $vf5, $vf8z
    ctx->pc = 0x1099bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1099c0: 0x4be8108b  vmaddw.xyzw $vf2, $vf2, $vf8w
    ctx->pc = 0x1099c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1099c4: 0xfba20290  sqc2        $vf2, 0x290($sp)
    ctx->pc = 0x1099c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1099c8: 0xfba30220  sqc2        $vf3, 0x220($sp)
    ctx->pc = 0x1099c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1099cc: 0xfba60230  sqc2        $vf6, 0x230($sp)
    ctx->pc = 0x1099ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1099d0: 0x26550080  addiu       $s5, $s2, 0x80
    ctx->pc = 0x1099d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1099d4: 0xfba70240  sqc2        $vf7, 0x240($sp)
    ctx->pc = 0x1099d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1099d8: 0xfba20250  sqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1099d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1099dc: 0xfba30120  sqc2        $vf3, 0x120($sp)
    ctx->pc = 0x1099dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1099e0: 0xfba60130  sqc2        $vf6, 0x130($sp)
    ctx->pc = 0x1099e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1099e4: 0xfba70140  sqc2        $vf7, 0x140($sp)
    ctx->pc = 0x1099e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1099e8: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x1099e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1099ec: 0xda410080  lqc2        $vf1, 0x80($s2)
    ctx->pc = 0x1099ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1099f0: 0xdaa40010  lqc2        $vf4, 0x10($s5)
    ctx->pc = 0x1099f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1099f4: 0xdaa50020  lqc2        $vf5, 0x20($s5)
    ctx->pc = 0x1099f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1099f8: 0xdaa80030  lqc2        $vf8, 0x30($s5)
    ctx->pc = 0x1099f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1099fc: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x1099fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109a00: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x109a00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109a04: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x109a04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109a08: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x109a08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109a0c: 0x4be419bc  vmulax.xyzw $ACC, $vf3, $vf4x
    ctx->pc = 0x109a0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109a10: 0xfba102e0  sqc2        $vf1, 0x2E0($sp)
    ctx->pc = 0x109a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109a14: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x109a14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109a18: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x109a18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109a1c: 0x4be4110b  vmaddw.xyzw $vf4, $vf2, $vf4w
    ctx->pc = 0x109a1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109a20: 0x4be519bc  vmulax.xyzw $ACC, $vf3, $vf5x
    ctx->pc = 0x109a20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109a24: 0xfba402f0  sqc2        $vf4, 0x2F0($sp)
    ctx->pc = 0x109a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109a28: 0x4be530bd  vmadday.xyzw $ACC, $vf6, $vf5y
    ctx->pc = 0x109a28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109a2c: 0x4be538be  vmaddaz.xyzw $ACC, $vf7, $vf5z
    ctx->pc = 0x109a2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109a30: 0x4be5114b  vmaddw.xyzw $vf5, $vf2, $vf5w
    ctx->pc = 0x109a30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109a34: 0x4be819bc  vmulax.xyzw $ACC, $vf3, $vf8x
    ctx->pc = 0x109a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109a38: 0xfba50300  sqc2        $vf5, 0x300($sp)
    ctx->pc = 0x109a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109a3c: 0x4be830bd  vmadday.xyzw $ACC, $vf6, $vf8y
    ctx->pc = 0x109a3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109a40: 0x4be838be  vmaddaz.xyzw $ACC, $vf7, $vf8z
    ctx->pc = 0x109a40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109a44: 0x4be8108b  vmaddw.xyzw $vf2, $vf2, $vf8w
    ctx->pc = 0x109a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109a48: 0xfba20310  sqc2        $vf2, 0x310($sp)
    ctx->pc = 0x109a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109a4c: 0xfba102a0  sqc2        $vf1, 0x2A0($sp)
    ctx->pc = 0x109a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109a50: 0x7ba20c60  lq          $v0, 0xC60($sp)
    ctx->pc = 0x109a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 3168)));
    // 0x109a54: 0x27b40320  addiu       $s4, $sp, 0x320
    ctx->pc = 0x109a54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x109a58: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x109a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109a5c: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x109a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x109a60: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x109a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109a64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x109a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a68: 0xfba402b0  sqc2        $vf4, 0x2B0($sp)
    ctx->pc = 0x109a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109a6c: 0xfba202d0  sqc2        $vf2, 0x2D0($sp)
    ctx->pc = 0x109a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109a70: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x109a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109a74: 0xfba50180  sqc2        $vf5, 0x180($sp)
    ctx->pc = 0x109a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109a78: 0xfba90320  sqc2        $vf9, 0x320($sp)
    ctx->pc = 0x109a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x109a7c: 0xfbaa0330  sqc2        $vf10, 0x330($sp)
    ctx->pc = 0x109a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x109a80: 0xfbab0340  sqc2        $vf11, 0x340($sp)
    ctx->pc = 0x109a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x109a84: 0x7fa20350  sq          $v0, 0x350($sp)
    ctx->pc = 0x109a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 2));
    // 0x109a88: 0xfba502c0  sqc2        $vf5, 0x2C0($sp)
    ctx->pc = 0x109a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109a8c: 0xfbac0e20  sqc2        $vf12, 0xE20($sp)
    ctx->pc = 0x109a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3616), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x109a90: 0xc0614c6  jal         func_185318
    ctx->pc = 0x109A90u;
    SET_GPR_U32(ctx, 31, 0x109A98u);
    ctx->pc = 0x109A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109A90u;
            // 0x109a94: 0xfbad0e30  sqc2        $vf13, 0xE30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 3632), _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109A98u; }
        if (ctx->pc != 0x109A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109A98u; }
        if (ctx->pc != 0x109A98u) { return; }
    }
    ctx->pc = 0x109A98u;
    // 0x109a98: 0xdba70110  lqc2        $vf7, 0x110($sp)
    ctx->pc = 0x109a98u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x109a9c: 0xdba30360  lqc2        $vf3, 0x360($sp)
    ctx->pc = 0x109a9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x109aa0: 0x4be719bc  vmulax.xyzw $ACC, $vf3, $vf7x
    ctx->pc = 0x109aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109aa4: 0xdba40370  lqc2        $vf4, 0x370($sp)
    ctx->pc = 0x109aa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x109aa8: 0xdba20380  lqc2        $vf2, 0x380($sp)
    ctx->pc = 0x109aa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x109aac: 0x4be720bd  vmadday.xyzw $ACC, $vf4, $vf7y
    ctx->pc = 0x109aacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109ab0: 0xdba60390  lqc2        $vf6, 0x390($sp)
    ctx->pc = 0x109ab0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x109ab4: 0x4be710be  vmaddaz.xyzw $ACC, $vf2, $vf7z
    ctx->pc = 0x109ab4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109ab8: 0x4be731cb  vmaddw.xyzw $vf7, $vf6, $vf7w
    ctx->pc = 0x109ab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109abc: 0xfba30320  sqc2        $vf3, 0x320($sp)
    ctx->pc = 0x109abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109ac0: 0xfba40330  sqc2        $vf4, 0x330($sp)
    ctx->pc = 0x109ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109ac4: 0xfba20340  sqc2        $vf2, 0x340($sp)
    ctx->pc = 0x109ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109ac8: 0xfba60350  sqc2        $vf6, 0x350($sp)
    ctx->pc = 0x109ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109acc: 0xdba50150  lqc2        $vf5, 0x150($sp)
    ctx->pc = 0x109accu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x109ad0: 0x4be519bc  vmulax.xyzw $ACC, $vf3, $vf5x
    ctx->pc = 0x109ad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109ad4: 0x4be520bd  vmadday.xyzw $ACC, $vf4, $vf5y
    ctx->pc = 0x109ad4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109ad8: 0x4be510be  vmaddaz.xyzw $ACC, $vf2, $vf5z
    ctx->pc = 0x109ad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109adc: 0x4be5314b  vmaddw.xyzw $vf5, $vf6, $vf5w
    ctx->pc = 0x109adcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109ae0: 0xdba10190  lqc2        $vf1, 0x190($sp)
    ctx->pc = 0x109ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x109ae4: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x109ae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109ae8: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x109ae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109aec: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x109aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109af0: 0x4be1304b  vmaddw.xyzw $vf1, $vf6, $vf1w
    ctx->pc = 0x109af0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109af4: 0xdbad0e30  lqc2        $vf13, 0xE30($sp)
    ctx->pc = 0x109af4u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3632)));
    // 0x109af8: 0x4bed19bc  vmulax.xyzw $ACC, $vf3, $vf13x
    ctx->pc = 0x109af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109afc: 0x4bed20bd  vmadday.xyzw $ACC, $vf4, $vf13y
    ctx->pc = 0x109afcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109b00: 0x4bed10be  vmaddaz.xyzw $ACC, $vf2, $vf13z
    ctx->pc = 0x109b00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109b04: 0x4bed334b  vmaddw.xyzw $vf13, $vf6, $vf13w
    ctx->pc = 0x109b04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109b08: 0xdbac0e20  lqc2        $vf12, 0xE20($sp)
    ctx->pc = 0x109b08u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3616)));
    // 0x109b0c: 0x4bec19bc  vmulax.xyzw $ACC, $vf3, $vf12x
    ctx->pc = 0x109b0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109b10: 0x4bec20bd  vmadday.xyzw $ACC, $vf4, $vf12y
    ctx->pc = 0x109b10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109b14: 0x4bec10be  vmaddaz.xyzw $ACC, $vf2, $vf12z
    ctx->pc = 0x109b14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109b18: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x109b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x109b1c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x109b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x109b20: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x109b20u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x109b24: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x109b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x109b28: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x109b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x109b2c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x109b2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x109b30: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x109b30u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109b34: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x109b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    // 0x109b38: 0x7fa20c80  sq          $v0, 0xC80($sp)
    ctx->pc = 0x109b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3200), GPR_VEC(ctx, 2));
    // 0x109b3c: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x109b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    // 0x109b40: 0x4bec308b  vmaddw.xyzw $vf2, $vf6, $vf12w
    ctx->pc = 0x109b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109b44: 0x7fa20c90  sq          $v0, 0xC90($sp)
    ctx->pc = 0x109b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3216), GPR_VEC(ctx, 2));
    // 0x109b48: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x109b48u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109b4c: 0x48243800  qmfc2.ni    $a0, $vf7
    ctx->pc = 0x109b4cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x109b50: 0x27a90c80  addiu       $t1, $sp, 0xC80
    ctx->pc = 0x109b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 3200));
    // 0x109b54: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x109b54u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109b58: 0x27aa0c90  addiu       $t2, $sp, 0xC90
    ctx->pc = 0x109b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 3216));
    // 0x109b5c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x109b5cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109b60: 0xc04241a  jal         func_109068
    ctx->pc = 0x109B60u;
    SET_GPR_U32(ctx, 31, 0x109B68u);
    ctx->pc = 0x109B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109B60u;
            // 0x109b64: 0x48276800  qmfc2.ni    $a3, $vf13 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109068u;
    if (runtime->hasFunction(0x109068u)) {
        auto targetFn = runtime->lookupFunction(0x109068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B68u; }
        if (ctx->pc != 0x109B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_109068_0x109518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B68u; }
        if (ctx->pc != 0x109B68u) { return; }
    }
    ctx->pc = 0x109B68u;
    // 0x109b68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x109b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x109b6c: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x109b6cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x109b70: 0xdba30c80  lqc2        $vf3, 0xC80($sp)
    ctx->pc = 0x109b70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3200)));
    // 0x109b74: 0x4be81858  vmulx.xyzw  $vf1, $vf3, $vf8x
    ctx->pc = 0x109b74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109b78: 0x4be1191a  vmulz.xyzw  $vf4, $vf3, $vf1z
    ctx->pc = 0x109b78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109b7c: 0x4be11959  vmuly.xyzw  $vf5, $vf3, $vf1y
    ctx->pc = 0x109b7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109b80: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x109b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109b84: 0x4a842842  vaddz.y     $vf1, $vf5, $vf4z
    ctx->pc = 0x109b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109b88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x109b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x109b8c: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x109b8cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x109b90: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x109b90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109b94: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x109b94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109b98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b9c: 0x4b042883  vaddw.x     $vf2, $vf5, $vf4w
    ctx->pc = 0x109b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109ba0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x109ba0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109ba4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ba8: 0x4b052047  vsubw.x     $vf1, $vf4, $vf5w
    ctx->pc = 0x109ba8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109bac: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x109bacu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bb4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x109bb4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109bb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bbc: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x109bbcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x109bc0: 0x4b042847  vsubw.x     $vf1, $vf5, $vf4w
    ctx->pc = 0x109bc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109bc4: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x109bc4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109bc8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x109bc8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109bcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bd0: 0x48a46000  qmtc2.ni    $a0, $vf12
    ctx->pc = 0x109bd0u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x109bd4: 0xfbac0440  sqc2        $vf12, 0x440($sp)
    ctx->pc = 0x109bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x109bd8: 0x4b041842  vaddz.x     $vf1, $vf3, $vf4z
    ctx->pc = 0x109bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109bdc: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x109bdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109be0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x109be0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109be4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109be8: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x109be8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109bec: 0x4a832043  vaddw.y     $vf1, $vf4, $vf3w
    ctx->pc = 0x109becu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109bf0: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x109bf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109bf4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x109bf4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109bf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bfc: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x109bfcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x109c00: 0x4a832047  vsubw.y     $vf1, $vf4, $vf3w
    ctx->pc = 0x109c00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109c04: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x109c04u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109c08: 0x4b052103  vaddw.x     $vf4, $vf4, $vf5w
    ctx->pc = 0x109c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109c0c: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x109c0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109c10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109c10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c14: 0x48a65800  qmtc2.ni    $a2, $vf11
    ctx->pc = 0x109c14u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x109c18: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x109c18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109c1c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x109c1cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109c20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c24: 0x4b0518c1  vaddy.x     $vf3, $vf3, $vf5y
    ctx->pc = 0x109c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109c28: 0xfbab0450  sqc2        $vf11, 0x450($sp)
    ctx->pc = 0x109c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x109c2c: 0x4b0330c4  vsubx.x     $vf3, $vf6, $vf3x
    ctx->pc = 0x109c2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109c30: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x109c30u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c38: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x109c38u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109c3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c40: 0xdba70c60  lqc2        $vf7, 0xC60($sp)
    ctx->pc = 0x109c40u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3168)));
    // 0x109c44: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x109c44u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x109c48: 0xfbac03e0  sqc2        $vf12, 0x3E0($sp)
    ctx->pc = 0x109c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x109c4c: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x109c4cu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109c50: 0xfbab03f0  sqc2        $vf11, 0x3F0($sp)
    ctx->pc = 0x109c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x109c54: 0x48a44800  qmtc2.ni    $a0, $vf9
    ctx->pc = 0x109c54u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x109c58: 0xfba90460  sqc2        $vf9, 0x460($sp)
    ctx->pc = 0x109c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x109c5c: 0xfba90400  sqc2        $vf9, 0x400($sp)
    ctx->pc = 0x109c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x109c60: 0xfba70410  sqc2        $vf7, 0x410($sp)
    ctx->pc = 0x109c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x109c64: 0xdba40c90  lqc2        $vf4, 0xC90($sp)
    ctx->pc = 0x109c64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3216)));
    // 0x109c68: 0x4be82218  vmulx.xyzw  $vf8, $vf4, $vf8x
    ctx->pc = 0x109c68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x109c6c: 0x4be820da  vmulz.xyzw  $vf3, $vf4, $vf8z
    ctx->pc = 0x109c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109c70: 0x4be82159  vmuly.xyzw  $vf5, $vf4, $vf8y
    ctx->pc = 0x109c70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x109c74: 0x4be82118  vmulx.xyzw  $vf4, $vf4, $vf8x
    ctx->pc = 0x109c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109c78: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x109c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109c7c: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x109c7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109c80: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x109c80u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109c84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c88: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x109c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109c8c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x109c8cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109c90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c94: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x109c94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109c98: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x109c98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109c9c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x109c9cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109ca0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ca4: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x109ca4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x109ca8: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x109ca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109cac: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x109cacu;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109cb0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x109cb0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109cb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109cb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cb8: 0x48a65000  qmtc2.ni    $a2, $vf10
    ctx->pc = 0x109cb8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x109cbc: 0xfbaa0470  sqc2        $vf10, 0x470($sp)
    ctx->pc = 0x109cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x109cc0: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x109cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109cc4: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x109cc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109cc8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x109cc8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109ccc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cd4: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x109cd4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109cd8: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x109cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109cdc: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x109cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109ce0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x109ce0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109ce4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ce8: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x109ce8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109cec: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x109cecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x109cf0: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x109cf0u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109cf4: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x109cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109cf8: 0x48a44000  qmtc2.ni    $a0, $vf8
    ctx->pc = 0x109cf8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x109cfc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x109cfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109d00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109d00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d04: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x109d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109d08: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x109d08u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109d0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d10: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x109d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109d14: 0xfba80480  sqc2        $vf8, 0x480($sp)
    ctx->pc = 0x109d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x109d18: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x109d18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109d1c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x109d1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109d20: 0xfbaa03a0  sqc2        $vf10, 0x3A0($sp)
    ctx->pc = 0x109d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x109d24: 0x48243000  qmfc2.ni    $a0, $vf6
    ctx->pc = 0x109d24u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109d28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x109d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d2c: 0xfba803b0  sqc2        $vf8, 0x3B0($sp)
    ctx->pc = 0x109d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x109d30: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x109d30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x109d34: 0xfba703d0  sqc2        $vf7, 0x3D0($sp)
    ctx->pc = 0x109d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x109d38: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x109d38u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109d3c: 0x48a62800  qmtc2.ni    $a2, $vf5
    ctx->pc = 0x109d3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x109d40: 0xfba503c0  sqc2        $vf5, 0x3C0($sp)
    ctx->pc = 0x109d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109d44: 0xfba50490  sqc2        $vf5, 0x490($sp)
    ctx->pc = 0x109d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x109d48: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x109d48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x109d4c: 0xda430010  lqc2        $vf3, 0x10($s2)
    ctx->pc = 0x109d4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x109d50: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x109d50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x109d54: 0xda410030  lqc2        $vf1, 0x30($s2)
    ctx->pc = 0x109d54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x109d58: 0x4be261bc  vmulax.xyzw $ACC, $vf12, $vf2x
    ctx->pc = 0x109d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109d5c: 0x4be258bd  vmadday.xyzw $ACC, $vf11, $vf2y
    ctx->pc = 0x109d5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109d60: 0x4be248be  vmaddaz.xyzw $ACC, $vf9, $vf2z
    ctx->pc = 0x109d60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109d64: 0x4be2388b  vmaddw.xyzw $vf2, $vf7, $vf2w
    ctx->pc = 0x109d64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109d68: 0x4be361bc  vmulax.xyzw $ACC, $vf12, $vf3x
    ctx->pc = 0x109d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109d6c: 0xfba204e0  sqc2        $vf2, 0x4E0($sp)
    ctx->pc = 0x109d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109d70: 0x4be358bd  vmadday.xyzw $ACC, $vf11, $vf3y
    ctx->pc = 0x109d70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109d74: 0x4be348be  vmaddaz.xyzw $ACC, $vf9, $vf3z
    ctx->pc = 0x109d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109d78: 0x4be338cb  vmaddw.xyzw $vf3, $vf7, $vf3w
    ctx->pc = 0x109d78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109d7c: 0x4be461bc  vmulax.xyzw $ACC, $vf12, $vf4x
    ctx->pc = 0x109d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109d80: 0xfba304f0  sqc2        $vf3, 0x4F0($sp)
    ctx->pc = 0x109d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109d84: 0x4be458bd  vmadday.xyzw $ACC, $vf11, $vf4y
    ctx->pc = 0x109d84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109d88: 0x4be448be  vmaddaz.xyzw $ACC, $vf9, $vf4z
    ctx->pc = 0x109d88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109d8c: 0x4be4390b  vmaddw.xyzw $vf4, $vf7, $vf4w
    ctx->pc = 0x109d8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109d90: 0x4be161bc  vmulax.xyzw $ACC, $vf12, $vf1x
    ctx->pc = 0x109d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109d94: 0xfba40500  sqc2        $vf4, 0x500($sp)
    ctx->pc = 0x109d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109d98: 0x4be158bd  vmadday.xyzw $ACC, $vf11, $vf1y
    ctx->pc = 0x109d98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109d9c: 0x4be148be  vmaddaz.xyzw $ACC, $vf9, $vf1z
    ctx->pc = 0x109d9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109da0: 0x4be1384b  vmaddw.xyzw $vf1, $vf7, $vf1w
    ctx->pc = 0x109da0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109da4: 0xfba10510  sqc2        $vf1, 0x510($sp)
    ctx->pc = 0x109da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109da8: 0xfba204a0  sqc2        $vf2, 0x4A0($sp)
    ctx->pc = 0x109da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109dac: 0xfba104d0  sqc2        $vf1, 0x4D0($sp)
    ctx->pc = 0x109dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109db0: 0xfba304b0  sqc2        $vf3, 0x4B0($sp)
    ctx->pc = 0x109db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109db4: 0xfba404c0  sqc2        $vf4, 0x4C0($sp)
    ctx->pc = 0x109db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109db8: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x109db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x109dbc: 0x7fa204d0  sq          $v0, 0x4D0($sp)
    ctx->pc = 0x109dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 2));
    // 0x109dc0: 0xda410040  lqc2        $vf1, 0x40($s2)
    ctx->pc = 0x109dc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x109dc4: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x109dc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109dc8: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x109dc8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x109dcc: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x109dccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x109dd0: 0x4be151bc  vmulax.xyzw $ACC, $vf10, $vf1x
    ctx->pc = 0x109dd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109dd4: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x109dd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109dd8: 0x4be128be  vmaddaz.xyzw $ACC, $vf5, $vf1z
    ctx->pc = 0x109dd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109ddc: 0x4be1384b  vmaddw.xyzw $vf1, $vf7, $vf1w
    ctx->pc = 0x109ddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109de0: 0x4be251bc  vmulax.xyzw $ACC, $vf10, $vf2x
    ctx->pc = 0x109de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109de4: 0xfba10560  sqc2        $vf1, 0x560($sp)
    ctx->pc = 0x109de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109de8: 0x4be240bd  vmadday.xyzw $ACC, $vf8, $vf2y
    ctx->pc = 0x109de8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109dec: 0x4be228be  vmaddaz.xyzw $ACC, $vf5, $vf2z
    ctx->pc = 0x109decu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109df0: 0x4be2388b  vmaddw.xyzw $vf2, $vf7, $vf2w
    ctx->pc = 0x109df0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109df4: 0x4be351bc  vmulax.xyzw $ACC, $vf10, $vf3x
    ctx->pc = 0x109df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109df8: 0xfba20570  sqc2        $vf2, 0x570($sp)
    ctx->pc = 0x109df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109dfc: 0x4be340bd  vmadday.xyzw $ACC, $vf8, $vf3y
    ctx->pc = 0x109dfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109e00: 0x4be328be  vmaddaz.xyzw $ACC, $vf5, $vf3z
    ctx->pc = 0x109e00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109e04: 0x4be338cb  vmaddw.xyzw $vf3, $vf7, $vf3w
    ctx->pc = 0x109e04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109e08: 0x4be451bc  vmulax.xyzw $ACC, $vf10, $vf4x
    ctx->pc = 0x109e08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x109e0c: 0xfba30580  sqc2        $vf3, 0x580($sp)
    ctx->pc = 0x109e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109e10: 0x4be440bd  vmadday.xyzw $ACC, $vf8, $vf4y
    ctx->pc = 0x109e10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109e14: 0x4be428be  vmaddaz.xyzw $ACC, $vf5, $vf4z
    ctx->pc = 0x109e14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x109e18: 0x4be439cb  vmaddw.xyzw $vf7, $vf7, $vf4w
    ctx->pc = 0x109e18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x109e1c: 0xfba70590  sqc2        $vf7, 0x590($sp)
    ctx->pc = 0x109e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x109e20: 0xfba10520  sqc2        $vf1, 0x520($sp)
    ctx->pc = 0x109e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109e24: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x109e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x109e28: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x109e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x109e2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109e30: 0xfba70550  sqc2        $vf7, 0x550($sp)
    ctx->pc = 0x109e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x109e34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x109e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109e38: 0xfba20530  sqc2        $vf2, 0x530($sp)
    ctx->pc = 0x109e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109e3c: 0xfba30540  sqc2        $vf3, 0x540($sp)
    ctx->pc = 0x109e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109e40: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x109e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x109e44: 0x4500009c  bc1f        . + 4 + (0x9C << 2)
    ctx->pc = 0x109E44u;
    {
        const bool branch_taken_0x109e44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x109E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109E44u;
            // 0x109e48: 0x7fa20550  sq          $v0, 0x550($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e44) {
            ctx->pc = 0x10A0B8u;
            goto label_10a0b8;
        }
    }
    ctx->pc = 0x109E4Cu;
    // 0x109e4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x109e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x109e50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109e54: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x109e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x109e58: 0x27a20620  addiu       $v0, $sp, 0x620
    ctx->pc = 0x109e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
    // 0x109e5c: 0xdba104a0  lqc2        $vf1, 0x4A0($sp)
    ctx->pc = 0x109e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x109e60: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x109e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x109e64: 0x48a42800  qmtc2.ni    $a0, $vf5
    ctx->pc = 0x109e64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x109e68: 0xfba10ca0  sqc2        $vf1, 0xCA0($sp)
    ctx->pc = 0x109e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3232), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109e6c: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x109e6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109e70: 0xfba10620  sqc2        $vf1, 0x620($sp)
    ctx->pc = 0x109e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1568), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109e74: 0xdba104b0  lqc2        $vf1, 0x4B0($sp)
    ctx->pc = 0x109e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x109e78: 0xfba10cb0  sqc2        $vf1, 0xCB0($sp)
    ctx->pc = 0x109e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3248), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109e7c: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x109e7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109e80: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x109e80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109e84: 0xdba104c0  lqc2        $vf1, 0x4C0($sp)
    ctx->pc = 0x109e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x109e88: 0xfba10cc0  sqc2        $vf1, 0xCC0($sp)
    ctx->pc = 0x109e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3264), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109e8c: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x109e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109e90: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x109e90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109e94: 0xdba104d0  lqc2        $vf1, 0x4D0($sp)
    ctx->pc = 0x109e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x109e98: 0xfba10cd0  sqc2        $vf1, 0xCD0($sp)
    ctx->pc = 0x109e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3280), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109e9c: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x109e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109ea0: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x109ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109ea4: 0x7ba20620  lq          $v0, 0x620($sp)
    ctx->pc = 0x109ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x109ea8: 0x7ba30630  lq          $v1, 0x630($sp)
    ctx->pc = 0x109ea8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x109eac: 0x7ba40640  lq          $a0, 0x640($sp)
    ctx->pc = 0x109eacu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x109eb0: 0x7ba50650  lq          $a1, 0x650($sp)
    ctx->pc = 0x109eb0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x109eb4: 0x7fa205e0  sq          $v0, 0x5E0($sp)
    ctx->pc = 0x109eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 2));
    // 0x109eb8: 0x7fa305f0  sq          $v1, 0x5F0($sp)
    ctx->pc = 0x109eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 3));
    // 0x109ebc: 0x7fa40600  sq          $a0, 0x600($sp)
    ctx->pc = 0x109ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), GPR_VEC(ctx, 4));
    // 0x109ec0: 0x7fa50610  sq          $a1, 0x610($sp)
    ctx->pc = 0x109ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), GPR_VEC(ctx, 5));
    // 0x109ec4: 0x27a206a0  addiu       $v0, $sp, 0x6A0
    ctx->pc = 0x109ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
    // 0x109ec8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x109ec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x109ecc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x109eccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x109ed0: 0x48a63000  qmtc2.ni    $a2, $vf6
    ctx->pc = 0x109ed0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x109ed4: 0xfba10ce0  sqc2        $vf1, 0xCE0($sp)
    ctx->pc = 0x109ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3296), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109ed8: 0x4be60858  vmulx.xyzw  $vf1, $vf1, $vf6x
    ctx->pc = 0x109ed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109edc: 0xfba106a0  sqc2        $vf1, 0x6A0($sp)
    ctx->pc = 0x109edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109ee0: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x109ee0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x109ee4: 0xfba10cf0  sqc2        $vf1, 0xCF0($sp)
    ctx->pc = 0x109ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3312), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109ee8: 0x4be60858  vmulx.xyzw  $vf1, $vf1, $vf6x
    ctx->pc = 0x109ee8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109eec: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x109eecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109ef0: 0xda210020  lqc2        $vf1, 0x20($s1)
    ctx->pc = 0x109ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x109ef4: 0xfba10d00  sqc2        $vf1, 0xD00($sp)
    ctx->pc = 0x109ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3328), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109ef8: 0x4be60858  vmulx.xyzw  $vf1, $vf1, $vf6x
    ctx->pc = 0x109ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109efc: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x109efcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109f00: 0xda210030  lqc2        $vf1, 0x30($s1)
    ctx->pc = 0x109f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x109f04: 0xfba10d10  sqc2        $vf1, 0xD10($sp)
    ctx->pc = 0x109f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3344), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109f08: 0x4be60858  vmulx.xyzw  $vf1, $vf1, $vf6x
    ctx->pc = 0x109f08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109f0c: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x109f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109f10: 0xdba706a0  lqc2        $vf7, 0x6A0($sp)
    ctx->pc = 0x109f10u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1696)));
    // 0x109f14: 0xdba806b0  lqc2        $vf8, 0x6B0($sp)
    ctx->pc = 0x109f14u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1712)));
    // 0x109f18: 0xdba906c0  lqc2        $vf9, 0x6C0($sp)
    ctx->pc = 0x109f18u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1728)));
    // 0x109f1c: 0xdbaa06d0  lqc2        $vf10, 0x6D0($sp)
    ctx->pc = 0x109f1cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1744)));
    // 0x109f20: 0xfba70660  sqc2        $vf7, 0x660($sp)
    ctx->pc = 0x109f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x109f24: 0xfba80670  sqc2        $vf8, 0x670($sp)
    ctx->pc = 0x109f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x109f28: 0xfba90680  sqc2        $vf9, 0x680($sp)
    ctx->pc = 0x109f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x109f2c: 0xfbaa0690  sqc2        $vf10, 0x690($sp)
    ctx->pc = 0x109f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x109f30: 0xdba405e0  lqc2        $vf4, 0x5E0($sp)
    ctx->pc = 0x109f30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x109f34: 0xdba105f0  lqc2        $vf1, 0x5F0($sp)
    ctx->pc = 0x109f34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x109f38: 0xdba20600  lqc2        $vf2, 0x600($sp)
    ctx->pc = 0x109f38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x109f3c: 0xdba30610  lqc2        $vf3, 0x610($sp)
    ctx->pc = 0x109f3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x109f40: 0x4be72128  vadd.xyzw   $vf4, $vf4, $vf7
    ctx->pc = 0x109f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x109f44: 0x4be80868  vadd.xyzw   $vf1, $vf1, $vf8
    ctx->pc = 0x109f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109f48: 0x4be910a8  vadd.xyzw   $vf2, $vf2, $vf9
    ctx->pc = 0x109f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109f4c: 0x4bea18e8  vadd.xyzw   $vf3, $vf3, $vf10
    ctx->pc = 0x109f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x109f50: 0xfba406e0  sqc2        $vf4, 0x6E0($sp)
    ctx->pc = 0x109f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109f54: 0xfba106f0  sqc2        $vf1, 0x6F0($sp)
    ctx->pc = 0x109f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109f58: 0xfba20700  sqc2        $vf2, 0x700($sp)
    ctx->pc = 0x109f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109f5c: 0xfba30710  sqc2        $vf3, 0x710($sp)
    ctx->pc = 0x109f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1808), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109f60: 0xfba405a0  sqc2        $vf4, 0x5A0($sp)
    ctx->pc = 0x109f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109f64: 0xfba105b0  sqc2        $vf1, 0x5B0($sp)
    ctx->pc = 0x109f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109f68: 0xfba205c0  sqc2        $vf2, 0x5C0($sp)
    ctx->pc = 0x109f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109f6c: 0xfba305d0  sqc2        $vf3, 0x5D0($sp)
    ctx->pc = 0x109f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x109f70: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x109f70u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x109f74: 0x7ba205b0  lq          $v0, 0x5B0($sp)
    ctx->pc = 0x109f74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x109f78: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x109f78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x109f7c: 0x7ba205c0  lq          $v0, 0x5C0($sp)
    ctx->pc = 0x109f7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x109f80: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x109f80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x109f84: 0x7ba205d0  lq          $v0, 0x5D0($sp)
    ctx->pc = 0x109f84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x109f88: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x109f88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x109f8c: 0x27a207a0  addiu       $v0, $sp, 0x7A0
    ctx->pc = 0x109f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
    // 0x109f90: 0xdba10520  lqc2        $vf1, 0x520($sp)
    ctx->pc = 0x109f90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x109f94: 0xfba10d20  sqc2        $vf1, 0xD20($sp)
    ctx->pc = 0x109f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3360), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109f98: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x109f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109f9c: 0xfba107a0  sqc2        $vf1, 0x7A0($sp)
    ctx->pc = 0x109f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1952), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109fa0: 0xdba10530  lqc2        $vf1, 0x530($sp)
    ctx->pc = 0x109fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x109fa4: 0xfba10d30  sqc2        $vf1, 0xD30($sp)
    ctx->pc = 0x109fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3376), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109fa8: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x109fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109fac: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x109facu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109fb0: 0xdba10540  lqc2        $vf1, 0x540($sp)
    ctx->pc = 0x109fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x109fb4: 0xfba10d40  sqc2        $vf1, 0xD40($sp)
    ctx->pc = 0x109fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3392), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109fb8: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x109fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109fbc: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x109fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109fc0: 0xdba10550  lqc2        $vf1, 0x550($sp)
    ctx->pc = 0x109fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x109fc4: 0xfba10d50  sqc2        $vf1, 0xD50($sp)
    ctx->pc = 0x109fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3408), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109fc8: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x109fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x109fcc: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x109fccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x109fd0: 0x7ba507a0  lq          $a1, 0x7A0($sp)
    ctx->pc = 0x109fd0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1952)));
    // 0x109fd4: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x109fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x109fd8: 0x7ba207b0  lq          $v0, 0x7B0($sp)
    ctx->pc = 0x109fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1968)));
    // 0x109fdc: 0x7ba307c0  lq          $v1, 0x7C0($sp)
    ctx->pc = 0x109fdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1984)));
    // 0x109fe0: 0x7ba407d0  lq          $a0, 0x7D0($sp)
    ctx->pc = 0x109fe0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2000)));
    // 0x109fe4: 0x7fa50760  sq          $a1, 0x760($sp)
    ctx->pc = 0x109fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1888), GPR_VEC(ctx, 5));
    // 0x109fe8: 0x7fa20770  sq          $v0, 0x770($sp)
    ctx->pc = 0x109fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1904), GPR_VEC(ctx, 2));
    // 0x109fec: 0x7fa30780  sq          $v1, 0x780($sp)
    ctx->pc = 0x109fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1920), GPR_VEC(ctx, 3));
    // 0x109ff0: 0x7fa40790  sq          $a0, 0x790($sp)
    ctx->pc = 0x109ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1936), GPR_VEC(ctx, 4));
    // 0x109ff4: 0x27a20820  addiu       $v0, $sp, 0x820
    ctx->pc = 0x109ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
    // 0x109ff8: 0xda210040  lqc2        $vf1, 0x40($s1)
    ctx->pc = 0x109ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x109ffc: 0xfba10d60  sqc2        $vf1, 0xD60($sp)
    ctx->pc = 0x109ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3424), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a000: 0x4be60858  vmulx.xyzw  $vf1, $vf1, $vf6x
    ctx->pc = 0x10a000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a004: 0xfba10820  sqc2        $vf1, 0x820($sp)
    ctx->pc = 0x10a004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a008: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x10a008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10a00c: 0xfba10d70  sqc2        $vf1, 0xD70($sp)
    ctx->pc = 0x10a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3440), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a010: 0x4be60858  vmulx.xyzw  $vf1, $vf1, $vf6x
    ctx->pc = 0x10a010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a014: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x10a014u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a018: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x10a018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x10a01c: 0xfba10d80  sqc2        $vf1, 0xD80($sp)
    ctx->pc = 0x10a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3456), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a020: 0x4be60858  vmulx.xyzw  $vf1, $vf1, $vf6x
    ctx->pc = 0x10a020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a024: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x10a024u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a028: 0xd8c10030  lqc2        $vf1, 0x30($a2)
    ctx->pc = 0x10a028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x10a02c: 0xfba10d90  sqc2        $vf1, 0xD90($sp)
    ctx->pc = 0x10a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3472), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a030: 0x4be60858  vmulx.xyzw  $vf1, $vf1, $vf6x
    ctx->pc = 0x10a030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a034: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x10a034u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a038: 0xdba50820  lqc2        $vf5, 0x820($sp)
    ctx->pc = 0x10a038u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x10a03c: 0xdba60830  lqc2        $vf6, 0x830($sp)
    ctx->pc = 0x10a03cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x10a040: 0xdba70840  lqc2        $vf7, 0x840($sp)
    ctx->pc = 0x10a040u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x10a044: 0xdba80850  lqc2        $vf8, 0x850($sp)
    ctx->pc = 0x10a044u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x10a048: 0xfba507e0  sqc2        $vf5, 0x7E0($sp)
    ctx->pc = 0x10a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2016), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a04c: 0xfba607f0  sqc2        $vf6, 0x7F0($sp)
    ctx->pc = 0x10a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2032), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a050: 0xfba70800  sqc2        $vf7, 0x800($sp)
    ctx->pc = 0x10a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2048), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a054: 0xfba80810  sqc2        $vf8, 0x810($sp)
    ctx->pc = 0x10a054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2064), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x10a058: 0xdba40760  lqc2        $vf4, 0x760($sp)
    ctx->pc = 0x10a058u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1888)));
    // 0x10a05c: 0xdba10770  lqc2        $vf1, 0x770($sp)
    ctx->pc = 0x10a05cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1904)));
    // 0x10a060: 0xdba20780  lqc2        $vf2, 0x780($sp)
    ctx->pc = 0x10a060u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1920)));
    // 0x10a064: 0xdba30790  lqc2        $vf3, 0x790($sp)
    ctx->pc = 0x10a064u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1936)));
    // 0x10a068: 0x4be52128  vadd.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x10a068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a06c: 0x4be60868  vadd.xyzw   $vf1, $vf1, $vf6
    ctx->pc = 0x10a06cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a070: 0x4be710a8  vadd.xyzw   $vf2, $vf2, $vf7
    ctx->pc = 0x10a070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a074: 0x4be818e8  vadd.xyzw   $vf3, $vf3, $vf8
    ctx->pc = 0x10a074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10a078: 0xfba40860  sqc2        $vf4, 0x860($sp)
    ctx->pc = 0x10a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a07c: 0xfba10870  sqc2        $vf1, 0x870($sp)
    ctx->pc = 0x10a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a080: 0xfba20880  sqc2        $vf2, 0x880($sp)
    ctx->pc = 0x10a080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a084: 0xfba30890  sqc2        $vf3, 0x890($sp)
    ctx->pc = 0x10a084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a088: 0xfba40720  sqc2        $vf4, 0x720($sp)
    ctx->pc = 0x10a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1824), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a08c: 0xfba10730  sqc2        $vf1, 0x730($sp)
    ctx->pc = 0x10a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1840), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a090: 0xfba20740  sqc2        $vf2, 0x740($sp)
    ctx->pc = 0x10a090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1856), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a094: 0xfba30750  sqc2        $vf3, 0x750($sp)
    ctx->pc = 0x10a094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1872), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a098: 0xfa240040  sqc2        $vf4, 0x40($s1)
    ctx->pc = 0x10a098u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a09c: 0x7ba20730  lq          $v0, 0x730($sp)
    ctx->pc = 0x10a09cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1840)));
    // 0x10a0a0: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x10a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x10a0a4: 0x7ba20740  lq          $v0, 0x740($sp)
    ctx->pc = 0x10a0a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1856)));
    // 0x10a0a8: 0x7e220060  sq          $v0, 0x60($s1)
    ctx->pc = 0x10a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 2));
    // 0x10a0ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10A0ACu;
    {
        const bool branch_taken_0x10a0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0ACu;
            // 0x10a0b0: 0x7ba20750  lq          $v0, 0x750($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0ac) {
            ctx->pc = 0x10A0F4u;
            goto label_10a0f4;
        }
    }
    ctx->pc = 0x10A0B4u;
    // 0x10a0b4: 0x0  nop
    ctx->pc = 0x10a0b4u;
    // NOP
label_10a0b8:
    // 0x10a0b8: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x10a0b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x10a0bc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x10a0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x10a0c0: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x10a0c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x10a0c4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x10a0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x10a0c8: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x10a0c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x10a0cc: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x10a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x10a0d0: 0x7ba204d0  lq          $v0, 0x4D0($sp)
    ctx->pc = 0x10a0d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x10a0d4: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x10a0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x10a0d8: 0x7ba20520  lq          $v0, 0x520($sp)
    ctx->pc = 0x10a0d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x10a0dc: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x10a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x10a0e0: 0x7ba20530  lq          $v0, 0x530($sp)
    ctx->pc = 0x10a0e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x10a0e4: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x10a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x10a0e8: 0x7ba20540  lq          $v0, 0x540($sp)
    ctx->pc = 0x10a0e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x10a0ec: 0x7e220060  sq          $v0, 0x60($s1)
    ctx->pc = 0x10a0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 2));
    // 0x10a0f0: 0x7ba20550  lq          $v0, 0x550($sp)
    ctx->pc = 0x10a0f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_10a0f4:
    // 0x10a0f4: 0x7e220070  sq          $v0, 0x70($s1)
    ctx->pc = 0x10a0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 2));
    // 0x10a0f8: 0x3d68021  addu        $s0, $fp, $s6
    ctx->pc = 0x10a0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x10a0fc: 0xdba600a0  lqc2        $vf6, 0xA0($sp)
    ctx->pc = 0x10a0fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10a100: 0xdba700b0  lqc2        $vf7, 0xB0($sp)
    ctx->pc = 0x10a100u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10a104: 0xdba800c0  lqc2        $vf8, 0xC0($sp)
    ctx->pc = 0x10a104u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10a108: 0xdba300d0  lqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x10a108u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10a10c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x10a10cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10a110: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x10a110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10a114: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x10a114u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10a118: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x10a118u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10a11c: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x10a11cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a120: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x10a120u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a124: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x10a124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a128: 0x4be5194b  vmaddw.xyzw $vf5, $vf3, $vf5w
    ctx->pc = 0x10a128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a12c: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x10a12cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a130: 0xfba508e0  sqc2        $vf5, 0x8E0($sp)
    ctx->pc = 0x10a130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a134: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x10a134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a138: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x10a138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a13c: 0x4be1184b  vmaddw.xyzw $vf1, $vf3, $vf1w
    ctx->pc = 0x10a13cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a140: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x10a140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a144: 0xfba108f0  sqc2        $vf1, 0x8F0($sp)
    ctx->pc = 0x10a144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a148: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x10a148u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a14c: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x10a14cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a150: 0x4be2188b  vmaddw.xyzw $vf2, $vf3, $vf2w
    ctx->pc = 0x10a150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a154: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x10a154u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a158: 0xfba20900  sqc2        $vf2, 0x900($sp)
    ctx->pc = 0x10a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a15c: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x10a15cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a160: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x10a160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a164: 0x4be418cb  vmaddw.xyzw $vf3, $vf3, $vf4w
    ctx->pc = 0x10a164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a168: 0xfba30910  sqc2        $vf3, 0x910($sp)
    ctx->pc = 0x10a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a16c: 0xfba508a0  sqc2        $vf5, 0x8A0($sp)
    ctx->pc = 0x10a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a170: 0xfba108b0  sqc2        $vf1, 0x8B0($sp)
    ctx->pc = 0x10a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a174: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x10a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x10a178: 0xfba208c0  sqc2        $vf2, 0x8C0($sp)
    ctx->pc = 0x10a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a17c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x10a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x10a180: 0xfba308d0  sqc2        $vf3, 0x8D0($sp)
    ctx->pc = 0x10a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a184: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x10a184u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a188: 0xdba808b0  lqc2        $vf8, 0x8B0($sp)
    ctx->pc = 0x10a188u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2224)));
    // 0x10a18c: 0xfa080010  sqc2        $vf8, 0x10($s0)
    ctx->pc = 0x10a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x10a190: 0xdba608c0  lqc2        $vf6, 0x8C0($sp)
    ctx->pc = 0x10a190u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2240)));
    // 0x10a194: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x10a194u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a198: 0xdba308d0  lqc2        $vf3, 0x8D0($sp)
    ctx->pc = 0x10a198u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2256)));
    // 0x10a19c: 0xfa030030  sqc2        $vf3, 0x30($s0)
    ctx->pc = 0x10a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a1a0: 0xda240040  lqc2        $vf4, 0x40($s1)
    ctx->pc = 0x10a1a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x10a1a4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x10a1a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10a1a8: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x10a1a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10a1ac: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x10a1acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10a1b0: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x10a1b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a1b4: 0x4be440bd  vmadday.xyzw $ACC, $vf8, $vf4y
    ctx->pc = 0x10a1b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a1b8: 0x4be430be  vmaddaz.xyzw $ACC, $vf6, $vf4z
    ctx->pc = 0x10a1b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a1bc: 0x4be4190b  vmaddw.xyzw $vf4, $vf3, $vf4w
    ctx->pc = 0x10a1bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a1c0: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x10a1c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a1c4: 0xfba40960  sqc2        $vf4, 0x960($sp)
    ctx->pc = 0x10a1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a1c8: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x10a1c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a1cc: 0x4be130be  vmaddaz.xyzw $ACC, $vf6, $vf1z
    ctx->pc = 0x10a1ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a1d0: 0x4be1184b  vmaddw.xyzw $vf1, $vf3, $vf1w
    ctx->pc = 0x10a1d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a1d4: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x10a1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a1d8: 0xfba10970  sqc2        $vf1, 0x970($sp)
    ctx->pc = 0x10a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a1dc: 0x4be240bd  vmadday.xyzw $ACC, $vf8, $vf2y
    ctx->pc = 0x10a1dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a1e0: 0x4be230be  vmaddaz.xyzw $ACC, $vf6, $vf2z
    ctx->pc = 0x10a1e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a1e4: 0x4be2188b  vmaddw.xyzw $vf2, $vf3, $vf2w
    ctx->pc = 0x10a1e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a1e8: 0x4be729bc  vmulax.xyzw $ACC, $vf5, $vf7x
    ctx->pc = 0x10a1e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a1ec: 0xfba20980  sqc2        $vf2, 0x980($sp)
    ctx->pc = 0x10a1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2432), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a1f0: 0x4be740bd  vmadday.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x10a1f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a1f4: 0x4be730be  vmaddaz.xyzw $ACC, $vf6, $vf7z
    ctx->pc = 0x10a1f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a1f8: 0x4be718cb  vmaddw.xyzw $vf3, $vf3, $vf7w
    ctx->pc = 0x10a1f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a1fc: 0xfba30990  sqc2        $vf3, 0x990($sp)
    ctx->pc = 0x10a1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2448), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a200: 0xfba40920  sqc2        $vf4, 0x920($sp)
    ctx->pc = 0x10a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a204: 0xfba30350  sqc2        $vf3, 0x350($sp)
    ctx->pc = 0x10a204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a208: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10a208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a20c: 0xfba10330  sqc2        $vf1, 0x330($sp)
    ctx->pc = 0x10a20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a210: 0x27a409a0  addiu       $a0, $sp, 0x9A0
    ctx->pc = 0x10a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
    // 0x10a214: 0xfba20340  sqc2        $vf2, 0x340($sp)
    ctx->pc = 0x10a214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a218: 0xfba10930  sqc2        $vf1, 0x930($sp)
    ctx->pc = 0x10a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a21c: 0xfba20940  sqc2        $vf2, 0x940($sp)
    ctx->pc = 0x10a21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a220: 0xfba30950  sqc2        $vf3, 0x950($sp)
    ctx->pc = 0x10a220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a224: 0xfba40320  sqc2        $vf4, 0x320($sp)
    ctx->pc = 0x10a224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a228: 0xfa040040  sqc2        $vf4, 0x40($s0)
    ctx->pc = 0x10a228u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a22c: 0x7a820010  lq          $v0, 0x10($s4)
    ctx->pc = 0x10a22cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10a230: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x10a230u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x10a234: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x10a234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x10a238: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x10a238u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x10a23c: 0x7a820030  lq          $v0, 0x30($s4)
    ctx->pc = 0x10a23cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x10a240: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x10a240u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x10a244: 0x7ba20c60  lq          $v0, 0xC60($sp)
    ctx->pc = 0x10a244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 3168)));
    // 0x10a248: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x10A248u;
    SET_GPR_U32(ctx, 31, 0x10A250u);
    ctx->pc = 0x10A24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A248u;
            // 0x10a24c: 0x7fa20350  sq          $v0, 0x350($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A250u; }
        if (ctx->pc != 0x10A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A250u; }
        if (ctx->pc != 0x10A250u) { return; }
    }
    ctx->pc = 0x10A250u;
    // 0x10a250: 0xdbaa09a0  lqc2        $vf10, 0x9A0($sp)
    ctx->pc = 0x10a250u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2464)));
    // 0x10a254: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x10a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x10a258: 0xdbab09b0  lqc2        $vf11, 0x9B0($sp)
    ctx->pc = 0x10a258u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2480)));
    // 0x10a25c: 0xdbac09c0  lqc2        $vf12, 0x9C0($sp)
    ctx->pc = 0x10a25cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2496)));
    // 0x10a260: 0xdba709d0  lqc2        $vf7, 0x9D0($sp)
    ctx->pc = 0x10a260u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2512)));
    // 0x10a264: 0xfbaa0320  sqc2        $vf10, 0x320($sp)
    ctx->pc = 0x10a264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x10a268: 0xfbab0330  sqc2        $vf11, 0x330($sp)
    ctx->pc = 0x10a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x10a26c: 0xfbac0340  sqc2        $vf12, 0x340($sp)
    ctx->pc = 0x10a26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x10a270: 0xfba70350  sqc2        $vf7, 0x350($sp)
    ctx->pc = 0x10a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a274: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x10a274u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a278: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x10a278u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a27c: 0xdba90040  lqc2        $vf9, 0x40($sp)
    ctx->pc = 0x10a27cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a280: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x10a280u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a284: 0xda020080  lqc2        $vf2, 0x80($s0)
    ctx->pc = 0x10a284u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x10a288: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x10a288u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10a28c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x10a28cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10a290: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x10a290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10a294: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x10a294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a298: 0x4be240bd  vmadday.xyzw $ACC, $vf8, $vf2y
    ctx->pc = 0x10a298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a29c: 0x4be248be  vmaddaz.xyzw $ACC, $vf9, $vf2z
    ctx->pc = 0x10a29cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a2a0: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x10a2a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a2a4: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x10a2a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a2a8: 0xfba20a20  sqc2        $vf2, 0xA20($sp)
    ctx->pc = 0x10a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a2ac: 0x4be340bd  vmadday.xyzw $ACC, $vf8, $vf3y
    ctx->pc = 0x10a2acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a2b0: 0x4be348be  vmaddaz.xyzw $ACC, $vf9, $vf3z
    ctx->pc = 0x10a2b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a2b4: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x10a2b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a2b8: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x10a2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a2bc: 0xfba30a30  sqc2        $vf3, 0xA30($sp)
    ctx->pc = 0x10a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2608), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a2c0: 0x4be140bd  vmadday.xyzw $ACC, $vf8, $vf1y
    ctx->pc = 0x10a2c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a2c4: 0x4be148be  vmaddaz.xyzw $ACC, $vf9, $vf1z
    ctx->pc = 0x10a2c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a2c8: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x10a2c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a2cc: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x10a2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a2d0: 0xfba10a40  sqc2        $vf1, 0xA40($sp)
    ctx->pc = 0x10a2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a2d4: 0x4be540bd  vmadday.xyzw $ACC, $vf8, $vf5y
    ctx->pc = 0x10a2d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a2d8: 0x4be548be  vmaddaz.xyzw $ACC, $vf9, $vf5z
    ctx->pc = 0x10a2d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a2dc: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x10a2dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a2e0: 0xfba40a50  sqc2        $vf4, 0xA50($sp)
    ctx->pc = 0x10a2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2640), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a2e4: 0xfba209e0  sqc2        $vf2, 0x9E0($sp)
    ctx->pc = 0x10a2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a2e8: 0xfba309f0  sqc2        $vf3, 0x9F0($sp)
    ctx->pc = 0x10a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2544), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a2ec: 0xfba10a00  sqc2        $vf1, 0xA00($sp)
    ctx->pc = 0x10a2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a2f0: 0xfba40a10  sqc2        $vf4, 0xA10($sp)
    ctx->pc = 0x10a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2576), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a2f4: 0xfba204a0  sqc2        $vf2, 0x4A0($sp)
    ctx->pc = 0x10a2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a2f8: 0xfba304b0  sqc2        $vf3, 0x4B0($sp)
    ctx->pc = 0x10a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a2fc: 0xfba104c0  sqc2        $vf1, 0x4C0($sp)
    ctx->pc = 0x10a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a300: 0xfba404d0  sqc2        $vf4, 0x4D0($sp)
    ctx->pc = 0x10a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a304: 0x4be251bc  vmulax.xyzw $ACC, $vf10, $vf2x
    ctx->pc = 0x10a304u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a308: 0x4be258bd  vmadday.xyzw $ACC, $vf11, $vf2y
    ctx->pc = 0x10a308u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a30c: 0x4be260be  vmaddaz.xyzw $ACC, $vf12, $vf2z
    ctx->pc = 0x10a30cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a310: 0x4be2394b  vmaddw.xyzw $vf5, $vf7, $vf2w
    ctx->pc = 0x10a310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a314: 0x4be351bc  vmulax.xyzw $ACC, $vf10, $vf3x
    ctx->pc = 0x10a314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a318: 0xfba50aa0  sqc2        $vf5, 0xAA0($sp)
    ctx->pc = 0x10a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2720), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a31c: 0x4be358bd  vmadday.xyzw $ACC, $vf11, $vf3y
    ctx->pc = 0x10a31cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a320: 0x4be360be  vmaddaz.xyzw $ACC, $vf12, $vf3z
    ctx->pc = 0x10a320u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a324: 0x4be338cb  vmaddw.xyzw $vf3, $vf7, $vf3w
    ctx->pc = 0x10a324u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a328: 0x4be151bc  vmulax.xyzw $ACC, $vf10, $vf1x
    ctx->pc = 0x10a328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a32c: 0xfba30ab0  sqc2        $vf3, 0xAB0($sp)
    ctx->pc = 0x10a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2736), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a330: 0x4be158bd  vmadday.xyzw $ACC, $vf11, $vf1y
    ctx->pc = 0x10a330u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a334: 0x4be160be  vmaddaz.xyzw $ACC, $vf12, $vf1z
    ctx->pc = 0x10a334u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a338: 0x4be1384b  vmaddw.xyzw $vf1, $vf7, $vf1w
    ctx->pc = 0x10a338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a33c: 0x4be451bc  vmulax.xyzw $ACC, $vf10, $vf4x
    ctx->pc = 0x10a33cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x10a340: 0xfba10ac0  sqc2        $vf1, 0xAC0($sp)
    ctx->pc = 0x10a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2752), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a344: 0x4be458bd  vmadday.xyzw $ACC, $vf11, $vf4y
    ctx->pc = 0x10a344u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a348: 0x4be460be  vmaddaz.xyzw $ACC, $vf12, $vf4z
    ctx->pc = 0x10a348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x10a34c: 0x4be439cb  vmaddw.xyzw $vf7, $vf7, $vf4w
    ctx->pc = 0x10a34cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10a350: 0xfba70ad0  sqc2        $vf7, 0xAD0($sp)
    ctx->pc = 0x10a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2768), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a354: 0xfba50a60  sqc2        $vf5, 0xA60($sp)
    ctx->pc = 0x10a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2656), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a358: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x10a35c: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x10a35cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x10a360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a364: 0xfba704d0  sqc2        $vf7, 0x4D0($sp)
    ctx->pc = 0x10a364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a368: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10a368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a36c: 0xfba104c0  sqc2        $vf1, 0x4C0($sp)
    ctx->pc = 0x10a36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a370: 0xfba30a70  sqc2        $vf3, 0xA70($sp)
    ctx->pc = 0x10a370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2672), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a374: 0xfba10a80  sqc2        $vf1, 0xA80($sp)
    ctx->pc = 0x10a374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a378: 0xfba70a90  sqc2        $vf7, 0xA90($sp)
    ctx->pc = 0x10a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2704), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a37c: 0xfba504a0  sqc2        $vf5, 0x4A0($sp)
    ctx->pc = 0x10a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a380: 0xfba304b0  sqc2        $vf3, 0x4B0($sp)
    ctx->pc = 0x10a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a384: 0x7aa20030  lq          $v0, 0x30($s5)
    ctx->pc = 0x10a384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x10a388: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x10A388u;
    {
        const bool branch_taken_0x10a388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10A38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A388u;
            // 0x10a38c: 0x7fa204d0  sq          $v0, 0x4D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a388) {
            ctx->pc = 0x10A4D0u;
            goto label_10a4d0;
        }
    }
    ctx->pc = 0x10A390u;
    // 0x10a390: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10a390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10a394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a398: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x10a398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x10a39c: 0x27a20b60  addiu       $v0, $sp, 0xB60
    ctx->pc = 0x10a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2912));
    // 0x10a3a0: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x10a3a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10a3a4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x10a3a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x10a3a8: 0xfba50da0  sqc2        $vf5, 0xDA0($sp)
    ctx->pc = 0x10a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3488), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a3ac: 0x4be22858  vmulx.xyzw  $vf1, $vf5, $vf2x
    ctx->pc = 0x10a3acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a3b0: 0xfba10b60  sqc2        $vf1, 0xB60($sp)
    ctx->pc = 0x10a3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2912), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a3b4: 0xfba30db0  sqc2        $vf3, 0xDB0($sp)
    ctx->pc = 0x10a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3504), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a3b8: 0x4be21858  vmulx.xyzw  $vf1, $vf3, $vf2x
    ctx->pc = 0x10a3b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a3bc: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x10a3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a3c0: 0xdba104c0  lqc2        $vf1, 0x4C0($sp)
    ctx->pc = 0x10a3c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x10a3c4: 0xfba10dc0  sqc2        $vf1, 0xDC0($sp)
    ctx->pc = 0x10a3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3520), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a3c8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x10a3c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a3cc: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x10a3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a3d0: 0xdba104d0  lqc2        $vf1, 0x4D0($sp)
    ctx->pc = 0x10a3d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x10a3d4: 0xfba10dd0  sqc2        $vf1, 0xDD0($sp)
    ctx->pc = 0x10a3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3536), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a3d8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x10a3d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a3dc: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x10a3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a3e0: 0x7ba50b60  lq          $a1, 0xB60($sp)
    ctx->pc = 0x10a3e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 2912)));
    // 0x10a3e4: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x10a3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x10a3e8: 0x7ba20b70  lq          $v0, 0xB70($sp)
    ctx->pc = 0x10a3e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2928)));
    // 0x10a3ec: 0x7ba30b80  lq          $v1, 0xB80($sp)
    ctx->pc = 0x10a3ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2944)));
    // 0x10a3f0: 0x7ba40b90  lq          $a0, 0xB90($sp)
    ctx->pc = 0x10a3f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 2960)));
    // 0x10a3f4: 0x7fa50b20  sq          $a1, 0xB20($sp)
    ctx->pc = 0x10a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2848), GPR_VEC(ctx, 5));
    // 0x10a3f8: 0x7fa20b30  sq          $v0, 0xB30($sp)
    ctx->pc = 0x10a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2864), GPR_VEC(ctx, 2));
    // 0x10a3fc: 0x7fa30b40  sq          $v1, 0xB40($sp)
    ctx->pc = 0x10a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2880), GPR_VEC(ctx, 3));
    // 0x10a400: 0x7fa40b50  sq          $a0, 0xB50($sp)
    ctx->pc = 0x10a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2896), GPR_VEC(ctx, 4));
    // 0x10a404: 0x27a20be0  addiu       $v0, $sp, 0xBE0
    ctx->pc = 0x10a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    // 0x10a408: 0xda210080  lqc2        $vf1, 0x80($s1)
    ctx->pc = 0x10a408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x10a40c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x10a40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10a410: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x10a410u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x10a414: 0xfba10de0  sqc2        $vf1, 0xDE0($sp)
    ctx->pc = 0x10a414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3552), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a418: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x10a418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a41c: 0xfba10be0  sqc2        $vf1, 0xBE0($sp)
    ctx->pc = 0x10a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3040), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a420: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x10a420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10a424: 0xfba10df0  sqc2        $vf1, 0xDF0($sp)
    ctx->pc = 0x10a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3568), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a428: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x10a428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a42c: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x10a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a430: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x10a430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x10a434: 0xfba10e00  sqc2        $vf1, 0xE00($sp)
    ctx->pc = 0x10a434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3584), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a438: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x10a438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a43c: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x10a43cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a440: 0xd8c10030  lqc2        $vf1, 0x30($a2)
    ctx->pc = 0x10a440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x10a444: 0xfba10e10  sqc2        $vf1, 0xE10($sp)
    ctx->pc = 0x10a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3600), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a448: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x10a448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a44c: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x10a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a450: 0xdba50be0  lqc2        $vf5, 0xBE0($sp)
    ctx->pc = 0x10a450u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3040)));
    // 0x10a454: 0xdba60bf0  lqc2        $vf6, 0xBF0($sp)
    ctx->pc = 0x10a454u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3056)));
    // 0x10a458: 0xdba70c00  lqc2        $vf7, 0xC00($sp)
    ctx->pc = 0x10a458u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3072)));
    // 0x10a45c: 0xdba80c10  lqc2        $vf8, 0xC10($sp)
    ctx->pc = 0x10a45cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 3088)));
    // 0x10a460: 0xfba50ba0  sqc2        $vf5, 0xBA0($sp)
    ctx->pc = 0x10a460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2976), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a464: 0xfba60bb0  sqc2        $vf6, 0xBB0($sp)
    ctx->pc = 0x10a464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2992), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10a468: 0xfba70bc0  sqc2        $vf7, 0xBC0($sp)
    ctx->pc = 0x10a468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3008), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x10a46c: 0xfba80bd0  sqc2        $vf8, 0xBD0($sp)
    ctx->pc = 0x10a46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3024), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x10a470: 0xdba40b20  lqc2        $vf4, 0xB20($sp)
    ctx->pc = 0x10a470u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2848)));
    // 0x10a474: 0xdba10b30  lqc2        $vf1, 0xB30($sp)
    ctx->pc = 0x10a474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2864)));
    // 0x10a478: 0xdba20b40  lqc2        $vf2, 0xB40($sp)
    ctx->pc = 0x10a478u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2880)));
    // 0x10a47c: 0xdba30b50  lqc2        $vf3, 0xB50($sp)
    ctx->pc = 0x10a47cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 2896)));
    // 0x10a480: 0x4be52128  vadd.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x10a480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a484: 0x4be60868  vadd.xyzw   $vf1, $vf1, $vf6
    ctx->pc = 0x10a484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a488: 0x4be710a8  vadd.xyzw   $vf2, $vf2, $vf7
    ctx->pc = 0x10a488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a48c: 0x4be818e8  vadd.xyzw   $vf3, $vf3, $vf8
    ctx->pc = 0x10a48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10a490: 0xfba40c20  sqc2        $vf4, 0xC20($sp)
    ctx->pc = 0x10a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3104), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a494: 0xfba10c30  sqc2        $vf1, 0xC30($sp)
    ctx->pc = 0x10a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3120), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a498: 0xfba20c40  sqc2        $vf2, 0xC40($sp)
    ctx->pc = 0x10a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3136), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a49c: 0xfba30c50  sqc2        $vf3, 0xC50($sp)
    ctx->pc = 0x10a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3152), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a4a0: 0xfba40ae0  sqc2        $vf4, 0xAE0($sp)
    ctx->pc = 0x10a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2784), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a4a4: 0xfba10af0  sqc2        $vf1, 0xAF0($sp)
    ctx->pc = 0x10a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2800), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a4a8: 0xfba20b00  sqc2        $vf2, 0xB00($sp)
    ctx->pc = 0x10a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2816), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a4ac: 0xfba30b10  sqc2        $vf3, 0xB10($sp)
    ctx->pc = 0x10a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2832), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a4b0: 0xfa240080  sqc2        $vf4, 0x80($s1)
    ctx->pc = 0x10a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a4b4: 0x7ba20af0  lq          $v0, 0xAF0($sp)
    ctx->pc = 0x10a4b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2800)));
    // 0x10a4b8: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x10a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
    // 0x10a4bc: 0x7ba20b00  lq          $v0, 0xB00($sp)
    ctx->pc = 0x10a4bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2816)));
    // 0x10a4c0: 0x7e2200a0  sq          $v0, 0xA0($s1)
    ctx->pc = 0x10a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 2));
    // 0x10a4c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10A4C4u;
    {
        const bool branch_taken_0x10a4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A4C4u;
            // 0x10a4c8: 0x7ba20b10  lq          $v0, 0xB10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4c4) {
            ctx->pc = 0x10A4E8u;
            goto label_10a4e8;
        }
    }
    ctx->pc = 0x10A4CCu;
    // 0x10a4cc: 0x0  nop
    ctx->pc = 0x10a4ccu;
    // NOP
label_10a4d0:
    // 0x10a4d0: 0xfa250080  sqc2        $vf5, 0x80($s1)
    ctx->pc = 0x10a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a4d4: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x10a4d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x10a4d8: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x10a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
    // 0x10a4dc: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x10a4dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x10a4e0: 0x7e2200a0  sq          $v0, 0xA0($s1)
    ctx->pc = 0x10a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 2));
    // 0x10a4e4: 0x7ba204d0  lq          $v0, 0x4D0($sp)
    ctx->pc = 0x10a4e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_10a4e8:
    // 0x10a4e8: 0x7e2200b0  sq          $v0, 0xB0($s1)
    ctx->pc = 0x10a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 2));
    // 0x10a4ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10a4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4f0: 0x26e50002  addiu       $a1, $s7, 0x2
    ctx->pc = 0x10a4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x10a4f4: 0xc04dc26  jal         func_137098
    ctx->pc = 0x10A4F4u;
    SET_GPR_U32(ctx, 31, 0x10A4FCu);
    ctx->pc = 0x10A4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A4F4u;
            // 0x10a4f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137098u;
    if (runtime->hasFunction(0x137098u)) {
        auto targetFn = runtime->lookupFunction(0x137098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4FCu; }
        if (ctx->pc != 0x10A4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137098_0x137098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4FCu; }
        if (ctx->pc != 0x10A4FCu) { return; }
    }
    ctx->pc = 0x10A4FCu;
label_10a4fc:
    // 0x10a4fc: 0x7bb00ed0  lq          $s0, 0xED0($sp)
    ctx->pc = 0x10a4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3792)));
label_10a500:
    // 0x10a500: 0x7bb10ec0  lq          $s1, 0xEC0($sp)
    ctx->pc = 0x10a500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3776)));
label_10a504:
    // 0x10a504: 0x7bb20eb0  lq          $s2, 0xEB0($sp)
    ctx->pc = 0x10a504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3760)));
    // 0x10a508: 0x7bb30ea0  lq          $s3, 0xEA0($sp)
    ctx->pc = 0x10a508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3744)));
    // 0x10a50c: 0x7bb40e90  lq          $s4, 0xE90($sp)
    ctx->pc = 0x10a50cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3728)));
    // 0x10a510: 0x7bb50e80  lq          $s5, 0xE80($sp)
    ctx->pc = 0x10a510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 3712)));
    // 0x10a514: 0x7bb60e70  lq          $s6, 0xE70($sp)
    ctx->pc = 0x10a514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 3696)));
    // 0x10a518: 0x7bb70e60  lq          $s7, 0xE60($sp)
    ctx->pc = 0x10a518u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 3680)));
    // 0x10a51c: 0x7bbe0e50  lq          $fp, 0xE50($sp)
    ctx->pc = 0x10a51cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 3664)));
    // 0x10a520: 0xdfbf0e40  ld          $ra, 0xE40($sp)
    ctx->pc = 0x10a520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3648)));
    // 0x10a524: 0xc7b40ee0  lwc1        $f20, 0xEE0($sp)
    ctx->pc = 0x10a524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10a528: 0x3e00008  jr          $ra
    ctx->pc = 0x10A528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A528u;
            // 0x10a52c: 0x27bd0ef0  addiu       $sp, $sp, 0xEF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109588u: goto label_109588;
            case 0x109594u: goto label_109594;
            case 0x109798u: goto label_109798;
            case 0x1097C0u: goto label_1097c0;
            case 0x109810u: goto label_109810;
            case 0x109840u: goto label_109840;
            case 0x109860u: goto label_109860;
            case 0x109864u: goto label_109864;
            case 0x109884u: goto label_109884;
            case 0x1098A4u: goto label_1098a4;
            case 0x1098B8u: goto label_1098b8;
            case 0x10A0B8u: goto label_10a0b8;
            case 0x10A0F4u: goto label_10a0f4;
            case 0x10A4D0u: goto label_10a4d0;
            case 0x10A4E8u: goto label_10a4e8;
            case 0x10A4FCu: goto label_10a4fc;
            case 0x10A500u: goto label_10a500;
            case 0x10A504u: goto label_10a504;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A530u;
}
