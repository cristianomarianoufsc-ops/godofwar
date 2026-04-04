#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF0E0
// Address: 0x1ef0e0 - 0x1ef1f0
void sub_001EF0E0_0x1ef0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF0E0_0x1ef0e0");
#endif

    ctx->pc = 0x1ef0e0u;

    // 0x1ef0e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1ef0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1ef0e4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1ef0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1ef0e8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1ef0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1ef0ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ef0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0f0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1ef0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1ef0f4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1ef0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1ef0f8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1ef0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1ef0fc: 0xc07cdf2  jal         func_1F37C8
    ctx->pc = 0x1EF0FCu;
    SET_GPR_U32(ctx, 31, 0x1EF104u);
    ctx->pc = 0x1EF100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0FCu;
            // 0x1ef100: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F37C8u;
    if (runtime->hasFunction(0x1F37C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F37C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF104u; }
        if (ctx->pc != 0x1EF104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F37C8_0x1f37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF104u; }
        if (ctx->pc != 0x1EF104u) { return; }
    }
    ctx->pc = 0x1EF104u;
    // 0x1ef104: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1ef104u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1ef108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef10c: 0xc07b4e4  jal         func_1ED390
    ctx->pc = 0x1EF10Cu;
    SET_GPR_U32(ctx, 31, 0x1EF114u);
    ctx->pc = 0x1EF110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF10Cu;
            // 0x1ef110: 0x8e64e2a4  lw          $a0, -0x1D5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294959780)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED390u;
    if (runtime->hasFunction(0x1ED390u)) {
        auto targetFn = runtime->lookupFunction(0x1ED390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF114u; }
        if (ctx->pc != 0x1EF114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED390_0x1ed390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF114u; }
        if (ctx->pc != 0x1EF114u) { return; }
    }
    ctx->pc = 0x1EF114u;
    // 0x1ef114: 0x8e71e2a4  lw          $s1, -0x1D5C($s3)
    ctx->pc = 0x1ef114u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294959780)));
    // 0x1ef118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef11c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ef11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef120: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ef120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ef124: 0xc0614c6  jal         func_185318
    ctx->pc = 0x1EF124u;
    SET_GPR_U32(ctx, 31, 0x1EF12Cu);
    ctx->pc = 0x1EF128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF124u;
            // 0x1ef128: 0xae2207b0  sw          $v0, 0x7B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF12Cu; }
        if (ctx->pc != 0x1EF12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF12Cu; }
        if (ctx->pc != 0x1EF12Cu) { return; }
    }
    ctx->pc = 0x1EF12Cu;
    // 0x1ef12c: 0xdba60040  lqc2        $vf6, 0x40($sp)
    ctx->pc = 0x1ef12cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef130: 0xdba70050  lqc2        $vf7, 0x50($sp)
    ctx->pc = 0x1ef130u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef134: 0xdba80060  lqc2        $vf8, 0x60($sp)
    ctx->pc = 0x1ef134u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef138: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1ef138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ef13c: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x1ef13cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef140: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x1ef140u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ef144: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1ef144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ef148: 0xda020020  lqc2        $vf2, 0x20($s0)
    ctx->pc = 0x1ef148u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ef14c: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1ef14cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef150: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1ef150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef154: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1ef154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef158: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1ef158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef15c: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1ef15cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef160: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1ef160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef164: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1ef164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef168: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1ef168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef16c: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1ef16cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef170: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1ef170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef174: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1ef174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef178: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1ef178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef17c: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1ef17cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef180: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1ef180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef184: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1ef184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef188: 0xfba200a0  sqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x1ef188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef18c: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1ef18cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef190: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1ef190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef194: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1ef194u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef198: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1ef198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef19c: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1ef19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef1a0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ef1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef1a4: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1ef1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef1a8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1ef1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef1ac: 0xfa2307c0  sqc2        $vf3, 0x7C0($s1)
    ctx->pc = 0x1ef1acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1984), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef1b0: 0x8e64e2a4  lw          $a0, -0x1D5C($s3)
    ctx->pc = 0x1ef1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294959780)));
    // 0x1ef1b4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1ef1b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef1b8: 0x7e2207d0  sq          $v0, 0x7D0($s1)
    ctx->pc = 0x1ef1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2000), GPR_VEC(ctx, 2));
    // 0x1ef1bc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1ef1bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef1c0: 0x7e2207e0  sq          $v0, 0x7E0($s1)
    ctx->pc = 0x1ef1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2016), GPR_VEC(ctx, 2));
    // 0x1ef1c4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1ef1c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef1c8: 0xc07b9d6  jal         func_1EE758
    ctx->pc = 0x1EF1C8u;
    SET_GPR_U32(ctx, 31, 0x1EF1D0u);
    ctx->pc = 0x1EF1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1C8u;
            // 0x1ef1cc: 0x7e2207f0  sq          $v0, 0x7F0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 2032), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE758u;
    if (runtime->hasFunction(0x1EE758u)) {
        auto targetFn = runtime->lookupFunction(0x1EE758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF1D0u; }
        if (ctx->pc != 0x1EF1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE758_0x1ee758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF1D0u; }
        if (ctx->pc != 0x1EF1D0u) { return; }
    }
    ctx->pc = 0x1EF1D0u;
    // 0x1ef1d0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1ef1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ef1d4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1ef1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ef1d8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1ef1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ef1dc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1ef1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ef1e0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1ef1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ef1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1E4u;
            // 0x1ef1e8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF1ECu;
    // 0x1ef1ec: 0x0  nop
    ctx->pc = 0x1ef1ecu;
    // NOP
}
