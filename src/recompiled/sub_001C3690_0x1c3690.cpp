#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3690
// Address: 0x1c3690 - 0x1c4250
void sub_001C3690_0x1c3690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3690_0x1c3690");
#endif

    ctx->pc = 0x1c3690u;

    // 0x1c3690: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1c3690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x1c3694: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c3694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c3698: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x1c3698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
    // 0x1c369c: 0xe7b80270  swc1        $f24, 0x270($sp)
    ctx->pc = 0x1c369cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x1c36a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c36a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36a4: 0xe7b40250  swc1        $f20, 0x250($sp)
    ctx->pc = 0x1c36a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x1c36a8: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x1c36a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
    // 0x1c36ac: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x1c36acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
    // 0x1c36b0: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x1c36b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
    // 0x1c36b4: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x1c36b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x1c36b8: 0xe7b70268  swc1        $f23, 0x268($sp)
    ctx->pc = 0x1c36b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x1c36bc: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x1c36bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x1c36c0: 0xe7b50258  swc1        $f21, 0x258($sp)
    ctx->pc = 0x1c36c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x1c36c4: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1c36c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c36c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c36cc: 0x7fa501b0  sq          $a1, 0x1B0($sp)
    ctx->pc = 0x1c36ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 5));
    // 0x1c36d0: 0x7fa601d0  sq          $a2, 0x1D0($sp)
    ctx->pc = 0x1c36d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 6));
    // 0x1c36d4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1c36d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c36d8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1c36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1c36dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1C36DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C36E4u);
        ctx->pc = 0x1C36E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36DCu;
            // 0x1c36e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C36E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3790u: goto label_1c3790;
            case 0x1C37F8u: goto label_1c37f8;
            case 0x1C3838u: goto label_1c3838;
            case 0x1C3918u: goto label_1c3918;
            case 0x1C3A08u: goto label_1c3a08;
            case 0x1C3A48u: goto label_1c3a48;
            case 0x1C3A58u: goto label_1c3a58;
            case 0x1C3A6Cu: goto label_1c3a6c;
            case 0x1C3A70u: goto label_1c3a70;
            case 0x1C3B08u: goto label_1c3b08;
            case 0x1C3B20u: goto label_1c3b20;
            case 0x1C3B78u: goto label_1c3b78;
            case 0x1C3B94u: goto label_1c3b94;
            case 0x1C3B9Cu: goto label_1c3b9c;
            case 0x1C3C48u: goto label_1c3c48;
            case 0x1C3C60u: goto label_1c3c60;
            case 0x1C3CB0u: goto label_1c3cb0;
            case 0x1C3CF0u: goto label_1c3cf0;
            case 0x1C3D38u: goto label_1c3d38;
            case 0x1C3D60u: goto label_1c3d60;
            case 0x1C3D64u: goto label_1c3d64;
            case 0x1C3DA0u: goto label_1c3da0;
            case 0x1C3EA8u: goto label_1c3ea8;
            case 0x1C3EE8u: goto label_1c3ee8;
            case 0x1C3F38u: goto label_1c3f38;
            case 0x1C3FA8u: goto label_1c3fa8;
            case 0x1C3FBCu: goto label_1c3fbc;
            case 0x1C3FF4u: goto label_1c3ff4;
            case 0x1C3FF8u: goto label_1c3ff8;
            case 0x1C4048u: goto label_1c4048;
            case 0x1C405Cu: goto label_1c405c;
            case 0x1C4094u: goto label_1c4094;
            case 0x1C4098u: goto label_1c4098;
            case 0x1C40CCu: goto label_1c40cc;
            case 0x1C40E8u: goto label_1c40e8;
            case 0x1C411Cu: goto label_1c411c;
            case 0x1C4138u: goto label_1c4138;
            case 0x1C4148u: goto label_1c4148;
            case 0x1C416Cu: goto label_1c416c;
            case 0x1C4184u: goto label_1c4184;
            case 0x1C41F8u: goto label_1c41f8;
            case 0x1C41FCu: goto label_1c41fc;
            case 0x1C4214u: goto label_1c4214;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C36E4u; }
            if (ctx->pc != 0x1C36E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1C36E4u;
    // 0x1c36e4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c36e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c36e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c36e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c36ec: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c36f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c36f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c36f4: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1c36f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c36f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c36fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c36fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c3700: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1c3700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1c3704: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c3704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3708: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c3708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c370c: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x1c370cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x1c3710: 0xc621016c  lwc1        $f1, 0x16C($s1)
    ctx->pc = 0x1c3710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3714: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c3714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c3718: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1c3718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1c371c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c371cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c3720: 0x4600a602  mul.s       $f24, $f20, $f0
    ctx->pc = 0x1c3720u;
    ctx->f[24] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c3724: 0xda210260  lqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c3724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c3728: 0xdba201a0  lqc2        $vf2, 0x1A0($sp)
    ctx->pc = 0x1c3728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1c372c: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c372cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3730: 0xfa210260  sqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c3730u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3734: 0xdba301b0  lqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x1c3734u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c3738: 0x4be3195b  vmulw.xyzw  $vf5, $vf3, $vf3w
    ctx->pc = 0x1c3738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c373c: 0x4a25296c  vsub.w      $vf5, $vf5, $vf5
    ctx->pc = 0x1c373cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c3740: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1c3740u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c3744: 0xfba300f0  sqc2        $vf3, 0xF0($sp)
    ctx->pc = 0x1c3744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c3748: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x1c3748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c374c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3750: 0x8c920190  lw          $s2, 0x190($a0)
    ctx->pc = 0x1c3750u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x1c3754: 0x52420028  beql        $s2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C3754u;
    {
        const bool branch_taken_0x1c3754 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3754) {
            ctx->pc = 0x1C3758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3754u;
            // 0x1c3758: 0x8e230334  lw          $v1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C37F8u;
            goto label_1c37f8;
        }
    }
    ctx->pc = 0x1C375Cu;
    // 0x1c375c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c3760: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1c3760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1c3764: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c3764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c3768: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1c3768u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1c376c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1c376cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1c3770: 0x50450007  beql        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3770u;
    {
        const bool branch_taken_0x1c3770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c3770) {
            ctx->pc = 0x1C3774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3770u;
            // 0x1c3774: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3790u;
            goto label_1c3790;
        }
    }
    ctx->pc = 0x1C3778u;
    // 0x1c3778: 0xfba501f0  sqc2        $vf5, 0x1F0($sp)
    ctx->pc = 0x1c3778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1c377c: 0xc04da64  jal         func_136990
    ctx->pc = 0x1C377Cu;
    SET_GPR_U32(ctx, 31, 0x1C3784u);
    ctx->pc = 0x1C3780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C377Cu;
            // 0x1c3780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3784u; }
        if (ctx->pc != 0x1C3784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3784u; }
        if (ctx->pc != 0x1C3784u) { return; }
    }
    ctx->pc = 0x1C3784u;
    // 0x1c3784: 0xdba501f0  lqc2        $vf5, 0x1F0($sp)
    ctx->pc = 0x1c3784u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1c3788: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1c3788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1c378c: 0x0  nop
    ctx->pc = 0x1c378cu;
    // NOP
label_1c3790:
    // 0x1c3790: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1c3790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1c3794: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c3794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3798: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1c3798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c379c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1c37a0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1c37a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c37a4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c37a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c37a8: 0xd8620020  lqc2        $vf2, 0x20($v1)
    ctx->pc = 0x1c37a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c37ac: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1c37acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c37b0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1c37b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1c37b4: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1c37b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c37b8: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1c37b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1c37bc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1c37bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1c37c0: 0xdba101a0  lqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1c37c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1c37c4: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1c37c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c37c8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1c37c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c37cc: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1c37ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c37d0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c37d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c37d4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c37d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c37d8: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c37d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c37dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c37dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c37e0: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1c37e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c37e4: 0x4a0002ff  vnop
    ctx->pc = 0x1c37e4u;
    // NOP operation, no action needed for VU0
    // 0x1c37e8: 0x4a0002ff  vnop
    ctx->pc = 0x1c37e8u;
    // NOP operation, no action needed for VU0
    // 0x1c37ec: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1c37ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c37f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C37F0u;
    {
        const bool branch_taken_0x1c37f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C37F0u;
            // 0x1c37f4: 0xfba20040  sqc2        $vf2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37f0) {
            ctx->pc = 0x1C3838u;
            goto label_1c3838;
        }
    }
    ctx->pc = 0x1C37F8u;
