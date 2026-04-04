#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13a570
// Address: 0x13a570 - 0x13a758
void entry_13a570_0x13a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13a570_0x13a758");
#endif

    ctx->pc = 0x13a570u;

    // 0x13a570: 0x80a20020  lb          $v0, 0x20($a1)
    ctx->pc = 0x13a570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13a574: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13a574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13a578: 0x3c015015  lui         $at, 0x5015
    ctx->pc = 0x13a578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20501 << 16));
    // 0x13a57c: 0x342102f9  ori         $at, $at, 0x2F9
    ctx->pc = 0x13a57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)761);
    // 0x13a580: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13a580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13a584: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x13A584u;
    {
        const bool branch_taken_0x13a584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A584u;
            // 0x13a588: 0x48a44000  qmtc2.ni    $a0, $vf8 (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a584) {
            ctx->pc = 0x13A6E0u;
            goto label_13a6e0;
        }
    }
    ctx->pc = 0x13A58Cu;
    // 0x13a58c: 0x80a20023  lb          $v0, 0x23($a1)
    ctx->pc = 0x13a58cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x13a590: 0x80a30021  lb          $v1, 0x21($a1)
    ctx->pc = 0x13a590u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 33)));
    // 0x13a594: 0x80a40022  lb          $a0, 0x22($a1)
    ctx->pc = 0x13a594u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x13a598: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13a598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13a59c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x13a59cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x13a5a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13a5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a5a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13a5a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13a5a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13a5a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a5ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a5b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13a5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13a5b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13a5b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5b8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x13a5b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x13a5bc: 0x70481b89  pcpyld      $v1, $v0, $t0
    ctx->pc = 0x13a5bcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x13a5c0: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x13a5c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x13a5c4: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x13a5c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x13a5c8: 0x70434cc8  ppacw       $t1, $v0, $v1
    ctx->pc = 0x13a5c8u;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x13a5cc: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x13a5ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x13a5d0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a5d4: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x13a5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a5d8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x13a5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a5dc: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x13a5dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a5e0: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x13a5e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a5e4: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x13a5e4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x13a5e8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13a5e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13a5ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x13a5ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13a5f0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x13a5f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a5f4: 0x4a0002ff  vnop
    ctx->pc = 0x13a5f4u;
    // NOP operation, no action needed for VU0
    // 0x13a5f8: 0x4a0002ff  vnop
    ctx->pc = 0x13a5f8u;
    // NOP operation, no action needed for VU0
    // 0x13a5fc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x13a5fcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x13a600: 0x4be70b3c  vmove.xyzw  $vf7, $vf1
    ctx->pc = 0x13a600u;
    ctx->vu0_vf[7] = ctx->vu0_vf[1];
    // 0x13a604: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x13a604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x13a608: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x13a608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a60c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a610: 0x10e20029  beq         $a3, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x13A610u;
    {
        const bool branch_taken_0x13a610 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A610u;
            // 0x13a614: 0xfba10080  sqc2        $vf1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a610) {
            ctx->pc = 0x13A6B8u;
            goto label_13a6b8;
        }
    }
    ctx->pc = 0x13A618u;
    // 0x13a618: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x13a618u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a61c: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x13a61cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a620: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x13a620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13a624: 0x0  nop
    ctx->pc = 0x13a624u;
    // NOP
label_13a628:
    // 0x13a628: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x13a628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x13a62c: 0x4be7206a  vmul.xyzw   $vf1, $vf4, $vf7
    ctx->pc = 0x13a62cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a630: 0x4b010981  vaddy.x     $vf6, $vf1, $vf1y
    ctx->pc = 0x13a630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13a634: 0x4a210942  vaddz.w     $vf5, $vf1, $vf1z
    ctx->pc = 0x13a634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13a638: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x13a638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x13a63c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x13a63cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x13a640: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13a640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a644: 0x4b053043  vaddw.x     $vf1, $vf6, $vf5w
    ctx->pc = 0x13a644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a648: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13a648u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a64c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x13a64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13a650: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x13a650u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x13a654: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13a654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a658: 0x0  nop
    ctx->pc = 0x13a658u;
    // NOP
    // 0x13a65c: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x13A65Cu;
    {
        const bool branch_taken_0x13a65c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a65c) {
            ctx->pc = 0x13A660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A65Cu;
            // 0x13a660: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A69Cu;
            goto label_13a69c;
        }
    }
    ctx->pc = 0x13A664u;
    // 0x13a664: 0x4be8206a  vmul.xyzw   $vf1, $vf4, $vf8
    ctx->pc = 0x13a664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a668: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x13a668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a66c: 0x4a210882  vaddz.w     $vf2, $vf1, $vf1z
    ctx->pc = 0x13a66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a670: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13a670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a674: 0x4b021843  vaddw.x     $vf1, $vf3, $vf2w
    ctx->pc = 0x13a674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a678: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x13a678u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a67c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13a67cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a680: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x13a680u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x13a684: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13a684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a688: 0x0  nop
    ctx->pc = 0x13a688u;
    // NOP
    // 0x13a68c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x13A68Cu;
    {
        const bool branch_taken_0x13a68c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a68c) {
            ctx->pc = 0x13A690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A68Cu;
            // 0x13a690: 0x46002129  min.s       $f4, $f4, $f0 (Delay Slot)
        ctx->f[4] = std::min(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A698u;
            goto label_13a698;
        }
    }
    ctx->pc = 0x13A694u;
    // 0x13a694: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x13a694u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
