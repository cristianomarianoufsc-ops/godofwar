#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A6E0
// Address: 0x10a6e0 - 0x10aa80
void sub_0010A6E0_0x10a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A6E0_0x10a6e0");
#endif

    ctx->pc = 0x10a6e0u;

    // 0x10a6e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10a6e4: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x10a6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
    // 0x10a6e8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x10a6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x10a6ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a6f0: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x10a6f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x10a6f4: 0x48a42800  qmtc2.ni    $a0, $vf5
    ctx->pc = 0x10a6f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x10a6f8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x10a6f8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x10a6fc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x10a6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x10a700: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x10a700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a704: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x10a704u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x10a708: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x10a708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x10a70c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10A70Cu;
    {
        const bool branch_taken_0x10a70c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10A710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A70Cu;
            // 0x10a710: 0x7fa50060  sq          $a1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a70c) {
            ctx->pc = 0x10A71Cu;
            goto label_10a71c;
        }
    }
    ctx->pc = 0x10A714u;
    // 0x10a714: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x10A714u;
    {
        const bool branch_taken_0x10a714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A714u;
            // 0x10a718: 0x48222800  qmfc2.ni    $v0, $vf5 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a714) {
            ctx->pc = 0x10A888u;
            goto label_10a888;
        }
    }
    ctx->pc = 0x10A71Cu;
label_10a71c:
    // 0x10a71c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x10a71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x10a720: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x10a720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
    // 0x10a724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a728: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x10a728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a72c: 0x0  nop
    ctx->pc = 0x10a72cu;
    // NOP
    // 0x10a730: 0x45010055  bc1t        . + 4 + (0x55 << 2)
    ctx->pc = 0x10A730u;
    {
        const bool branch_taken_0x10a730 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A730u;
            // 0x10a734: 0x700514a9  por         $v0, $zero, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a730) {
            ctx->pc = 0x10A888u;
            goto label_10a888;
        }
    }
    ctx->pc = 0x10A738u;
    // 0x10a738: 0x4be5286a  vmul.xyzw   $vf1, $vf5, $vf5
    ctx->pc = 0x10a738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a73c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x10a73cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a740: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x10a740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a744: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x10a744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a748: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x10a748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a74c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x10a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a750: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x10a750u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x10a754: 0x4a0003bf  vwaitq
    ctx->pc = 0x10a754u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10a758: 0x4be0285c  vmulq.xyzw  $vf1, $vf5, $Q
    ctx->pc = 0x10a758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a75c: 0x4a0002ff  vnop
    ctx->pc = 0x10a75cu;
    // NOP operation, no action needed for VU0
    // 0x10a760: 0x4a0002ff  vnop
    ctx->pc = 0x10a760u;
    // NOP operation, no action needed for VU0
    // 0x10a764: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x10a764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a768: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x10a768u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x10a76c: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x10a76cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a770: 0xdba50070  lqc2        $vf5, 0x70($sp)
    ctx->pc = 0x10a770u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a774: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x10a774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a778: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x10a778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a77c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x10a77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a780: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x10a780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a784: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x10a784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a788: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x10a788u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x10a78c: 0x4a0003bf  vwaitq
    ctx->pc = 0x10a78cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10a790: 0x4be0191c  vmulq.xyzw  $vf4, $vf3, $Q
    ctx->pc = 0x10a790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10a794: 0x4a0002ff  vnop
    ctx->pc = 0x10a794u;
    // NOP operation, no action needed for VU0
    // 0x10a798: 0x4a0002ff  vnop
    ctx->pc = 0x10a798u;
    // NOP operation, no action needed for VU0
    // 0x10a79c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x10a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10a7a0: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x10a7a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a7a4: 0x4be4106a  vmul.xyzw   $vf1, $vf2, $vf4
    ctx->pc = 0x10a7a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a7a8: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x10a7a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10a7ac: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x10a7acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a7b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10a7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a7b4: 0x4b011883  vaddw.x     $vf2, $vf3, $vf1w
    ctx->pc = 0x10a7b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a7b8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x10a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x10a7bc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x10a7bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10a7c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x10a7c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a7c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x10a7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a7c8: 0x0  nop
    ctx->pc = 0x10a7c8u;
    // NOP
    // 0x10a7cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x10A7CCu;
    {
        const bool branch_taken_0x10a7cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10A7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7CCu;
            // 0x10a7d0: 0xfba10050  sqc2        $vf1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7cc) {
            ctx->pc = 0x10A7E8u;
            goto label_10a7e8;
        }
    }
    ctx->pc = 0x10A7D4u;
    // 0x10a7d4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x10a7d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a7d8: 0x4be4086c  vsub.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x10a7d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a7dc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x10a7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10a7e0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x10a7e0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x10a7e4: 0x0  nop
    ctx->pc = 0x10a7e4u;
    // NOP