label_1c37f8:
    // 0x1c37f8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x1c37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1c37fc: 0xd8810050  lqc2        $vf1, 0x50($a0)
    ctx->pc = 0x1c37fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1c3800: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1c3800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c3804: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1c3804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1c3808: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1c3808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c380c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1c380cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1c3810: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1c3810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1c3814: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1c3814u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1c3818: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1c3818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c381c: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1c381cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c3820: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1c3820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3824: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c3824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3828: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1c3828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c382c: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1c382cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3830: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1c3830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3834: 0x0  nop
    ctx->pc = 0x1c3834u;
    // NOP
label_1c3838:
    // 0x1c3838: 0xdba200d0  lqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1c3838u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c383c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1c383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1c3840: 0xf8820020  sqc2        $vf2, 0x20($a0)
    ctx->pc = 0x1c3840u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3844: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c3844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3848: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1c3848u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c384c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1c384cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c3850: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1c3850u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1c3854: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1c3854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3858: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c3858u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1c385c: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1c385cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3860: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c3860u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1c3864: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1c3864u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3868: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1c3868u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c386c: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1c386cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3870: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1c3870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3874: 0xfba401c0  sqc2        $vf4, 0x1C0($sp)
    ctx->pc = 0x1c3874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c3878: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c3878u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c387c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c387cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c3880: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1c3880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3884: 0x4a0002ff  vnop
    ctx->pc = 0x1c3884u;
    // NOP operation, no action needed for VU0
    // 0x1c3888: 0x4a0002ff  vnop
    ctx->pc = 0x1c3888u;
    // NOP operation, no action needed for VU0
    // 0x1c388c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3890: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x1c3890u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3894: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x1c3894u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c3898: 0x7e220260  sq          $v0, 0x260($s1)
    ctx->pc = 0x1c3898u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), GPR_VEC(ctx, 2));
    // 0x1c389c: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x1c389cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1c38a0: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x1c38a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x1c38a4: 0xde220190  ld          $v0, 0x190($s1)
    ctx->pc = 0x1c38a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x1c38a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c38a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c38ac: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1C38ACu;
    {
        const bool branch_taken_0x1c38ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C38ACu;
            // 0x1c38b0: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38ac) {
            ctx->pc = 0x1C3A6Cu;
            goto label_1c3a6c;
        }
    }
    ctx->pc = 0x1C38B4u;
    // 0x1c38b4: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c38b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c38b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c38bc: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1C38BCu;
    {
        const bool branch_taken_0x1c38bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C38C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C38BCu;
            // 0x1c38c0: 0x26230050  addiu       $v1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38bc) {
            ctx->pc = 0x1C3A70u;
            goto label_1c3a70;
        }
    }
    ctx->pc = 0x1C38C4u;
    // 0x1c38c4: 0x4be128aa  vmul.xyzw   $vf2, $vf5, $vf1
    ctx->pc = 0x1c38c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c38c8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c38c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c38cc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c38ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c38d0: 0xd8820020  lqc2        $vf2, 0x20($a0)
    ctx->pc = 0x1c38d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1c38d4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c38d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c38d8: 0x4be228aa  vmul.xyzw   $vf2, $vf5, $vf2
    ctx->pc = 0x1c38d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c38dc: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x1c38dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1c38e0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c38e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c38e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c38e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c38e8: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c38e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c38ec: 0x4b010044  vsubx.x     $vf1, $vf0, $vf1x
    ctx->pc = 0x1c38ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c38f0: 0x4600b832  c.eq.s      $f23, $f0
    ctx->pc = 0x1c38f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c38f4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c38f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c38f8: 0x4484b000  mtc1        $a0, $f22
    ctx->pc = 0x1c38f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1c38fc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1C38FCu;
    {
        const bool branch_taken_0x1c38fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c38fc) {
            ctx->pc = 0x1C3900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C38FCu;
            // 0x1c3900: 0x8e250188  lw          $a1, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3918u;
            goto label_1c3918;
        }
    }
    ctx->pc = 0x1C3904u;
    // 0x1c3904: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x1c3904u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3908: 0x0  nop
    ctx->pc = 0x1c3908u;
    // NOP
    // 0x1c390c: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x1C390Cu;
    {
        const bool branch_taken_0x1c390c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C390Cu;
            // 0x1c3910: 0xdba200f0  lqc2        $vf2, 0xF0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c390c) {
            ctx->pc = 0x1C3A58u;
            goto label_1c3a58;
        }
    }
    ctx->pc = 0x1C3914u;
    // 0x1c3914: 0x8e250188  lw          $a1, 0x188($s1)
    ctx->pc = 0x1c3914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_1c3918:
    // 0x1c3918: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1c3918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c391c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c3920: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1c3920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c3924: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x1c3924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x1c3928: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x1c3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x1c392c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c392cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c3930: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c3930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c3934: 0x40f809  jalr        $v0
    ctx->pc = 0x1C3934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C393Cu);
        ctx->pc = 0x1C3938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3934u;
            // 0x1c3938: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C393Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3790u: goto label_1c3790;
            case 0x1C37F8u: goto label_1c37f8;
            case 0x1C3838u: goto label_1c3838;
            case 0x1C3918u: goto label_1c3918;
            case 0x1C3A08u: goto label_1c3a08;
            case 0x1C3A48u: goto label_1c3a48;
            case 0x1C3A58u: goto label_1c3a58;
            case 0x1C3A6Cu: goto label_1c3a6c;
            case 0x1C3A70u: goto label_1c3a70;
            case 0x1C3B08u: goto label_1c3b08;
            case 0x1C3B20u: goto label_1c3b20;
            case 0x1C3B78u: goto label_1c3b78;
            case 0x1C3B94u: goto label_1c3b94;
            case 0x1C3B9Cu: goto label_1c3b9c;
            case 0x1C3C48u: goto label_1c3c48;
            case 0x1C3C60u: goto label_1c3c60;
            case 0x1C3CB0u: goto label_1c3cb0;
            case 0x1C3CF0u: goto label_1c3cf0;
            case 0x1C3D38u: goto label_1c3d38;
            case 0x1C3D60u: goto label_1c3d60;
            case 0x1C3D64u: goto label_1c3d64;
            case 0x1C3DA0u: goto label_1c3da0;
            case 0x1C3EA8u: goto label_1c3ea8;
            case 0x1C3EE8u: goto label_1c3ee8;
            case 0x1C3F38u: goto label_1c3f38;
            case 0x1C3FA8u: goto label_1c3fa8;
            case 0x1C3FBCu: goto label_1c3fbc;
            case 0x1C3FF4u: goto label_1c3ff4;
            case 0x1C3FF8u: goto label_1c3ff8;
            case 0x1C4048u: goto label_1c4048;
            case 0x1C405Cu: goto label_1c405c;
            case 0x1C4094u: goto label_1c4094;
            case 0x1C4098u: goto label_1c4098;
            case 0x1C40CCu: goto label_1c40cc;
            case 0x1C40E8u: goto label_1c40e8;
            case 0x1C411Cu: goto label_1c411c;
            case 0x1C4138u: goto label_1c4138;
            case 0x1C4148u: goto label_1c4148;
            case 0x1C416Cu: goto label_1c416c;
            case 0x1C4184u: goto label_1c4184;
            case 0x1C41F8u: goto label_1c41f8;
            case 0x1C41FCu: goto label_1c41fc;
            case 0x1C4214u: goto label_1c4214;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C393Cu; }
            if (ctx->pc != 0x1C393Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C393Cu;
    // 0x1c393c: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x1c393cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c3940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3944: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c3944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c3948: 0x8e250320  lw          $a1, 0x320($s1)
    ctx->pc = 0x1c3948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c394c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c3950: 0xc600017c  lwc1        $f0, 0x17C($s0)
    ctx->pc = 0x1c3950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3954: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1c3954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1c3958: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1c3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1c395c: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x1c395cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c3960: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3964: 0x40f809  jalr        $v0
    ctx->pc = 0x1C3964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C396Cu);
        ctx->pc = 0x1C3968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3964u;
            // 0x1c3968: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C396Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3790u: goto label_1c3790;
            case 0x1C37F8u: goto label_1c37f8;
            case 0x1C3838u: goto label_1c3838;
            case 0x1C3918u: goto label_1c3918;
            case 0x1C3A08u: goto label_1c3a08;
            case 0x1C3A48u: goto label_1c3a48;
            case 0x1C3A58u: goto label_1c3a58;
            case 0x1C3A6Cu: goto label_1c3a6c;
            case 0x1C3A70u: goto label_1c3a70;
            case 0x1C3B08u: goto label_1c3b08;
            case 0x1C3B20u: goto label_1c3b20;
            case 0x1C3B78u: goto label_1c3b78;
            case 0x1C3B94u: goto label_1c3b94;
            case 0x1C3B9Cu: goto label_1c3b9c;
            case 0x1C3C48u: goto label_1c3c48;
            case 0x1C3C60u: goto label_1c3c60;
            case 0x1C3CB0u: goto label_1c3cb0;
            case 0x1C3CF0u: goto label_1c3cf0;
            case 0x1C3D38u: goto label_1c3d38;
            case 0x1C3D60u: goto label_1c3d60;
            case 0x1C3D64u: goto label_1c3d64;
            case 0x1C3DA0u: goto label_1c3da0;
            case 0x1C3EA8u: goto label_1c3ea8;
            case 0x1C3EE8u: goto label_1c3ee8;
            case 0x1C3F38u: goto label_1c3f38;
            case 0x1C3FA8u: goto label_1c3fa8;
            case 0x1C3FBCu: goto label_1c3fbc;
            case 0x1C3FF4u: goto label_1c3ff4;
            case 0x1C3FF8u: goto label_1c3ff8;
            case 0x1C4048u: goto label_1c4048;
            case 0x1C405Cu: goto label_1c405c;
            case 0x1C4094u: goto label_1c4094;
            case 0x1C4098u: goto label_1c4098;
            case 0x1C40CCu: goto label_1c40cc;
            case 0x1C40E8u: goto label_1c40e8;
            case 0x1C411Cu: goto label_1c411c;
            case 0x1C4138u: goto label_1c4138;
            case 0x1C4148u: goto label_1c4148;
            case 0x1C416Cu: goto label_1c416c;
            case 0x1C4184u: goto label_1c4184;
            case 0x1C41F8u: goto label_1c41f8;
            case 0x1C41FCu: goto label_1c41fc;
            case 0x1C4214u: goto label_1c4214;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C396Cu; }
            if (ctx->pc != 0x1C396Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C396Cu;
    // 0x1c396c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c396cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3970: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c3970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c3974: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x1c3974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3978: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x1c3978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c397c: 0x46170802  mul.s       $f0, $f1, $f23
    ctx->pc = 0x1c397cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1c3980: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c3980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c3984: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1c3984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c3988: 0xdba100f0  lqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1c3988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c398c: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c398cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3990: 0x46160802  mul.s       $f0, $f1, $f22
    ctx->pc = 0x1c3990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x1c3994: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1c3994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3998: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1c3998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1c399c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1c399cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1c39a0: 0x4be50b3c  vmove.xyzw  $vf5, $vf1
    ctx->pc = 0x1c39a0u;
    ctx->vu0_vf[5] = ctx->vu0_vf[1];
    // 0x1c39a4: 0x4a420140  vaddx.z     $vf5, $vf0, $vf2x
    ctx->pc = 0x1c39a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c39a8: 0x4be42b3c  vmove.xyzw  $vf4, $vf5
    ctx->pc = 0x1c39a8u;
    ctx->vu0_vf[4] = ctx->vu0_vf[5];
    // 0x1c39ac: 0xfba500f0  sqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x1c39acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1c39b0: 0x4be420ea  vmul.xyzw   $vf3, $vf4, $vf4
    ctx->pc = 0x1c39b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c39b4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c39b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c39b8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c39b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c39bc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c39bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c39c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c39c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c39c4: 0x46000004  c1          0x4
    ctx->pc = 0x1c39c4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c39c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c39c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c39cc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1C39CCu;
    {
        const bool branch_taken_0x1c39cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c39cc) {
            ctx->pc = 0x1C3A08u;
            goto label_1c3a08;
        }
    }
    ctx->pc = 0x1C39D4u;
    // 0x1c39d4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c39d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c39d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1c39d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c39dc: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c39dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c39e0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1c39e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c39e4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c39e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c39e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c39e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c39ec: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x1c39ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c39f0: 0x4a0002ff  vnop
    ctx->pc = 0x1c39f0u;
    // NOP operation, no action needed for VU0
    // 0x1c39f4: 0x4a0002ff  vnop
    ctx->pc = 0x1c39f4u;
    // NOP operation, no action needed for VU0
    // 0x1c39f8: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1c39f8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1c39fc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c39fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3a00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3A00u;
    {
        const bool branch_taken_0x1c3a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A00u;
            // 0x1c3a04: 0xfba10100  sqc2        $vf1, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a00) {
            ctx->pc = 0x1C3A48u;
            goto label_1c3a48;
        }
    }
    ctx->pc = 0x1C3A08u;
