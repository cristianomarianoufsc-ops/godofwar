#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA748
// Address: 0x1ca748 - 0x1ca8f8
void sub_001CA748_0x1ca748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA748_0x1ca748");
#endif

    ctx->pc = 0x1ca748u;

    // 0x1ca748: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ca748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ca74c: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1ca74cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1ca750: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ca750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ca754: 0x3c070802  lui         $a3, 0x802
    ctx->pc = 0x1ca754u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2050 << 16));
    // 0x1ca758: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ca758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ca75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca760: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ca760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ca764: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1ca764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ca768: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ca768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca76c: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1ca76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1ca770: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1ca770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1ca774: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1ca774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1ca778: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ca778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca77c: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x1ca77cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ca780: 0xc0789b8  jal         func_1E26E0
    ctx->pc = 0x1CA780u;
    SET_GPR_U32(ctx, 31, 0x1CA788u);
    ctx->pc = 0x1CA784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA780u;
            // 0x1ca784: 0xfba30030  sqc2        $vf3, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E26E0u;
    if (runtime->hasFunction(0x1E26E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA788u; }
        if (ctx->pc != 0x1CA788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E26E0_0x1e26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA788u; }
        if (ctx->pc != 0x1CA788u) { return; }
    }
    ctx->pc = 0x1CA788u;
    // 0x1ca788: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1CA788u;
    {
        const bool branch_taken_0x1ca788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA788u;
            // 0x1ca78c: 0xdba30030  lqc2        $vf3, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca788) {
            ctx->pc = 0x1CA8BCu;
            goto label_1ca8bc;
        }
    }
    ctx->pc = 0x1CA790u;
    // 0x1ca790: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1CA790u;
    {
        const bool branch_taken_0x1ca790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA790u;
            // 0x1ca794: 0xdba20000  lqc2        $vf2, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca790) {
            ctx->pc = 0x1CA87Cu;
            goto label_1ca87c;
        }
    }
    ctx->pc = 0x1CA798u;
label_1ca798:
    // 0x1ca798: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1ca798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1ca79c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1ca79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1ca7a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ca7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ca7a4: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1CA7A4u;
    {
        const bool branch_taken_0x1ca7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7A4u;
            // 0x1ca7a8: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7a4) {
            ctx->pc = 0x1CA8BCu;
            goto label_1ca8bc;
        }
    }
    ctx->pc = 0x1CA7ACu;
    // 0x1ca7ac: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1ca7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1ca7b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ca7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ca7b4: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x1ca7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x1ca7b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ca7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ca7bc: 0x8c845e6c  lw          $a0, 0x5E6C($a0)
    ctx->pc = 0x1ca7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24172)));
    // 0x1ca7c0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1ca7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1ca7c4: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x1ca7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1ca7c8: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1ca7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x1ca7cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ca7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ca7d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ca7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca7d4: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x1ca7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1ca7d8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CA7D8u;
    {
        const bool branch_taken_0x1ca7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7D8u;
            // 0x1ca7dc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7d8) {
            ctx->pc = 0x1CA80Cu;
            goto label_1ca80c;
        }
    }
    ctx->pc = 0x1CA7E0u;
    // 0x1ca7e0: 0x7a020210  lq          $v0, 0x210($s0)
    ctx->pc = 0x1ca7e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1ca7e4: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1ca7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x1ca7e8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ca7e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1ca7ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca7f0: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1ca7f0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ca7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca7f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ca7f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca7fc: 0x0  nop
    ctx->pc = 0x1ca7fcu;
    // NOP
    // 0x1ca800: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CA800u;
    {
        const bool branch_taken_0x1ca800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca800) {
            ctx->pc = 0x1CA804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA800u;
            // 0x1ca804: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA808u;
            goto label_1ca808;
        }
    }
    ctx->pc = 0x1CA808u;
label_1ca808:
    // 0x1ca808: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ca808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1ca80c:
    // 0x1ca80c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1ca80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca810: 0xc4405ed8  lwc1        $f0, 0x5ED8($v0)
    ctx->pc = 0x1ca810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca814: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ca814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca818: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1CA818u;
    {
        const bool branch_taken_0x1ca818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca818) {
            ctx->pc = 0x1CA86Cu;
            goto label_1ca86c;
        }
    }
    ctx->pc = 0x1CA820u;
    // 0x1ca820: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA820u;
    {
        const bool branch_taken_0x1ca820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA820u;
            // 0x1ca824: 0xdba20020  lqc2        $vf2, 0x20($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca820) {
            ctx->pc = 0x1CA86Cu;
            goto label_1ca86c;
        }
    }
    ctx->pc = 0x1CA828u;
    // 0x1ca828: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1ca828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1ca82c: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1ca82cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca830: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1ca830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1ca834: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1ca834u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ca838: 0x4a420042  vaddz.z     $vf1, $vf0, $vf2z
    ctx->pc = 0x1ca838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ca83c: 0x3042004c  andi        $v0, $v0, 0x4C
    ctx->pc = 0x1ca83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)76);
    // 0x1ca840: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA840u;
    {
        const bool branch_taken_0x1ca840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA840u;
            // 0x1ca844: 0xfa0100e0  sqc2        $vf1, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca840) {
            ctx->pc = 0x1CA85Cu;
            goto label_1ca85c;
        }
    }
    ctx->pc = 0x1CA848u;
    // 0x1ca848: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1ca848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1ca84c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ca84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca850: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x1ca850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca854: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1ca854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x1ca858: 0xe60002b4  swc1        $f0, 0x2B4($s0)
    ctx->pc = 0x1ca858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
