#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108D68
// Address: 0x108d68 - 0x108fc0
void sub_00108D68_0x108d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108D68_0x108d68");
#endif

    ctx->pc = 0x108d68u;

    // 0x108d68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x108d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x108d6c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x108d6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x108d70: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x108d70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x108d74: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x108d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x108d78: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x108d78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x108d7c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x108d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x108d80: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x108d80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x108d84: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x108d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x108d88: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x108d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108d8c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x108d8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108d90: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x108d90u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108d94: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x108d94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x108d98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x108d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x108d9c: 0x46010044  c1          0x10044
    ctx->pc = 0x108d9cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x108da0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x108da0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108da4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x108da4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108da8: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x108da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x108dac: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x108dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x108db0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x108db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x108db4: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x108db4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108db8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x108db8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108dbc: 0x46000004  c1          0x4
    ctx->pc = 0x108dbcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x108dc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x108dc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x108dc4: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x108dc4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x108dc8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x108dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108dcc: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
    ctx->pc = 0x108DCCu;
    {
        const bool branch_taken_0x108dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108dcc) {
            ctx->pc = 0x108F80u;
            goto label_108f80;
        }
    }
    ctx->pc = 0x108DD4u;
    // 0x108dd4: 0x4be418aa  vmul.xyzw   $vf2, $vf3, $vf4
    ctx->pc = 0x108dd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x108dd8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x108dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108ddc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x108ddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108de0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x108de4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108de8: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x108de8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108dec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x108decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x108df0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108df4: 0x4488a000  mtc1        $t0, $f20
    ctx->pc = 0x108df4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x108df8: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x108df8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
    // 0x108dfc: 0x460ca328  max.s       $f12, $f20, $f12
    ctx->pc = 0x108dfcu;
    ctx->f[12] = std::max(ctx->f[20], ctx->f[12]);
    // 0x108e00: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x108e00u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x108e04: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x108e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x108e08: 0xc060f88  jal         func_183E20
    ctx->pc = 0x108E08u;
    SET_GPR_U32(ctx, 31, 0x108E10u);
    ctx->pc = 0x108E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E08u;
            // 0x108e0c: 0xfba40090  sqc2        $vf4, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E10u; }
        if (ctx->pc != 0x108E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E10u; }
        if (ctx->pc != 0x108E10u) { return; }
    }
    ctx->pc = 0x108E10u;
    // 0x108e10: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x108e10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108e14: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x108e14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x108e18: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x108e18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x108e1c: 0x4bc41afe  vopmula.xyz $ACC, $vf3, $vf4
    ctx->pc = 0x108e1cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]);
    // 0x108e20: 0x4bc3206e  vopmsub.xyz $vf1, $vf4, $vf3
    ctx->pc = 0x108e20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x108e24: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x108e24u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x108e28: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x108e28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x108e2c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x108e2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x108e30: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x108e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108e34: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x108E34u;
    {
        const bool branch_taken_0x108e34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108e34) {
            ctx->pc = 0x108F08u;
            goto label_108f08;
        }
    }
    ctx->pc = 0x108E3Cu;
    // 0x108e3c: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x108e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x108e40: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x108e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108e44: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x108e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108e48: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x108e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x108e4c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x108e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x108e50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x108e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x108e54: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x108e54u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x108e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108e5c: 0x46000004  c1          0x4
    ctx->pc = 0x108e5cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x108e60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x108e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108e64: 0x0  nop
    ctx->pc = 0x108e64u;
    // NOP
    // 0x108e68: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x108E68u;
    {
        const bool branch_taken_0x108e68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108E68u;
            // 0x108e6c: 0x48241800  qmfc2.ni    $a0, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e68) {
            ctx->pc = 0x108F10u;
            goto label_108f10;
        }
    }
    ctx->pc = 0x108E70u;
    // 0x108e70: 0xc042332  jal         func_108CC8
    ctx->pc = 0x108E70u;
    SET_GPR_U32(ctx, 31, 0x108E78u);
    ctx->pc = 0x108E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E70u;
            // 0x108e74: 0xfba40090  sqc2        $vf4, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108CC8u;
    if (runtime->hasFunction(0x108CC8u)) {
        auto targetFn = runtime->lookupFunction(0x108CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E78u; }
        if (ctx->pc != 0x108E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_108cc8_0x108d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E78u; }
        if (ctx->pc != 0x108E78u) { return; }
    }
    ctx->pc = 0x108E78u;
    // 0x108e78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x108e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108e7c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x108e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x108e80: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x108e80u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x108e84: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x108e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x108e88: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x108e88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108e8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108e90: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x108e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108e94: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x108e94u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x108e98: 0x70071f89  pexew       $v1, $a3
    ctx->pc = 0x108e98u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x108e9c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x108e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x108ea0: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x108ea0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x108ea4: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x108ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x108ea8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x108ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x108eac: 0x70083fc9  prot3w      $a3, $t0
    ctx->pc = 0x108eacu;
    SET_GPR_VEC(ctx, 7, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x108eb0: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x108eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x108eb4: 0x3a23821  addu        $a3, $sp, $v0
    ctx->pc = 0x108eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x108eb8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x108EB8u;
    {
        const bool branch_taken_0x108eb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x108eb8) {
            ctx->pc = 0x108EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108EB8u;
            // 0x108ebc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x108EC0u;
            goto label_108ec0;
        }
    }
    ctx->pc = 0x108EC0u;