label_1c3a08:
    // 0x1c3a08: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1c3a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3a0c: 0x0  nop
    ctx->pc = 0x1c3a0cu;
    // NOP
    // 0x1c3a10: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3A10u;
    {
        const bool branch_taken_0x1c3a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A10u;
            // 0x1c3a14: 0xdba200f0  lqc2        $vf2, 0xF0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a10) {
            ctx->pc = 0x1C3A58u;
            goto label_1c3a58;
        }
    }
    ctx->pc = 0x1C3A18u;
    // 0x1c3a18: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1c3a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a1c: 0x4406a800  mfc1        $a2, $f21
    ctx->pc = 0x1c3a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c3a20: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1c3a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a24: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1c3a24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1c3a28: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1c3a28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c3a2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c3a2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c3a30: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x1c3a30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a34: 0x4a0002ff  vnop
    ctx->pc = 0x1c3a34u;
    // NOP operation, no action needed for VU0
    // 0x1c3a38: 0x4a0002ff  vnop
    ctx->pc = 0x1c3a38u;
    // NOP operation, no action needed for VU0
    // 0x1c3a3c: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x1c3a3cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x1c3a40: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1c3a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3a44: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1c3a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c3a48:
    // 0x1c3a48: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1c3a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a4c: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1c3a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3a50: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1c3a50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c3a54: 0x0  nop
    ctx->pc = 0x1c3a54u;
    // NOP
label_1c3a58:
    // 0x1c3a58: 0xda210260  lqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c3a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c3a5c: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c3a5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a60: 0xfa210260  sqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c3a60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3a64: 0x4a420042  vaddz.z     $vf1, $vf0, $vf2z
    ctx->pc = 0x1c3a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a68: 0xfa210260  sqc2        $vf1, 0x260($s1)
    ctx->pc = 0x1c3a68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c3a6c:
    // 0x1c3a6c: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1c3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1c3a70:
    // 0x1c3a70: 0xda240120  lqc2        $vf4, 0x120($s1)
    ctx->pc = 0x1c3a70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1c3a74: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1c3a74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c3a78: 0x4be41099  vmuly.xyzw  $vf2, $vf2, $vf4y
    ctx->pc = 0x1c3a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a7c: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1c3a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3a80: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c3a84: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1c3a84u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c3a88: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1c3a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a8c: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1c3a8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c3a90: 0x4be4085a  vmulz.xyzw  $vf1, $vf1, $vf4z
    ctx->pc = 0x1c3a90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a94: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1c3a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3a98: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1c3a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3a9c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c3a9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3aa0: 0xdba10140  lqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1c3aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c3aa4: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1c3aa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3aa8: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1c3aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3aac: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x1c3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1c3ab0: 0x30820048  andi        $v0, $a0, 0x48
    ctx->pc = 0x1c3ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)72);
    // 0x1c3ab4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C3AB4u;
    {
        const bool branch_taken_0x1c3ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AB4u;
            // 0x1c3ab8: 0x26320050  addiu       $s2, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ab4) {
            ctx->pc = 0x1C3B20u;
            goto label_1c3b20;
        }
    }
    ctx->pc = 0x1C3ABCu;
    // 0x1c3abc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1c3abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1c3ac0: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c3ac0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c3ac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c3ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ac8: 0x48b00800  qmtc2.ni    $s0, $vf1
    ctx->pc = 0x1c3ac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x1c3acc: 0x4b020845  vsuby.x     $vf1, $vf1, $vf2y
    ctx->pc = 0x1c3accu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3ad0: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x1c3ad0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3ad4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1c3ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1c3ad8: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1c3ad8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3adc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1c3adcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3ae0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3AE0u;
    {
        const bool branch_taken_0x1c3ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ae0) {
            ctx->pc = 0x1C3B08u;
            goto label_1c3b08;
        }
    }
    ctx->pc = 0x1C3AE8u;
    // 0x1c3ae8: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1c3ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1c3aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3af0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3af0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3af4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3AF4u;
    {
        const bool branch_taken_0x1c3af4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3af4) {
            ctx->pc = 0x1C3B08u;
            goto label_1c3b08;
        }
    }
    ctx->pc = 0x1C3AFCu;
    // 0x1c3afc: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1C3AFCu;
    SET_GPR_U32(ctx, 31, 0x1C3B04u);
    ctx->pc = 0x1C3B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AFCu;
            // 0x1c3b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B04u; }
        if (ctx->pc != 0x1C3B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B04u; }
        if (ctx->pc != 0x1C3B04u) { return; }
    }
    ctx->pc = 0x1C3B04u;
    // 0x1c3b04: 0x0  nop
    ctx->pc = 0x1c3b04u;
    // NOP
