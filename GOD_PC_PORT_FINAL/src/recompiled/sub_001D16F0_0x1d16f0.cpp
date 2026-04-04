#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D16F0
// Address: 0x1d16f0 - 0x1d1d18
void sub_001D16F0_0x1d16f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D16F0_0x1d16f0");
#endif

    ctx->pc = 0x1d16f0u;

    // 0x1d16f0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1d16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1d16f4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d16f8: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x1d16f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x1d16fc: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x1d16fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x1d1700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1704: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x1d1704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x1d1708: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d1708u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d170c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x1d170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x1d1710: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x1d1710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x1d1714: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x1d1714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x1d1718: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1d1718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1d171c: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1d171cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1d1720: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1720u;
    {
        const bool branch_taken_0x1d1720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1720) {
            ctx->pc = 0x1D1724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1720u;
            // 0x1d1724: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1728u;
            goto label_1d1728;
        }
    }
    ctx->pc = 0x1D1728u;
label_1d1728:
    // 0x1d1728: 0x92230082  lbu         $v1, 0x82($s1)
    ctx->pc = 0x1d1728u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
    // 0x1d172c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1d172cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d1730: 0x1010  mfhi        $v0
    ctx->pc = 0x1d1730u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d1734: 0x5440016c  bnel        $v0, $zero, . + 4 + (0x16C << 2)
    ctx->pc = 0x1D1734u;
    {
        const bool branch_taken_0x1d1734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1734) {
            ctx->pc = 0x1D1738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1734u;
            // 0x1d1738: 0x92220082  lbu         $v0, 0x82($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1CE8u;
            goto label_1d1ce8;
        }
    }
    ctx->pc = 0x1D173Cu;
    // 0x1d173c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1740: 0xc090f70  jal         func_243DC0
    ctx->pc = 0x1D1740u;
    SET_GPR_U32(ctx, 31, 0x1D1748u);
    ctx->pc = 0x1D1744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1740u;
            // 0x1d1744: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243DC0u;
    if (runtime->hasFunction(0x243DC0u)) {
        auto targetFn = runtime->lookupFunction(0x243DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1748u; }
        if (ctx->pc != 0x1D1748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243dc0_0x243ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1748u; }
        if (ctx->pc != 0x1D1748u) { return; }
    }
    ctx->pc = 0x1D1748u;
    // 0x1d1748: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d174c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1750: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d1754: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1d1754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1758: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1d1758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d175c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d1760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1764: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1d1764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d1768: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1768u;
    {
        const bool branch_taken_0x1d1768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1768u;
            // 0x1d176c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1768) {
            ctx->pc = 0x1D1778u;
            goto label_1d1778;
        }
    }
    ctx->pc = 0x1D1770u;
    // 0x1d1770: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1770u;
    {
        const bool branch_taken_0x1d1770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1770u;
            // 0x1d1774: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1770) {
            ctx->pc = 0x1D1798u;
            goto label_1d1798;
        }
    }
    ctx->pc = 0x1D1778u;
