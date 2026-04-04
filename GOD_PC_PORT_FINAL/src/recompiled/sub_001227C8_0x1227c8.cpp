#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001227C8
// Address: 0x1227c8 - 0x122910
void sub_001227C8_0x1227c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001227C8_0x1227c8");
#endif

    ctx->pc = 0x1227c8u;

    // 0x1227c8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1227c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1227cc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1227ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1227d0: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1227d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1227d4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1227d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1227d8: 0x8e45bde8  lw          $a1, -0x4218($s2)
    ctx->pc = 0x1227d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950376)));
    // 0x1227dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1227dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227e0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1227e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1227e4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1227e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1227e8: 0xc04c050  jal         func_130140
    ctx->pc = 0x1227E8u;
    SET_GPR_U32(ctx, 31, 0x1227F0u);
    ctx->pc = 0x1227ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1227E8u;
            // 0x1227ec: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1227F0u; }
        if (ctx->pc != 0x1227F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130140_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1227F0u; }
        if (ctx->pc != 0x1227F0u) { return; }
    }
    ctx->pc = 0x1227F0u;
    // 0x1227f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1227f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1227f4: 0x8e1000a8  lw          $s0, 0xA8($s0)
    ctx->pc = 0x1227f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1227f8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1227f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1227fc: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x1227fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x122800: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x122800u;
    {
        const bool branch_taken_0x122800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x122804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122800u;
            // 0x122804: 0x8e51bde8  lw          $s1, -0x4218($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122800) {
            ctx->pc = 0x122810u;
            goto label_122810;
        }
    }
    ctx->pc = 0x122808u;
    // 0x122808: 0xc056f5e  jal         func_15BD78
    ctx->pc = 0x122808u;
    SET_GPR_U32(ctx, 31, 0x122810u);
    ctx->pc = 0x12280Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122808u;
            // 0x12280c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD78u;
    if (runtime->hasFunction(0x15BD78u)) {
        auto targetFn = runtime->lookupFunction(0x15BD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122810u; }
        if (ctx->pc != 0x122810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD78_0x15bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122810u; }
        if (ctx->pc != 0x122810u) { return; }
    }
    ctx->pc = 0x122810u;
label_122810:
    // 0x122810: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x122810u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x122814: 0xde020140  ld          $v0, 0x140($s0)
    ctx->pc = 0x122814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x122818: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x122818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12281c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12281Cu;
    {
        const bool branch_taken_0x12281c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12281Cu;
            // 0x122820: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12281c) {
            ctx->pc = 0x122850u;
            goto label_122850;
        }
    }
    ctx->pc = 0x122824u;
    // 0x122824: 0xfe030140  sd          $v1, 0x140($s0)
    ctx->pc = 0x122824u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 3));
    // 0x122828: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x122828u;
    SET_GPR_U32(ctx, 31, 0x122830u);
    ctx->pc = 0x12282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122828u;
            // 0x12282c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122830u; }
        if (ctx->pc != 0x122830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122830u; }
        if (ctx->pc != 0x122830u) { return; }
    }
    ctx->pc = 0x122830u;
    // 0x122830: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x122830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122834: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x122834u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x122838: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x122838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12283c: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x12283cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x122840: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x122840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122844: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x122844u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x122848: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x122848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12284c: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x12284cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
label_122850:
    // 0x122850: 0x8e44bde8  lw          $a0, -0x4218($s2)
    ctx->pc = 0x122850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950376)));
    // 0x122854: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x122854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x122858: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x122858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x12285c: 0xda0600e0  lqc2        $vf6, 0xE0($s0)
    ctx->pc = 0x12285cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x122860: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x122860u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x122864: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x122864u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x122868: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x122868u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x12286c: 0xd88300c0  lqc2        $vf3, 0xC0($a0)
    ctx->pc = 0x12286cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x122870: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x122870u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x122874: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x122874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x122878: 0xd8620020  lqc2        $vf2, 0x20($v1)
    ctx->pc = 0x122878u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12287c: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x12287cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x122880: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x122880u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122884: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x122884u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122888: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x122888u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12288c: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x12288cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x122890: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x122890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x122894: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x122894u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x122898: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x122898u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12289c: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x12289cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1228a0: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1228a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1228a4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1228a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1228a8: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1228a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1228ac: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1228acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1228b0: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1228b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1228b4: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1228b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1228b8: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1228b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1228bc: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1228bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1228c0: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1228c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1228c4: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1228c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1228c8: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1228c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1228cc: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1228ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1228d0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1228d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1228d4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1228d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1228d8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1228d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1228dc: 0xfa2300c0  sqc2        $vf3, 0xC0($s1)
    ctx->pc = 0x1228dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1228e0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1228e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1228e4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1228e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1228e8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1228e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1228ec: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1228ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1228f0: 0x7e2200d0  sq          $v0, 0xD0($s1)
    ctx->pc = 0x1228f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), GPR_VEC(ctx, 2));
    // 0x1228f4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1228f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1228f8: 0x7e2200e0  sq          $v0, 0xE0($s1)
    ctx->pc = 0x1228f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), GPR_VEC(ctx, 2));
    // 0x1228fc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1228fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122900: 0x7e2200f0  sq          $v0, 0xF0($s1)
    ctx->pc = 0x122900u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 240), GPR_VEC(ctx, 2));
    // 0x122904: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x122904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x122908: 0x3e00008  jr          $ra
    ctx->pc = 0x122908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122908u;
            // 0x12290c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122810u: goto label_122810;
            case 0x122850u: goto label_122850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122910u;
}