label_1c3b08:
    // 0x1c3b08: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x1c3b08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x1c3b0c: 0xdba10140  lqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1c3b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c3b10: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c3b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3b14: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1c3b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3b18: 0x26320050  addiu       $s2, $s1, 0x50
    ctx->pc = 0x1c3b18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1c3b1c: 0x0  nop
    ctx->pc = 0x1c3b1cu;
    // NOP
label_1c3b20:
    // 0x1c3b20: 0xda220130  lqc2        $vf2, 0x130($s1)
    ctx->pc = 0x1c3b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1c3b24: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1c3b24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c3b28: 0x4be20859  vmuly.xyzw  $vf1, $vf1, $vf2y
    ctx->pc = 0x1c3b28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3b2c: 0xdba20140  lqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1c3b2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c3b30: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c3b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3b34: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1c3b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3b38: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1c3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1c3b3c: 0xfba201e0  sqc2        $vf2, 0x1E0($sp)
    ctx->pc = 0x1c3b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3b40: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x1c3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
    // 0x1c3b44: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c3b44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3b48: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1c3b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1c3b4c: 0xdba601e0  lqc2        $vf6, 0x1E0($sp)
    ctx->pc = 0x1c3b4cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1c3b50: 0xdba501c0  lqc2        $vf5, 0x1C0($sp)
    ctx->pc = 0x1c3b50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c3b54: 0x4a812941  vaddy.y     $vf5, $vf5, $vf1y
    ctx->pc = 0x1c3b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c3b58: 0x8e220234  lw          $v0, 0x234($s1)
    ctx->pc = 0x1c3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c3b5c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3B5Cu;
    {
        const bool branch_taken_0x1c3b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b5c) {
            ctx->pc = 0x1C3B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B5Cu;
            // 0x1c3b60: 0xda220050  lqc2        $vf2, 0x50($s1) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3B94u;
            goto label_1c3b94;
        }
    }
    ctx->pc = 0x1C3B64u;
    // 0x1c3b64: 0x7a220210  lq          $v0, 0x210($s1)
    ctx->pc = 0x1c3b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1c3b68: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c3b68u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c3b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3b70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C3B70u;
    {
        const bool branch_taken_0x1c3b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B70u;
            // 0x1c3b74: 0xda220050  lqc2        $vf2, 0x50($s1) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b70) {
            ctx->pc = 0x1C3B9Cu;
            goto label_1c3b9c;
        }
    }
    ctx->pc = 0x1C3B78u;
label_1c3b78:
    // 0x1c3b78: 0xc62002b8  lwc1        $f0, 0x2B8($s1)
    ctx->pc = 0x1c3b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3b7c: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c3b80: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x1c3b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x1c3b84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c3b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c3b88: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c3b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
    // 0x1c3b8c: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x1C3B8Cu;
    {
        const bool branch_taken_0x1c3b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B8Cu;
            // 0x1c3b90: 0xe62002b8  swc1        $f0, 0x2B8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b8c) {
            ctx->pc = 0x1C41F8u;
            goto label_1c41f8;
        }
    }
    ctx->pc = 0x1C3B94u;
label_1c3b94:
    // 0x1c3b94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c3b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c3b9c:
    // 0x1c3b9c: 0xda230260  lqc2        $vf3, 0x260($s1)
    ctx->pc = 0x1c3b9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c3ba0: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1c3ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3ba4: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x1c3ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3ba8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c3ba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c3bac: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1c3bacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c3bb0: 0x4be41098  vmulx.xyzw  $vf2, $vf2, $vf4x
    ctx->pc = 0x1c3bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3bb4: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1c3bb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c3bb8: 0x4be30859  vmuly.xyzw  $vf1, $vf1, $vf3y
    ctx->pc = 0x1c3bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3bbc: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c3bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3bc0: 0x4be510a8  vadd.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x1c3bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3bc4: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x1c3bc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c3bc8: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x1c3bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3bcc: 0xdba501c0  lqc2        $vf5, 0x1C0($sp)
    ctx->pc = 0x1c3bccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1c3bd0: 0x4be1286c  vsub.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x1c3bd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3bd4: 0x4be3085a  vmulz.xyzw  $vf1, $vf1, $vf3z
    ctx->pc = 0x1c3bd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3bd8: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x1c3bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3bdc: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x1c3bdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3be0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1c3be0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3be4: 0xfa2200e0  sqc2        $vf2, 0xE0($s1)
    ctx->pc = 0x1c3be4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3be8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1c3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1c3bec: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c3becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c3bf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c3bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3bf4: 0xc4405e98  lwc1        $f0, 0x5E98($v0)
    ctx->pc = 0x1c3bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3bf8: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1c3bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1c3bfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c3bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c3c00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c3c00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c3c04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c3c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c3c08: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c3c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c3c0c: 0x4a812940  vaddx.y     $vf5, $vf5, $vf1x
    ctx->pc = 0x1c3c0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1c3c10: 0x4be51128  vadd.xyzw   $vf4, $vf2, $vf5
    ctx->pc = 0x1c3c10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c3c14: 0xfa2400e0  sqc2        $vf4, 0xE0($s1)
    ctx->pc = 0x1c3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c3c18: 0x8e260194  lw          $a2, 0x194($s1)
    ctx->pc = 0x1c3c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1c3c1c: 0x30c2007e  andi        $v0, $a2, 0x7E
    ctx->pc = 0x1c3c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)126);
    // 0x1c3c20: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3C20u;
    {
        const bool branch_taken_0x1c3c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c20) {
            ctx->pc = 0x1C3C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C20u;
            // 0x1c3c24: 0x8e240174  lw          $a0, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3C48u;
            goto label_1c3c48;
        }
    }
    ctx->pc = 0x1C3C28u;
    // 0x1c3c28: 0x4404c000  mfc1        $a0, $f24
    ctx->pc = 0x1c3c28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c3c2c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1c3c2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1c3c30: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1c3c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3c34: 0xdba201d0  lqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x1c3c34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1c3c38: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1c3c38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3c3c: 0x4be130e8  vadd.xyzw   $vf3, $vf6, $vf1
    ctx->pc = 0x1c3c3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c3c40: 0xfba301e0  sqc2        $vf3, 0x1E0($sp)
    ctx->pc = 0x1c3c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c3c44: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x1c3c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_1c3c48:
    // 0x1c3c48: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x1c3c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x1c3c4c: 0x5040016b  beql        $v0, $zero, . + 4 + (0x16B << 2)
    ctx->pc = 0x1C3C4Cu;
    {
        const bool branch_taken_0x1c3c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c4c) {
            ctx->pc = 0x1C3C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C4Cu;
            // 0x1c3c50: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C3C54u;
    // 0x1c3c54: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x1C3C54u;
    {
        const bool branch_taken_0x1c3c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C54u;
            // 0x1c3c58: 0x8e250188  lw          $a1, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c54) {
            ctx->pc = 0x1C4148u;
            goto label_1c4148;
        }
    }
    ctx->pc = 0x1C3C5Cu;
    // 0x1c3c5c: 0x0  nop
    ctx->pc = 0x1c3c5cu;
    // NOP
label_1c3c60:
    // 0x1c3c60: 0x8e230310  lw          $v1, 0x310($s1)
    ctx->pc = 0x1c3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1c3c64: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x1c3c64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1c3c68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3c6c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C3C6Cu;
    {
        const bool branch_taken_0x1c3c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C6Cu;
            // 0x1c3c70: 0xdba20140  lqc2        $vf2, 0x140($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c6c) {
            ctx->pc = 0x1C3D60u;
            goto label_1c3d60;
        }
    }
    ctx->pc = 0x1C3C74u;
    // 0x1c3c74: 0xda210110  lqc2        $vf1, 0x110($s1)
    ctx->pc = 0x1c3c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1c3c78: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1c3c78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c3c7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c3c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3c80: 0x311c3  sra         $v0, $v1, 7
    ctx->pc = 0x1c3c80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1c3c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3c88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3C88u;
    {
        const bool branch_taken_0x1c3c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c88) {
            ctx->pc = 0x1C3CB0u;
            goto label_1c3cb0;
        }
    }
    ctx->pc = 0x1C3C90u;
    // 0x1c3c90: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x1c3c90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3c94: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c3c94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3c98: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c3c98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3c9c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c3c9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c3ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3ca4: 0x46000004  c1          0x4
    ctx->pc = 0x1c3ca4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c3ca8: 0x46180083  div.s       $f2, $f0, $f24
    ctx->pc = 0x1c3ca8u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[24];
    // 0x1c3cac: 0x0  nop
    ctx->pc = 0x1c3cacu;
    // NOP