label_1d1778:
    // 0x1d1778: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d1778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d177c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1d177cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d1780: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d1780u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d1784: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1784u;
    {
        const bool branch_taken_0x1d1784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D1788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1784u;
            // 0x1d1788: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1784) {
            ctx->pc = 0x1D1798u;
            goto label_1d1798;
        }
    }
    ctx->pc = 0x1D178Cu;
    // 0x1d178c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D178Cu;
    SET_GPR_U32(ctx, 31, 0x1D1794u);
    ctx->pc = 0x1D1790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D178Cu;
            // 0x1d1790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1794u; }
        if (ctx->pc != 0x1D1794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1794u; }
        if (ctx->pc != 0x1D1794u) { return; }
    }
    ctx->pc = 0x1D1794u;
    // 0x1d1794: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d1794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d1798:
    // 0x1d1798: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d1798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d179c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d17a0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1d17a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1d17a4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1d17a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d17a8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1d17a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1d17ac: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1d17acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1d17b0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1d17b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1d17b4: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x1d17b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d17b8: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1d17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d17bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d17c0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1d17c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1d17c4: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1d17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1d17c8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1d17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d17cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1D17CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D17D4u);
        ctx->pc = 0x1D17D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D17CCu;
            // 0x1d17d0: 0xfba20120  sqc2        $vf2, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D17D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1728u: goto label_1d1728;
            case 0x1D1778u: goto label_1d1778;
            case 0x1D1798u: goto label_1d1798;
            case 0x1D1888u: goto label_1d1888;
            case 0x1D188Cu: goto label_1d188c;
            case 0x1D1960u: goto label_1d1960;
            case 0x1D1970u: goto label_1d1970;
            case 0x1D197Cu: goto label_1d197c;
            case 0x1D19C8u: goto label_1d19c8;
            case 0x1D1A04u: goto label_1d1a04;
            case 0x1D1A68u: goto label_1d1a68;
            case 0x1D1A90u: goto label_1d1a90;
            case 0x1D1AB8u: goto label_1d1ab8;
            case 0x1D1AE8u: goto label_1d1ae8;
            case 0x1D1B20u: goto label_1d1b20;
            case 0x1D1B4Cu: goto label_1d1b4c;
            case 0x1D1B60u: goto label_1d1b60;
            case 0x1D1B94u: goto label_1d1b94;
            case 0x1D1BB0u: goto label_1d1bb0;
            case 0x1D1BC4u: goto label_1d1bc4;
            case 0x1D1C1Cu: goto label_1d1c1c;
            case 0x1D1C50u: goto label_1d1c50;
            case 0x1D1C90u: goto label_1d1c90;
            case 0x1D1CC0u: goto label_1d1cc0;
            case 0x1D1CD4u: goto label_1d1cd4;
            case 0x1D1CD8u: goto label_1d1cd8;
            case 0x1D1CE4u: goto label_1d1ce4;
            case 0x1D1CE8u: goto label_1d1ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D17D4u; }
            if (ctx->pc != 0x1D17D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D17D4u;
    // 0x1d17d4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1d17d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1d17d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d17d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d17dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d17dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d17e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d17e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d17e4: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1d17e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d17e8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1d17e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d17ec: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1d17ecu;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1d17f0: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x1d17f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d17f4: 0xdba20120  lqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1d17f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d17f8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1d17f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d17fc: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1d17fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d1800: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1d1800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d1804: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1d1804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1808: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d1808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1d180c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1d180cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d1810: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1d1810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x1d1814: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1d1814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d1818: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1d1818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d181c: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1d181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d1820: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1d1820u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1d1824: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d1824u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1d1828: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1d1828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d182c: 0x4a0002ff  vnop
    ctx->pc = 0x1d182cu;
    // NOP operation, no action needed for VU0
    // 0x1d1830: 0x4a0002ff  vnop
    ctx->pc = 0x1d1830u;
    // NOP operation, no action needed for VU0
    // 0x1d1834: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1d1834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1838: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1d1838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d183c: 0xdba20100  lqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1d183cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d1840: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1d1840u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1844: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d1844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d1848: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x1d1848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1d184c: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x1d184cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x1d1850: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D1850u;
    {
        const bool branch_taken_0x1d1850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1850u;
            // 0x1d1854: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1850) {
            ctx->pc = 0x1D188Cu;
            goto label_1d188c;
        }
    }
    ctx->pc = 0x1D1858u;
    // 0x1d1858: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d1858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d185c: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x1d185cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x1d1860: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d1860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d1864: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d1864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d1868: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d1868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d186c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d1870: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d1870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1874: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d1874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1878: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1878u;
    {
        const bool branch_taken_0x1d1878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1D187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1878u;
            // 0x1d187c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1878) {
            ctx->pc = 0x1D1888u;
            goto label_1d1888;
        }
    }
    ctx->pc = 0x1D1880u;
    // 0x1d1880: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d1880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d1884: 0x0  nop
    ctx->pc = 0x1d1884u;
    // NOP
