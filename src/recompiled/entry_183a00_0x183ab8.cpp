#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183a00
// Address: 0x183a00 - 0x183ab8
void entry_183a00_0x183ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183a00_0x183ab8");
#endif

    ctx->pc = 0x183a00u;

    // 0x183a00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x183a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x183a04: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x183a04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x183a08: 0x2442c7f0  addiu       $v0, $v0, -0x3810
    ctx->pc = 0x183a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952944));
    // 0x183a0c: 0xd84a0000  lqc2        $vf10, 0x0($v0)
    ctx->pc = 0x183a0cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183a10: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x183a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x183a14: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183a18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183a1c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x183a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x183a20: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183a24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183a28: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x183a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x183a2c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183a30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x183a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x183a34: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x183a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x183a38: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x183a38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x183a3c: 0x46022983  div.s       $f6, $f5, $f2
    ctx->pc = 0x183a3cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[6] = ctx->f[5] / ctx->f[2];
    // 0x183a40: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183a40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x183a44: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x183a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x183a48: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x183a48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x183a4c: 0x4602315d  msub.s      $f5, $f6, $f2
    ctx->pc = 0x183a4cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x183a50: 0x460509c1  sub.s       $f7, $f1, $f5
    ctx->pc = 0x183a50u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x183a54: 0x46072969  min.s       $f5, $f5, $f7
    ctx->pc = 0x183a54u;
    ctx->f[5] = std::min(ctx->f[5], ctx->f[7]);
    // 0x183a58: 0x460121c1  sub.s       $f7, $f4, $f1
    ctx->pc = 0x183a58u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x183a5c: 0x460539c1  sub.s       $f7, $f7, $f5
    ctx->pc = 0x183a5cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x183a60: 0x46072968  max.s       $f5, $f5, $f7
    ctx->pc = 0x183a60u;
    ctx->f[5] = std::max(ctx->f[5], ctx->f[7]);
    // 0x183a64: 0x460509c1  sub.s       $f7, $f1, $f5
    ctx->pc = 0x183a64u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x183a68: 0x46072969  min.s       $f5, $f5, $f7
    ctx->pc = 0x183a68u;
    ctx->f[5] = std::min(ctx->f[5], ctx->f[7]);
    // 0x183a6c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x183a6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x183a70: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x183a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x183a74: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x183a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x183a78: 0x4b8a0b1b  vmulw.xy    $vf12, $vf1, $vf10w
    ctx->pc = 0x183a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x183a7c: 0x4b8a0b5a  vmulz.xy    $vf13, $vf1, $vf10z
    ctx->pc = 0x183a7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x183a80: 0x4b8a0b99  vmuly.xy    $vf14, $vf1, $vf10y
    ctx->pc = 0x183a80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x183a84: 0x4b82112a  vmul.xy     $vf4, $vf2, $vf2
    ctx->pc = 0x183a84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x183a88: 0x4b8a0bd8  vmulx.xy    $vf15, $vf1, $vf10x
    ctx->pc = 0x183a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x183a8c: 0x4b80083c  vaddax.xy   $ACC, $vf1, $vf0x
    ctx->pc = 0x183a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x183a90: 0x4b8c12bd  vmadda.xy   $ACC, $vf2, $vf12
    ctx->pc = 0x183a90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[12]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x183a94: 0x4b8221aa  vmul.xy     $vf6, $vf4, $vf2
    ctx->pc = 0x183a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x183a98: 0x4b84222a  vmul.xy     $vf8, $vf4, $vf4
    ctx->pc = 0x183a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x183a9c: 0x4b8d22bd  vmadda.xy   $ACC, $vf4, $vf13
    ctx->pc = 0x183a9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[13]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x183aa0: 0x4b8e32bd  vmadda.xy   $ACC, $vf6, $vf14
    ctx->pc = 0x183aa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[14]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x183aa4: 0x4b8f47e9  vmadd.xy    $vf31, $vf8, $vf15
    ctx->pc = 0x183aa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[15]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x183aa8: 0x4823f800  qmfc2.ni    $v1, $vf31
    ctx->pc = 0x183aa8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x183aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x183AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183AB8u;
}