label_1c3cb0:
    // 0x1c3cb0: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x1c3cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x1c3cb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3cb8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c3cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3cbc: 0x0  nop
    ctx->pc = 0x1c3cbcu;
    // NOP
    // 0x1c3cc0: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x1C3CC0u;
    {
        const bool branch_taken_0x1c3cc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3cc0) {
            ctx->pc = 0x1C3CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3CC0u;
            // 0x1c3cc4: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D64u;
            goto label_1c3d64;
        }
    }
    ctx->pc = 0x1C3CC8u;
    // 0x1c3cc8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1c3cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1c3ccc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c3cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c3cd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3cd4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c3cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3cd8: 0x0  nop
    ctx->pc = 0x1c3cd8u;
    // NOP
    // 0x1c3cdc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3CDCu;
    {
        const bool branch_taken_0x1c3cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3cdc) {
            ctx->pc = 0x1C3CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3CDCu;
            // 0x1c3ce0: 0x8e220320  lw          $v0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3CF0u;
            goto label_1c3cf0;
        }
    }
    ctx->pc = 0x1C3CE4u;
    // 0x1c3ce4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c3ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3ce8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C3CE8u;
    {
        const bool branch_taken_0x1c3ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ce8) {
            ctx->pc = 0x1C3D38u;
            goto label_1c3d38;
        }
    }
    ctx->pc = 0x1C3CF0u;
label_1c3cf0:
    // 0x1c3cf0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c3cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1c3cf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c3cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3cf8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c3cfc: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x1c3cfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c3d00: 0xc44000ec  lwc1        $f0, 0xEC($v0)
    ctx->pc = 0x1c3d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3d04: 0x4be218aa  vmul.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x1c3d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3d08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c3d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c3d0c: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x1c3d0cu;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
    // 0x1c3d10: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c3d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3d14: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c3d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3d18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c3d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3d1c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c3d1cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3d20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c3d20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3d28: 0x0  nop
    ctx->pc = 0x1c3d28u;
    // NOP
    // 0x1c3d2c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3D2Cu;
    {
        const bool branch_taken_0x1c3d2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3d2c) {
            ctx->pc = 0x1C3D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D2Cu;
            // 0x1c3d30: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D38u;
            goto label_1c3d38;
        }
    }
    ctx->pc = 0x1C3D34u;
    // 0x1c3d34: 0x0  nop
    ctx->pc = 0x1c3d34u;
    // NOP
label_1c3d38:
    // 0x1c3d38: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1c3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c3d3c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1c3d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c3d40: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1c3d40u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1c3d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d48: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x1c3d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1c3d4c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x1c3d4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1c3d50: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1c3d50u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1c3d54: 0x7e220260  sq          $v0, 0x260($s1)
    ctx->pc = 0x1c3d54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 608), GPR_VEC(ctx, 2));
    // 0x1c3d58: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x1C3D58u;
    {
        const bool branch_taken_0x1c3d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D58u;
            // 0x1c3d5c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d58) {
            ctx->pc = 0x1C41F8u;
            goto label_1c41f8;
        }
    }
    ctx->pc = 0x1C3D60u;
label_1c3d60:
    // 0x1c3d60: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x1c3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_1c3d64:
    // 0x1c3d64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3d68: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C3D68u;
    {
        const bool branch_taken_0x1c3d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D68u;
            // 0x1c3d6c: 0x263002e0  addiu       $s0, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d68) {
            ctx->pc = 0x1C3EA8u;
            goto label_1c3ea8;
        }
    }
    ctx->pc = 0x1C3D70u;
    // 0x1c3d70: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1c3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c3d74: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x1c3d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1c3d78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3d7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3D7Cu;
    {
        const bool branch_taken_0x1c3d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D7Cu;
            // 0x1c3d80: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d7c) {
            ctx->pc = 0x1C3DA0u;
            goto label_1c3da0;
        }
    }
    ctx->pc = 0x1C3D84u;
    // 0x1c3d84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3d88: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x1C3D88u;
    {
        const bool branch_taken_0x1c3d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D88u;
            // 0x1c3d8c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d88) {
            ctx->pc = 0x1C3B78u;
            runtime->cooperativeGuestYield();
            goto label_1c3b78;
        }
    }
    ctx->pc = 0x1C3D90u;
    // 0x1c3d90: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c3d94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3d98: 0x50400118  beql        $v0, $zero, . + 4 + (0x118 << 2)
    ctx->pc = 0x1C3D98u;
    {
        const bool branch_taken_0x1c3d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d98) {
            ctx->pc = 0x1C3D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D98u;
            // 0x1c3d9c: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C3DA0u;
label_1c3da0:
    // 0x1c3da0: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c3da4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1c3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1c3da8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3dac: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C3DACu;
    {
        const bool branch_taken_0x1c3dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DACu;
            // 0x1c3db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dac) {
            ctx->pc = 0x1C3EA8u;
            goto label_1c3ea8;
        }
    }
    ctx->pc = 0x1C3DB4u;
    // 0x1c3db4: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1c3db4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c3db8: 0x2404041d  addiu       $a0, $zero, 0x41D
    ctx->pc = 0x1c3db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1053));
    // 0x1c3dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3dc0: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1C3DC0u;
    SET_GPR_U32(ctx, 31, 0x1C3DC8u);
    ctx->pc = 0x1C3DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DC0u;
            // 0x1c3dc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC8u; }
        if (ctx->pc != 0x1C3DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC8u; }
        if (ctx->pc != 0x1C3DC8u) { return; }
    }
    ctx->pc = 0x1C3DC8u;
    // 0x1c3dc8: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1c3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c3dcc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c3dd0: 0xc63402b8  lwc1        $f20, 0x2B8($s1)
    ctx->pc = 0x1c3dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3dd4: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x1c3dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x1c3dd8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c3ddc: 0x8e250188  lw          $a1, 0x188($s1)
    ctx->pc = 0x1c3ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c3de0: 0xc44001ac  lwc1        $f0, 0x1AC($v0)
    ctx->pc = 0x1c3de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3de4: 0x8ca20174  lw          $v0, 0x174($a1)
    ctx->pc = 0x1c3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1c3de8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1c3de8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x1c3dec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c3decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3df0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c3df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3df4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3df8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c3df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3dfc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1c3dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1c3e00: 0xaca20174  sw          $v0, 0x174($a1)
    ctx->pc = 0x1c3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 372), GPR_U32(ctx, 2));
    // 0x1c3e04: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x1c3e04u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x1c3e08: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1c3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c3e0c: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x1c3e0cu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
    // 0x1c3e10: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1c3e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1c3e14: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1c3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1c3e18: 0x40f809  jalr        $v0
    ctx->pc = 0x1C3E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3E20u);
        ctx->pc = 0x1C3E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E18u;
            // 0x1c3e1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C3E20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3790u: goto label_1c3790;
            case 0x1C37F8u: goto label_1c37f8;
            case 0x1C3838u: goto label_1c3838;
            case 0x1C3918u: goto label_1c3918;
            case 0x1C3A08u: goto label_1c3a08;
            case 0x1C3A48u: goto label_1c3a48;
            case 0x1C3A58u: goto label_1c3a58;
            case 0x1C3A6Cu: goto label_1c3a6c;
            case 0x1C3A70u: goto label_1c3a70;
            case 0x1C3B08u: goto label_1c3b08;
            case 0x1C3B20u: goto label_1c3b20;
            case 0x1C3B78u: goto label_1c3b78;
            case 0x1C3B94u: goto label_1c3b94;
            case 0x1C3B9Cu: goto label_1c3b9c;
            case 0x1C3C48u: goto label_1c3c48;
            case 0x1C3C60u: goto label_1c3c60;
            case 0x1C3CB0u: goto label_1c3cb0;
            case 0x1C3CF0u: goto label_1c3cf0;
            case 0x1C3D38u: goto label_1c3d38;
            case 0x1C3D60u: goto label_1c3d60;
            case 0x1C3D64u: goto label_1c3d64;
            case 0x1C3DA0u: goto label_1c3da0;
            case 0x1C3EA8u: goto label_1c3ea8;
            case 0x1C3EE8u: goto label_1c3ee8;
            case 0x1C3F38u: goto label_1c3f38;
            case 0x1C3FA8u: goto label_1c3fa8;
            case 0x1C3FBCu: goto label_1c3fbc;
            case 0x1C3FF4u: goto label_1c3ff4;
            case 0x1C3FF8u: goto label_1c3ff8;
            case 0x1C4048u: goto label_1c4048;
            case 0x1C405Cu: goto label_1c405c;
            case 0x1C4094u: goto label_1c4094;
            case 0x1C4098u: goto label_1c4098;
            case 0x1C40CCu: goto label_1c40cc;
            case 0x1C40E8u: goto label_1c40e8;
            case 0x1C411Cu: goto label_1c411c;
            case 0x1C4138u: goto label_1c4138;
            case 0x1C4148u: goto label_1c4148;
            case 0x1C416Cu: goto label_1c416c;
            case 0x1C4184u: goto label_1c4184;
            case 0x1C41F8u: goto label_1c41f8;
            case 0x1C41FCu: goto label_1c41fc;
            case 0x1C4214u: goto label_1c4214;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E20u; }
            if (ctx->pc != 0x1C3E20u) { return; }
        }
        }
    }
    ctx->pc = 0x1C3E20u;
    // 0x1c3e20: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x1c3e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c3e24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3e28: 0x8e250188  lw          $a1, 0x188($s1)
    ctx->pc = 0x1c3e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c3e2c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c3e30: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x1c3e30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c3e34: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1c3e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3e38: 0xd8a300e0  lqc2        $vf3, 0xE0($a1)
    ctx->pc = 0x1c3e38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x1c3e3c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c3e3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e40: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x1c3e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3e44: 0xc4610194  lwc1        $f1, 0x194($v1)
    ctx->pc = 0x1c3e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3e48: 0xfba20180  sqc2        $vf2, 0x180($sp)
    ctx->pc = 0x1c3e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3e4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c3e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c3e50: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c3e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c3e54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c3e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c3e58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c3e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c3e5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c3e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c3e60: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1c3e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3e64: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1c3e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c3e68: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c3e6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c3e6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c3e70: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1c3e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3e74: 0x4be218ec  vsub.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x1c3e74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c3e78: 0xf8a300e0  sqc2        $vf3, 0xE0($a1)
    ctx->pc = 0x1c3e78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1c3e7c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c3e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c3e80: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x1c3e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
    // 0x1c3e84: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x1c3e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c3e88: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c3e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c3e8c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1c3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c3e90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3e94: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1c3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1c3e98: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c3e9c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c3e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c3ea0: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
    // 0x1c3ea4: 0x0  nop
    ctx->pc = 0x1c3ea4u;
    // NOP
