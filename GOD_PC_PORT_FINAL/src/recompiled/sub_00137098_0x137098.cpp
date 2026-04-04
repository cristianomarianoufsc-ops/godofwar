#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137098
// Address: 0x137098 - 0x137290
void sub_00137098_0x137098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137098_0x137098");
#endif

    ctx->pc = 0x137098u;

    // 0x137098: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x137098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x13709c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x13709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1370a0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1370a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1370a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1370a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370a8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1370a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1370ac: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1370acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1370b0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1370b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1370b4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1370b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1370b8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1370b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x1370bc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1370bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1370c0: 0x6000067  bltz        $s0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1370C0u;
    {
        const bool branch_taken_0x1370c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1370C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1370C0u;
            // 0x1370c4: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370c0) {
            ctx->pc = 0x137260u;
            goto label_137260;
        }
    }
    ctx->pc = 0x1370C8u;
    // 0x1370c8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1370c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1370cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1370ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1370d0: 0x8c97008c  lw          $s7, 0x8C($a0)
    ctx->pc = 0x1370d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1370d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1370d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1370d8: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x1370d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1370dc: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1370dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1370e0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1370e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1370e4: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1370e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1370e8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1370e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1370ec: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1370ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1370f0: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1370f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1370f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1370f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1370f8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1370f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370fc: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1370FCu;
    {
        const bool branch_taken_0x1370fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x137100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1370FCu;
            // 0x137100: 0x8c870050  lw          $a3, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370fc) {
            ctx->pc = 0x137108u;
            goto label_137108;
        }
    }
    ctx->pc = 0x137104u;
    // 0x137104: 0x9496005c  lhu         $s6, 0x5C($a0)
    ctx->pc = 0x137104u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
label_137108:
    // 0x137108: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x137108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x13710c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x13710Cu;
    {
        const bool branch_taken_0x13710c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13710Cu;
            // 0x137110: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13710c) {
            ctx->pc = 0x137260u;
            goto label_137260;
        }
    }
    ctx->pc = 0x137114u;
    // 0x137114: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x137114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x137118: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x137118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13711c: 0x479821  addu        $s3, $v0, $a3
    ctx->pc = 0x13711cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x137120: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x137120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137124: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x137124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137128: 0x579021  addu        $s2, $v0, $s7
    ctx->pc = 0x137128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13712c: 0x0  nop
    ctx->pc = 0x13712cu;
    // NOP
label_137130:
    // 0x137130: 0x1225000d  beq         $s1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x137130u;
    {
        const bool branch_taken_0x137130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x137134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137130u;
            // 0x137134: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137130) {
            ctx->pc = 0x137168u;
            goto label_137168;
        }
    }
    ctx->pc = 0x137138u;
    // 0x137138: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137138u;
    {
        const bool branch_taken_0x137138 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x13713Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137138u;
            // 0x13713c: 0x111180  sll         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137138) {
            ctx->pc = 0x137154u;
            goto label_137154;
        }
    }
    ctx->pc = 0x137140u;
    // 0x137140: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x137140u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137144: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x137144u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137148: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x137148u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13714c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13714Cu;
    {
        const bool branch_taken_0x13714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13714Cu;
            // 0x137150: 0xdba40030  lqc2        $vf4, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13714c) {
            ctx->pc = 0x137168u;
            goto label_137168;
        }
    }
    ctx->pc = 0x137154u;