label_10a7e8:
    // 0x10a7e8: 0x3c013f77  lui         $at, 0x3F77
    ctx->pc = 0x10a7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16247 << 16));
    // 0x10a7ec: 0x34214bc7  ori         $at, $at, 0x4BC7
    ctx->pc = 0x10a7ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19399);
    // 0x10a7f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a7f4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x10a7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a7f8: 0x0  nop
    ctx->pc = 0x10a7f8u;
    // NOP
    // 0x10a7fc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x10A7FCu;
    {
        const bool branch_taken_0x10a7fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10A800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7FCu;
            // 0x10a800: 0xdba10060  lqc2        $vf1, 0x60($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7fc) {
            ctx->pc = 0x10A870u;
            goto label_10a870;
        }
    }
    ctx->pc = 0x10A804u;
    // 0x10a804: 0xc060f88  jal         func_183E20
    ctx->pc = 0x10A804u;
    SET_GPR_U32(ctx, 31, 0x10A80Cu);
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A80Cu; }
        if (ctx->pc != 0x10A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A80Cu; }
        if (ctx->pc != 0x10A80Cu) { return; }
    }
    ctx->pc = 0x10A80Cu;
    // 0x10a80c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10a80cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10a810: 0xc060e80  jal         func_183A00
    ctx->pc = 0x10A810u;
    SET_GPR_U32(ctx, 31, 0x10A818u);
    ctx->pc = 0x10A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A810u;
            // 0x10a814: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A818u; }
        if (ctx->pc != 0x10A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A818u; }
        if (ctx->pc != 0x10A818u) { return; }
    }
    ctx->pc = 0x10A818u;
    // 0x10a818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10a818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10a81c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x10a81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x10a820: 0x4616ab01  sub.s       $f12, $f21, $f22
    ctx->pc = 0x10a820u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x10a824: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x10a824u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x10a828: 0xc060e80  jal         func_183A00
    ctx->pc = 0x10A828u;
    SET_GPR_U32(ctx, 31, 0x10A830u);
    ctx->pc = 0x10A82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A828u;
            // 0x10a82c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A830u; }
        if (ctx->pc != 0x10A830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A830u; }
        if (ctx->pc != 0x10A830u) { return; }
    }
    ctx->pc = 0x10A830u;
    // 0x10a830: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x10a830u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x10a834: 0xc060e80  jal         func_183A00
    ctx->pc = 0x10A834u;
    SET_GPR_U32(ctx, 31, 0x10A83Cu);
    ctx->pc = 0x10A838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A834u;
            // 0x10a838: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A83Cu; }
        if (ctx->pc != 0x10A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A83Cu; }
        if (ctx->pc != 0x10A83Cu) { return; }
    }
    ctx->pc = 0x10A83Cu;
    // 0x10a83c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x10a83cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x10a840: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x10a840u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a844: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x10a844u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x10a848: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10a848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10a84c: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x10a84cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10a850: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x10a850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a854: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x10a854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10a858: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x10a858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10a85c: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x10a85cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a860: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x10a860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a864: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x10a864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x10a868: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10A868u;
    {
        const bool branch_taken_0x10a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A868u;
            // 0x10a86c: 0x48221800  qmfc2.ni    $v0, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a868) {
            ctx->pc = 0x10A888u;
            goto label_10a888;
        }
    }
    ctx->pc = 0x10A870u;
