#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183ab8
// Address: 0x183ab8 - 0x183b88
void entry_183ab8_0x183b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183ab8_0x183b88");
#endif

    ctx->pc = 0x183ab8u;

    // 0x183ab8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x183ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x183abc: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x183abcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x183ac0: 0x2484c7f0  addiu       $a0, $a0, -0x3810
    ctx->pc = 0x183ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952944));
    // 0x183ac4: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x183ac4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x183ac8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x183ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x183acc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183ad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183ad4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x183ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x183ad8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183adc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183ae0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x183ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x183ae4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183ae8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x183ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x183aec: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x183aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x183af0: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x183af0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x183af4: 0x46022983  div.s       $f6, $f5, $f2
    ctx->pc = 0x183af4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[6] = ctx->f[5] / ctx->f[2];
    // 0x183af8: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x183afc: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x183afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x183b00: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x183b00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x183b04: 0x4602315d  msub.s      $f5, $f6, $f2
    ctx->pc = 0x183b04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x183b08: 0x46052181  sub.s       $f6, $f4, $f5
    ctx->pc = 0x183b08u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x183b0c: 0x460629a9  min.s       $f6, $f5, $f6
    ctx->pc = 0x183b0cu;
    ctx->f[6] = std::min(ctx->f[5], ctx->f[6]);
    // 0x183b10: 0x460621c1  sub.s       $f7, $f4, $f6
    ctx->pc = 0x183b10u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x183b14: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x183b14u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x183b18: 0x460731a8  max.s       $f6, $f6, $f7
    ctx->pc = 0x183b18u;
    ctx->f[6] = std::max(ctx->f[6], ctx->f[7]);
    // 0x183b1c: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x183b1cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x183b20: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x183b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x183b24: 0x460509c1  sub.s       $f7, $f1, $f5
    ctx->pc = 0x183b24u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x183b28: 0x46072a29  min.s       $f8, $f5, $f7
    ctx->pc = 0x183b28u;
    ctx->f[8] = std::min(ctx->f[5], ctx->f[7]);
    // 0x183b2c: 0x460121c1  sub.s       $f7, $f4, $f1
    ctx->pc = 0x183b2cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x183b30: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x183b30u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x183b34: 0x46074228  max.s       $f8, $f8, $f7
    ctx->pc = 0x183b34u;
    ctx->f[8] = std::max(ctx->f[8], ctx->f[7]);
    // 0x183b38: 0x460809c1  sub.s       $f7, $f1, $f8
    ctx->pc = 0x183b38u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x183b3c: 0x46074229  min.s       $f8, $f8, $f7
    ctx->pc = 0x183b3cu;
    ctx->f[8] = std::min(ctx->f[8], ctx->f[7]);
    // 0x183b40: 0x44024000  mfc1        $v0, $f8
    ctx->pc = 0x183b40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x183b44: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x183b44u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183b48: 0x48a28000  qmtc2.ni    $v0, $vf16
    ctx->pc = 0x183b48u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x183b4c: 0x4b9084aa  vmul.xy     $vf18, $vf16, $vf16
    ctx->pc = 0x183b4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x183b50: 0x4b9184db  vmulw.xy    $vf19, $vf16, $vf17w
    ctx->pc = 0x183b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x183b54: 0x4b91851a  vmulz.xy    $vf20, $vf16, $vf17z
    ctx->pc = 0x183b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x183b58: 0x4b918659  vmuly.xy    $vf25, $vf16, $vf17y
    ctx->pc = 0x183b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x183b5c: 0x4b9296aa  vmul.xy     $vf26, $vf18, $vf18
    ctx->pc = 0x183b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x183b60: 0x4b9186d8  vmulx.xy    $vf27, $vf16, $vf17x
    ctx->pc = 0x183b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x183b64: 0x4b80803c  vaddax.xy   $ACC, $vf16, $vf0x
    ctx->pc = 0x183b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x183b68: 0x4b9392bd  vmadda.xy   $ACC, $vf18, $vf19
    ctx->pc = 0x183b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x183b6c: 0x4b92d72a  vmul.xy     $vf28, $vf26, $vf18
    ctx->pc = 0x183b6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x183b70: 0x4b9ad76a  vmul.xy     $vf29, $vf26, $vf26
    ctx->pc = 0x183b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x183b74: 0x4b94d2bd  vmadda.xy   $ACC, $vf26, $vf20
    ctx->pc = 0x183b74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[20]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x183b78: 0x4b99e2bd  vmadda.xy   $ACC, $vf28, $vf25
    ctx->pc = 0x183b78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], ctx->vu0_vf[25]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x183b7c: 0x4b9befe9  vmadd.xy    $vf31, $vf29, $vf27
    ctx->pc = 0x183b7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[27]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x183b80: 0x3e00008  jr          $ra
    ctx->pc = 0x183B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183B88u;
}