label_137154:
    // 0x137154: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x137154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x137158: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x137158u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13715c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x13715cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137160: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x137160u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x137164: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x137164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_137168:
    // 0x137168: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x137168u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13716c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x13716cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137170: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x137170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137174: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x137174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137178: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x137178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13717c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137180: 0xda610010  lqc2        $vf1, 0x10($s3)
    ctx->pc = 0x137180u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x137184: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x137184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x137188: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x137188u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13718c: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x13718cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x137190: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x137190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x137194: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x137194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137198: 0xda610020  lqc2        $vf1, 0x20($s3)
    ctx->pc = 0x137198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x13719c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x13719cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1371a0: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x1371a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1371a4: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x1371a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1371a8: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1371a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1371ac: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1371acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1371b0: 0xda610030  lqc2        $vf1, 0x30($s3)
    ctx->pc = 0x1371b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1371b4: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1371b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1371b8: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x1371b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1371bc: 0x4be110be  vmaddaz.xyzw $ACC, $vf2, $vf1z
    ctx->pc = 0x1371bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1371c0: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1371c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1371c4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1371c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1371c8: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x1371c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1371cc: 0x31026000  andi        $v0, $t0, 0x6000
    ctx->pc = 0x1371ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)24576);
    // 0x1371d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1371D0u;
    {
        const bool branch_taken_0x1371d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1371D0u;
            // 0x1371d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371d0) {
            ctx->pc = 0x137208u;
            goto label_137208;
        }
    }
    ctx->pc = 0x1371D8u;
    // 0x1371d8: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1371d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1371dc: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1371dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1371e0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1371e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1371e4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1371e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1371e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1371e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1371ec: 0xfba50070  sqc2        $vf5, 0x70($sp)
    ctx->pc = 0x1371ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1371f0: 0xc04da1c  jal         func_136870
    ctx->pc = 0x1371F0u;
    SET_GPR_U32(ctx, 31, 0x1371F8u);
    ctx->pc = 0x1371F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1371F0u;
            // 0x1371f4: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136870u;
    if (runtime->hasFunction(0x136870u)) {
        auto targetFn = runtime->lookupFunction(0x136870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1371F8u; }
        if (ctx->pc != 0x1371F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136870_0x136870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1371F8u; }
        if (ctx->pc != 0x1371F8u) { return; }
    }
    ctx->pc = 0x1371F8u;
    // 0x1371f8: 0xdba50070  lqc2        $vf5, 0x70($sp)
    ctx->pc = 0x1371f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1371fc: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1371fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137200: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x137200u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137204: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x137204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_137208:
    // 0x137208: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x137208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13720c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13720cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x137210: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x137210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137214: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x137214u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x137218: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x137218u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x13721c: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x13721cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x137220: 0x296182a  slt         $v1, $s4, $s6
    ctx->pc = 0x137220u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x137224: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x137224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137228: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x137228u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x13722c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13722cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137230: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x137230u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x137234: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x137234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137238: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x137238u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    // 0x13723c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13723Cu;
    {
        const bool branch_taken_0x13723c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13723Cu;
            // 0x137240: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13723c) {
            ctx->pc = 0x137260u;
            goto label_137260;
        }
    }
    ctx->pc = 0x137244u;
    // 0x137244: 0x86b10008  lh          $s1, 0x8($s5)
    ctx->pc = 0x137244u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x137248: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x137248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13724c: 0x1040ffb8  beqz        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x13724Cu;
    {
        const bool branch_taken_0x13724c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13724Cu;
            // 0x137250: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13724c) {
            ctx->pc = 0x137130u;
            runtime->cooperativeGuestYield();
            goto label_137130;
        }
    }
    ctx->pc = 0x137254u;
    // 0x137254: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x137254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x137258: 0x1040ffb5  beqz        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x137258u;
    {
        const bool branch_taken_0x137258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137258) {
            ctx->pc = 0x137130u;
            runtime->cooperativeGuestYield();
            goto label_137130;
        }
    }
    ctx->pc = 0x137260u;
label_137260:
    // 0x137260: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x137260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x137264: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x137264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x137268: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x137268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13726c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x13726cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137270: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x137270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x137274: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x137274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137278: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x137278u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13727c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x13727cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x137280: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x137280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137284: 0x3e00008  jr          $ra
    ctx->pc = 0x137284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137284u;
            // 0x137288: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137108u: goto label_137108;
            case 0x137130u: goto label_137130;
            case 0x137154u: goto label_137154;
            case 0x137168u: goto label_137168;
            case 0x137208u: goto label_137208;
            case 0x137260u: goto label_137260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13728Cu;
    // 0x13728c: 0x0  nop
    ctx->pc = 0x13728cu;
    // NOP
}