label_10a870:
    // 0x10a870: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x10a870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10a874: 0x4be5086c  vsub.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x10a874u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a878: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x10a878u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10a87c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x10a87cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10a880: 0x4be128a8  vadd.xyzw   $vf2, $vf5, $vf1
    ctx->pc = 0x10a880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10a884: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x10a884u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_10a888:
    // 0x10a888: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x10a888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10a88c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x10a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x10a890: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x10a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10a894: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x10a894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10a898: 0x3e00008  jr          $ra
    ctx->pc = 0x10A898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A898u;
            // 0x10a89c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A71Cu: goto label_10a71c;
            case 0x10A7E8u: goto label_10a7e8;
            case 0x10A870u: goto label_10a870;
            case 0x10A888u: goto label_10a888;
            case 0x10A8ECu: goto label_10a8ec;
            case 0x10A968u: goto label_10a968;
            case 0x10AA08u: goto label_10aa08;
            case 0x10AA1Cu: goto label_10aa1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A8A0u;
    // 0x10a8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a8a4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x10a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x10a8a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10a8ac: 0x2442f360  addiu       $v0, $v0, -0xCA0
    ctx->pc = 0x10a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964064));
    // 0x10a8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a8b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8b8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x10a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x10a8bc: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x10a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x10a8c0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10A8C0u;
    {
        const bool branch_taken_0x10a8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8C0u;
            // 0x10a8c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8c0) {
            ctx->pc = 0x10A8ECu;
            goto label_10a8ec;
        }
    }
    ctx->pc = 0x10A8C8u;
    // 0x10a8c8: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x10a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x10a8cc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x10a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x10a8d0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x10a8d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10a8d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10a8d8: 0x40f809  jalr        $v0
    ctx->pc = 0x10A8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A8E0u);
        ctx->pc = 0x10A8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8D8u;
            // 0x10a8dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10A8E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A71Cu: goto label_10a71c;
            case 0x10A7E8u: goto label_10a7e8;
            case 0x10A870u: goto label_10a870;
            case 0x10A888u: goto label_10a888;
            case 0x10A8ECu: goto label_10a8ec;
            case 0x10A968u: goto label_10a968;
            case 0x10AA08u: goto label_10aa08;
            case 0x10AA1Cu: goto label_10aa1c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A8E0u; }
            if (ctx->pc != 0x10A8E0u) { return; }
        }
        }
    }
    ctx->pc = 0x10A8E0u;
    // 0x10a8e0: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x10a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x10a8e4: 0xc0422be  jal         func_108AF8
    ctx->pc = 0x10A8E4u;
    SET_GPR_U32(ctx, 31, 0x10A8ECu);
    ctx->pc = 0x10A8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8E4u;
            // 0x10a8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108AF8u;
    if (runtime->hasFunction(0x108AF8u)) {
        auto targetFn = runtime->lookupFunction(0x108AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8ECu; }
        if (ctx->pc != 0x10A8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108AF8_0x108af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8ECu; }
        if (ctx->pc != 0x10A8ECu) { return; }
    }
    ctx->pc = 0x10A8ECu;
