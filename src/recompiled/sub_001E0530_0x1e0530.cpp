#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0530
// Address: 0x1e0530 - 0x1e07b0
void sub_001E0530_0x1e0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0530_0x1e0530");
#endif

    ctx->pc = 0x1e0530u;

    // 0x1e0530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e0530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e0534: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e0534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e0538: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e0538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e053c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e053cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0540: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e0540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e0544: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e0544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0548: 0x12200093  beqz        $s1, . + 4 + (0x93 << 2)
    ctx->pc = 0x1E0548u;
    {
        const bool branch_taken_0x1e0548 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E054Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0548u;
            // 0x1e054c: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0548) {
            ctx->pc = 0x1E0798u;
            goto label_1e0798;
        }
    }
    ctx->pc = 0x1E0550u;
    // 0x1e0550: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0554: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e0554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e0558: 0x78630050  lq          $v1, 0x50($v1)
    ctx->pc = 0x1e0558u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1e055c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1e055cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1e0560: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E0560u;
    {
        const bool branch_taken_0x1e0560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0560u;
            // 0x1e0564: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0560) {
            ctx->pc = 0x1E05A8u;
            goto label_1e05a8;
        }
    }
    ctx->pc = 0x1E0568u;
    // 0x1e0568: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e056c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1e056cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1e0570: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1e0570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1e0574: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E057Cu);
        ctx->pc = 0x1E0578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0574u;
            // 0x1e0578: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E057Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E05A8u: goto label_1e05a8;
            case 0x1E05FCu: goto label_1e05fc;
            case 0x1E0640u: goto label_1e0640;
            case 0x1E0650u: goto label_1e0650;
            case 0x1E0658u: goto label_1e0658;
            case 0x1E0668u: goto label_1e0668;
            case 0x1E067Cu: goto label_1e067c;
            case 0x1E06ACu: goto label_1e06ac;
            case 0x1E06F8u: goto label_1e06f8;
            case 0x1E0740u: goto label_1e0740;
            case 0x1E0778u: goto label_1e0778;
            case 0x1E077Cu: goto label_1e077c;
            case 0x1E0798u: goto label_1e0798;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E057Cu; }
            if (ctx->pc != 0x1E057Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E057Cu;
    // 0x1e057c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1e057cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1e0580: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e0580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0584: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e0584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e0588: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e0588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e058c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e058cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e0590: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e0590u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0594: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e0594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0598: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1e0598u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e059c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e059cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e05a0: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x1e05a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e05a4: 0x0  nop
    ctx->pc = 0x1e05a4u;
    // NOP
label_1e05a8:
    // 0x1e05a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e05ac: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1e05acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1e05b0: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1e05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1e05b4: 0x40f809  jalr        $v0
    ctx->pc = 0x1E05B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E05BCu);
        ctx->pc = 0x1E05B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05B4u;
            // 0x1e05b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E05BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E05A8u: goto label_1e05a8;
            case 0x1E05FCu: goto label_1e05fc;
            case 0x1E0640u: goto label_1e0640;
            case 0x1E0650u: goto label_1e0650;
            case 0x1E0658u: goto label_1e0658;
            case 0x1E0668u: goto label_1e0668;
            case 0x1E067Cu: goto label_1e067c;
            case 0x1E06ACu: goto label_1e06ac;
            case 0x1E06F8u: goto label_1e06f8;
            case 0x1E0740u: goto label_1e0740;
            case 0x1E0778u: goto label_1e0778;
            case 0x1E077Cu: goto label_1e077c;
            case 0x1E0798u: goto label_1e0798;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E05BCu; }
            if (ctx->pc != 0x1E05BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E05BCu;
    // 0x1e05bc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e05bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e05c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e05c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e05c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e05c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05c8: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1e05c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e05cc: 0xc082894  jal         func_20A250
    ctx->pc = 0x1E05CCu;
    SET_GPR_U32(ctx, 31, 0x1E05D4u);
    ctx->pc = 0x1E05D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05CCu;
            // 0x1e05d0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A250u;
    if (runtime->hasFunction(0x20A250u)) {
        auto targetFn = runtime->lookupFunction(0x20A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05D4u; }
        if (ctx->pc != 0x1E05D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a250_0x20a2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05D4u; }
        if (ctx->pc != 0x1E05D4u) { return; }
    }
    ctx->pc = 0x1E05D4u;
    // 0x1e05d4: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1e05d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e05d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e05d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05dc: 0xc0828bc  jal         func_20A2F0
    ctx->pc = 0x1E05DCu;
    SET_GPR_U32(ctx, 31, 0x1E05E4u);
    ctx->pc = 0x1E05E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05DCu;
            // 0x1e05e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A2F0u;
    if (runtime->hasFunction(0x20A2F0u)) {
        auto targetFn = runtime->lookupFunction(0x20A2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05E4u; }
        if (ctx->pc != 0x1E05E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a2f0_0x20a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05E4u; }
        if (ctx->pc != 0x1E05E4u) { return; }
    }
    ctx->pc = 0x1E05E4u;
    // 0x1e05e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e05e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05e8: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x1e05e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1e05ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E05ECu;
    {
        const bool branch_taken_0x1e05ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05ECu;
            // 0x1e05f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05ec) {
            ctx->pc = 0x1E05FCu;
            goto label_1e05fc;
        }
    }
    ctx->pc = 0x1E05F4u;
    // 0x1e05f4: 0x4e30001  bgezl       $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E05F4u;
    {
        const bool branch_taken_0x1e05f4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1e05f4) {
            ctx->pc = 0x1E05F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05F4u;
            // 0x1e05f8: 0x28e3000b  slti        $v1, $a3, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E05FCu;
            goto label_1e05fc;
        }
    }
    ctx->pc = 0x1E05FCu;
