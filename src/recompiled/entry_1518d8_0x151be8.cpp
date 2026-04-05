#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1518d8
// Address: 0x1518d8 - 0x151be8
void entry_1518d8_0x151be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1518d8_0x151be8");
#endif

    ctx->pc = 0x1518d8u;

    // 0x1518d8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1518d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1518dc: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1518dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1518e0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1518e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1518e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1518e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518e8: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1518e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1518ec: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1518ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1518f0: 0x8e0700c0  lw          $a3, 0xC0($s0)
    ctx->pc = 0x1518f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1518f4: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x1518f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x1518f8: 0x504000b5  beql        $v0, $zero, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1518F8u;
    {
        const bool branch_taken_0x1518f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1518f8) {
            ctx->pc = 0x1518FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1518F8u;
            // 0x1518fc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151BD0u;
            goto label_151bd0;
        }
    }
    ctx->pc = 0x151900u;
    // 0x151900: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x151900u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151904: 0x700527c9  prot3w      $a0, $a1
    ctx->pc = 0x151904u;
    SET_GPR_VEC(ctx, 4, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x151908: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x151908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15190c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x15190cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x151910: 0x70052789  pexew       $a0, $a1
    ctx->pc = 0x151910u;
    SET_GPR_VEC(ctx, 4, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x151914: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x151914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15191c: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x15191cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x151920: 0x704334c8  ppacw       $a2, $v0, $v1
    ctx->pc = 0x151920u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x151924: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x151924u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x151928: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x151928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15192c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x15192cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x151930: 0xfa020020  sqc2        $vf2, 0x20($s0)
    ctx->pc = 0x151930u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151934: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x151934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151938: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x151938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15193c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x15193cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x151940: 0x4a0003bf  vwaitq
    ctx->pc = 0x151940u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x151944: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x151944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151948: 0x4a0002ff  vnop
    ctx->pc = 0x151948u;
    // NOP operation, no action needed for VU0
    // 0x15194c: 0x4a0002ff  vnop
    ctx->pc = 0x15194cu;
    // NOP operation, no action needed for VU0
    // 0x151950: 0xfa020020  sqc2        $vf2, 0x20($s0)
    ctx->pc = 0x151950u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151954: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x151954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151958: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x151958u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15195c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x15195cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x151960: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x151960u;
    {
        const bool branch_taken_0x151960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151960u;
            // 0x151964: 0xfa020020  sqc2        $vf2, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151960) {
            ctx->pc = 0x151BC8u;
            goto label_151bc8;
        }
    }
    ctx->pc = 0x151968u;
    // 0x151968: 0xe60c00d4  swc1        $f12, 0xD4($s0)
    ctx->pc = 0x151968u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x15196c: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x15196cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x151970: 0xc060e52  jal         func_183948
    ctx->pc = 0x151970u;
    SET_GPR_U32(ctx, 31, 0x151978u);
    ctx->pc = 0x151974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151970u;
            // 0x151974: 0xe60d00d8  swc1        $f13, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151978u; }
        if (ctx->pc != 0x151978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151978u; }
        if (ctx->pc != 0x151978u) { return; }
    }
    ctx->pc = 0x151978u;
    // 0x151978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x151978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15197c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15197cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151980: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x151980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x151984: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x151984u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x151988: 0xe60100dc  swc1        $f1, 0xDC($s0)
    ctx->pc = 0x151988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x15198c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15198cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x151990: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x151994: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x151994u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x151998: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15199c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x15199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1519a0: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1519a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1519a4: 0xda050020  lqc2        $vf5, 0x20($s0)
    ctx->pc = 0x1519a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1519a8: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x1519a8u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1519ac: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1519acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1519b0: 0x4bc22afe  vopmula.xyz $ACC, $vf5, $vf2
    ctx->pc = 0x1519b0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]);
    // 0x1519b4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1519b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1519b8: 0x4bc5106e  vopmsub.xyz $vf1, $vf2, $vf5
    ctx->pc = 0x1519b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1519bc: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1519bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1519c0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1519c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1519c4: 0x4bc50afe  vopmula.xyz $ACC, $vf1, $vf5
    ctx->pc = 0x1519c4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]);
    // 0x1519c8: 0x4bc128ae  vopmsub.xyz $vf2, $vf5, $vf1
    ctx->pc = 0x1519c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1519cc: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1519ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1519d0: 0x4be1092a  vmul.xyzw   $vf4, $vf1, $vf1
    ctx->pc = 0x1519d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1519d4: 0x4b0420c1  vaddy.x     $vf3, $vf4, $vf4y
    ctx->pc = 0x1519d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1519d8: 0x4b0418c2  vaddz.x     $vf3, $vf3, $vf4z
    ctx->pc = 0x1519d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1519dc: 0x4a6303be  vrsqrt      $Q, $vf0w, $vf3x
    ctx->pc = 0x1519dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1519e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1519e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1519e4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1519e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1519e8: 0x4a0002ff  vnop
    ctx->pc = 0x1519e8u;
    // NOP operation, no action needed for VU0
    // 0x1519ec: 0x4a0002ff  vnop
    ctx->pc = 0x1519ecu;
    // NOP operation, no action needed for VU0
    // 0x1519f0: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x1519f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1519f4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1519f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1519f8: 0x4b0420c1  vaddy.x     $vf3, $vf4, $vf4y
    ctx->pc = 0x1519f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1519fc: 0x4b0418c2  vaddz.x     $vf3, $vf3, $vf4z
    ctx->pc = 0x1519fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x151a00: 0x4b010102  vaddz.x     $vf4, $vf0, $vf1z
    ctx->pc = 0x151a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151a04: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x151a04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a0c: 0x4a6303be  vrsqrt      $Q, $vf0w, $vf3x
    ctx->pc = 0x151a0cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x151a10: 0x4a0003bf  vwaitq
    ctx->pc = 0x151a10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x151a14: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x151a14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151a18: 0x4a0002ff  vnop
    ctx->pc = 0x151a18u;
    // NOP operation, no action needed for VU0
    // 0x151a1c: 0x4a0002ff  vnop
    ctx->pc = 0x151a1cu;
    // NOP operation, no action needed for VU0
    // 0x151a20: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x151a20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151a24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x151a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a28: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x151a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151a2c: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x151a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151a30: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x151a30u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151a34: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x151a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a38: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x151a38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x151a3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x151a3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a40: 0x71243389  pcpyld      $a2, $t1, $a0
    ctx->pc = 0x151a40u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
    // 0x151a44: 0x4b020042  vaddz.x     $vf1, $vf0, $vf2z
    ctx->pc = 0x151a44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151a48: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x151a48u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151a4c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x151a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a50: 0x70c234c8  ppacw       $a2, $a2, $v0
    ctx->pc = 0x151a50u;
    SET_GPR_VEC(ctx, 6, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x151a54: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x151a54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151a58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x151a58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a5c: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x151a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    // 0x151a60: 0x4b020041  vaddy.x     $vf1, $vf0, $vf2y
    ctx->pc = 0x151a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151a64: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x151a64u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151a68: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x151a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a6c: 0x7fa600e0  sq          $a2, 0xE0($sp)
    ctx->pc = 0x151a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 6));
    // 0x151a70: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x151a70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x151a74: 0x71242b89  pcpyld      $a1, $t1, $a0
    ctx->pc = 0x151a74u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
    // 0x151a78: 0x4b050086  vsubz.x     $vf2, $vf0, $vf5z
    ctx->pc = 0x151a78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151a7c: 0x70a22cc8  ppacw       $a1, $a1, $v0
    ctx->pc = 0x151a7cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x151a80: 0x4b050044  vsubx.x     $vf1, $vf0, $vf5x
    ctx->pc = 0x151a80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151a84: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x151a84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a8c: 0x4b050145  vsuby.x     $vf5, $vf0, $vf5y
    ctx->pc = 0x151a8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x151a90: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x151a90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151a94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x151a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a98: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x151a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x151a9c: 0x48272800  qmfc2.ni    $a3, $vf5
    ctx->pc = 0x151a9cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x151aa0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x151aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151aa4: 0x7fa500f0  sq          $a1, 0xF0($sp)
    ctx->pc = 0x151aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 5));
    // 0x151aa8: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x151aa8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x151aac: 0x71241b89  pcpyld      $v1, $t1, $a0
    ctx->pc = 0x151aacu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
    // 0x151ab0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x151ab0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x151ab4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x151ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x151ab8: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x151ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x151abc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151ac0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x151ac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151ac4: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x151ac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151ac8: 0x4a211080  vaddx.w     $vf2, $vf2, $vf1x
    ctx->pc = 0x151ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151acc: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x151accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x151ad0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x151ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x151ad4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x151ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x151ad8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x151ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x151adc: 0xc60c00d8  lwc1        $f12, 0xD8($s0)
    ctx->pc = 0x151adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x151ae0: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x151ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x151ae4: 0x460cab01  sub.s       $f12, $f21, $f12
    ctx->pc = 0x151ae4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    // 0x151ae8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x151ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x151aec: 0xc060e80  jal         func_183A00
    ctx->pc = 0x151AECu;
    SET_GPR_U32(ctx, 31, 0x151AF4u);
    ctx->pc = 0x151AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151AECu;
            // 0x151af0: 0xfba20080  sqc2        $vf2, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AF4u; }
        if (ctx->pc != 0x151AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AF4u; }
        if (ctx->pc != 0x151AF4u) { return; }
    }
    ctx->pc = 0x151AF4u;
    // 0x151af4: 0xc60c00d8  lwc1        $f12, 0xD8($s0)
    ctx->pc = 0x151af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x151af8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x151af8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x151afc: 0xc060e52  jal         func_183948
    ctx->pc = 0x151AFCu;
    SET_GPR_U32(ctx, 31, 0x151B04u);
    ctx->pc = 0x151B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151AFCu;
            // 0x151b00: 0x460cab01  sub.s       $f12, $f21, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B04u; }
        if (ctx->pc != 0x151B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151B04u; }
        if (ctx->pc != 0x151B04u) { return; }
    }
    ctx->pc = 0x151B04u;
    // 0x151b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b08: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x151b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x151b0c: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x151b0cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x151b10: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x151b10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x151b14: 0x70c81389  pcpyld      $v0, $a2, $t0
    ctx->pc = 0x151b14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x151b18: 0xdba50050  lqc2        $vf5, 0x50($sp)
    ctx->pc = 0x151b18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151b1c: 0x70434cc8  ppacw       $t1, $v0, $v1
    ctx->pc = 0x151b1cu;
    SET_GPR_VEC(ctx, 9, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x151b20: 0xdba60060  lqc2        $vf6, 0x60($sp)
    ctx->pc = 0x151b20u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151b24: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x151b24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x151b28: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x151b28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x151b2c: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x151b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151b30: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x151b30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x151b34: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x151b34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151b38: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x151b38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x151b3c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x151b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151b40: 0x4be1188b  vmaddw.xyzw $vf2, $vf3, $vf1w
    ctx->pc = 0x151b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x151b44: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x151b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151b48: 0xfa020040  sqc2        $vf2, 0x40($s0)
    ctx->pc = 0x151b48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151b4c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x151b4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x151b50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x151b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x151b54: 0x48a33800  qmtc2.ni    $v1, $vf7
    ctx->pc = 0x151b54u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x151b58: 0x4b070040  vaddx.x     $vf1, $vf0, $vf7x
    ctx->pc = 0x151b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151b5c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x151b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x151b60: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x151b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151b64: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x151b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x151b68: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x151b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x151b6c: 0x4be1188b  vmaddw.xyzw $vf2, $vf3, $vf1w
    ctx->pc = 0x151b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x151b70: 0xfa020050  sqc2        $vf2, 0x50($s0)
    ctx->pc = 0x151b70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151b74: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x151b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x151b78: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x151b78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151b7c: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x151b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151b80: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x151b80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x151b84: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x151b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151b88: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x151b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151b8c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x151b8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x151b90: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x151b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151b94: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x151b94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x151b98: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x151b98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x151b9c: 0x4be1188b  vmaddw.xyzw $vf2, $vf3, $vf1w
    ctx->pc = 0x151b9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x151ba0: 0xfa020060  sqc2        $vf2, 0x60($s0)
    ctx->pc = 0x151ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151ba4: 0x4a870040  vaddx.y     $vf1, $vf0, $vf7x
    ctx->pc = 0x151ba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151ba8: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x151ba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x151bac: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x151bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151bb0: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x151bb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x151bb4: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x151bb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x151bb8: 0x4be118cb  vmaddw.xyzw $vf3, $vf3, $vf1w
    ctx->pc = 0x151bb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x151bbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151BBCu;
    {
        const bool branch_taken_0x151bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151BBCu;
            // 0x151bc0: 0xfa030070  sqc2        $vf3, 0x70($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151bbc) {
            ctx->pc = 0x151BCCu;
            goto label_151bcc;
        }
    }
    ctx->pc = 0x151BC4u;
    // 0x151bc4: 0x0  nop
    ctx->pc = 0x151bc4u;
    // NOP
label_151bc8:
    // 0x151bc8: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x151bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_151bcc:
    // 0x151bcc: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x151bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_151bd0:
    // 0x151bd0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x151bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x151bd4: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x151bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x151bd8: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x151bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x151bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x151BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151BDCu;
            // 0x151be0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151BC8u: goto label_151bc8;
            case 0x151BCCu: goto label_151bcc;
            case 0x151BD0u: goto label_151bd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151BE4u;
    // 0x151be4: 0x0  nop
    ctx->pc = 0x151be4u;
    // NOP
}