label_10a8ec:
    // 0x10a8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8f0: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x10A8F0u;
    SET_GPR_U32(ctx, 31, 0x10A8F8u);
    ctx->pc = 0x10A8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8F0u;
            // 0x10a8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8F8u; }
        if (ctx->pc != 0x10A8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063D8_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8F8u; }
        if (ctx->pc != 0x10A8F8u) { return; }
    }
    ctx->pc = 0x10A8F8u;
    // 0x10a8f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10a8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a900: 0x3e00008  jr          $ra
    ctx->pc = 0x10A900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A900u;
            // 0x10a904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A71Cu: goto label_10a71c;
            case 0x10A7E8u: goto label_10a7e8;
            case 0x10A870u: goto label_10a870;
            case 0x10A888u: goto label_10a888;
            case 0x10A8ECu: goto label_10a8ec;
            case 0x10A968u: goto label_10a968;
            case 0x10AA08u: goto label_10aa08;
            case 0x10AA1Cu: goto label_10aa1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A908u;
    // 0x10a908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a90c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10a910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10a910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10a914: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10a914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a91c: 0xc04198a  jal         func_106628
    ctx->pc = 0x10A91Cu;
    SET_GPR_U32(ctx, 31, 0x10A924u);
    ctx->pc = 0x10A920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A91Cu;
            // 0x10a920: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106628u;
    if (runtime->hasFunction(0x106628u)) {
        auto targetFn = runtime->lookupFunction(0x106628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A924u; }
        if (ctx->pc != 0x10A924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106628_0x106628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A924u; }
        if (ctx->pc != 0x10A924u) { return; }
    }
    ctx->pc = 0x10A924u;
    // 0x10a924: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10A924u;
    {
        const bool branch_taken_0x10a924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A924u;
            // 0x10a928: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a924) {
            ctx->pc = 0x10A968u;
            goto label_10a968;
        }
    }
    ctx->pc = 0x10A92Cu;
    // 0x10a92c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x10a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x10a930: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A930u;
    {
        const bool branch_taken_0x10a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A930u;
            // 0x10a934: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a930) {
            ctx->pc = 0x10A968u;
            goto label_10a968;
        }
    }
    ctx->pc = 0x10A938u;
    // 0x10a938: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x10a938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x10a93c: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x10a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x10a940: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x10a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x10a944: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x10a944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10a948: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10a94c: 0x40f809  jalr        $v0
    ctx->pc = 0x10A94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A954u);
        ctx->pc = 0x10A950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A94Cu;
            // 0x10a950: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10A954u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A71Cu: goto label_10a71c;
            case 0x10A7E8u: goto label_10a7e8;
            case 0x10A870u: goto label_10a870;
            case 0x10A888u: goto label_10a888;
            case 0x10A8ECu: goto label_10a8ec;
            case 0x10A968u: goto label_10a968;
            case 0x10AA08u: goto label_10aa08;
            case 0x10AA1Cu: goto label_10aa1c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A954u; }
            if (ctx->pc != 0x10A954u) { return; }
        }
        }
    }
    ctx->pc = 0x10A954u;
    // 0x10a954: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x10a954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x10a958: 0xc0422be  jal         func_108AF8
    ctx->pc = 0x10A958u;
    SET_GPR_U32(ctx, 31, 0x10A960u);
    ctx->pc = 0x10A95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A958u;
            // 0x10a95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108AF8u;
    if (runtime->hasFunction(0x108AF8u)) {
        auto targetFn = runtime->lookupFunction(0x108AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A960u; }
        if (ctx->pc != 0x10A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108AF8_0x108af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A960u; }
        if (ctx->pc != 0x10A960u) { return; }
    }
    ctx->pc = 0x10A960u;
    // 0x10a960: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x10a960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x10a964: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10a964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10a968:
    // 0x10a968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10a968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a970: 0x3e00008  jr          $ra
    ctx->pc = 0x10A970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A970u;
            // 0x10a974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A71Cu: goto label_10a71c;
            case 0x10A7E8u: goto label_10a7e8;
            case 0x10A870u: goto label_10a870;
            case 0x10A888u: goto label_10a888;
            case 0x10A8ECu: goto label_10a8ec;
            case 0x10A968u: goto label_10a968;
            case 0x10AA08u: goto label_10aa08;
            case 0x10AA1Cu: goto label_10aa1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A978u;
    // 0x10a978: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10a978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10a97c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x10a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x10a980: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x10a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x10a984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a988: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x10a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x10a98c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x10a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x10a990: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x10a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x10a994: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x10a994u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a998: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x10a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x10a99c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x10a99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x10a9a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10a9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10a9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a9a8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x10a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10a9ac: 0xc045f20  jal         func_117C80
    ctx->pc = 0x10A9ACu;
    SET_GPR_U32(ctx, 31, 0x10A9B4u);
    ctx->pc = 0x10A9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9ACu;
            // 0x10a9b0: 0x8c540220  lw          $s4, 0x220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (runtime->hasFunction(0x117C80u)) {
        auto targetFn = runtime->lookupFunction(0x117C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A9B4u; }
        if (ctx->pc != 0x10A9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117C80_0x117c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A9B4u; }
        if (ctx->pc != 0x10A9B4u) { return; }
    }
    ctx->pc = 0x10A9B4u;
    // 0x10a9b4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x10a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10a9b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x10a9b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9bc: 0x8c760080  lw          $s6, 0x80($v1)
    ctx->pc = 0x10a9bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x10a9c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x10a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x10a9c4: 0x8c46e854  lw          $a2, -0x17AC($v0)
    ctx->pc = 0x10a9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x10a9c8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x10a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10a9cc: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x10a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x10a9d0: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x10a9d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x10a9d4: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x10a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x10a9d8: 0x40f809  jalr        $v0
    ctx->pc = 0x10A9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A9E0u);
        ctx->pc = 0x10A9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9D8u;
            // 0x10a9dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10A9E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A71Cu: goto label_10a71c;
            case 0x10A7E8u: goto label_10a7e8;
            case 0x10A870u: goto label_10a870;
            case 0x10A888u: goto label_10a888;
            case 0x10A8ECu: goto label_10a8ec;
            case 0x10A968u: goto label_10a968;
            case 0x10AA08u: goto label_10aa08;
            case 0x10AA1Cu: goto label_10aa1c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A9E0u; }
            if (ctx->pc != 0x10A9E0u) { return; }
        }
        }
    }
    ctx->pc = 0x10A9E0u;
    // 0x10a9e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9e4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x10a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10a9e8: 0x26130100  addiu       $s3, $s0, 0x100
    ctx->pc = 0x10a9e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x10a9ec: 0x8c520064  lw          $s2, 0x64($v0)
    ctx->pc = 0x10a9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x10a9f0: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x10a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x10a9f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A9F4u;
    {
        const bool branch_taken_0x10a9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9F4u;
            // 0x10a9f8: 0x141100  sll         $v0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9f4) {
            ctx->pc = 0x10AA08u;
            goto label_10aa08;
        }
    }
    ctx->pc = 0x10A9FCu;
    // 0x10a9fc: 0xc046044  jal         func_118110
    ctx->pc = 0x10A9FCu;
    SET_GPR_U32(ctx, 31, 0x10AA04u);
    ctx->pc = 0x10AA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9FCu;
            // 0x10aa00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (runtime->hasFunction(0x118110u)) {
        auto targetFn = runtime->lookupFunction(0x118110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA04u; }
        if (ctx->pc != 0x10AA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118110_0x118110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA04u; }
        if (ctx->pc != 0x10AA04u) { return; }
    }
    ctx->pc = 0x10AA04u;
    // 0x10aa04: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x10aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_10aa08:
    // 0x10aa08: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x10aa08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10aa0c: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x10aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x10aa10: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x10aa10u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10aa14: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10AA14u;
    {
        const bool branch_taken_0x10aa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10aa14) {
            ctx->pc = 0x10AA18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA14u;
            // 0x10aa18: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AA1Cu;
            goto label_10aa1c;
        }
    }
    ctx->pc = 0x10AA1Cu;