label_13a698:
    // 0x13a698: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x13a698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_13a69c:
    // 0x13a69c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a6a0: 0x54e2ffe1  bnel        $a3, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x13A6A0u;
    {
        const bool branch_taken_0x13a6a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a6a0) {
            ctx->pc = 0x13A6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6A0u;
            // 0x13a6a4: 0xd8c40000  lqc2        $vf4, 0x0($a2) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A628u;
            runtime->cooperativeGuestYield();
            goto label_13a628;
        }
    }
    ctx->pc = 0x13A6A8u;
    // 0x13a6a8: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x13a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a6ac: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x13a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13a6b0: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x13a6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13a6b4: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x13a6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_13a6b8:
    // 0x13a6b8: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x13a6b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a6bc: 0x0  nop
    ctx->pc = 0x13a6bcu;
    // NOP
    // 0x13a6c0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x13A6C0u;
    {
        const bool branch_taken_0x13a6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a6c0) {
            ctx->pc = 0x13A6C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6C0u;
            // 0x13a6c4: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A6D4u;
            goto label_13a6d4;
        }
    }
    ctx->pc = 0x13A6C8u;
    // 0x13a6c8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x13a6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13a6cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x13A6CCu;
    {
        const bool branch_taken_0x13a6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6CCu;
            // 0x13a6d0: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a6cc) {
            ctx->pc = 0x13A750u;
            goto label_13a750;
        }
    }
    ctx->pc = 0x13A6D4u;
label_13a6d4:
    // 0x13a6d4: 0x460020c3  div.s       $f3, $f4, $f0
    ctx->pc = 0x13a6d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[0];
    // 0x13a6d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x13A6D8u;
    {
        const bool branch_taken_0x13a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6D8u;
            // 0x13a6dc: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a6d8) {
            ctx->pc = 0x13A750u;
            goto label_13a750;
        }
    }
    ctx->pc = 0x13A6E0u;
label_13a6e0:
    // 0x13a6e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x13a6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x13a6e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a6e8: 0x10e20019  beq         $a3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13A6E8u;
    {
        const bool branch_taken_0x13a6e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A6E8u;
            // 0x13a6ec: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a6e8) {
            ctx->pc = 0x13A750u;
            goto label_13a750;
        }
    }
    ctx->pc = 0x13A6F0u;
label_13a6f0:
    // 0x13a6f0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x13a6f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13a6f4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x13a6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x13a6f8: 0x4be2406a  vmul.xyzw   $vf1, $vf8, $vf2
    ctx->pc = 0x13a6f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a6fc: 0x4b010901  vaddy.x     $vf4, $vf1, $vf1y
    ctx->pc = 0x13a6fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13a700: 0x4a2108c2  vaddz.w     $vf3, $vf1, $vf1z
    ctx->pc = 0x13a700u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a704: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x13a704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a708: 0x4b032043  vaddw.x     $vf1, $vf4, $vf3w
    ctx->pc = 0x13a708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a70c: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x13a70cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a710: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x13a710u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a714: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13a714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a718: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13a718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a71c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x13a71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x13a720: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x13a720u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a724: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x13a724u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a728: 0x46000004  c1          0x4
    ctx->pc = 0x13a728u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x13a72c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a730: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13a730u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x13a734: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x13a734u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x13a738: 0x14e2ffed  bne         $a3, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13A738u;
    {
        const bool branch_taken_0x13a738 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A738u;
            // 0x13a73c: 0x460118e9  min.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = std::min(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a738) {
            ctx->pc = 0x13A6F0u;
            runtime->cooperativeGuestYield();
            goto label_13a6f0;
        }
    }
    ctx->pc = 0x13A740u;
    // 0x13a740: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x13a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13a744: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x13a744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13a748: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x13a748u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x13a74c: 0x0  nop
    ctx->pc = 0x13a74cu;
    // NOP
label_13a750:
    // 0x13a750: 0x3e00008  jr          $ra
    ctx->pc = 0x13A750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A750u;
            // 0x13a754: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A628u: goto label_13a628;
            case 0x13A698u: goto label_13a698;
            case 0x13A69Cu: goto label_13a69c;
            case 0x13A6B8u: goto label_13a6b8;
            case 0x13A6D4u: goto label_13a6d4;
            case 0x13A6E0u: goto label_13a6e0;
            case 0x13A6F0u: goto label_13a6f0;
            case 0x13A750u: goto label_13a750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A758u;
}