label_1d1888:
    // 0x1d1888: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d188c:
    // 0x1d188c: 0x120000c8  beqz        $s0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x1D188Cu;
    {
        const bool branch_taken_0x1d188c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D188Cu;
            // 0x1d1890: 0x3c070033  lui         $a3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d188c) {
            ctx->pc = 0x1D1BB0u;
            goto label_1d1bb0;
        }
    }
    ctx->pc = 0x1D1894u;
    // 0x1d1894: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d1894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1898: 0x24e2f170  addiu       $v0, $a3, -0xE90
    ctx->pc = 0x1d1898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1d189c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d189cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d18a0: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1d18a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d18a4: 0x246322f8  addiu       $v1, $v1, 0x22F8
    ctx->pc = 0x1d18a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8952));
    // 0x1d18a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1d18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1d18ac: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x1d18acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d18b0: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x1d18b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x1d18b4: 0x3c0500a0  lui         $a1, 0xA0
    ctx->pc = 0x1d18b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)160 << 16));
    // 0x1d18b8: 0xace4f170  sw          $a0, -0xE90($a3)
    ctx->pc = 0x1d18b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 4));
    // 0x1d18bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d18bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d18c0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1d18c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1d18c4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1d18c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1d18c8: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1d18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1d18cc: 0xac490020  sw          $t1, 0x20($v0)
    ctx->pc = 0x1d18ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 9));
    // 0x1d18d0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d18d4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d18d8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d18dc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d18dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d18e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d18e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d18e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d18e8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1d18e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1d18ec: 0x78630050  lq          $v1, 0x50($v1)
    ctx->pc = 0x1d18ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1d18f0: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1d18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1d18f4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1d18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1d18f8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1d18f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1d18fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1D18FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1904u);
        ctx->pc = 0x1D1900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D18FCu;
            // 0x1d1900: 0x7fa30110  sq          $v1, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1904u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1728u: goto label_1d1728;
            case 0x1D1778u: goto label_1d1778;
            case 0x1D1798u: goto label_1d1798;
            case 0x1D1888u: goto label_1d1888;
            case 0x1D188Cu: goto label_1d188c;
            case 0x1D1960u: goto label_1d1960;
            case 0x1D1970u: goto label_1d1970;
            case 0x1D197Cu: goto label_1d197c;
            case 0x1D19C8u: goto label_1d19c8;
            case 0x1D1A04u: goto label_1d1a04;
            case 0x1D1A68u: goto label_1d1a68;
            case 0x1D1A90u: goto label_1d1a90;
            case 0x1D1AB8u: goto label_1d1ab8;
            case 0x1D1AE8u: goto label_1d1ae8;
            case 0x1D1B20u: goto label_1d1b20;
            case 0x1D1B4Cu: goto label_1d1b4c;
            case 0x1D1B60u: goto label_1d1b60;
            case 0x1D1B94u: goto label_1d1b94;
            case 0x1D1BB0u: goto label_1d1bb0;
            case 0x1D1BC4u: goto label_1d1bc4;
            case 0x1D1C1Cu: goto label_1d1c1c;
            case 0x1D1C50u: goto label_1d1c50;
            case 0x1D1C90u: goto label_1d1c90;
            case 0x1D1CC0u: goto label_1d1cc0;
            case 0x1D1CD4u: goto label_1d1cd4;
            case 0x1D1CD8u: goto label_1d1cd8;
            case 0x1D1CE4u: goto label_1d1ce4;
            case 0x1D1CE8u: goto label_1d1ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1904u; }
            if (ctx->pc != 0x1D1904u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1904u;
    // 0x1d1904: 0x3c014173  lui         $at, 0x4173
    ctx->pc = 0x1d1904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16755 << 16));
    // 0x1d1908: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d1908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d190c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d190cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1910: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d1910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d1914: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d1914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d1918: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1d1918u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d191c: 0xdba10100  lqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1d191cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d1920: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1d1920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1924: 0xdba20110  lqc2        $vf2, 0x110($sp)
    ctx->pc = 0x1d1924u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d1928: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d1928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d192c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d1930: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1d1930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d1934: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x1d1934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x1d1938: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1d1938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1d193c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1940: 0x30720002  andi        $s2, $v1, 0x2
    ctx->pc = 0x1d1940u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d1944: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x1d1944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1d1948: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d1948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d194c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D194Cu;
    {
        const bool branch_taken_0x1d194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D194Cu;
            // 0x1d1950: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d194c) {
            ctx->pc = 0x1D1960u;
            goto label_1d1960;
        }
    }
    ctx->pc = 0x1D1954u;
    // 0x1d1954: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1954u;
    {
        const bool branch_taken_0x1d1954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1954) {
            ctx->pc = 0x1D1970u;
            goto label_1d1970;
        }
    }
    ctx->pc = 0x1D195Cu;
    // 0x1d195c: 0x0  nop
    ctx->pc = 0x1d195cu;
    // NOP
label_1d1960:
    // 0x1d1960: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1d1960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1d1964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1968: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1968u;
    {
        const bool branch_taken_0x1d1968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1968) {
            ctx->pc = 0x1D197Cu;
            goto label_1d197c;
        }
    }
    ctx->pc = 0x1D1970u;
