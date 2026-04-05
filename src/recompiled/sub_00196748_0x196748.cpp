#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196748
// Address: 0x196748 - 0x196998
void sub_00196748_0x196748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196748_0x196748");
#endif

    ctx->pc = 0x196748u;

    // 0x196748: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x196748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19674c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x196750: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x196750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x196754: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x196754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x196758: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19675c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19675cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x196760: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x196760u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196764: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x196764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x196768: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x196768u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19676c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x19676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x196770: 0x40f809  jalr        $v0
    ctx->pc = 0x196770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196778u);
        ctx->pc = 0x196774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196770u;
            // 0x196774: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x196778u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1967B4u: goto label_1967b4;
            case 0x1967B8u: goto label_1967b8;
            case 0x1968E0u: goto label_1968e0;
            case 0x196934u: goto label_196934;
            case 0x19697Cu: goto label_19697c;
            case 0x196980u: goto label_196980;
            case 0x196984u: goto label_196984;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x196778u; }
            if (ctx->pc != 0x196778u) { return; }
        }
        }
    }
    ctx->pc = 0x196778u;
    // 0x196778: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x196778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x19677c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x196780: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x196780u;
    {
        const bool branch_taken_0x196780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196780u;
            // 0x196784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196780) {
            ctx->pc = 0x1967B8u;
            goto label_1967b8;
        }
    }
    ctx->pc = 0x196788u;
    // 0x196788: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x196788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19678c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x196790: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x196790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x196794: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x196794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x196798: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x196798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19679c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19679cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1967a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1967a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1967a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1967a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1967a8: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1967A8u;
    {
        const bool branch_taken_0x1967a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1967ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1967A8u;
            // 0x1967ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967a8) {
            ctx->pc = 0x1967B4u;
            goto label_1967b4;
        }
    }
    ctx->pc = 0x1967B0u;
    // 0x1967b0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1967b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1967b4:
    // 0x1967b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1967b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1967b8:
    // 0x1967b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1967b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1967bc: 0x52000071  beql        $s0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x1967BCu;
    {
        const bool branch_taken_0x1967bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1967bc) {
            ctx->pc = 0x1967C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1967BCu;
            // 0x1967c0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196984u;
            goto label_196984;
        }
    }
    ctx->pc = 0x1967C4u;
    // 0x1967c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1967c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1967c8: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1967c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1967cc: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x1967ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1967d0: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1967D0u;
    SET_GPR_U32(ctx, 31, 0x1967D8u);
    ctx->pc = 0x1967D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1967D0u;
            // 0x1967d4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967D8u; }
        if (ctx->pc != 0x1967D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967D8u; }
        if (ctx->pc != 0x1967D8u) { return; }
    }
    ctx->pc = 0x1967D8u;
    // 0x1967d8: 0xc4400238  lwc1        $f0, 0x238($v0)
    ctx->pc = 0x1967d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1967dc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1967dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1967e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1967e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1967e4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1967e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1967e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1967e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1967ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1967ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1967f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1967f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1967f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1967f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1967f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1967f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1967fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1967fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x196800: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x196800u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x196804: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x196804u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x196808: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x196808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19680c: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x19680cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196810: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x196810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196814: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x196814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x196818: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19681c: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x19681cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x196820: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x196820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x196824: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x196824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x196828: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x196828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x19682c: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x19682cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x196830: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x196830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x196834: 0x40f809  jalr        $v0
    ctx->pc = 0x196834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19683Cu);
        ctx->pc = 0x196838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196834u;
            // 0x196838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19683Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1967B4u: goto label_1967b4;
            case 0x1967B8u: goto label_1967b8;
            case 0x1968E0u: goto label_1968e0;
            case 0x196934u: goto label_196934;
            case 0x19697Cu: goto label_19697c;
            case 0x196980u: goto label_196980;
            case 0x196984u: goto label_196984;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19683Cu; }
            if (ctx->pc != 0x19683Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19683Cu;
    // 0x19683c: 0x3c014166  lui         $at, 0x4166
    ctx->pc = 0x19683cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16742 << 16));
    // 0x196840: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x196840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x196844: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x196844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196848: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x196848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19684c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19684cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x196850: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x196850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x196854: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x196854u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196858: 0x4a8118c0  vaddx.y     $vf3, $vf3, $vf1x
    ctx->pc = 0x196858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19685c: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x19685cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196860: 0x4be30928  vadd.xyzw   $vf4, $vf1, $vf3
    ctx->pc = 0x196860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x196864: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x196864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196868: 0x4be120ac  vsub.xyzw   $vf2, $vf4, $vf1
    ctx->pc = 0x196868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19686c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x19686cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x196870: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x196870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196874: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x196874u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196878: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x196878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19687c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x19687cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x196880: 0x4a0003bf  vwaitq
    ctx->pc = 0x196880u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x196884: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x196884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x196888: 0x4a0002ff  vnop
    ctx->pc = 0x196888u;
    // NOP operation, no action needed for VU0
    // 0x19688c: 0x4a0002ff  vnop
    ctx->pc = 0x19688cu;
    // NOP operation, no action needed for VU0
    // 0x196890: 0x4be111fd  vabs.xyzw   $vf1, $vf2
    ctx->pc = 0x196890u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[2], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x196894: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x196894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x196898: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x196898u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19689c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x19689cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1968a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1968a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1968a4: 0xc060f5e  jal         func_183D78
    ctx->pc = 0x1968A4u;
    SET_GPR_U32(ctx, 31, 0x1968ACu);
    ctx->pc = 0x183D78u;
    if (runtime->hasFunction(0x183D78u)) {
        auto targetFn = runtime->lookupFunction(0x183D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968ACu; }
        if (ctx->pc != 0x1968ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183d78_0x183e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968ACu; }
        if (ctx->pc != 0x1968ACu) { return; }
    }
    ctx->pc = 0x1968ACu;
    // 0x1968ac: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1968acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1968b0: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x1968b0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x1968b4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1968b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1968b8: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1968b8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1968bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1968bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1968c0: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x1968c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1968c4: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1968c4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1968c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1968c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1968cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1968ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1968d0: 0x0  nop
    ctx->pc = 0x1968d0u;
    // NOP
    // 0x1968d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1968D4u;
    {
        const bool branch_taken_0x1968d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1968D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1968D4u;
            // 0x1968d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968d4) {
            ctx->pc = 0x1968E0u;
            goto label_1968e0;
        }
    }
    ctx->pc = 0x1968DCu;
    // 0x1968dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1968dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1968e0:
    // 0x1968e0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1968E0u;
    {
        const bool branch_taken_0x1968e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1968E0u;
            // 0x1968e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968e0) {
            ctx->pc = 0x196934u;
            goto label_196934;
        }
    }
    ctx->pc = 0x1968E8u;
    // 0x1968e8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1968ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1968ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1968f0: 0x8442c986  lh          $v0, -0x367A($v0)
    ctx->pc = 0x1968f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953350)));
    // 0x1968f4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1968f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1968f8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1968f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1968fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1968fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19690c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19690cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x196910: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x196910u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x196914: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x196914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x196918: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x196918u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
    // 0x19691c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x19691cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196920: 0x0  nop
    ctx->pc = 0x196920u;
    // NOP
    // 0x196924: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x196924u;
    {
        const bool branch_taken_0x196924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x196924) {
            ctx->pc = 0x196928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196924u;
            // 0x196928: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x196980u;
            goto label_196980;
        }
    }
    ctx->pc = 0x19692Cu;
    // 0x19692c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19692Cu;
    {
        const bool branch_taken_0x19692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19692Cu;
            // 0x196930: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19692c) {
            ctx->pc = 0x196984u;
            goto label_196984;
        }
    }
    ctx->pc = 0x196934u;
