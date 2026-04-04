#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00216768
// Address: 0x216768 - 0x2168d8
void sub_00216768_0x216768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216768_0x216768");
#endif

    ctx->pc = 0x216768u;

    // 0x216768: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x216768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x21676c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x21676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x216770: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x216770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x216774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216778: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x216778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x21677c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x21677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x216780: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x216780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x216784: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x216784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x216788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21678c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x21678cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216790: 0xd842ffc0  lqc2        $vf2, -0x40($v0)
    ctx->pc = 0x216790u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x216794: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x216794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216798: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x216798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21679c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x21679cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2167a0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2167a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2167a4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2167a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2167a8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2167a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2167ac: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x2167acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x2167b0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2167b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2167b4: 0x4be208d8  vmulx.xyzw  $vf3, $vf1, $vf2x
    ctx->pc = 0x2167b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2167b8: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x2167b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2167bc: 0xd842ffc0  lqc2        $vf2, -0x40($v0)
    ctx->pc = 0x2167bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x2167c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2167c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2167c4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2167c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2167c8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x2167c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2167cc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x2167ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2167d0: 0x8e020384  lw          $v0, 0x384($s0)
    ctx->pc = 0x2167d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x2167d4: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x2167d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2167d8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x2167d8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2167dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2167dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2167e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2167e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2167e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2167e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2167e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2167e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2167ec: 0x46000004  c1          0x4
    ctx->pc = 0x2167ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2167f0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2167f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2167f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2167f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2167f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2167f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2167fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2167fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216800: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x216800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x216804: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x216804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x216808: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x216808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x21680c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21680cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x216810: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x216810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x216814: 0x46030502  mul.s       $f20, $f0, $f3
    ctx->pc = 0x216814u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x216818: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x216818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x21681c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x21681cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x216820: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x216820u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    // 0x216824: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x216824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x216828: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x216828u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x21682c: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x21682cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x216830: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x216830u;
    {
        const bool branch_taken_0x216830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x216834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216830u;
            // 0x216834: 0x4602a500  add.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216830) {
            ctx->pc = 0x216848u;
            goto label_216848;
        }
    }
    ctx->pc = 0x216838u;
    // 0x216838: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x216838u;
    SET_GPR_U32(ctx, 31, 0x216840u);
    ctx->pc = 0x21683Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216838u;
            // 0x21683c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216840u; }
        if (ctx->pc != 0x216840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216840u; }
        if (ctx->pc != 0x216840u) { return; }
    }
    ctx->pc = 0x216840u;
    // 0x216840: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x216840u;
    {
        const bool branch_taken_0x216840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216840u;
            // 0x216844: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216840) {
            ctx->pc = 0x216878u;
            goto label_216878;
        }
    }
    ctx->pc = 0x216848u;
label_216848:
    // 0x216848: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x216848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x21684c: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x21684cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x216850: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216854: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x216854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216858: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x216858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x21685c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x21685cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216860: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x216860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x216864: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x216864u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x216868: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x216868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x21686c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x21686cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x216870: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x216870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x216874: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x216874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_216878:
    // 0x216878: 0xc0614c6  jal         func_185318
    ctx->pc = 0x216878u;
    SET_GPR_U32(ctx, 31, 0x216880u);
    ctx->pc = 0x21687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216878u;
            // 0x21687c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216880u; }
        if (ctx->pc != 0x216880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216880u; }
        if (ctx->pc != 0x216880u) { return; }
    }
    ctx->pc = 0x216880u;
    // 0x216880: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x216880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x216884: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x216884u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216888: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x216888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x21688c: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x21688cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216890: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x216890u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x216894: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x216894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216898: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x216898u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21689c: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x21689cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2168a0: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x2168a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2168a4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2168a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2168a8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2168a8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2168ac: 0x70041f89  pexew       $v1, $a0
    ctx->pc = 0x2168acu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x2168b0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2168b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2168b4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2168b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2168b8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2168b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2168bc: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2168bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2168c0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2168c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2168c4: 0x70041fc9  prot3w      $v1, $a0
    ctx->pc = 0x2168c4u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x2168c8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2168c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2168cc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2168ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2168d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2168D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2168D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2168D0u;
            // 0x2168d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216848u: goto label_216848;
            case 0x216878u: goto label_216878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2168D8u;
}
