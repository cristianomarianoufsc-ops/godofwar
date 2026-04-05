#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001303D0
// Address: 0x1303d0 - 0x1307c8
void sub_001303D0_0x1303d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001303D0_0x1303d0");
#endif

    ctx->pc = 0x1303d0u;

label_1303d0:
    // 0x1303d0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x1303d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x1303d4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1303d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1303d8: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x1303d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x1303dc: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x1303dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x1303e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1303e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303e4: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x1303e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x1303e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1303e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1303ec: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x1303ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x1303f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1303f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303f4: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x1303f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x1303f8: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x1303f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x1303fc: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x1303fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x130400: 0x86510060  lh          $s1, 0x60($s2)
    ctx->pc = 0x130400u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x130404: 0x90880a  movz        $s1, $a0, $s0
    ctx->pc = 0x130404u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x130408: 0x1222004d  beq         $s1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x130408u;
    {
        const bool branch_taken_0x130408 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x13040Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130408u;
            // 0x13040c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130408) {
            ctx->pc = 0x130540u;
            goto label_130540;
        }
    }
    ctx->pc = 0x130410u;
    // 0x130410: 0x2a22ffff  slti        $v0, $s1, -0x1
    ctx->pc = 0x130410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x130414: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130414u;
    {
        const bool branch_taken_0x130414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130414u;
            // 0x130418: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130414) {
            ctx->pc = 0x13042Cu;
            goto label_13042c;
        }
    }
    ctx->pc = 0x13041Cu;
    // 0x13041c: 0x52220012  beql        $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13041Cu;
    {
        const bool branch_taken_0x13041c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x13041c) {
            ctx->pc = 0x130420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13041Cu;
            // 0x130420: 0x86020060  lh          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130468u;
            goto label_130468;
        }
    }
    ctx->pc = 0x130424u;
    // 0x130424: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x130424u;
    {
        const bool branch_taken_0x130424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130424u;
            // 0x130428: 0x8e100104  lw          $s0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130424) {
            ctx->pc = 0x1306C8u;
            goto label_1306c8;
        }
    }
    ctx->pc = 0x13042Cu;
label_13042c:
    // 0x13042c: 0x562400a6  bnel        $s1, $a0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x13042Cu;
    {
        const bool branch_taken_0x13042c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x13042c) {
            ctx->pc = 0x130430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13042Cu;
            // 0x130430: 0x8e100104  lw          $s0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1306C8u;
            goto label_1306c8;
        }
    }
    ctx->pc = 0x130434u;
    // 0x130434: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x130434u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x130438: 0x544000da  bnel        $v0, $zero, . + 4 + (0xDA << 2)
    ctx->pc = 0x130438u;
    {
        const bool branch_taken_0x130438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130438) {
            ctx->pc = 0x13043Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130438u;
            // 0x13043c: 0xfe540068  sd          $s4, 0x68($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1307A4u;
            goto label_1307a4;
        }
    }
    ctx->pc = 0x130440u;
    // 0x130440: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x130440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x130444: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x130444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x130448: 0x7e420070  sq          $v0, 0x70($s2)
    ctx->pc = 0x130448u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 2));
    // 0x13044c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x13044cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x130450: 0x7e420080  sq          $v0, 0x80($s2)
    ctx->pc = 0x130450u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 2));
    // 0x130454: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x130454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x130458: 0x7e420090  sq          $v0, 0x90($s2)
    ctx->pc = 0x130458u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 144), GPR_VEC(ctx, 2));
    // 0x13045c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x13045cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x130460: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x130460u;
    {
        const bool branch_taken_0x130460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130460u;
            // 0x130464: 0x7e4200a0  sq          $v0, 0xA0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130460) {
            ctx->pc = 0x1307A0u;
            goto label_1307a0;
        }
    }
    ctx->pc = 0x130468u;
label_130468:
    // 0x130468: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130468u;
    {
        const bool branch_taken_0x130468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x13046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130468u;
            // 0x13046c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130468) {
            ctx->pc = 0x130478u;
            goto label_130478;
        }
    }
    ctx->pc = 0x130470u;
    // 0x130470: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x130470u;
    {
        const bool branch_taken_0x130470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130470u;
            // 0x130474: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130470) {
            ctx->pc = 0x130494u;
            goto label_130494;
        }
    }
    ctx->pc = 0x130478u;
label_130478:
    // 0x130478: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x130478u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x13047c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x13047cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x130480: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x130480u;
    {
        const bool branch_taken_0x130480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x130480) {
            ctx->pc = 0x130484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130480u;
            // 0x130484: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130498u;
            goto label_130498;
        }
    }
    ctx->pc = 0x130488u;
    // 0x130488: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x130488u;
    SET_GPR_U32(ctx, 31, 0x130490u);
    ctx->pc = 0x13048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130488u;
            // 0x13048c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    runtime->cooperativeGuestYield();
    goto label_1303d0;
    ctx->pc = 0x130490u;
