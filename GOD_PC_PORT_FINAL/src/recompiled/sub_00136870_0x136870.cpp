#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136870
// Address: 0x136870 - 0x136990
void sub_00136870_0x136870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136870_0x136870");
#endif

    ctx->pc = 0x136870u;

    // 0x136870: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x136870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x136874: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x136874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x136878: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x136878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x13687c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13687cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136880: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x136880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x136884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x136884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136888: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x136888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x13688c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13688cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136890: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x136890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x136894: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x136894u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136898: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x136898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13689c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13689cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1368a0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1368a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1368a4: 0x31024000  andi        $v0, $t0, 0x4000
    ctx->pc = 0x1368a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x1368a8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1368a8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1368ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1368acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1368b0: 0x46000004  c1          0x4
    ctx->pc = 0x1368b0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1368b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1368B4u;
    {
        const bool branch_taken_0x1368b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1368B4u;
            // 0x1368b8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368b4) {
            ctx->pc = 0x1368E8u;
            goto label_1368e8;
        }
    }
    ctx->pc = 0x1368BCu;
    // 0x1368bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1368bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1368c0: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1368c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1368c4: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1368c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1368c8: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1368c8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1368cc: 0x4b030840  vaddx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x1368ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1368d0: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1368d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1368d4: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1368d4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1368d8: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1368d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1368dc: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1368dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1368e0: 0x4a431080  vaddx.z     $vf2, $vf2, $vf3x
    ctx->pc = 0x1368e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1368e4: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1368e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1368e8:
    // 0x1368e8: 0x31022000  andi        $v0, $t0, 0x2000
    ctx->pc = 0x1368e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8192);
    // 0x1368ec: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1368ECu;
    {
        const bool branch_taken_0x1368ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1368ec) {
            ctx->pc = 0x1368F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1368ECu;
            // 0x1368f0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136978u;
            goto label_136978;
        }
    }
    ctx->pc = 0x1368F4u;
    // 0x1368f4: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x1368f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1368f8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1368f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1368fc: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x1368fcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]);
    // 0x136900: 0x4bc2186e  vopmsub.xyz $vf1, $vf3, $vf2
    ctx->pc = 0x136900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x136904: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x136904u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x136908: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x136908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13690c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136910: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x136910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136914: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x136914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x136918: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x136918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13691c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13691cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136920: 0xc06149c  jal         func_185270
    ctx->pc = 0x136920u;
    SET_GPR_U32(ctx, 31, 0x136928u);
    ctx->pc = 0x136924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136920u;
            // 0x136924: 0xfba30030  sqc2        $vf3, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136928u; }
        if (ctx->pc != 0x136928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136928u; }
        if (ctx->pc != 0x136928u) { return; }
    }
    ctx->pc = 0x136928u;
    // 0x136928: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x136928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13692c: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x13692cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136930: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x136930u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x136934: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x136934u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136938: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x136938u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13693c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x13693cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x136940: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x136940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136944: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x136944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x136948: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x136948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13694c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x13694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136950: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x136950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136954: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x136954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x136958: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x136958u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13695c: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x13695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136960: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x136960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x136964: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x136964u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136968: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x136968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13696c: 0x4be418d8  vmulx.xyzw  $vf3, $vf3, $vf4x
    ctx->pc = 0x13696cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x136970: 0xfa430000  sqc2        $vf3, 0x0($s2)
    ctx->pc = 0x136970u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136974: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x136974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_136978:
    // 0x136978: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x136978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13697c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x13697cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x136980: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x136980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x136984: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x136984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136988: 0x3e00008  jr          $ra
    ctx->pc = 0x136988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136988u;
            // 0x13698c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1368E8u: goto label_1368e8;
            case 0x136978u: goto label_136978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x136990u;
}