label_1ca85c:
    // 0x1ca85c: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1CA85Cu;
    SET_GPR_U32(ctx, 31, 0x1CA864u);
    ctx->pc = 0x1CA860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA85Cu;
            // 0x1ca860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA864u; }
        if (ctx->pc != 0x1CA864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA864u; }
        if (ctx->pc != 0x1CA864u) { return; }
    }
    ctx->pc = 0x1CA864u;
    // 0x1ca864: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1CA864u;
    {
        const bool branch_taken_0x1ca864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA864u;
            // 0x1ca868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca864) {
            ctx->pc = 0x1CA8C0u;
            goto label_1ca8c0;
        }
    }
    ctx->pc = 0x1CA86Cu;
label_1ca86c:
    // 0x1ca86c: 0xc07a2f6  jal         func_1E8BD8
    ctx->pc = 0x1CA86Cu;
    SET_GPR_U32(ctx, 31, 0x1CA874u);
    ctx->pc = 0x1CA870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA86Cu;
            // 0x1ca870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8BD8u;
    if (runtime->hasFunction(0x1E8BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1E8BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA874u; }
        if (ctx->pc != 0x1CA874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8BD8_0x1e8bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA874u; }
        if (ctx->pc != 0x1CA874u) { return; }
    }
    ctx->pc = 0x1CA874u;
    // 0x1ca874: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA874u;
    {
        const bool branch_taken_0x1ca874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA874u;
            // 0x1ca878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca874) {
            ctx->pc = 0x1CA8C0u;
            goto label_1ca8c0;
        }
    }
    ctx->pc = 0x1CA87Cu;
label_1ca87c:
    // 0x1ca87c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1ca87cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ca880: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1ca880u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ca884: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca888: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1ca888u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ca88c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1ca88cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ca890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca894: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ca894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca898: 0x0  nop
    ctx->pc = 0x1ca898u;
    // NOP
    // 0x1ca89c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA89Cu;
    {
        const bool branch_taken_0x1ca89c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA89Cu;
            // 0x1ca8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca89c) {
            ctx->pc = 0x1CA8A8u;
            goto label_1ca8a8;
        }
    }
    ctx->pc = 0x1CA8A4u;
    // 0x1ca8a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8a8:
    // 0x1ca8a8: 0x1040ffbb  beqz        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1CA8A8u;
    {
        const bool branch_taken_0x1ca8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8A8u;
            // 0x1ca8ac: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8a8) {
            ctx->pc = 0x1CA798u;
            runtime->cooperativeGuestYield();
            goto label_1ca798;
        }
    }
    ctx->pc = 0x1CA8B0u;
    // 0x1ca8b0: 0x4a830081  vaddy.y     $vf2, $vf0, $vf3y
    ctx->pc = 0x1ca8b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ca8b4: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x1ca8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x1ca8b8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ca8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1ca8bc:
    // 0x1ca8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8c0:
    // 0x1ca8c0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ca8c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8c4: 0x78860110  lq          $a2, 0x110($a0)
    ctx->pc = 0x1ca8c4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x1ca8c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ca8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8cc: 0xc078abe  jal         func_1E2AF8
    ctx->pc = 0x1CA8CCu;
    SET_GPR_U32(ctx, 31, 0x1CA8D4u);
    ctx->pc = 0x1CA8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8CCu;
            // 0x1ca8d0: 0x3c070802  lui         $a3, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2050 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2AF8u;
    if (runtime->hasFunction(0x1E2AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA8D4u; }
        if (ctx->pc != 0x1CA8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2AF8_0x1e2af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA8D4u; }
        if (ctx->pc != 0x1CA8D4u) { return; }
    }
    ctx->pc = 0x1CA8D4u;
    // 0x1ca8d4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1ca8d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca8d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ca8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ca8dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ca8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca8e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ca8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8E4u;
            // 0x1ca8e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA798u: goto label_1ca798;
            case 0x1CA808u: goto label_1ca808;
            case 0x1CA80Cu: goto label_1ca80c;
            case 0x1CA85Cu: goto label_1ca85c;
            case 0x1CA86Cu: goto label_1ca86c;
            case 0x1CA87Cu: goto label_1ca87c;
            case 0x1CA8A8u: goto label_1ca8a8;
            case 0x1CA8BCu: goto label_1ca8bc;
            case 0x1CA8C0u: goto label_1ca8c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA8ECu;
    // 0x1ca8ec: 0x0  nop
    ctx->pc = 0x1ca8ecu;
    // NOP
    // 0x1ca8f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ca8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca8f4: 0x0  nop
    ctx->pc = 0x1ca8f4u;
    // NOP
}