label_130490:
    // 0x130490: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x130490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_130494:
    // 0x130494: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x130494u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_130498:
    // 0x130498: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x130498u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x13049c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x13049cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1304a0: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x1304A0u;
    {
        const bool branch_taken_0x1304a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304A0u;
            // 0x1304a4: 0x26420020  addiu       $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304a0) {
            ctx->pc = 0x1307A0u;
            goto label_1307a0;
        }
    }
    ctx->pc = 0x1304A8u;
    // 0x1304a8: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x1304a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1304ac: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x1304acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1304b0: 0xd8a70010  lqc2        $vf7, 0x10($a1)
    ctx->pc = 0x1304b0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1304b4: 0xd8a80020  lqc2        $vf8, 0x20($a1)
    ctx->pc = 0x1304b4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1304b8: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1304b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1304bc: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1304bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1304c0: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x1304c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1304c4: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1304c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1304c8: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1304c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1304cc: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1304ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1304d0: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1304d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1304d4: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1304d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1304d8: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1304d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1304dc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1304dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1304e0: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1304e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1304e4: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1304e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1304e8: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1304e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1304ec: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1304ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1304f0: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1304f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1304f4: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1304f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1304f8: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1304f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1304fc: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1304fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130500: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x130500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x130504: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x130504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130508: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x130508u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13050c: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x13050cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130510: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x130510u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130514: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x130514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130518: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x130518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13051c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13051cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130520: 0xfa410070  sqc2        $vf1, 0x70($s2)
    ctx->pc = 0x130520u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130524: 0xfa420080  sqc2        $vf2, 0x80($s2)
    ctx->pc = 0x130524u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130528: 0xfa430090  sqc2        $vf3, 0x90($s2)
    ctx->pc = 0x130528u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13052c: 0xfa4400a0  sqc2        $vf4, 0xA0($s2)
    ctx->pc = 0x13052cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130530: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x130530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130534: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x130534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130538: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x130538u;
    {
        const bool branch_taken_0x130538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130538u;
            // 0x13053c: 0xfba40030  sqc2        $vf4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130538) {
            ctx->pc = 0x1307A0u;
            goto label_1307a0;
        }
    }
    ctx->pc = 0x130540u;
label_130540:
    // 0x130540: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x130540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x130544: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x130544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x130548: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130548u;
    {
        const bool branch_taken_0x130548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13054Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130548u;
            // 0x13054c: 0xdc510040  ld          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130548) {
            ctx->pc = 0x130558u;
            goto label_130558;
        }
    }
    ctx->pc = 0x130550u;
    // 0x130550: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130550u;
    {
        const bool branch_taken_0x130550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130550u;
            // 0x130554: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130550) {
            ctx->pc = 0x130578u;
            goto label_130578;
        }
    }
    ctx->pc = 0x130558u;
label_130558:
    // 0x130558: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x130558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x13055c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x13055cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x130560: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x130560u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x130564: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130564u;
    {
        const bool branch_taken_0x130564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x130564) {
            ctx->pc = 0x130568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130564u;
            // 0x130568: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130578u;
            goto label_130578;
        }
    }
    ctx->pc = 0x13056Cu;
    // 0x13056c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x13056Cu;
    SET_GPR_U32(ctx, 31, 0x130574u);
    ctx->pc = 0x130570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13056Cu;
            // 0x130570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    runtime->cooperativeGuestYield();
    goto label_1303d0;
    ctx->pc = 0x130574u;
label_130574:
    // 0x130574: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x130574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_130578:
    // 0x130578: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x130578u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x13057c: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x13057cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x130580: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x130580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x130584: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x130584u;
    {
        const bool branch_taken_0x130584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130584) {
            ctx->pc = 0x130588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130584u;
            // 0x130588: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1305A0u;
            goto label_1305a0;
        }
    }
    ctx->pc = 0x13058Cu;
    // 0x13058c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13058Cu;
    {
        const bool branch_taken_0x13058c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x130590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13058Cu;
            // 0x130590: 0x71102b  sltu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13058c) {
            ctx->pc = 0x13059Cu;
            goto label_13059c;
        }
    }
    ctx->pc = 0x130594u;
    // 0x130594: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x130594u;
    {
        const bool branch_taken_0x130594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130594) {
            ctx->pc = 0x130598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130594u;
            // 0x130598: 0xfe540068  sd          $s4, 0x68($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1307A4u;
            goto label_1307a4;
        }
    }
    ctx->pc = 0x13059Cu;