label_1d1970:
    // 0x1d1970: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1d1970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1d1974: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d1974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d1978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d197c:
    // 0x1d197c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d197cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d1980: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1d1980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d1984: 0xdba200f0  lqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1d1984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1988: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1d1988u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d198c: 0x4a212080  vaddx.w     $vf2, $vf4, $vf1x
    ctx->pc = 0x1d198cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d1990: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1d1990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d1994: 0x4be2186c  vsub.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x1d1994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1998: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1d1998u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d199c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d19a0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1d19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1d19a4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1d19a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1d19a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D19A8u;
    {
        const bool branch_taken_0x1d19a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D19ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19A8u;
            // 0x1d19ac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19a8) {
            ctx->pc = 0x1D19C8u;
            goto label_1d19c8;
        }
    }
    ctx->pc = 0x1D19B0u;
    // 0x1d19b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d19b4: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1d19b4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1d19b8: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1d19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1d19bc: 0xc0478fa  jal         func_11E3E8
    ctx->pc = 0x1D19BCu;
    SET_GPR_U32(ctx, 31, 0x1D19C4u);
    ctx->pc = 0x1D19C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19BCu;
            // 0x1d19c0: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3E8u;
    if (runtime->hasFunction(0x11E3E8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19C4u; }
        if (ctx->pc != 0x1D19C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e3e8_0x11e5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19C4u; }
        if (ctx->pc != 0x1D19C4u) { return; }
    }
    ctx->pc = 0x1D19C4u;
    // 0x1d19c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d19c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d19c8:
    // 0x1d19c8: 0x32a20088  andi        $v0, $s5, 0x88
    ctx->pc = 0x1d19c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)136);
    // 0x1d19cc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D19CCu;
    {
        const bool branch_taken_0x1d19cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D19D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19CCu;
            // 0x1d19d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19cc) {
            ctx->pc = 0x1D1AB8u;
            goto label_1d1ab8;
        }
    }
    ctx->pc = 0x1D19D4u;
    // 0x1d19d4: 0xc074504  jal         func_1D1410
    ctx->pc = 0x1D19D4u;
    SET_GPR_U32(ctx, 31, 0x1D19DCu);
    ctx->pc = 0x1D19D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19D4u;
            // 0x1d19d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1410u;
    if (runtime->hasFunction(0x1D1410u)) {
        auto targetFn = runtime->lookupFunction(0x1D1410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19DCu; }
        if (ctx->pc != 0x1D19DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d1410_0x1d1500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D19DCu; }
        if (ctx->pc != 0x1D19DCu) { return; }
    }
    ctx->pc = 0x1D19DCu;
    // 0x1d19dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D19DCu;
    {
        const bool branch_taken_0x1d19dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d19dc) {
            ctx->pc = 0x1D19E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19DCu;
            // 0x1d19e0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1A04u;
            goto label_1d1a04;
        }
    }
    ctx->pc = 0x1D19E4u;
    // 0x1d19e4: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D19E4u;
    {
        const bool branch_taken_0x1d19e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d19e4) {
            ctx->pc = 0x1D19E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D19E4u;
            // 0x1d19e8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1A04u;
            goto label_1d1a04;
        }
    }
    ctx->pc = 0x1D19ECu;
    // 0x1d19ec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d19f0: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1D19F0u;
    {
        const bool branch_taken_0x1d19f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d19f0) {
            ctx->pc = 0x1D1B60u;
            goto label_1d1b60;
        }
    }
    ctx->pc = 0x1D19F8u;
    // 0x1d19f8: 0x16400059  bnez        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x1D19F8u;
    {
        const bool branch_taken_0x1d19f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d19f8) {
            ctx->pc = 0x1D1B60u;
            goto label_1d1b60;
        }
    }
    ctx->pc = 0x1D1A00u;
    // 0x1d1a00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1a04:
    // 0x1d1a04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d1a08: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d1a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d1a0c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d1a10: 0x40f809  jalr        $v0
    ctx->pc = 0x1D1A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1A18u);
        ctx->pc = 0x1D1A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A10u;
            // 0x1d1a14: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1A18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1728u: goto label_1d1728;
            case 0x1D1778u: goto label_1d1778;
            case 0x1D1798u: goto label_1d1798;
            case 0x1D1888u: goto label_1d1888;
            case 0x1D188Cu: goto label_1d188c;
            case 0x1D1960u: goto label_1d1960;
            case 0x1D1970u: goto label_1d1970;
            case 0x1D197Cu: goto label_1d197c;
            case 0x1D19C8u: goto label_1d19c8;
            case 0x1D1A04u: goto label_1d1a04;
            case 0x1D1A68u: goto label_1d1a68;
            case 0x1D1A90u: goto label_1d1a90;
            case 0x1D1AB8u: goto label_1d1ab8;
            case 0x1D1AE8u: goto label_1d1ae8;
            case 0x1D1B20u: goto label_1d1b20;
            case 0x1D1B4Cu: goto label_1d1b4c;
            case 0x1D1B60u: goto label_1d1b60;
            case 0x1D1B94u: goto label_1d1b94;
            case 0x1D1BB0u: goto label_1d1bb0;
            case 0x1D1BC4u: goto label_1d1bc4;
            case 0x1D1C1Cu: goto label_1d1c1c;
            case 0x1D1C50u: goto label_1d1c50;
            case 0x1D1C90u: goto label_1d1c90;
            case 0x1D1CC0u: goto label_1d1cc0;
            case 0x1D1CD4u: goto label_1d1cd4;
            case 0x1D1CD8u: goto label_1d1cd8;
            case 0x1D1CE4u: goto label_1d1ce4;
            case 0x1D1CE8u: goto label_1d1ce8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A18u; }
            if (ctx->pc != 0x1D1A18u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1A18u;
    // 0x1d1a18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d1a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a1c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1d1a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1d1a20: 0x240203eb  addiu       $v0, $zero, 0x3EB
    ctx->pc = 0x1d1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    // 0x1d1a24: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1d1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1d1a28: 0xa7a20090  sh          $v0, 0x90($sp)
    ctx->pc = 0x1d1a28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d1a2c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1d1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1d1a30: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1d1a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1d1a34: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d1a38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1a3c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1d1a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d1a40: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d1a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d1a44: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D1A44u;
    SET_GPR_U32(ctx, 31, 0x1D1A4Cu);
    ctx->pc = 0x1D1A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A44u;
            // 0x1d1a48: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A4Cu; }
        if (ctx->pc != 0x1D1A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A4Cu; }
        if (ctx->pc != 0x1D1A4Cu) { return; }
    }
    ctx->pc = 0x1D1A4Cu;
    // 0x1d1a4c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1d1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d1a50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1A50u;
    {
        const bool branch_taken_0x1d1a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A50u;
            // 0x1d1a54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a50) {
            ctx->pc = 0x1D1A68u;
            goto label_1d1a68;
        }
    }
    ctx->pc = 0x1D1A58u;
    // 0x1d1a58: 0xc090d56  jal         func_243558
    ctx->pc = 0x1D1A58u;
    SET_GPR_U32(ctx, 31, 0x1D1A60u);
    ctx->pc = 0x1D1A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A58u;
            // 0x1d1a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A60u; }
        if (ctx->pc != 0x1D1A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A60u; }
        if (ctx->pc != 0x1D1A60u) { return; }
    }
    ctx->pc = 0x1D1A60u;
    // 0x1d1a60: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1d1a60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1d1a64: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1d1a64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d1a68:
    // 0x1d1a68: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D1A68u;
    {
        const bool branch_taken_0x1d1a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a68) {
            ctx->pc = 0x1D1B60u;
            goto label_1d1b60;
        }
    }
    ctx->pc = 0x1D1A70u;
    // 0x1d1a70: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1d1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d1a74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1A74u;
    {
        const bool branch_taken_0x1d1a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A74u;
            // 0x1d1a78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a74) {
            ctx->pc = 0x1D1A90u;
            goto label_1d1a90;
        }
    }
    ctx->pc = 0x1D1A7Cu;
    // 0x1d1a7c: 0xc090d56  jal         func_243558
    ctx->pc = 0x1D1A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D1A84u);
    ctx->pc = 0x1D1A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A7Cu;
            // 0x1d1a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A84u; }
        if (ctx->pc != 0x1D1A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1A84u; }
        if (ctx->pc != 0x1D1A84u) { return; }
    }
    ctx->pc = 0x1D1A84u;
    // 0x1d1a84: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1d1a84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1d1a88: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1d1a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1d1a8c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d1a8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d1a90:
    // 0x1d1a90: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D1A90u;
    {
        const bool branch_taken_0x1d1a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1A90u;
            // 0x1d1a94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a90) {
            ctx->pc = 0x1D1B60u;
            goto label_1d1b60;
        }
    }
    ctx->pc = 0x1D1A98u;
    // 0x1d1a98: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d1a9c: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d1a9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d1aa0: 0x1043002f  beq         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D1AA0u;
    {
        const bool branch_taken_0x1d1aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1aa0) {
            ctx->pc = 0x1D1B60u;
            goto label_1d1b60;
        }
    }
    ctx->pc = 0x1D1AA8u;
    // 0x1d1aa8: 0xc072ecc  jal         func_1CBB30
    ctx->pc = 0x1D1AA8u;
    SET_GPR_U32(ctx, 31, 0x1D1AB0u);
    ctx->pc = 0x1D1AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AA8u;
            // 0x1d1aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB30u;
    if (runtime->hasFunction(0x1CBB30u)) {
        auto targetFn = runtime->lookupFunction(0x1CBB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AB0u; }
        if (ctx->pc != 0x1D1AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBB30_0x1cbb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AB0u; }
        if (ctx->pc != 0x1D1AB0u) { return; }
    }
    ctx->pc = 0x1D1AB0u;
    // 0x1d1ab0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D1AB0u;
    {
        const bool branch_taken_0x1d1ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ab0) {
            ctx->pc = 0x1D1B60u;
            goto label_1d1b60;
        }
    }
    ctx->pc = 0x1D1AB8u;