label_1c3ea8:
    // 0x1c3ea8: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x1c3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x1c3eac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1c3eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1c3eb0: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C3EB0u;
    {
        const bool branch_taken_0x1c3eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EB0u;
            // 0x1c3eb4: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3eb0) {
            ctx->pc = 0x1C3FF4u;
            goto label_1c3ff4;
        }
    }
    ctx->pc = 0x1C3EB8u;
    // 0x1c3eb8: 0x8e250328  lw          $a1, 0x328($s1)
    ctx->pc = 0x1c3eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1c3ebc: 0xc460cd2c  lwc1        $f0, -0x32D4($v1)
    ctx->pc = 0x1c3ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3ec0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1c3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c3ec4: 0x84a400de  lh          $a0, 0xDE($a1)
    ctx->pc = 0x1c3ec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 222)));
    // 0x1c3ec8: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x1c3ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x1c3ecc: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3ECCu;
    {
        const bool branch_taken_0x1c3ecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3ECCu;
            // 0x1c3ed0: 0xe460cd2c  swc1        $f0, -0x32D4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ecc) {
            ctx->pc = 0x1C3EE8u;
            goto label_1c3ee8;
        }
    }
    ctx->pc = 0x1C3ED4u;
    // 0x1c3ed4: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1c3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1c3ed8: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x1c3ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x1c3edc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3ee0: 0x544000c5  bnel        $v0, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1C3EE0u;
    {
        const bool branch_taken_0x1c3ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ee0) {
            ctx->pc = 0x1C3EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EE0u;
            // 0x1c3ee4: 0xac60cd2c  sw          $zero, -0x32D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41F8u;
            goto label_1c41f8;
        }
    }
    ctx->pc = 0x1C3EE8u;
label_1c3ee8:
    // 0x1c3ee8: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x1c3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1c3eec: 0x5082002e  beql        $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C3EECu;
    {
        const bool branch_taken_0x1c3eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3eec) {
            ctx->pc = 0x1C3EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EECu;
            // 0x1c3ef0: 0x8ca200cc  lw          $v0, 0xCC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3FA8u;
            goto label_1c3fa8;
        }
    }
    ctx->pc = 0x1C3EF4u;
    // 0x1c3ef4: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1c3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1c3ef8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1c3ef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1c3efc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3f00: 0x544000be  bnel        $v0, $zero, . + 4 + (0xBE << 2)
    ctx->pc = 0x1C3F00u;
    {
        const bool branch_taken_0x1c3f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f00) {
            ctx->pc = 0x1C3F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F00u;
            // 0x1c3f04: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C3F08u;
    // 0x1c3f08: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x1c3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c3f0c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1c3f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3f10: 0x8c520190  lw          $s2, 0x190($v0)
    ctx->pc = 0x1c3f10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x1c3f14: 0x8e700104  lw          $s0, 0x104($s3)
    ctx->pc = 0x1c3f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1c3f18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c3f1c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1c3f1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1c3f20: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1c3f20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1c3f24: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3F24u;
    {
        const bool branch_taken_0x1c3f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c3f24) {
            ctx->pc = 0x1C3F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F24u;
            // 0x1c3f28: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3F38u;
            goto label_1c3f38;
        }
    }
    ctx->pc = 0x1C3F2Cu;
    // 0x1c3f2c: 0xc04da64  jal         func_136990
    ctx->pc = 0x1C3F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F34u);
    ctx->pc = 0x1C3F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F2Cu;
            // 0x1c3f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F34u; }
        if (ctx->pc != 0x1C3F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F34u; }
        if (ctx->pc != 0x1C3F34u) { return; }
    }
    ctx->pc = 0x1C3F34u;
    // 0x1c3f34: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1c3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1c3f38:
    // 0x1c3f38: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1c3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1c3f3c: 0xdba301b0  lqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x1c3f3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c3f40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3f44: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1c3f44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3f48: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1c3f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1c3f4c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1c3f4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c3f50: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1c3f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1c3f54: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1c3f54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c3f58: 0x4be308aa  vmul.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1c3f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c3f5c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1c3f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3f60: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1c3f60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1c3f64: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1c3f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1c3f68: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1c3f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3f6c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1c3f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3f70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c3f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c3f74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c3f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3f78: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c3f78u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c3f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3f80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c3f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3f84: 0x0  nop
    ctx->pc = 0x1c3f84u;
    // NOP
    // 0x1c3f88: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1C3F88u;
    {
        const bool branch_taken_0x1c3f88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F88u;
            // 0x1c3f8c: 0x8e6300f4  lw          $v1, 0xF4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f88) {
            ctx->pc = 0x1C3FF4u;
            goto label_1c3ff4;
        }
    }
    ctx->pc = 0x1C3F90u;
    // 0x1c3f90: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c3f94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c3f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c3f98: 0x54400098  bnel        $v0, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x1C3F98u;
    {
        const bool branch_taken_0x1c3f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f98) {
            ctx->pc = 0x1C3F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F98u;
            // 0x1c3f9c: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C3FA0u;
    // 0x1c3fa0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3FA0u;
    {
        const bool branch_taken_0x1c3fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FA0u;
            // 0x1c3fa4: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fa0) {
            ctx->pc = 0x1C3FF8u;
            goto label_1c3ff8;
        }
    }
    ctx->pc = 0x1C3FA8u;
