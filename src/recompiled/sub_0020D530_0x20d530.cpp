#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D530
// Address: 0x20d530 - 0x20d8b0
void sub_0020D530_0x20d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D530_0x20d530");
#endif

    ctx->pc = 0x20d530u;

    // 0x20d530: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x20d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x20d534: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x20d534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x20d538: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x20d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x20d53c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20d53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d540: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x20d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x20d544: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20d544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d548: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x20d548u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x20d54c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x20d54cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x20d550: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x20d550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x20d554: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x20d554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x20d558: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20d558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d55c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x20d55cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d560: 0x0  nop
    ctx->pc = 0x20d560u;
    // NOP
    // 0x20d564: 0x45000066  bc1f        . + 4 + (0x66 << 2)
    ctx->pc = 0x20D564u;
    {
        const bool branch_taken_0x20d564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D564u;
            // 0x20d568: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d564) {
            ctx->pc = 0x20D700u;
            goto label_20d700;
        }
    }
    ctx->pc = 0x20D56Cu;
    // 0x20d56c: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x20d56cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d570: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x20d570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20d574: 0x7a060010  lq          $a2, 0x10($s0)
    ctx->pc = 0x20d574u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20d578: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x20D578u;
    SET_GPR_U32(ctx, 31, 0x20D580u);
    ctx->pc = 0x20D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D578u;
            // 0x20d57c: 0x7a070020  lq          $a3, 0x20($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D580u; }
        if (ctx->pc != 0x20D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D580u; }
        if (ctx->pc != 0x20D580u) { return; }
    }
    ctx->pc = 0x20D580u;
    // 0x20d580: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x20d580u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20d584: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20d588: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x20d588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
    // 0x20d58c: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x20d58cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d590: 0xda030030  lqc2        $vf3, 0x30($s0)
    ctx->pc = 0x20d590u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d594: 0x4be3386c  vsub.xyzw   $vf1, $vf7, $vf3
    ctx->pc = 0x20d594u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d598: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x20d598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d59c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x20d59cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d5a0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x20d5a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d5a4: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x20d5a4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
    // 0x20d5a8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x20d5a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20d5ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20d5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20d5b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d5b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d5b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d5b8: 0xfba700b0  sqc2        $vf7, 0xB0($sp)
    ctx->pc = 0x20d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x20d5bc: 0x46000004  c1          0x4
    ctx->pc = 0x20d5bcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20d5c0: 0xfba300c0  sqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x20d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20d5c4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x20d5c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x20d5c8: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x20d5c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x20d5cc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x20d5ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x20d5d0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x20d5d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x20d5d4: 0x4be139d8  vmulx.xyzw  $vf7, $vf7, $vf1x
    ctx->pc = 0x20d5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x20d5d8: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x20d5d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x20d5dc: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x20d5dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x20d5e0: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x20d5e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20d5e4: 0x4be339e8  vadd.xyzw   $vf7, $vf7, $vf3
    ctx->pc = 0x20d5e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x20d5e8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x20d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20d5ec: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x20d5ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d5f0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x20d5f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x20d5f4: 0xc061084  jal         func_184210
    ctx->pc = 0x20D5F4u;
    SET_GPR_U32(ctx, 31, 0x20D5FCu);
    ctx->pc = 0x20D5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D5F4u;
            // 0x20d5f8: 0xfba700f0  sqc2        $vf7, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D5FCu; }
        if (ctx->pc != 0x20D5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D5FCu; }
        if (ctx->pc != 0x20D5FCu) { return; }
    }
    ctx->pc = 0x20D5FCu;
    // 0x20d5fc: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x20d5fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d600: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20d600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x20d604: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x20d604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d608: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x20d608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20d60c: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x20d60cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d610: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x20d610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20d614: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x20d614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20d618: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x20d618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d61c: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x20d61cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d620: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20d620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20d624: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x20d624u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d628: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x20d628u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d62c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x20d62cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d630: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20d630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d634: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x20d634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d638: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x20d638u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20d63c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d640: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x20d640u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d644: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x20d644u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20d648: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x20d648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x20d64c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20d64cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d650: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d654: 0x71022b89  pcpyld      $a1, $t0, $v0
    ctx->pc = 0x20d654u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x20d658: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x20d658u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d65c: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x20d65cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x20d660: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x20d660u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d664: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20d664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d668: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x20d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x20d66c: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x20d66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d670: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x20d670u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d674: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20d674u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d678: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d67c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x20d67cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20d680: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x20d680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d684: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x20d684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d688: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20d688u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d68c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d690: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x20d690u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x20d694: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x20d694u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d698: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x20d698u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x20d69c: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x20d69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20d6a0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x20d6a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20d6a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20d6a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6a8: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x20d6a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d6ac: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x20d6acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d6b0: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x20d6b0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d6b4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x20d6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6b8: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x20d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x20d6bc: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x20d6bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x20d6c0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x20d6c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20d6c4: 0x7e450000  sq          $a1, 0x0($s2)
    ctx->pc = 0x20d6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 5));
    // 0x20d6c8: 0x48263000  qmfc2.ni    $a2, $vf6
    ctx->pc = 0x20d6c8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x20d6cc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x20d6ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6d0: 0x7e440010  sq          $a0, 0x10($s2)
    ctx->pc = 0x20d6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 4));
    // 0x20d6d4: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x20d6d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x20d6d8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x20d6d8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20d6dc: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x20d6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x20d6e0: 0xdba700f0  lqc2        $vf7, 0xF0($sp)
    ctx->pc = 0x20d6e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20d6e4: 0xfa470030  sqc2        $vf7, 0x30($s2)
    ctx->pc = 0x20d6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x20d6e8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x20d6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x20d6ec: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x20d6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x20d6f0: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x20d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x20d6f4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x20d6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x20d6f8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x20D6F8u;
    {
        const bool branch_taken_0x20d6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6F8u;
            // 0x20d6fc: 0xfba70030  sqc2        $vf7, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6f8) {
            ctx->pc = 0x20D888u;
            goto label_20d888;
        }
    }
    ctx->pc = 0x20D700u;