label_1d1ab8:
    // 0x1d1ab8: 0x16600042  bnez        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x1D1AB8u;
    {
        const bool branch_taken_0x1d1ab8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ab8) {
            ctx->pc = 0x1D1BC4u;
            goto label_1d1bc4;
        }
    }
    ctx->pc = 0x1D1AC0u;
    // 0x1d1ac0: 0xc074504  jal         func_1D1410
    ctx->pc = 0x1D1AC0u;
    SET_GPR_U32(ctx, 31, 0x1D1AC8u);
    ctx->pc = 0x1D1AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AC0u;
            // 0x1d1ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1410u;
    if (runtime->hasFunction(0x1D1410u)) {
        auto targetFn = runtime->lookupFunction(0x1D1410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AC8u; }
        if (ctx->pc != 0x1D1AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d1410_0x1d1500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1AC8u; }
        if (ctx->pc != 0x1D1AC8u) { return; }
    }
    ctx->pc = 0x1D1AC8u;
    // 0x1d1ac8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D1AC8u;
    {
        const bool branch_taken_0x1d1ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ac8) {
            ctx->pc = 0x1D1B60u;
            goto label_1d1b60;
        }
    }
    ctx->pc = 0x1D1AD0u;
    // 0x1d1ad0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1AD0u;
    {
        const bool branch_taken_0x1d1ad0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1AD0u;
            // 0x1d1ad4: 0x240203ea  addiu       $v0, $zero, 0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ad0) {
            ctx->pc = 0x1D1AE8u;
            goto label_1d1ae8;
        }
    }
    ctx->pc = 0x1D1AD8u;
    // 0x1d1ad8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d1adc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1ADCu;
    {
        const bool branch_taken_0x1d1adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1adc) {
            ctx->pc = 0x1D1AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1ADCu;
            // 0x1d1ae0: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B20u;
            goto label_1d1b20;
        }
    }
    ctx->pc = 0x1D1AE4u;
    // 0x1d1ae4: 0x240203ea  addiu       $v0, $zero, 0x3EA
    ctx->pc = 0x1d1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
