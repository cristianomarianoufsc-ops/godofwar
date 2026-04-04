#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184748
// Address: 0x184748 - 0x1848c8
void sub_00184748_0x184748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184748_0x184748");
#endif

    ctx->pc = 0x184748u;

    // 0x184748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18474c: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x18474cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x184750: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x184750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x184754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184758: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x184758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18475c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x184760: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184760u;
    SET_GPR_U32(ctx, 31, 0x184768u);
    ctx->pc = 0x184764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184760u;
            // 0x184764: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (runtime->hasFunction(0x183B88u)) {
        auto targetFn = runtime->lookupFunction(0x183B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184768u; }
        if (ctx->pc != 0x184768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183B88_0x183b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184768u; }
        if (ctx->pc != 0x184768u) { return; }
    }
    ctx->pc = 0x184768u;
    // 0x184768: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x184768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18476c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18476cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184770: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x184770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184774: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x184774u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184778: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x184778u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18477c: 0x4b031898  vmulx.x     $vf2, $vf3, $vf3x
    ctx->pc = 0x18477cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184780: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x184780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184784: 0x48a33800  qmtc2.ni    $v1, $vf7
    ctx->pc = 0x184784u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184788: 0x4b071098  vmulx.x     $vf2, $vf2, $vf7x
    ctx->pc = 0x184788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18478c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x18478cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184790: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x184790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184794: 0x4b041080  vaddx.x     $vf2, $vf2, $vf4x
    ctx->pc = 0x184794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x184798: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x184798u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18479c: 0x4a831859  vmuly.y     $vf1, $vf3, $vf3y
    ctx->pc = 0x18479cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1847a0: 0x4b020140  vaddx.x     $vf5, $vf0, $vf2x
    ctx->pc = 0x1847a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1847a4: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1847a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1847a8: 0x4a870858  vmulx.y     $vf1, $vf1, $vf7x
    ctx->pc = 0x1847a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1847ac: 0x4a840840  vaddx.y     $vf1, $vf1, $vf4x
    ctx->pc = 0x1847acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1847b0: 0xda060010  lqc2        $vf6, 0x10($s0)
    ctx->pc = 0x1847b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1847b4: 0x4a43189a  vmulz.z     $vf2, $vf3, $vf3z
    ctx->pc = 0x1847b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1847b8: 0x4a810181  vaddy.y     $vf6, $vf0, $vf1y
    ctx->pc = 0x1847b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1847bc: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x1847bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1847c0: 0x4a471098  vmulx.z     $vf2, $vf2, $vf7x
    ctx->pc = 0x1847c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1847c4: 0x4a441080  vaddx.z     $vf2, $vf2, $vf4x
    ctx->pc = 0x1847c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1847c8: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x1847c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1847cc: 0x4b031859  vmuly.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1847ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1847d0: 0x4a420102  vaddz.z     $vf4, $vf0, $vf2z
    ctx->pc = 0x1847d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1847d4: 0xfa040020  sqc2        $vf4, 0x20($s0)
    ctx->pc = 0x1847d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1847d8: 0x4b070858  vmulx.x     $vf1, $vf1, $vf7x
    ctx->pc = 0x1847d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1847dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1847dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1847e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1847e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1847e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1847e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1847e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1847e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1847ec: 0x4a421858  vmulx.z     $vf1, $vf3, $vf2x
    ctx->pc = 0x1847ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1847f0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1847f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1847f4: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1847f4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1847f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1847f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1847fc: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1847fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x184800: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x184800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184804: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x184804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184808: 0x4b010180  vaddx.x     $vf6, $vf0, $vf1x
    ctx->pc = 0x184808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18480c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18480cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x184810: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x184810u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x184814: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x184814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184818: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x184818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18481c: 0x4a810140  vaddx.y     $vf5, $vf0, $vf1x
    ctx->pc = 0x18481cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x184820: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x184820u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x184824: 0x4b03185a  vmulz.x     $vf1, $vf3, $vf3z
    ctx->pc = 0x184824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184828: 0x4b070858  vmulx.x     $vf1, $vf1, $vf7x
    ctx->pc = 0x184828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18482c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x18482cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184830: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x184830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184834: 0x4a821858  vmulx.y     $vf1, $vf3, $vf2x
    ctx->pc = 0x184834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184838: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x184838u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18483c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x18483cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x184840: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x184840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x184844: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x184844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x184848: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x184848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18484c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x18484cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184850: 0x4b010100  vaddx.x     $vf4, $vf0, $vf1x
    ctx->pc = 0x184850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x184854: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x184854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x184858: 0xfa040020  sqc2        $vf4, 0x20($s0)
    ctx->pc = 0x184858u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18485c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18485cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184860: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x184860u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184864: 0x4a410140  vaddx.z     $vf5, $vf0, $vf1x
    ctx->pc = 0x184864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x184868: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x184868u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18486c: 0x4a83185a  vmulz.y     $vf1, $vf3, $vf3z
    ctx->pc = 0x18486cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184870: 0x4a870858  vmulx.y     $vf1, $vf1, $vf7x
    ctx->pc = 0x184870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184874: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x184874u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184878: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x184878u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x18487c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18487cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184880: 0x4b0218d8  vmulx.x     $vf3, $vf3, $vf2x
    ctx->pc = 0x184880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x184884: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x184884u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184888: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x184888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18488c: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x18488cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x184890: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x184890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184894: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x184894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x184898: 0x4a810100  vaddx.y     $vf4, $vf0, $vf1x
    ctx->pc = 0x184898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18489c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18489cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1848a0: 0xfa040020  sqc2        $vf4, 0x20($s0)
    ctx->pc = 0x1848a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1848a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1848a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1848a8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1848a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1848ac: 0x4a410180  vaddx.z     $vf6, $vf0, $vf1x
    ctx->pc = 0x1848acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1848b0: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x1848b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1848b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1848b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1848b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1848b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1848bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1848BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1848C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1848BCu;
            // 0x1848c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1848C4u;
    // 0x1848c4: 0x0  nop
    ctx->pc = 0x1848c4u;
    // NOP
}