label_1c3fa8:
    // 0x1c3fa8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1c3fac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c3facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3fb0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3FB0u;
    {
        const bool branch_taken_0x1c3fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FB0u;
            // 0x1c3fb4: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fb0) {
            ctx->pc = 0x1C3FBCu;
            goto label_1c3fbc;
        }
    }
    ctx->pc = 0x1C3FB8u;
    // 0x1c3fb8: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1c3fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c3fbc:
    // 0x1c3fbc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1c3fbcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1c3fc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c3fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3fc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3fc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3fcc: 0x0  nop
    ctx->pc = 0x1c3fccu;
    // NOP
    // 0x1c3fd0: 0x4503008a  bc1tl       . + 4 + (0x8A << 2)
    ctx->pc = 0x1C3FD0u;
    {
        const bool branch_taken_0x1c3fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3fd0) {
            ctx->pc = 0x1C3FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FD0u;
            // 0x1c3fd4: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C3FD8u;
    // 0x1c3fd8: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x1c3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c3fdc: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1c3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1c3fe0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3fe4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c3fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3fe8: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x1c3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1c3fec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3ff0: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x1c3ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
label_1c3ff4:
    // 0x1c3ff4: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x1c3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_1c3ff8:
    // 0x1c3ff8: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1c3ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1c3ffc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C3FFCu;
    {
        const bool branch_taken_0x1c3ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FFCu;
            // 0x1c4000: 0x24030062  addiu       $v1, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ffc) {
            ctx->pc = 0x1C4094u;
            goto label_1c4094;
        }
    }
    ctx->pc = 0x1C4004u;
    // 0x1c4004: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x1c4004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1c4008: 0x848200de  lh          $v0, 0xDE($a0)
    ctx->pc = 0x1c4008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 222)));
    // 0x1c400c: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C400Cu;
    {
        const bool branch_taken_0x1c400c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c400c) {
            ctx->pc = 0x1C4010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C400Cu;
            // 0x1c4010: 0x8c8200cc  lw          $v0, 0xCC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4048u;
            goto label_1c4048;
        }
    }
    ctx->pc = 0x1C4014u;
    // 0x1c4014: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x1c4014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c4018: 0x8c4201c0  lw          $v0, 0x1C0($v0)
    ctx->pc = 0x1c4018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x1c401c: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x1c401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1c4020: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c4020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c4024: 0x50400075  beql        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x1C4024u;
    {
        const bool branch_taken_0x1c4024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4024) {
            ctx->pc = 0x1C4028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4024u;
            // 0x1c4028: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C402Cu;
    // 0x1c402c: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1c402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1c4030: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1c4030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1c4034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c4034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c4038: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x1C4038u;
    {
        const bool branch_taken_0x1c4038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4038) {
            ctx->pc = 0x1C403Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4038u;
            // 0x1c403c: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C4040u;
    // 0x1c4040: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C4040u;
    {
        const bool branch_taken_0x1c4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4040u;
            // 0x1c4044: 0x8e250194  lw          $a1, 0x194($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4040) {
            ctx->pc = 0x1C4098u;
            goto label_1c4098;
        }
    }
    ctx->pc = 0x1C4048u;
label_1c4048:
    // 0x1c4048: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c4048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1c404c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c404cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4050: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4050u;
    {
        const bool branch_taken_0x1c4050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4050u;
            // 0x1c4054: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4050) {
            ctx->pc = 0x1C405Cu;
            goto label_1c405c;
        }
    }
    ctx->pc = 0x1C4058u;
    // 0x1c4058: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1c4058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c405c:
    // 0x1c405c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1c405cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1c4060: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4068: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c406c: 0x0  nop
    ctx->pc = 0x1c406cu;
    // NOP
    // 0x1c4070: 0x45030062  bc1tl       . + 4 + (0x62 << 2)
    ctx->pc = 0x1C4070u;
    {
        const bool branch_taken_0x1c4070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4070) {
            ctx->pc = 0x1C4074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4070u;
            // 0x1c4074: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C4078u;
    // 0x1c4078: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x1c4078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x1c407c: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x1c407cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x1c4080: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c4080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c4084: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c4084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4088: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x1c4088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1c408c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c4090: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x1c4090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
label_1c4094:
    // 0x1c4094: 0x8e250194  lw          $a1, 0x194($s1)
    ctx->pc = 0x1c4094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_1c4098:
    // 0x1c4098: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1c4098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1c409c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C409Cu;
    {
        const bool branch_taken_0x1c409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C409Cu;
            // 0x1c40a0: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c409c) {
            ctx->pc = 0x1C40E8u;
            goto label_1c40e8;
        }
    }
    ctx->pc = 0x1C40A4u;
    // 0x1c40a4: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x1c40a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1c40a8: 0x848200de  lh          $v0, 0xDE($a0)
    ctx->pc = 0x1c40a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 222)));
    // 0x1c40ac: 0x54430053  bnel        $v0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1C40ACu;
    {
        const bool branch_taken_0x1c40ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c40ac) {
            ctx->pc = 0x1C40B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40ACu;
            // 0x1c40b0: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C40B4u;
    // 0x1c40b4: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1c40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1c40b8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1c40bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c40bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c40c0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C40C0u;
    {
        const bool branch_taken_0x1c40c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40C0u;
            // 0x1c40c4: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40c0) {
            ctx->pc = 0x1C40CCu;
            goto label_1c40cc;
        }
    }
    ctx->pc = 0x1C40C8u;
    // 0x1c40c8: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1c40c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c40cc:
    // 0x1c40cc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1c40ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1c40d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c40d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c40d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c40d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c40d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c40d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c40dc: 0x0  nop
    ctx->pc = 0x1c40dcu;
    // NOP
    // 0x1c40e0: 0x45030046  bc1tl       . + 4 + (0x46 << 2)
    ctx->pc = 0x1C40E0u;
    {
        const bool branch_taken_0x1c40e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c40e0) {
            ctx->pc = 0x1C40E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40E0u;
            // 0x1c40e4: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C40E8u;
label_1c40e8:
    // 0x1c40e8: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x1c40e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x1c40ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C40ECu;
    {
        const bool branch_taken_0x1c40ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40ECu;
            // 0x1c40f0: 0x2403005e  addiu       $v1, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40ec) {
            ctx->pc = 0x1C4138u;
            goto label_1c4138;
        }
    }
    ctx->pc = 0x1C40F4u;
    // 0x1c40f4: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x1c40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1c40f8: 0x848200de  lh          $v0, 0xDE($a0)
    ctx->pc = 0x1c40f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 222)));
    // 0x1c40fc: 0x5443003f  bnel        $v0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1C40FCu;
    {
        const bool branch_taken_0x1c40fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c40fc) {
            ctx->pc = 0x1C4100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40FCu;
            // 0x1c4100: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C4104u;
    // 0x1c4104: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1c4104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1c4108: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c4108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1c410c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c410cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4110: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4110u;
    {
        const bool branch_taken_0x1c4110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4110u;
            // 0x1c4114: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4110) {
            ctx->pc = 0x1C411Cu;
            goto label_1c411c;
        }
    }
    ctx->pc = 0x1C4118u;
    // 0x1c4118: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1c4118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c411c:
    // 0x1c411c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1c411cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1c4120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c412c: 0x0  nop
    ctx->pc = 0x1c412cu;
    // NOP
    // 0x1c4130: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
    ctx->pc = 0x1C4130u;
    {
        const bool branch_taken_0x1c4130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4130) {
            ctx->pc = 0x1C4134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4130u;
            // 0x1c4134: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C4138u;
label_1c4138:
    // 0x1c4138: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1C4138u;
    SET_GPR_U32(ctx, 31, 0x1C4140u);
    ctx->pc = 0x1C413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4138u;
            // 0x1c413c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4140u; }
        if (ctx->pc != 0x1C4140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4140u; }
        if (ctx->pc != 0x1C4140u) { return; }
    }
    ctx->pc = 0x1C4140u;
    // 0x1c4140: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C4140u;
    {
        const bool branch_taken_0x1c4140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4140u;
            // 0x1c4144: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4140) {
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C4148u;
label_1c4148:
    // 0x1c4148: 0x10a0fffb  beqz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4148u;
    {
        const bool branch_taken_0x1c4148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4148) {
            ctx->pc = 0x1C4138u;
            runtime->cooperativeGuestYield();
            goto label_1c4138;
        }
    }
    ctx->pc = 0x1C4150u;
    // 0x1c4150: 0x8ca30174  lw          $v1, 0x174($a1)
    ctx->pc = 0x1c4150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1c4154: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c4154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c4158: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4158u;
    {
        const bool branch_taken_0x1c4158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4158u;
            // 0x1c415c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4158) {
            ctx->pc = 0x1C416Cu;
            goto label_1c416c;
        }
    }
    ctx->pc = 0x1C4160u;
    // 0x1c4160: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c4160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c4164: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C4164u;
    {
        const bool branch_taken_0x1c4164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4164u;
            // 0x1c4168: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4164) {
            ctx->pc = 0x1C4138u;
            runtime->cooperativeGuestYield();
            goto label_1c4138;
        }
    }
    ctx->pc = 0x1C416Cu;