label_1d1ae8:
    // 0x1d1ae8: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x1d1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x1d1aec: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x1d1aecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d1af0: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x1d1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x1d1af4: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1d1af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x1d1af8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1d1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1d1afc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d1b00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1b04: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1d1b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d1b08: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d1b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d1b0c: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D1B0Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B14u);
    ctx->pc = 0x1D1B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B0Cu;
            // 0x1d1b10: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B14u; }
        if (ctx->pc != 0x1D1B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B14u; }
        if (ctx->pc != 0x1D1B14u) { return; }
    }
    ctx->pc = 0x1D1B14u;
    // 0x1d1b14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D1B14u;
    {
        const bool branch_taken_0x1d1b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b14) {
            ctx->pc = 0x1D1B60u;
            goto label_1d1b60;
        }
    }
    ctx->pc = 0x1D1B1Cu;
    // 0x1d1b1c: 0x0  nop
    ctx->pc = 0x1d1b1cu;
    // NOP
label_1d1b20:
    // 0x1d1b20: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d1b24: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d1b28: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1d1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1d1b2c: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x1d1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1d1b30: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1d1b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d1b34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d1b38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d1b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1b3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1b40: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1B40u;
    {
        const bool branch_taken_0x1d1b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D1B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B40u;
            // 0x1d1b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b40) {
            ctx->pc = 0x1D1B4Cu;
            goto label_1d1b4c;
        }
    }
    ctx->pc = 0x1D1B48u;
    // 0x1d1b48: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1d1b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d1b4c:
    // 0x1d1b4c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1B4Cu;
    {
        const bool branch_taken_0x1d1b4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b4c) {
            ctx->pc = 0x1D1B60u;
            goto label_1d1b60;
        }
    }
    ctx->pc = 0x1D1B54u;
    // 0x1d1b54: 0x78c50050  lq          $a1, 0x50($a2)
    ctx->pc = 0x1d1b54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x1d1b58: 0xc074c8a  jal         func_1D3228
    ctx->pc = 0x1D1B58u;
    SET_GPR_U32(ctx, 31, 0x1D1B60u);
    ctx->pc = 0x1D1B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B58u;
            // 0x1d1b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3228u;
    if (runtime->hasFunction(0x1D3228u)) {
        auto targetFn = runtime->lookupFunction(0x1D3228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B60u; }
        if (ctx->pc != 0x1D1B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3228_0x1d3228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B60u; }
        if (ctx->pc != 0x1D1B60u) { return; }
    }
    ctx->pc = 0x1D1B60u;
label_1d1b60:
    // 0x1d1b60: 0x16600018  bnez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D1B60u;
    {
        const bool branch_taken_0x1d1b60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B60u;
            // 0x1d1b64: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b60) {
            ctx->pc = 0x1D1BC4u;
            goto label_1d1bc4;
        }
    }
    ctx->pc = 0x1D1B68u;
    // 0x1d1b68: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1d1b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1d1b6c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d1b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d1b70: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1d1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1d1b74: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x1d1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1d1b78: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1d1b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d1b7c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d1b80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1b84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1b88: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1B88u;
    {
        const bool branch_taken_0x1d1b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D1B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B88u;
            // 0x1d1b8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b88) {
            ctx->pc = 0x1D1B94u;
            goto label_1d1b94;
        }
    }
    ctx->pc = 0x1D1B90u;
    // 0x1d1b90: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1d1b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d1b94:
    // 0x1d1b94: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1B94u;
    {
        const bool branch_taken_0x1d1b94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b94) {
            ctx->pc = 0x1D1BC4u;
            goto label_1d1bc4;
        }
    }
    ctx->pc = 0x1D1B9Cu;
    // 0x1d1b9c: 0x78c50050  lq          $a1, 0x50($a2)
    ctx->pc = 0x1d1b9cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x1d1ba0: 0xc074c8a  jal         func_1D3228
    ctx->pc = 0x1D1BA0u;
    SET_GPR_U32(ctx, 31, 0x1D1BA8u);
    ctx->pc = 0x1D1BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BA0u;
            // 0x1d1ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3228u;
    if (runtime->hasFunction(0x1D3228u)) {
        auto targetFn = runtime->lookupFunction(0x1D3228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BA8u; }
        if (ctx->pc != 0x1D1BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3228_0x1d3228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BA8u; }
        if (ctx->pc != 0x1D1BA8u) { return; }
    }
    ctx->pc = 0x1D1BA8u;
    // 0x1d1ba8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1BA8u;
    {
        const bool branch_taken_0x1d1ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ba8) {
            ctx->pc = 0x1D1BC4u;
            goto label_1d1bc4;
        }
    }
    ctx->pc = 0x1D1BB0u;
