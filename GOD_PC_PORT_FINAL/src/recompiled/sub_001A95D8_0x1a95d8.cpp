#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A95D8
// Address: 0x1a95d8 - 0x1a97a0
void sub_001A95D8_0x1a95d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A95D8_0x1a95d8");
#endif

    ctx->pc = 0x1a95d8u;

    // 0x1a95d8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1a95d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1a95dc: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1a95dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1a95e0: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1a95e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1a95e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a95e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a95e8: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1a95e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1a95ec: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1a95ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1a95f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1a95f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a95f4: 0x94a70040  lhu         $a3, 0x40($a1)
    ctx->pc = 0x1a95f4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1a95f8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x1a95f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a95fc: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x1a95fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1a9600: 0x78a60030  lq          $a2, 0x30($a1)
    ctx->pc = 0x1a9600u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1a9604: 0xa7a70040  sh          $a3, 0x40($sp)
    ctx->pc = 0x1a9604u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a9608: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1a9608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1a960c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x1a960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x1a9610: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x1a9610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x1a9614: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1a9614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1a9618: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1a9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1a961c: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1a961cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1a9620: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9624: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1a9624u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1a9628: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1a9628u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1a962c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A962Cu;
    {
        const bool branch_taken_0x1a962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A9630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A962Cu;
            // 0x1a9630: 0x30f1ffff  andi        $s1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a962c) {
            ctx->pc = 0x1A9640u;
            goto label_1a9640;
        }
    }
    ctx->pc = 0x1A9634u;
    // 0x1a9634: 0xc04da64  jal         func_136990
    ctx->pc = 0x1A9634u;
    SET_GPR_U32(ctx, 31, 0x1A963Cu);
    ctx->pc = 0x1A9638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9634u;
            // 0x1a9638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A963Cu; }
        if (ctx->pc != 0x1A963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A963Cu; }
        if (ctx->pc != 0x1A963Cu) { return; }
    }
    ctx->pc = 0x1A963Cu;
    // 0x1a963c: 0x0  nop
    ctx->pc = 0x1a963cu;
    // NOP
label_1a9640:
    // 0x1a9640: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a9644: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1a9644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1a9648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a964c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a964cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9650: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x1a9650u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a9654: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1a9654u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a9658: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x1a9658u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a965c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a965cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9660: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a9660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9664: 0xdba50020  lqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1a9664u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9668: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1a9668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a966c: 0x4be311bc  vmulax.xyzw $ACC, $vf2, $vf3x
    ctx->pc = 0x1a966cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1a9670: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x1a9670u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a9674: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x1a9674u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a9678: 0x4be340cb  vmaddw.xyzw $vf3, $vf8, $vf3w
    ctx->pc = 0x1a9678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1a967c: 0x4be411bc  vmulax.xyzw $ACC, $vf2, $vf4x
    ctx->pc = 0x1a967cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1a9680: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1a9680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a9684: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x1a9684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a9688: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x1a9688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a968c: 0x4be4410b  vmaddw.xyzw $vf4, $vf8, $vf4w
    ctx->pc = 0x1a968cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1a9690: 0x4be511bc  vmulax.xyzw $ACC, $vf2, $vf5x
    ctx->pc = 0x1a9690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1a9694: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1a9694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a9698: 0x4be530bd  vmadday.xyzw $ACC, $vf6, $vf5y
    ctx->pc = 0x1a9698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a969c: 0x4be538be  vmaddaz.xyzw $ACC, $vf7, $vf5z
    ctx->pc = 0x1a969cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a96a0: 0x4be5414b  vmaddw.xyzw $vf5, $vf8, $vf5w
    ctx->pc = 0x1a96a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1a96a4: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x1a96a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1a96a8: 0xfba500b0  sqc2        $vf5, 0xB0($sp)
    ctx->pc = 0x1a96a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a96ac: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x1a96acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a96b0: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x1a96b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1a96b4: 0x4be1420b  vmaddw.xyzw $vf8, $vf8, $vf1w
    ctx->pc = 0x1a96b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1a96b8: 0xfba800c0  sqc2        $vf8, 0xC0($sp)
    ctx->pc = 0x1a96b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1a96bc: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1a96bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a96c0: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1a96c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a96c4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1a96c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a96c8: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x1a96c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a96cc: 0xfba80080  sqc2        $vf8, 0x80($sp)
    ctx->pc = 0x1a96ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1a96d0: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1a96d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a96d4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a96d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a96d8: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1a96d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a96dc: 0xfba80030  sqc2        $vf8, 0x30($sp)
    ctx->pc = 0x1a96dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1a96e0: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1a96e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a96e4: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1a96e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a96e8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1a96e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a96ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a96ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a96f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a96f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a96f4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a96f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a96f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a96f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a96fc: 0x46000004  c1          0x4
    ctx->pc = 0x1a96fcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a9700: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a9700u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1a9704: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a9708: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1a9708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a970c: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1a970cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1a9710: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1a9710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a9714: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1a9714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a9718: 0x4be420aa  vmul.xyzw   $vf2, $vf4, $vf4
    ctx->pc = 0x1a9718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a971c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1a971cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a9720: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1a9720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a9724: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a9724u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a9728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a9728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a972c: 0x46000004  c1          0x4
    ctx->pc = 0x1a972cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a9730: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a9730u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1a9734: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a9738: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1a9738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a973c: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1a973cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a9740: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1a9740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a9744: 0xfba500f0  sqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x1a9744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9748: 0x4be528aa  vmul.xyzw   $vf2, $vf5, $vf5
    ctx->pc = 0x1a9748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a974c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1a974cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a9750: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1a9750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a9754: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a9754u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a9758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a9758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a975c: 0x46000004  c1          0x4
    ctx->pc = 0x1a975cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a9760: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a9760u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1a9764: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1a9764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a9768: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1a9768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a976c: 0x4be12958  vmulx.xyzw  $vf5, $vf5, $vf1x
    ctx->pc = 0x1a976cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9770: 0xfba500f0  sqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x1a9770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9774: 0xfa430000  sqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1a9774u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1a9778: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1a9778u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a977c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a977cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9780: 0xfa450020  sqc2        $vf5, 0x20($s2)
    ctx->pc = 0x1a9780u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9784: 0xfa480030  sqc2        $vf8, 0x30($s2)
    ctx->pc = 0x1a9784u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1a9788: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1a9788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a978c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1a978cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a9790: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1a9790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a9794: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1a9794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a9798: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9798u;
            // 0x1a979c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9640u: goto label_1a9640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A97A0u;
}
