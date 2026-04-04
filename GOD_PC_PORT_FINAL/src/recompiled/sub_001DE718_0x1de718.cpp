#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE718
// Address: 0x1de718 - 0x1de850
void sub_001DE718_0x1de718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE718_0x1de718");
#endif

    ctx->pc = 0x1de718u;

    // 0x1de718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de71c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de720: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de72c: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1de72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1de730: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DE730u;
    {
        const bool branch_taken_0x1de730 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE730u;
            // 0x1de734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de730) {
            ctx->pc = 0x1DE764u;
            goto label_1de764;
        }
    }
    ctx->pc = 0x1DE738u;
    // 0x1de738: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x1de738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1de73c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE73Cu;
    {
        const bool branch_taken_0x1de73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de73c) {
            ctx->pc = 0x1DE740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE73Cu;
            // 0x1de740: 0x8e2401a4  lw          $a0, 0x1A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE750u;
            goto label_1de750;
        }
    }
    ctx->pc = 0x1DE744u;
    // 0x1de744: 0xc05c332  jal         func_170CC8
    ctx->pc = 0x1DE744u;
    SET_GPR_U32(ctx, 31, 0x1DE74Cu);
    ctx->pc = 0x170CC8u;
    if (runtime->hasFunction(0x170CC8u)) {
        auto targetFn = runtime->lookupFunction(0x170CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE74Cu; }
        if (ctx->pc != 0x1DE74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170CC8_0x170cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE74Cu; }
        if (ctx->pc != 0x1DE74Cu) { return; }
    }
    ctx->pc = 0x1DE74Cu;
    // 0x1de74c: 0x8e2401a4  lw          $a0, 0x1A4($s1)
    ctx->pc = 0x1de74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_1de750:
    // 0x1de750: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE750u;
    {
        const bool branch_taken_0x1de750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de750) {
            ctx->pc = 0x1DE754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE750u;
            // 0x1de754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE764u;
            goto label_1de764;
        }
    }
    ctx->pc = 0x1DE758u;
    // 0x1de758: 0xc05c332  jal         func_170CC8
    ctx->pc = 0x1DE758u;
    SET_GPR_U32(ctx, 31, 0x1DE760u);
    ctx->pc = 0x170CC8u;
    if (runtime->hasFunction(0x170CC8u)) {
        auto targetFn = runtime->lookupFunction(0x170CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE760u; }
        if (ctx->pc != 0x1DE760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170CC8_0x170cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE760u; }
        if (ctx->pc != 0x1DE760u) { return; }
    }
    ctx->pc = 0x1DE760u;
    // 0x1de760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1de764:
    // 0x1de764: 0xc07821c  jal         func_1E0870
    ctx->pc = 0x1DE764u;
    SET_GPR_U32(ctx, 31, 0x1DE76Cu);
    ctx->pc = 0x1DE768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE764u;
            // 0x1de768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0870u;
    if (runtime->hasFunction(0x1E0870u)) {
        auto targetFn = runtime->lookupFunction(0x1E0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE76Cu; }
        if (ctx->pc != 0x1DE76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0870_0x1e0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE76Cu; }
        if (ctx->pc != 0x1DE76Cu) { return; }
    }
    ctx->pc = 0x1DE76Cu;
    // 0x1de76c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1de76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1de770: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1de770u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1de774: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1de774u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1de778: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1de77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de780: 0xdd07bdf8  ld          $a3, -0x4208($t0)
    ctx->pc = 0x1de780u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 4294950392)));
    // 0x1de784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de788: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x1de788u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x1de78c: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x1de78cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1de790: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x1de790u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x1de794: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x1de794u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1de798: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1de798u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1de79c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x1de79cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x1de7a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1de7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7a4: 0xe3100a  movz        $v0, $a3, $v1
    ctx->pc = 0x1de7a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1de7a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1de7a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7ac: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x1de7acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1de7b0: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x1de7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x1de7b4: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1de7b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1de7b8: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x1de7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x1de7bc: 0xfd07bdf8  sd          $a3, -0x4208($t0)
    ctx->pc = 0x1de7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294950392), GPR_U64(ctx, 7));
    // 0x1de7c0: 0xc077f80  jal         func_1DFE00
    ctx->pc = 0x1DE7C0u;
    SET_GPR_U32(ctx, 31, 0x1DE7C8u);
    ctx->pc = 0x1DE7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7C0u;
            // 0x1de7c4: 0xfcc30068  sd          $v1, 0x68($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFE00u;
    if (runtime->hasFunction(0x1DFE00u)) {
        auto targetFn = runtime->lookupFunction(0x1DFE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7C8u; }
        if (ctx->pc != 0x1DE7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dfe00_0x1dfe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7C8u; }
        if (ctx->pc != 0x1DE7C8u) { return; }
    }
    ctx->pc = 0x1DE7C8u;
    // 0x1de7c8: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1de7c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1de7cc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1de7ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de7d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1de7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1de7d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de7d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de7d8: 0x7e220110  sq          $v0, 0x110($s1)
    ctx->pc = 0x1de7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 272), GPR_VEC(ctx, 2));
    // 0x1de7dc: 0xe6200170  swc1        $f0, 0x170($s1)
    ctx->pc = 0x1de7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
    // 0x1de7e0: 0xfa2100f0  sqc2        $vf1, 0xF0($s1)
    ctx->pc = 0x1de7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de7e4: 0xfa2100e0  sqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1de7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de7e8: 0xfa210100  sqc2        $vf1, 0x100($s1)
    ctx->pc = 0x1de7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de7ec: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1DE7ECu;
    SET_GPR_U32(ctx, 31, 0x1DE7F4u);
    ctx->pc = 0x1DE7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7ECu;
            // 0x1de7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7F4u; }
        if (ctx->pc != 0x1DE7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7F4u; }
        if (ctx->pc != 0x1DE7F4u) { return; }
    }
    ctx->pc = 0x1DE7F4u;
    // 0x1de7f4: 0x8e24018c  lw          $a0, 0x18C($s1)
    ctx->pc = 0x1de7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x1de7f8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE7F8u;
    {
        const bool branch_taken_0x1de7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de7f8) {
            ctx->pc = 0x1DE7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7F8u;
            // 0x1de7fc: 0xc62c017c  lwc1        $f12, 0x17C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE810u;
            goto label_1de810;
        }
    }
    ctx->pc = 0x1DE800u;
    // 0x1de800: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1DE800u;
    SET_GPR_U32(ctx, 31, 0x1DE808u);
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE808u; }
        if (ctx->pc != 0x1DE808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE808u; }
        if (ctx->pc != 0x1DE808u) { return; }
    }
    ctx->pc = 0x1DE808u;
    // 0x1de808: 0xc62c017c  lwc1        $f12, 0x17C($s1)
    ctx->pc = 0x1de808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1de80c: 0x0  nop
    ctx->pc = 0x1de80cu;
    // NOP
label_1de810:
    // 0x1de810: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1DE810u;
    SET_GPR_U32(ctx, 31, 0x1DE818u);
    ctx->pc = 0x1DE814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE810u;
            // 0x1de814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE818u; }
        if (ctx->pc != 0x1DE818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE818u; }
        if (ctx->pc != 0x1DE818u) { return; }
    }
    ctx->pc = 0x1DE818u;
    // 0x1de818: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1de818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1de81c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x1de81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x1de820: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1de820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1de824: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x1de824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x1de828: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1de828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1de82c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1de82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1de830: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1de830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1de834: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x1de834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
    // 0x1de838: 0xae220174  sw          $v0, 0x174($s1)
    ctx->pc = 0x1de838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
    // 0x1de83c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de848: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE848u;
            // 0x1de84c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE750u: goto label_1de750;
            case 0x1DE764u: goto label_1de764;
            case 0x1DE810u: goto label_1de810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE850u;
}