label_1d1bb0:
    // 0x1d1bb0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d1bb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d1bb8: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d1bb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d1bbc: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1BBCu;
    {
        const bool branch_taken_0x1d1bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d1bbc) {
            ctx->pc = 0x1D1BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BBCu;
            // 0x1d1bc0: 0x8e340038  lw          $s4, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1BC4u;
            goto label_1d1bc4;
        }
    }
    ctx->pc = 0x1D1BC4u;
label_1d1bc4:
    // 0x1d1bc4: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D1BC4u;
    {
        const bool branch_taken_0x1d1bc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BC4u;
            // 0x1d1bc8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc4) {
            ctx->pc = 0x1D1C1Cu;
            goto label_1d1c1c;
        }
    }
    ctx->pc = 0x1D1BCCu;
    // 0x1d1bcc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d1bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1bd0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1d1bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1d1bd4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d1bd8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1d1bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1bdc: 0x24632340  addiu       $v1, $v1, 0x2340
    ctx->pc = 0x1d1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9024));
    // 0x1d1be0: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1d1be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1d1be4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d1be4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d1be8: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1d1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1d1bec: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x1d1becu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d1bf0: 0xacd4f170  sw          $s4, -0xE90($a2)
    ctx->pc = 0x1d1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 20));
    // 0x1d1bf4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1d1bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1d1bf8: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1d1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1d1bfc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d1bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d1c00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d1c04: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d1c08: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d1c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d1c0c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d1c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d1c10: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d1c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d1c14: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x1D1C14u;
    SET_GPR_U32(ctx, 31, 0x1D1C1Cu);
    ctx->pc = 0x1D1C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C14u;
            // 0x1d1c18: 0xac5d0020  sw          $sp, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C1Cu; }
        if (ctx->pc != 0x1D1C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C1Cu; }
        if (ctx->pc != 0x1D1C1Cu) { return; }
    }
    ctx->pc = 0x1D1C1Cu;
label_1d1c1c:
    // 0x1d1c1c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d1c20: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1d1c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1d1c24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d1c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1c28: 0xc44c0050  lwc1        $f12, 0x50($v0)
    ctx->pc = 0x1d1c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d1c2c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1d1c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1d1c30: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1d1c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1d1c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1c38: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1d1c38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1d1c3c: 0xc060e52  jal         func_183948
    ctx->pc = 0x1D1C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D1C44u);
    ctx->pc = 0x1D1C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C3Cu;
            // 0x1d1c40: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C44u; }
        if (ctx->pc != 0x1D1C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C44u; }
        if (ctx->pc != 0x1D1C44u) { return; }
    }
    ctx->pc = 0x1D1C44u;
    // 0x1d1c44: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d1c48: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D1C48u;
    {
        const bool branch_taken_0x1d1c48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D1C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C48u;
            // 0x1d1c4c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c48) {
            ctx->pc = 0x1D1CE4u;
            goto label_1d1ce4;
        }
    }
    ctx->pc = 0x1D1C50u;
label_1d1c50:
    // 0x1d1c50: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d1c54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d1c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d1c58: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d1c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d1c5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d1c60: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x1d1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1d1c64: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1d1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1d1c68: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x1d1c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d1c6c: 0x1015c2  srl         $v0, $s0, 23
    ctx->pc = 0x1d1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 23));
    // 0x1d1c70: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1d1c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d1c74: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d1c78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1c7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1c80: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1C80u;
    {
        const bool branch_taken_0x1d1c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D1C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C80u;
            // 0x1d1c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c80) {
            ctx->pc = 0x1D1C90u;
            goto label_1d1c90;
        }
    }
    ctx->pc = 0x1D1C88u;
    // 0x1d1c88: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1d1c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d1c8c: 0x0  nop
    ctx->pc = 0x1d1c8cu;
    // NOP