label_1e05fc:
    // 0x1e05fc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E05FCu;
    {
        const bool branch_taken_0x1e05fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05FCu;
            // 0x1e0600: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05fc) {
            ctx->pc = 0x1E0640u;
            goto label_1e0640;
        }
    }
    ctx->pc = 0x1E0604u;
    // 0x1e0604: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e0604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0608: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x1e0608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e060c: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x1e060cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1e0610: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0614: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1e0614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1e0618: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1e0618u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e061c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e0620: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e0620u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1e0624: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x1e0624u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1e0628: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e0628u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e062c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e062cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0630: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e0630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e0634: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e0634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0638: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e0638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e063c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e063cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e0640:
    // 0x1e0640: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x1e0640u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1e0644: 0x2409fffe  addiu       $t1, $zero, -0x2
    ctx->pc = 0x1e0644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e0648: 0x2095021  addu        $t2, $s0, $t1
    ctx->pc = 0x1e0648u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1e064c: 0x0  nop
    ctx->pc = 0x1e064cu;
    // NOP
label_1e0650:
    // 0x1e0650: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1e0650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e0654: 0x0  nop
    ctx->pc = 0x1e0654u;
    // NOP
label_1e0658:
    // 0x1e0658: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0658u;
    {
        const bool branch_taken_0x1e0658 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0658u;
            // 0x1e065c: 0xe81821  addu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0658) {
            ctx->pc = 0x1E0668u;
            goto label_1e0668;
        }
    }
    ctx->pc = 0x1E0660u;
    // 0x1e0660: 0x51000046  beql        $t0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E0660u;
    {
        const bool branch_taken_0x1e0660 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0660) {
            ctx->pc = 0x1E0664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0660u;
            // 0x1e0664: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E077Cu;
            goto label_1e077c;
        }
    }
    ctx->pc = 0x1E0668u;
label_1e0668:
    // 0x1e0668: 0x2d42000b  sltiu       $v0, $t2, 0xB
    ctx->pc = 0x1e0668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1e066c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E066Cu;
    {
        const bool branch_taken_0x1e066c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E066Cu;
            // 0x1e0670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e066c) {
            ctx->pc = 0x1E067Cu;
            goto label_1e067c;
        }
    }
    ctx->pc = 0x1E0674u;
    // 0x1e0674: 0x4630001  bgezl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E0674u;
    {
        const bool branch_taken_0x1e0674 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e0674) {
            ctx->pc = 0x1E0678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0674u;
            // 0x1e0678: 0x2864000b  slti        $a0, $v1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E067Cu;
            goto label_1e067c;
        }
    }
    ctx->pc = 0x1E067Cu;
label_1e067c:
    // 0x1e067c: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E067Cu;
    {
        const bool branch_taken_0x1e067c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E067Cu;
            // 0x1e0680: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e067c) {
            ctx->pc = 0x1E0778u;
            goto label_1e0778;
        }
    }
    ctx->pc = 0x1E0684u;
    // 0x1e0684: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1e0684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1e0688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e0688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e068c: 0x1422018  mult        $a0, $t2, $v0
    ctx->pc = 0x1e068cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e0690: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x1e0690u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0694: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1e0694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e0698: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1e0698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e069c: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1e069cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e06a0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1e06a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e06a4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E06A4u;
    {
        const bool branch_taken_0x1e06a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e06a4) {
            ctx->pc = 0x1E06A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06A4u;
            // 0x1e06a8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E06ACu;
            goto label_1e06ac;
        }
    }
    ctx->pc = 0x1E06ACu;