label_196934:
    // 0x196934: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x196934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x196938: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x196938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x19693c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19693cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x196940: 0x8442c984  lh          $v0, -0x367C($v0)
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953348)));
    // 0x196944: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x196944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x196948: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x196948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x19694c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19694cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x196958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19695c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19695cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x196960: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x196960u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x196964: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x196964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x196968: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x196968u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
    // 0x19696c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x19696cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196970: 0x0  nop
    ctx->pc = 0x196970u;
    // NOP
    // 0x196974: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x196974u;
    {
        const bool branch_taken_0x196974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x196974) {
            ctx->pc = 0x196978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196974u;
            // 0x196978: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x19697Cu;
            goto label_19697c;
        }
    }
    ctx->pc = 0x19697Cu;
label_19697c:
    // 0x19697c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19697cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_196980:
    // 0x196980: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x196980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_196984:
    // 0x196984: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x196984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x196988: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x196988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19698c: 0x3e00008  jr          $ra
    ctx->pc = 0x19698Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19698Cu;
            // 0x196990: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1967B4u: goto label_1967b4;
            case 0x1967B8u: goto label_1967b8;
            case 0x1968E0u: goto label_1968e0;
            case 0x196934u: goto label_196934;
            case 0x19697Cu: goto label_19697c;
            case 0x196980u: goto label_196980;
            case 0x196984u: goto label_196984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196994u;
    // 0x196994: 0x0  nop
    ctx->pc = 0x196994u;
    // NOP
}