label_108ec0:
    // 0x108ec0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x108ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x108ec4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x108ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108ec8: 0x3010  mfhi        $a2
    ctx->pc = 0x108ec8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x108ecc: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x108eccu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x108ed0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x108ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x108ed4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x108ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x108ed8: 0x3a62821  addu        $a1, $sp, $a2
    ctx->pc = 0x108ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x108edc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x108edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108ee0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x108ee0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x108ee4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x108ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x108ee8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x108ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108eec: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x108eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x108ef0: 0x2010  mfhi        $a0
    ctx->pc = 0x108ef0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x108ef4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x108ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x108ef8: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x108ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x108efc: 0xe4760000  swc1        $f22, 0x0($v1)
    ctx->pc = 0x108efcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x108f00: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x108f00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x108f04: 0x0  nop
    ctx->pc = 0x108f04u;
    // NOP
label_108f08:
    // 0x108f08: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x108f08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x108f0c: 0x0  nop
    ctx->pc = 0x108f0cu;
    // NOP
label_108f10:
    // 0x108f10: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x108f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108f14: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x108f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108f18: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x108f18u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x108f1c: 0x4a0003bf  vwaitq
    ctx->pc = 0x108f1cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x108f20: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x108f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x108f24: 0x4a0002ff  vnop
    ctx->pc = 0x108f24u;
    // NOP operation, no action needed for VU0
    // 0x108f28: 0x4a0002ff  vnop
    ctx->pc = 0x108f28u;
    // NOP operation, no action needed for VU0
    // 0x108f2c: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x108f2cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x108f30: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x108f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108f34: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x108f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108f38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x108f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x108f3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x108f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108f40: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x108f40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x108f44: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x108F44u;
    SET_GPR_U32(ctx, 31, 0x108F4Cu);
    ctx->pc = 0x108F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108F44u;
            // 0x108f48: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F4Cu; }
        if (ctx->pc != 0x108F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F4Cu; }
        if (ctx->pc != 0x108F4Cu) { return; }
    }
    ctx->pc = 0x108F4Cu;
    // 0x108f4c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x108f4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x108f50: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x108f50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x108f54: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x108f54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108f58: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x108f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108f5c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x108f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108f60: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x108f60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x108f64: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x108f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108f68: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x108f68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x108f6c: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x108f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x108f70: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x108f70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x108f74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x108F74u;
    {
        const bool branch_taken_0x108f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108F74u;
            // 0x108f78: 0xfba10040  sqc2        $vf1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f74) {
            ctx->pc = 0x108FA8u;
            goto label_108fa8;
        }
    }
    ctx->pc = 0x108F7Cu;
    // 0x108f7c: 0x0  nop
    ctx->pc = 0x108f7cu;
    // NOP
label_108f80:
    // 0x108f80: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x108f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x108f84: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x108f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x108f88: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x108f88u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x108f8c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x108f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x108f90: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x108f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x108f94: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x108f94u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x108f98: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x108f98u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x108f9c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x108f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x108fa0: 0x700314a9  por         $v0, $zero, $v1
    ctx->pc = 0x108fa0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108fa4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x108fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_108fa8:
    // 0x108fa8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x108fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x108fac: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x108facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x108fb0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x108fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x108fb4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x108fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x108fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x108FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108FB8u;
            // 0x108fbc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108EC0u: goto label_108ec0;
            case 0x108F08u: goto label_108f08;
            case 0x108F10u: goto label_108f10;
            case 0x108F80u: goto label_108f80;
            case 0x108FA8u: goto label_108fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108FC0u;
}