label_20d700:
    // 0x20d700: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x20d700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x20d704: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20d704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20d708: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20d708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d70c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x20d70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x20d710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d714: 0x4602a802  mul.s       $f0, $f21, $f2
    ctx->pc = 0x20d714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x20d718: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20d718u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20d71c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20d71cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20d720: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x20d720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20d724: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x20d724u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x20d728: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x20d728u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d72c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x20d72cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x20d730: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x20d730u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x20d734: 0x4614ad01  sub.s       $f20, $f21, $f20
    ctx->pc = 0x20d734u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x20d738: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x20d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20d73c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x20d73cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x20d740: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x20d740u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20d744: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20d748: 0x78470020  lq          $a3, 0x20($v0)
    ctx->pc = 0x20d748u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20d74c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20d74cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20d750: 0x7844fff0  lq          $a0, -0x10($v0)
    ctx->pc = 0x20d750u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x20d754: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x20d754u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d758: 0xc0834d4  jal         func_20D350
    ctx->pc = 0x20D758u;
    SET_GPR_U32(ctx, 31, 0x20D760u);
    ctx->pc = 0x20D75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D758u;
            // 0x20d75c: 0x78460010  lq          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D350u;
    if (runtime->hasFunction(0x20D350u)) {
        auto targetFn = runtime->lookupFunction(0x20D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D760u; }
        if (ctx->pc != 0x20D760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20d350_0x20d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D760u; }
        if (ctx->pc != 0x20D760u) { return; }
    }
    ctx->pc = 0x20D760u;
    // 0x20d760: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x20d760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20d764: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20d764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20d768: 0x70028ca9  por         $s1, $zero, $v0
    ctx->pc = 0x20d768u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x20d76c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x20d76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x20d770: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x20d770u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20d774: 0x7a04fff0  lq          $a0, -0x10($s0)
    ctx->pc = 0x20d774u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x20d778: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x20d778u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d77c: 0xc083508  jal         func_20D420
    ctx->pc = 0x20D77Cu;
    SET_GPR_U32(ctx, 31, 0x20D784u);
    ctx->pc = 0x20D780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D77Cu;
            // 0x20d780: 0x7a060010  lq          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D420u;
    if (runtime->hasFunction(0x20D420u)) {
        auto targetFn = runtime->lookupFunction(0x20D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D784u; }
        if (ctx->pc != 0x20D784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D420_0x20d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D784u; }
        if (ctx->pc != 0x20D784u) { return; }
    }
    ctx->pc = 0x20D784u;
    // 0x20d784: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x20d784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x20d788: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x20d788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20d78c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x20d78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x20d790: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x20d790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d794: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x20d794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d798: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x20d798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20d79c: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x20d79cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20d7a0: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x20d7a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d7a4: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x20d7a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d7a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20d7ac: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x20d7acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x20d7b0: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x20d7b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d7b4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x20d7b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d7b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20d7b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7bc: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x20d7bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20d7c0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x20d7c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x20d7c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7c8: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x20d7c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d7cc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x20d7ccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20d7d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20d7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7d4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20d7d4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d7d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7dc: 0x70c22b89  pcpyld      $a1, $a2, $v0
    ctx->pc = 0x20d7dcu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x20d7e0: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x20d7e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d7e4: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x20d7e4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x20d7e8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x20d7e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d7ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20d7ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7f0: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x20d7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x20d7f4: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x20d7f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d7f8: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x20d7f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d7fc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20d7fcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d800: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d804: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d808: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x20d808u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20d80c: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x20d80cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d810: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x20d810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d814: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20d814u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d818: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d81c: 0x71022389  pcpyld      $a0, $t0, $v0
    ctx->pc = 0x20d81cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x20d820: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x20d820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d824: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x20d824u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x20d828: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x20d828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20d82c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x20d82cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20d830: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20d830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d834: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x20d834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20d838: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x20d838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20d83c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x20d83cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20d840: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x20d840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d844: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x20d844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x20d848: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x20d848u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x20d84c: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x20d84cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20d850: 0x7e450000  sq          $a1, 0x0($s2)
    ctx->pc = 0x20d850u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 5));
    // 0x20d854: 0x48263000  qmfc2.ni    $a2, $vf6
    ctx->pc = 0x20d854u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x20d858: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x20d858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d85c: 0x7e440010  sq          $a0, 0x10($s2)
    ctx->pc = 0x20d85cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 4));
    // 0x20d860: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x20d860u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x20d864: 0x7e510030  sq          $s1, 0x30($s2)
    ctx->pc = 0x20d864u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 17));
    // 0x20d868: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x20d868u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x20d86c: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x20d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x20d870: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x20d870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x20d874: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x20d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x20d878: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x20d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x20d87c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x20d87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x20d880: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20d884: 0x0  nop
    ctx->pc = 0x20d884u;
    // NOP
label_20d888:
    // 0x20d888: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x20d888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d88c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x20d88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20d890: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x20d890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x20d894: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x20d894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x20d898: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x20d898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20d89c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x20d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20d8a0: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x20d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x20D8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8A4u;
            // 0x20d8a8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D700u: goto label_20d700;
            case 0x20D888u: goto label_20d888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D8ACu;
    // 0x20d8ac: 0x0  nop
    ctx->pc = 0x20d8acu;
    // NOP
}