label_10aa1c:
    // 0x10aa1c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x10aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x10aa20: 0x1012  mflo        $v0
    ctx->pc = 0x10aa20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10aa24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10aa28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10aa2c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x10AA2Cu;
    SET_GPR_U32(ctx, 31, 0x10AA34u);
    ctx->pc = 0x10AA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA2Cu;
            // 0x10aa30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA34u; }
        if (ctx->pc != 0x10AA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA34u; }
        if (ctx->pc != 0x10AA34u) { return; }
    }
    ctx->pc = 0x10AA34u;
    // 0x10aa34: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x10aa34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x10aa38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa3c: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x10aa3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10aa40: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10aa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa44: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x10aa44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa48: 0xc044510  jal         func_111440
    ctx->pc = 0x10AA48u;
    SET_GPR_U32(ctx, 31, 0x10AA50u);
    ctx->pc = 0x10AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA48u;
            // 0x10aa4c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111440u;
    if (runtime->hasFunction(0x111440u)) {
        auto targetFn = runtime->lookupFunction(0x111440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA50u; }
        if (ctx->pc != 0x10AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111440_0x111440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA50u; }
        if (ctx->pc != 0x10AA50u) { return; }
    }
    ctx->pc = 0x10AA50u;
    // 0x10aa50: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x10aa50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10aa54: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x10aa54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10aa58: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x10aa58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10aa5c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x10aa5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10aa60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10aa60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10aa64: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x10aa64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10aa68: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x10aa68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10aa6c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x10aa6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aa70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10aa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aa74: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA74u;
            // 0x10aa78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A71Cu: goto label_10a71c;
            case 0x10A7E8u: goto label_10a7e8;
            case 0x10A870u: goto label_10a870;
            case 0x10A888u: goto label_10a888;
            case 0x10A8ECu: goto label_10a8ec;
            case 0x10A968u: goto label_10a968;
            case 0x10AA08u: goto label_10aa08;
            case 0x10AA1Cu: goto label_10aa1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10AA7Cu;
    // 0x10aa7c: 0x0  nop
    ctx->pc = 0x10aa7cu;
    // NOP
}