label_1c416c:
    // 0x1c416c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C416Cu;
    {
        const bool branch_taken_0x1c416c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c416c) {
            ctx->pc = 0x1C4170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C416Cu;
            // 0x1c4170: 0x8e220324  lw          $v0, 0x324($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4184u;
            goto label_1c4184;
        }
    }
    ctx->pc = 0x1C4174u;
    // 0x1c4174: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x1c4174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1c4178: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C4178u;
    {
        const bool branch_taken_0x1c4178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4178) {
            ctx->pc = 0x1C4138u;
            runtime->cooperativeGuestYield();
            goto label_1c4138;
        }
    }
    ctx->pc = 0x1C4180u;
    // 0x1c4180: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1c4180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_1c4184:
    // 0x1c4184: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c4184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c4188: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C4188u;
    {
        const bool branch_taken_0x1c4188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C418Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4188u;
            // 0x1c418c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4188) {
            ctx->pc = 0x1C4138u;
            runtime->cooperativeGuestYield();
            goto label_1c4138;
        }
    }
    ctx->pc = 0x1C4190u;
    // 0x1c4190: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c4190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c4194: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1C4194u;
    {
        const bool branch_taken_0x1c4194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4194u;
            // 0x1c4198: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4194) {
            ctx->pc = 0x1C4138u;
            runtime->cooperativeGuestYield();
            goto label_1c4138;
        }
    }
    ctx->pc = 0x1C419Cu;
    // 0x1c419c: 0x5040fef1  beql        $v0, $zero, . + 4 + (-0x10F << 2)
    ctx->pc = 0x1C419Cu;
    {
        const bool branch_taken_0x1c419c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c419c) {
            ctx->pc = 0x1C41A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C419Cu;
            // 0x1c41a0: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D64u;
            runtime->cooperativeGuestYield();
            goto label_1c3d64;
        }
    }
    ctx->pc = 0x1C41A4u;
    // 0x1c41a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c41a8: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1c41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1c41ac: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1c41acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1c41b0: 0x1040feeb  beqz        $v0, . + 4 + (-0x115 << 2)
    ctx->pc = 0x1C41B0u;
    {
        const bool branch_taken_0x1c41b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41B0u;
            // 0x1c41b4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41b0) {
            ctx->pc = 0x1C3D60u;
            runtime->cooperativeGuestYield();
            goto label_1c3d60;
        }
    }
    ctx->pc = 0x1C41B8u;
    // 0x1c41b8: 0x8e2402d8  lw          $a0, 0x2D8($s1)
    ctx->pc = 0x1c41b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c41bc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c41bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c41c0: 0x1040fea7  beqz        $v0, . + 4 + (-0x159 << 2)
    ctx->pc = 0x1C41C0u;
    {
        const bool branch_taken_0x1c41c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41C0u;
            // 0x1c41c4: 0x24030054  addiu       $v1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41c0) {
            ctx->pc = 0x1C3C60u;
            runtime->cooperativeGuestYield();
            goto label_1c3c60;
        }
    }
    ctx->pc = 0x1C41C8u;
    // 0x1c41c8: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x1c41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1c41cc: 0x844200de  lh          $v0, 0xDE($v0)
    ctx->pc = 0x1c41ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 222)));
    // 0x1c41d0: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C41D0u;
    {
        const bool branch_taken_0x1c41d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c41d0) {
            ctx->pc = 0x1C41D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41D0u;
            // 0x1c41d4: 0x8e2202dc  lw          $v0, 0x2DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C41D8u;
    // 0x1c41d8: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x1c41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x1c41dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c41dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c41e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c41e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c41e4: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
    // 0x1c41e8: 0x90a2029a  lbu         $v0, 0x29A($a1)
    ctx->pc = 0x1c41e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 666)));
    // 0x1c41ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1c41ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1c41f0: 0x1000fedb  b           . + 4 + (-0x125 << 2)
    ctx->pc = 0x1C41F0u;
    {
        const bool branch_taken_0x1c41f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41F0u;
            // 0x1c41f4: 0xa0a2029a  sb          $v0, 0x29A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 666), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41f0) {
            ctx->pc = 0x1C3D60u;
            runtime->cooperativeGuestYield();
            goto label_1c3d60;
        }
    }
    ctx->pc = 0x1C41F8u;
label_1c41f8:
    // 0x1c41f8: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1c41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_1c41fc:
    // 0x1c41fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1c41fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1c4200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4200u;
    {
        const bool branch_taken_0x1c4200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4200u;
            // 0x1c4204: 0x7ba501e0  lq          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4200) {
            ctx->pc = 0x1C4214u;
            goto label_1c4214;
        }
    }
    ctx->pc = 0x1C4208u;
    // 0x1c4208: 0xc0723fe  jal         func_1C8FF8
    ctx->pc = 0x1C4208u;
    SET_GPR_U32(ctx, 31, 0x1C4210u);
    ctx->pc = 0x1C420Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4208u;
            // 0x1c420c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8FF8u;
    if (runtime->hasFunction(0x1C8FF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C8FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4210u; }
        if (ctx->pc != 0x1C4210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8FF8_0x1c8ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4210u; }
        if (ctx->pc != 0x1C4210u) { return; }
    }
    ctx->pc = 0x1C4210u;
    // 0x1c4210: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1c4210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
label_1c4214:
    // 0x1c4214: 0x7ba501e0  lq          $a1, 0x1E0($sp)
    ctx->pc = 0x1c4214u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1c4218: 0xc07a68e  jal         func_1E9A38
    ctx->pc = 0x1C4218u;
    SET_GPR_U32(ctx, 31, 0x1C4220u);
    ctx->pc = 0x1C421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4218u;
            // 0x1c421c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9A38u;
    if (runtime->hasFunction(0x1E9A38u)) {
        auto targetFn = runtime->lookupFunction(0x1E9A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4220u; }
        if (ctx->pc != 0x1C4220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9A38_0x1e9a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4220u; }
        if (ctx->pc != 0x1C4220u) { return; }
    }
    ctx->pc = 0x1C4220u;
    // 0x1c4220: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x1c4220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c4224: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x1c4224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c4228: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x1c4228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c422c: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x1c422cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c4230: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x1c4230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1c4234: 0xc7b80270  lwc1        $f24, 0x270($sp)
    ctx->pc = 0x1c4234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1c4238: 0xc7b70268  lwc1        $f23, 0x268($sp)
    ctx->pc = 0x1c4238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1c423c: 0xc7b60260  lwc1        $f22, 0x260($sp)
    ctx->pc = 0x1c423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c4240: 0xc7b50258  lwc1        $f21, 0x258($sp)
    ctx->pc = 0x1c4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c4244: 0xc7b40250  lwc1        $f20, 0x250($sp)
    ctx->pc = 0x1c4244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c4248: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4248u;
            // 0x1c424c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3790u: goto label_1c3790;
            case 0x1C37F8u: goto label_1c37f8;
            case 0x1C3838u: goto label_1c3838;
            case 0x1C3918u: goto label_1c3918;
            case 0x1C3A08u: goto label_1c3a08;
            case 0x1C3A48u: goto label_1c3a48;
            case 0x1C3A58u: goto label_1c3a58;
            case 0x1C3A6Cu: goto label_1c3a6c;
            case 0x1C3A70u: goto label_1c3a70;
            case 0x1C3B08u: goto label_1c3b08;
            case 0x1C3B20u: goto label_1c3b20;
            case 0x1C3B78u: goto label_1c3b78;
            case 0x1C3B94u: goto label_1c3b94;
            case 0x1C3B9Cu: goto label_1c3b9c;
            case 0x1C3C48u: goto label_1c3c48;
            case 0x1C3C60u: goto label_1c3c60;
            case 0x1C3CB0u: goto label_1c3cb0;
            case 0x1C3CF0u: goto label_1c3cf0;
            case 0x1C3D38u: goto label_1c3d38;
            case 0x1C3D60u: goto label_1c3d60;
            case 0x1C3D64u: goto label_1c3d64;
            case 0x1C3DA0u: goto label_1c3da0;
            case 0x1C3EA8u: goto label_1c3ea8;
            case 0x1C3EE8u: goto label_1c3ee8;
            case 0x1C3F38u: goto label_1c3f38;
            case 0x1C3FA8u: goto label_1c3fa8;
            case 0x1C3FBCu: goto label_1c3fbc;
            case 0x1C3FF4u: goto label_1c3ff4;
            case 0x1C3FF8u: goto label_1c3ff8;
            case 0x1C4048u: goto label_1c4048;
            case 0x1C405Cu: goto label_1c405c;
            case 0x1C4094u: goto label_1c4094;
            case 0x1C4098u: goto label_1c4098;
            case 0x1C40CCu: goto label_1c40cc;
            case 0x1C40E8u: goto label_1c40e8;
            case 0x1C411Cu: goto label_1c411c;
            case 0x1C4138u: goto label_1c4138;
            case 0x1C4148u: goto label_1c4148;
            case 0x1C416Cu: goto label_1c416c;
            case 0x1C4184u: goto label_1c4184;
            case 0x1C41F8u: goto label_1c41f8;
            case 0x1C41FCu: goto label_1c41fc;
            case 0x1C4214u: goto label_1c4214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C4250u;
}