label_1d1c90:
    // 0x1d1c90: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1C90u;
    {
        const bool branch_taken_0x1d1c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C90u;
            // 0x1d1c94: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c90) {
            ctx->pc = 0x1D1CD4u;
            goto label_1d1cd4;
        }
    }
    ctx->pc = 0x1D1C98u;
    // 0x1d1c98: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d1c9c: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d1c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d1ca0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1CA0u;
    {
        const bool branch_taken_0x1d1ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d1ca0) {
            ctx->pc = 0x1D1CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CA0u;
            // 0x1d1ca4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1CC0u;
            goto label_1d1cc0;
        }
    }
    ctx->pc = 0x1D1CA8u;
    // 0x1d1ca8: 0xc069b18  jal         func_1A6C60
    ctx->pc = 0x1D1CA8u;
    SET_GPR_U32(ctx, 31, 0x1D1CB0u);
    ctx->pc = 0x1D1CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CA8u;
            // 0x1d1cac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C60u;
    if (runtime->hasFunction(0x1A6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1A6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CB0u; }
        if (ctx->pc != 0x1D1CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6C60_0x1a6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CB0u; }
        if (ctx->pc != 0x1D1CB0u) { return; }
    }
    ctx->pc = 0x1D1CB0u;
    // 0x1d1cb0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1d1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d1cb4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1CB4u;
    {
        const bool branch_taken_0x1d1cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D1CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CB4u;
            // 0x1d1cb8: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cb4) {
            ctx->pc = 0x1D1CD8u;
            goto label_1d1cd8;
        }
    }
    ctx->pc = 0x1D1CBCu;
    // 0x1d1cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1cc0:
    // 0x1d1cc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d1cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1cc4: 0xc07442a  jal         func_1D10A8
    ctx->pc = 0x1D1CC4u;
    SET_GPR_U32(ctx, 31, 0x1D1CCCu);
    ctx->pc = 0x1D1CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CC4u;
            // 0x1d1cc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D10A8u;
    if (runtime->hasFunction(0x1D10A8u)) {
        auto targetFn = runtime->lookupFunction(0x1D10A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CCCu; }
        if (ctx->pc != 0x1D1CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d10a8_0x1d1410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1CCCu; }
        if (ctx->pc != 0x1D1CCCu) { return; }
    }
    ctx->pc = 0x1D1CCCu;
    // 0x1d1ccc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1CCCu;
    {
        const bool branch_taken_0x1d1ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ccc) {
            ctx->pc = 0x1D1CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CCCu;
            // 0x1d1cd0: 0x92220082  lbu         $v0, 0x82($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1CE8u;
            goto label_1d1ce8;
        }
    }
    ctx->pc = 0x1D1CD4u;
label_1d1cd4:
    // 0x1d1cd4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1d1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1d1cd8:
    // 0x1d1cd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1cdc: 0x441ffdc  bgez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1D1CDCu;
    {
        const bool branch_taken_0x1d1cdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D1CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CDCu;
            // 0x1d1ce0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cdc) {
            ctx->pc = 0x1D1C50u;
            runtime->cooperativeGuestYield();
            goto label_1d1c50;
        }
    }
    ctx->pc = 0x1D1CE4u;
label_1d1ce4:
    // 0x1d1ce4: 0x92220082  lbu         $v0, 0x82($s1)
    ctx->pc = 0x1d1ce4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 130)));
label_1d1ce8:
    // 0x1d1ce8: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x1d1ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1d1cec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1cf0: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x1d1cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d1cf4: 0xa2220082  sb          $v0, 0x82($s1)
    ctx->pc = 0x1d1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1cf8: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x1d1cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d1cfc: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x1d1cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d1d00: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x1d1d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d1d04: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x1d1d04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d1d08: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1d1d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d1d0c: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1d1d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d1d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D10u;
            // 0x1d1d14: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1728u: goto label_1d1728;
            case 0x1D1778u: goto label_1d1778;
            case 0x1D1798u: goto label_1d1798;
            case 0x1D1888u: goto label_1d1888;
            case 0x1D188Cu: goto label_1d188c;
            case 0x1D1960u: goto label_1d1960;
            case 0x1D1970u: goto label_1d1970;
            case 0x1D197Cu: goto label_1d197c;
            case 0x1D19C8u: goto label_1d19c8;
            case 0x1D1A04u: goto label_1d1a04;
            case 0x1D1A68u: goto label_1d1a68;
            case 0x1D1A90u: goto label_1d1a90;
            case 0x1D1AB8u: goto label_1d1ab8;
            case 0x1D1AE8u: goto label_1d1ae8;
            case 0x1D1B20u: goto label_1d1b20;
            case 0x1D1B4Cu: goto label_1d1b4c;
            case 0x1D1B60u: goto label_1d1b60;
            case 0x1D1B94u: goto label_1d1b94;
            case 0x1D1BB0u: goto label_1d1bb0;
            case 0x1D1BC4u: goto label_1d1bc4;
            case 0x1D1C1Cu: goto label_1d1c1c;
            case 0x1D1C50u: goto label_1d1c50;
            case 0x1D1C90u: goto label_1d1c90;
            case 0x1D1CC0u: goto label_1d1cc0;
            case 0x1D1CD4u: goto label_1d1cd4;
            case 0x1D1CD8u: goto label_1d1cd8;
            case 0x1D1CE4u: goto label_1d1ce4;
            case 0x1D1CE8u: goto label_1d1ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D1D18u;
}
