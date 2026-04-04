#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183948
// Address: 0x183948 - 0x183a00
void entry_183948_0x183a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183948_0x183a00");
#endif

    ctx->pc = 0x183948u;

    // 0x183948: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x183948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18394c: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x18394cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x183950: 0x2442c7f0  addiu       $v0, $v0, -0x3810
    ctx->pc = 0x183950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952944));
    // 0x183954: 0xd84a0000  lqc2        $vf10, 0x0($v0)
    ctx->pc = 0x183954u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183958: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x183958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x18395c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x18395cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183964: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x183964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x183968: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x18396c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18396cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183970: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x183970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x183974: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x183974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x183978: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x183978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18397c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x18397cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x183980: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x183980u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x183984: 0x46022983  div.s       $f6, $f5, $f2
    ctx->pc = 0x183984u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[6] = ctx->f[5] / ctx->f[2];
    // 0x183988: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x18398c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x18398cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x183990: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x183990u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x183994: 0x4602315d  msub.s      $f5, $f6, $f2
    ctx->pc = 0x183994u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x183998: 0x46052181  sub.s       $f6, $f4, $f5
    ctx->pc = 0x183998u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x18399c: 0x460629a9  min.s       $f6, $f5, $f6
    ctx->pc = 0x18399cu;
    ctx->f[6] = std::min(ctx->f[5], ctx->f[6]);
    // 0x1839a0: 0x460621c1  sub.s       $f7, $f4, $f6
    ctx->pc = 0x1839a0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x1839a4: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x1839a4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x1839a8: 0x460731a8  max.s       $f6, $f6, $f7
    ctx->pc = 0x1839a8u;
    ctx->f[6] = std::max(ctx->f[6], ctx->f[7]);
    // 0x1839ac: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x1839acu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x1839b0: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x1839b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1839b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1839b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1839b8: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x1839b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1839bc: 0x4b8a0b1b  vmulw.xy    $vf12, $vf1, $vf10w
    ctx->pc = 0x1839bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1839c0: 0x4b8a0b5a  vmulz.xy    $vf13, $vf1, $vf10z
    ctx->pc = 0x1839c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1839c4: 0x4b8a0b99  vmuly.xy    $vf14, $vf1, $vf10y
    ctx->pc = 0x1839c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1839c8: 0x4b82112a  vmul.xy     $vf4, $vf2, $vf2
    ctx->pc = 0x1839c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1839cc: 0x4b8a0bd8  vmulx.xy    $vf15, $vf1, $vf10x
    ctx->pc = 0x1839ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1839d0: 0x4b80083c  vaddax.xy   $ACC, $vf1, $vf0x
    ctx->pc = 0x1839d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1839d4: 0x4b8c12bd  vmadda.xy   $ACC, $vf2, $vf12
    ctx->pc = 0x1839d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[12]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1839d8: 0x4b8221aa  vmul.xy     $vf6, $vf4, $vf2
    ctx->pc = 0x1839d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1839dc: 0x4b84222a  vmul.xy     $vf8, $vf4, $vf4
    ctx->pc = 0x1839dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1839e0: 0x4b8d22bd  vmadda.xy   $ACC, $vf4, $vf13
    ctx->pc = 0x1839e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[13]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1839e4: 0x4b8e32bd  vmadda.xy   $ACC, $vf6, $vf14
    ctx->pc = 0x1839e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[14]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x1839e8: 0x4b8f47e9  vmadd.xy    $vf31, $vf8, $vf15
    ctx->pc = 0x1839e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[15]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1839ec: 0x4823f800  qmfc2.ni    $v1, $vf31
    ctx->pc = 0x1839ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x1839f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1839f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1839f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1839F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1839FCu;
    // 0x1839fc: 0x0  nop
    ctx->pc = 0x1839fcu;
    // NOP
}