label_1e06ac:
    // 0x1e06ac: 0xda220030  lqc2        $vf2, 0x30($s1)
    ctx->pc = 0x1e06acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1e06b0: 0x1012  mflo        $v0
    ctx->pc = 0x1e06b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1e06b4: 0x1810  mfhi        $v1
    ctx->pc = 0x1e06b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e06b8: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x1e06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x1e06bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e06bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e06c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e06c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e06c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e06c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e06c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e06c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e06cc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e06ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e06d0: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e06d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e06d4: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1e06d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e06d8: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x1e06d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1e06dc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1e06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e06e0: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x1e06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1e06e4: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e06e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e06e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e06e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e06ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e06ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e06f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E06F0u;
    {
        const bool branch_taken_0x1e06f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e06f0) {
            ctx->pc = 0x1E06F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06F0u;
            // 0x1e06f4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E06F8u;
            goto label_1e06f8;
        }
    }
    ctx->pc = 0x1E06F8u;
label_1e06f8:
    // 0x1e06f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e06f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e06fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e06fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e0700: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e0700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e0704: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e0704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e0708: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1e0708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e070c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e070cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0710: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e0710u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0714: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1e0714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0718: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e0718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e071c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e071cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0724: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e0724u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0728: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e0728u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e072c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1e072cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0730: 0x0  nop
    ctx->pc = 0x1e0730u;
    // NOP
    // 0x1e0734: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0734u;
    {
        const bool branch_taken_0x1e0734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0734) {
            ctx->pc = 0x1E0738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0734u;
            // 0x1e0738: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0740u;
            goto label_1e0740;
        }
    }
    ctx->pc = 0x1E073Cu;
    // 0x1e073c: 0x0  nop
    ctx->pc = 0x1e073cu;
    // NOP
label_1e0740:
    // 0x1e0740: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0740u;
    {
        const bool branch_taken_0x1e0740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0740u;
            // 0x1e0744: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0740) {
            ctx->pc = 0x1E0778u;
            goto label_1e0778;
        }
    }
    ctx->pc = 0x1E0748u;
    // 0x1e0748: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x1e0748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x1e074c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1e074cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1e0750: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1e0750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1e0754: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1e0754u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1e0758: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1e0758u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1e075c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0764: 0xc42004  sllv        $a0, $a0, $a2
    ctx->pc = 0x1e0764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x1e0768: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e0768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e076c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0770: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e0770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e0774: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e0774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e0778:
    // 0x1e0778: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e0778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1e077c:
    // 0x1e077c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1e077cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e0780: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1E0780u;
    {
        const bool branch_taken_0x1e0780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0780) {
            ctx->pc = 0x1E0658u;
            runtime->cooperativeGuestYield();
            goto label_1e0658;
        }
    }
    ctx->pc = 0x1E0788u;
    // 0x1e0788: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1e0788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1e078c: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x1e078cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e0790: 0x5440ffaf  bnel        $v0, $zero, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1E0790u;
    {
        const bool branch_taken_0x1e0790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0790) {
            ctx->pc = 0x1E0794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0790u;
            // 0x1e0794: 0x2095021  addu        $t2, $s0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0650u;
            runtime->cooperativeGuestYield();
            goto label_1e0650;
        }
    }
    ctx->pc = 0x1E0798u;
label_1e0798:
    // 0x1e0798: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e0798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e079c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e079cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e07a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e07a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e07a4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1e07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e07a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E07A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E07ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07A8u;
            // 0x1e07ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E05A8u: goto label_1e05a8;
            case 0x1E05FCu: goto label_1e05fc;
            case 0x1E0640u: goto label_1e0640;
            case 0x1E0650u: goto label_1e0650;
            case 0x1E0658u: goto label_1e0658;
            case 0x1E0668u: goto label_1e0668;
            case 0x1E067Cu: goto label_1e067c;
            case 0x1E06ACu: goto label_1e06ac;
            case 0x1E06F8u: goto label_1e06f8;
            case 0x1E0740u: goto label_1e0740;
            case 0x1E0778u: goto label_1e0778;
            case 0x1E077Cu: goto label_1e077c;
            case 0x1E0798u: goto label_1e0798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E07B0u;
}