label_13059c:
    // 0x13059c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x13059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_1305a0:
    // 0x1305a0: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1305a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1305a4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1305a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1305a8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1305A8u;
    {
        const bool branch_taken_0x1305a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1305ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1305A8u;
            // 0x1305ac: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305a8) {
            ctx->pc = 0x1305C0u;
            goto label_1305c0;
        }
    }
    ctx->pc = 0x1305B0u;
    // 0x1305b0: 0x94620086  lhu         $v0, 0x86($v1)
    ctx->pc = 0x1305b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x1305b4: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x1305b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1305b8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1305b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1305bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1305bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1305c0:
    // 0x1305c0: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x1305c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1305c4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1305c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1305c8: 0xd8670010  lqc2        $vf7, 0x10($v1)
    ctx->pc = 0x1305c8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1305cc: 0xd8680020  lqc2        $vf8, 0x20($v1)
    ctx->pc = 0x1305ccu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1305d0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1305d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1305d4: 0xd8860030  lqc2        $vf6, 0x30($a0)
    ctx->pc = 0x1305d4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1305d8: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x1305d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1305dc: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x1305dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1305e0: 0x4be121bc  vmulax.xyzw $ACC, $vf4, $vf1x
    ctx->pc = 0x1305e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1305e4: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1305e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1305e8: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1305e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1305ec: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x1305ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1305f0: 0x4be221bc  vmulax.xyzw $ACC, $vf4, $vf2x
    ctx->pc = 0x1305f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1305f4: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1305f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1305f8: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1305f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1305fc: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1305fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130600: 0x4be2288b  vmaddw.xyzw $vf2, $vf5, $vf2w
    ctx->pc = 0x130600u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130604: 0x4be321bc  vmulax.xyzw $ACC, $vf4, $vf3x
    ctx->pc = 0x130604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x130608: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x130608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13060c: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x13060cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130610: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x130610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130614: 0x4be328cb  vmaddw.xyzw $vf3, $vf5, $vf3w
    ctx->pc = 0x130614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130618: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x130618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13061c: 0xfba30120  sqc2        $vf3, 0x120($sp)
    ctx->pc = 0x13061cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130620: 0x4be638bd  vmadday.xyzw $ACC, $vf7, $vf6y
    ctx->pc = 0x130620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130624: 0x4be640be  vmaddaz.xyzw $ACC, $vf8, $vf6z
    ctx->pc = 0x130624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130628: 0x4be6294b  vmaddw.xyzw $vf5, $vf5, $vf6w
    ctx->pc = 0x130628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13062c: 0xfba50130  sqc2        $vf5, 0x130($sp)
    ctx->pc = 0x13062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130630: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x130630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130634: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x130634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130638: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x130638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13063c: 0xfba500f0  sqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x13063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130640: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x130640u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130644: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x130644u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x130648: 0xd8a70010  lqc2        $vf7, 0x10($a1)
    ctx->pc = 0x130648u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13064c: 0xd8a80020  lqc2        $vf8, 0x20($a1)
    ctx->pc = 0x13064cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x130650: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x130650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x130654: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x130654u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130658: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x130658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13065c: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x13065cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130660: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x130660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x130664: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x130664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130668: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x130668u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13066c: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x13066cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130670: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x130670u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130674: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x130674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x130678: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x130678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13067c: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x13067cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130680: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x130680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130684: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x130684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130688: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x130688u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13068c: 0xfba30160  sqc2        $vf3, 0x160($sp)
    ctx->pc = 0x13068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130690: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x130690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130694: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x130694u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130698: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x130698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13069c: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x13069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1306a0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1306a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1306a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1306a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1306a8: 0xfa410070  sqc2        $vf1, 0x70($s2)
    ctx->pc = 0x1306a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1306ac: 0xfa420080  sqc2        $vf2, 0x80($s2)
    ctx->pc = 0x1306acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1306b0: 0xfa430090  sqc2        $vf3, 0x90($s2)
    ctx->pc = 0x1306b0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1306b4: 0xfa4400a0  sqc2        $vf4, 0xA0($s2)
    ctx->pc = 0x1306b4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1306b8: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1306b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1306bc: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1306bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1306c0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1306C0u;
    {
        const bool branch_taken_0x1306c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1306C0u;
            // 0x1306c4: 0xfba400b0  sqc2        $vf4, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306c0) {
            ctx->pc = 0x1307A0u;
            goto label_1307a0;
        }
    }
    ctx->pc = 0x1306C8u;
