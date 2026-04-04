#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138108
// Address: 0x138108 - 0x138360
void sub_00138108_0x138108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138108_0x138108");
#endif

    ctx->pc = 0x138108u;

    // 0x138108: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x138108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x13810c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x13810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x138110: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x138110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x138114: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x138114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138118: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x138118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x13811c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13811cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138120: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x138120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x138124: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x138124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x138128: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x138128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x13812c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x13812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x138130: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x138130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x138134: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x138134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x138138: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x138138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13813c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x13813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x138140: 0x8ea70058  lw          $a3, 0x58($s5)
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x138144: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x138144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x138148: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x138148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x13814c: 0xd8c50030  lqc2        $vf5, 0x30($a2)
    ctx->pc = 0x13814cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x138150: 0xd8c40010  lqc2        $vf4, 0x10($a2)
    ctx->pc = 0x138150u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x138154: 0xd8c20020  lqc2        $vf2, 0x20($a2)
    ctx->pc = 0x138154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x138158: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x138158u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13815c: 0xfa830000  sqc2        $vf3, 0x0($s4)
    ctx->pc = 0x13815cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x138160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138164: 0xfa840010  sqc2        $vf4, 0x10($s4)
    ctx->pc = 0x138164u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x138168: 0xfa820020  sqc2        $vf2, 0x20($s4)
    ctx->pc = 0x138168u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13816c: 0xfa850030  sqc2        $vf5, 0x30($s4)
    ctx->pc = 0x13816cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x138170: 0x84f00004  lh          $s0, 0x4($a3)
    ctx->pc = 0x138170u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x138174: 0x600006d  bltz        $s0, . + 4 + (0x6D << 2)
    ctx->pc = 0x138174u;
    {
        const bool branch_taken_0x138174 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x138178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138174u;
            // 0x138178: 0x96be005c  lhu         $fp, 0x5C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138174) {
            ctx->pc = 0x13832Cu;
            goto label_13832c;
        }
    }
    ctx->pc = 0x13817Cu;
    // 0x13817c: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x13817cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x138180: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x138180u;
    {
        const bool branch_taken_0x138180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138180u;
            // 0x138184: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138180) {
            ctx->pc = 0x13832Cu;
            goto label_13832c;
        }
    }
    ctx->pc = 0x138188u;
    // 0x138188: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x138188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x13818c: 0x67b021  addu        $s6, $v1, $a3
    ctx->pc = 0x13818cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x138190: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x138190u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x138194: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x138194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138198: 0x459821  addu        $s3, $v0, $a1
    ctx->pc = 0x138198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13819c: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x13819cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1381a0: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x1381a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1381a4: 0x0  nop
    ctx->pc = 0x1381a4u;
    // NOP
label_1381a8:
    // 0x1381a8: 0x86d10008  lh          $s1, 0x8($s6)
    ctx->pc = 0x1381a8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1381ac: 0x1226000d  beq         $s1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1381ACu;
    {
        const bool branch_taken_0x1381ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x1381B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1381ACu;
            // 0x1381b0: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381ac) {
            ctx->pc = 0x1381E4u;
            goto label_1381e4;
        }
    }
    ctx->pc = 0x1381B4u;
    // 0x1381b4: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1381B4u;
    {
        const bool branch_taken_0x1381b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1381B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1381B4u;
            // 0x1381b8: 0x111180  sll         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381b4) {
            ctx->pc = 0x1381D0u;
            goto label_1381d0;
        }
    }
    ctx->pc = 0x1381BCu;
    // 0x1381bc: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1381bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1381c0: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1381c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1381c4: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1381c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1381c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1381C8u;
    {
        const bool branch_taken_0x1381c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1381CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1381C8u;
            // 0x1381cc: 0xdba50030  lqc2        $vf5, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381c8) {
            ctx->pc = 0x1381E4u;
            goto label_1381e4;
        }
    }
    ctx->pc = 0x1381D0u;