label_1306c8:
    // 0x1306c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1306c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1306cc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1306ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1306d0: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1306d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1306d4: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1306D4u;
    {
        const bool branch_taken_0x1306d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1306d4) {
            ctx->pc = 0x1306D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1306D4u;
            // 0x1306d8: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1306E8u;
            goto label_1306e8;
        }
    }
    ctx->pc = 0x1306DCu;
    // 0x1306dc: 0xc04da64  jal         func_136990
    ctx->pc = 0x1306DCu;
    SET_GPR_U32(ctx, 31, 0x1306E4u);
    ctx->pc = 0x1306E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1306DCu;
            // 0x1306e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306E4u; }
        if (ctx->pc != 0x1306E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1306E4u; }
        if (ctx->pc != 0x1306E4u) { return; }
    }
    ctx->pc = 0x1306E4u;
    // 0x1306e4: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1306e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1306e8:
    // 0x1306e8: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x1306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1306ec: 0xde040040  ld          $a0, 0x40($s0)
    ctx->pc = 0x1306ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1306f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1306F0u;
    {
        const bool branch_taken_0x1306f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1306F0u;
            // 0x1306f4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306f0) {
            ctx->pc = 0x130708u;
            goto label_130708;
        }
    }
    ctx->pc = 0x1306F8u;
    // 0x1306f8: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x1306f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1306fc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1306fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x130700: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x130700u;
    {
        const bool branch_taken_0x130700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130700) {
            ctx->pc = 0x130704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130700u;
            // 0x130704: 0xfe540068  sd          $s4, 0x68($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1307A4u;
            goto label_1307a4;
        }
    }
    ctx->pc = 0x130708u;
label_130708:
    // 0x130708: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x130708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x13070c: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x13070cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130710: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x130710u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x130714: 0xd8670010  lqc2        $vf7, 0x10($v1)
    ctx->pc = 0x130714u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x130718: 0xd8680020  lqc2        $vf8, 0x20($v1)
    ctx->pc = 0x130718u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13071c: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x13071cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x130720: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x130720u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x130724: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x130724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x130728: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x130728u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13072c: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x13072cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x130730: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x130730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130734: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x130734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130738: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x130738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13073c: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x13073cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x130740: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x130740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130744: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x130744u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130748: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x130748u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13074c: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x13074cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130750: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x130750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x130754: 0xfba201d0  sqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x130754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130758: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x130758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13075c: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x13075cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130760: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x130760u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130764: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x130764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x130768: 0xfba301e0  sqc2        $vf3, 0x1E0($sp)
    ctx->pc = 0x130768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13076c: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x13076cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130770: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x130770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x130774: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x130774u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x130778: 0xfba401f0  sqc2        $vf4, 0x1F0($sp)
    ctx->pc = 0x130778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13077c: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x13077cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130780: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x130780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130784: 0xfa410070  sqc2        $vf1, 0x70($s2)
    ctx->pc = 0x130784u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130788: 0xfa420080  sqc2        $vf2, 0x80($s2)
    ctx->pc = 0x130788u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13078c: 0xfa430090  sqc2        $vf3, 0x90($s2)
    ctx->pc = 0x13078cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x130790: 0xfa4400a0  sqc2        $vf4, 0xA0($s2)
    ctx->pc = 0x130790u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130794: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x130794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130798: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x130798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13079c: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x13079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
label_1307a0:
    // 0x1307a0: 0xfe540068  sd          $s4, 0x68($s2)
    ctx->pc = 0x1307a0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 20));
label_1307a4:
    // 0x1307a4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1307a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307a8: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x1307a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1307ac: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x1307acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1307b0: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x1307b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1307b4: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x1307b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1307b8: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x1307b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1307bc: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x1307bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1307c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1307C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1307C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1307C0u;
            // 0x1307c4: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1303D0u: goto label_1303d0;
            case 0x13042Cu: goto label_13042c;
            case 0x130468u: goto label_130468;
            case 0x130478u: goto label_130478;
            case 0x130490u: goto label_130490;
            case 0x130494u: goto label_130494;
            case 0x130498u: goto label_130498;
            case 0x130540u: goto label_130540;
            case 0x130558u: goto label_130558;
            case 0x130574u: goto label_130574;
            case 0x130578u: goto label_130578;
            case 0x13059Cu: goto label_13059c;
            case 0x1305A0u: goto label_1305a0;
            case 0x1305C0u: goto label_1305c0;
            case 0x1306C8u: goto label_1306c8;
            case 0x1306E8u: goto label_1306e8;
            case 0x130708u: goto label_130708;
            case 0x1307A0u: goto label_1307a0;
            case 0x1307A4u: goto label_1307a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1307C8u;
}