label_1381d0:
    // 0x1381d0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1381d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1381d4: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1381d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1381d8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1381d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1381dc: 0xd8440010  lqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1381dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1381e0: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1381e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1381e4:
    // 0x1381e4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1381e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1381e8: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x1381e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1381ec: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x1381ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1381f0: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x1381f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1381f4: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x1381f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1381f8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1381f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1381fc: 0xda610010  lqc2        $vf1, 0x10($s3)
    ctx->pc = 0x1381fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x138200: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x138200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x138204: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x138204u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x138208: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x138208u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13820c: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x13820cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x138210: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x138210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x138214: 0xda610020  lqc2        $vf1, 0x20($s3)
    ctx->pc = 0x138214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x138218: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x138218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13821c: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x13821cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x138220: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x138220u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x138224: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x138224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x138228: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x138228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13822c: 0xda610030  lqc2        $vf1, 0x30($s3)
    ctx->pc = 0x13822cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x138230: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x138230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x138234: 0x4be120bd  vmadday.xyzw $ACC, $vf4, $vf1y
    ctx->pc = 0x138234u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x138238: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x138238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13823c: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x13823cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x138240: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x138240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x138244: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x138244u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x138248: 0x31026000  andi        $v0, $t0, 0x6000
    ctx->pc = 0x138248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)24576);
    // 0x13824c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13824Cu;
    {
        const bool branch_taken_0x13824c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13824Cu;
            // 0x138250: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13824c) {
            ctx->pc = 0x138288u;
            goto label_138288;
        }
    }
    ctx->pc = 0x138254u;
    // 0x138254: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x138254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x138258: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x138258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13825c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x138260: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x138260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x138264: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x138264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x138268: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x138268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13826c: 0xc04da1c  jal         func_136870
    ctx->pc = 0x13826Cu;
    SET_GPR_U32(ctx, 31, 0x138274u);
    ctx->pc = 0x138270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13826Cu;
            // 0x138270: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136870u;
    if (runtime->hasFunction(0x136870u)) {
        auto targetFn = runtime->lookupFunction(0x136870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138274u; }
        if (ctx->pc != 0x138274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136870_0x136870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138274u; }
        if (ctx->pc != 0x138274u) { return; }
    }
    ctx->pc = 0x138274u;
    // 0x138274: 0xdba50080  lqc2        $vf5, 0x80($sp)
    ctx->pc = 0x138274u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x138278: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x138278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13827c: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x13827cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138280: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x138280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138284: 0x0  nop
    ctx->pc = 0x138284u;
    // NOP
label_138288:
    // 0x138288: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x138288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13828c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13828cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138290: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x138290u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x138294: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x138294u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x138298: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x138298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13829c: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x13829cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x1382a0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1382a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1382a4: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x1382a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    // 0x1382a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1382a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1382ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1382ACu;
    {
        const bool branch_taken_0x1382ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1382B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1382ACu;
            // 0x1382b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382ac) {
            ctx->pc = 0x1382E8u;
            goto label_1382e8;
        }
    }
    ctx->pc = 0x1382B4u;
    // 0x1382b4: 0x111142  srl         $v0, $s1, 5
    ctx->pc = 0x1382b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x1382b8: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x1382b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x1382bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1382bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1382c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1382c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1382c4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1382c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1382c8: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1382c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1382cc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1382ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1382d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1382d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1382d4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1382D4u;
    {
        const bool branch_taken_0x1382d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1382d4) {
            ctx->pc = 0x1382D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1382D4u;
            // 0x1382d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138314u;
            goto label_138314;
        }
    }
    ctx->pc = 0x1382DCu;
    // 0x1382dc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1382dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1382e0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1382E0u;
    {
        const bool branch_taken_0x1382e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1382e0) {
            ctx->pc = 0x1382E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1382E0u;
            // 0x1382e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138314u;
            goto label_138314;
        }
    }
    ctx->pc = 0x1382E8u;
label_1382e8:
    // 0x1382e8: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x1382e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1382ec: 0x26a40064  addiu       $a0, $s5, 0x64
    ctx->pc = 0x1382ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x1382f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1382f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1382f4: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x1382f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1382f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1382f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1382fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1382fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138304: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x138304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x138308: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x138308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13830c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13830cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x138310: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_138314:
    // 0x138314: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x138314u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x138318: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x138318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x13831c: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x13831cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x138320: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x138320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x138324: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x138324u;
    {
        const bool branch_taken_0x138324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138324u;
            // 0x138328: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138324) {
            ctx->pc = 0x1381A8u;
            runtime->cooperativeGuestYield();
            goto label_1381a8;
        }
    }
    ctx->pc = 0x13832Cu;
label_13832c:
    // 0x13832c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x13832cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x138330: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x138330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x138334: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x138334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138338: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x138338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13833c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x13833cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138340: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x138340u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x138344: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x138344u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x138348: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x138348u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13834c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x13834cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x138350: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x138350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x138354: 0x3e00008  jr          $ra
    ctx->pc = 0x138354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138354u;
            // 0x138358: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1381A8u: goto label_1381a8;
            case 0x1381D0u: goto label_1381d0;
            case 0x1381E4u: goto label_1381e4;
            case 0x138288u: goto label_138288;
            case 0x1382E8u: goto label_1382e8;
            case 0x138314u: goto label_138314;
            case 0x13832Cu: goto label_13832c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13835Cu;
    // 0x13835c: 0x0  nop
    ctx->pc = 0x13835cu;
    // NOP
}
