#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3728
// Address: 0x1b3728 - 0x1b38a0
void sub_001B3728_0x1b3728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3728_0x1b3728");
#endif

    ctx->pc = 0x1b3728u;

    // 0x1b3728: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b3728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b372c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b372cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b3730: 0xc440cac0  lwc1        $f0, -0x3540($v0)
    ctx->pc = 0x1b3730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3734: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3738: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b3738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b373c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b373cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3740: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b3740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b3744: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b3744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3748: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b3748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b374c: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1b374cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1b3750: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b3750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b3754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b3758: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3758u;
    SET_GPR_U32(ctx, 31, 0x1B3760u);
    ctx->pc = 0x1B375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3758u;
            // 0x1b375c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3760u; }
        if (ctx->pc != 0x1B3760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3760u; }
        if (ctx->pc != 0x1B3760u) { return; }
    }
    ctx->pc = 0x1B3760u;
    // 0x1b3760: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b3760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b3764: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x1b3764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1b3768: 0x8c42cab0  lw          $v0, -0x3550($v0)
    ctx->pc = 0x1b3768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953648)));
    // 0x1b376c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b376cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3770: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3770u;
    SET_GPR_U32(ctx, 31, 0x1B3778u);
    ctx->pc = 0x1B3774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3770u;
            // 0x1b3774: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3778u; }
        if (ctx->pc != 0x1B3778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3778u; }
        if (ctx->pc != 0x1B3778u) { return; }
    }
    ctx->pc = 0x1B3778u;
    // 0x1b3778: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b3778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b377c: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x1b377cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1b3780: 0x8c42cab8  lw          $v0, -0x3548($v0)
    ctx->pc = 0x1b3780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953656)));
    // 0x1b3784: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b3784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3788: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3788u;
    SET_GPR_U32(ctx, 31, 0x1B3790u);
    ctx->pc = 0x1B378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3788u;
            // 0x1b378c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3790u; }
        if (ctx->pc != 0x1B3790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3790u; }
        if (ctx->pc != 0x1B3790u) { return; }
    }
    ctx->pc = 0x1B3790u;
    // 0x1b3790: 0x8e62cb88  lw          $v0, -0x3478($s3)
    ctx->pc = 0x1b3790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953864)));
    // 0x1b3794: 0x37a4000c  ori         $a0, $sp, 0xC
    ctx->pc = 0x1b3794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x1b3798: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b3798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b379c: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B379Cu;
    SET_GPR_U32(ctx, 31, 0x1B37A4u);
    ctx->pc = 0x1B37A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B379Cu;
            // 0x1b37a0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37A4u; }
        if (ctx->pc != 0x1B37A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37A4u; }
        if (ctx->pc != 0x1B37A4u) { return; }
    }
    ctx->pc = 0x1B37A4u;
    // 0x1b37a4: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x1b37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1b37a8:
    // 0x1b37a8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b37ac: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1b37acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b37b0: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1b37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1b37b4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1b37b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b37b8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1b37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1b37bc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B37BCu;
    {
        const bool branch_taken_0x1b37bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37bc) {
            ctx->pc = 0x1B37C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37BCu;
            // 0x1b37c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3800u;
            goto label_1b3800;
        }
    }
    ctx->pc = 0x1B37C4u;
    // 0x1b37c4: 0xc06c446  jal         func_1B1118
    ctx->pc = 0x1B37C4u;
    SET_GPR_U32(ctx, 31, 0x1B37CCu);
    ctx->pc = 0x1B37C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37C4u;
            // 0x1b37c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1118u;
    if (runtime->hasFunction(0x1B1118u)) {
        auto targetFn = runtime->lookupFunction(0x1B1118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37CCu; }
        if (ctx->pc != 0x1B37CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1118_0x1b1118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37CCu; }
        if (ctx->pc != 0x1B37CCu) { return; }
    }
    ctx->pc = 0x1B37CCu;
    // 0x1b37cc: 0xc06c4bc  jal         func_1B12F0
    ctx->pc = 0x1B37CCu;
    SET_GPR_U32(ctx, 31, 0x1B37D4u);
    ctx->pc = 0x1B37D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37CCu;
            // 0x1b37d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B12F0u;
    if (runtime->hasFunction(0x1B12F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B12F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37D4u; }
        if (ctx->pc != 0x1B37D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B12F0_0x1b12f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37D4u; }
        if (ctx->pc != 0x1B37D4u) { return; }
    }
    ctx->pc = 0x1B37D4u;
    // 0x1b37d4: 0xc06d242  jal         func_1B4908
    ctx->pc = 0x1B37D4u;
    SET_GPR_U32(ctx, 31, 0x1B37DCu);
    ctx->pc = 0x1B37D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37D4u;
            // 0x1b37d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4908u;
    if (runtime->hasFunction(0x1B4908u)) {
        auto targetFn = runtime->lookupFunction(0x1B4908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37DCu; }
        if (ctx->pc != 0x1B37DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4908_0x1b4908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37DCu; }
        if (ctx->pc != 0x1B37DCu) { return; }
    }
    ctx->pc = 0x1B37DCu;
    // 0x1b37dc: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1b37dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b37e0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1b37e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1b37e4: 0x24a552b4  addiu       $a1, $a1, 0x52B4
    ctx->pc = 0x1b37e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21172));
    // 0x1b37e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b37e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b37f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b37f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37f4: 0xc06ce58  jal         func_1B3960
    ctx->pc = 0x1B37F4u;
    SET_GPR_U32(ctx, 31, 0x1B37FCu);
    ctx->pc = 0x1B37F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37F4u;
            // 0x1b37f8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3960u;
    if (runtime->hasFunction(0x1B3960u)) {
        auto targetFn = runtime->lookupFunction(0x1B3960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37FCu; }
        if (ctx->pc != 0x1B37FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3960_0x1b3960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37FCu; }
        if (ctx->pc != 0x1B37FCu) { return; }
    }
    ctx->pc = 0x1B37FCu;
    // 0x1b37fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b37fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b3800:
    // 0x1b3800: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1b3800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3804: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B3804u;
    {
        const bool branch_taken_0x1b3804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3804u;
            // 0x1b3808: 0x2403006c  addiu       $v1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3804) {
            ctx->pc = 0x1B37A8u;
            runtime->cooperativeGuestYield();
            goto label_1b37a8;
        }
    }
    ctx->pc = 0x1B380Cu;
    // 0x1b380c: 0xc06c390  jal         func_1B0E40
    ctx->pc = 0x1B380Cu;
    SET_GPR_U32(ctx, 31, 0x1B3814u);
    ctx->pc = 0x1B3810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B380Cu;
            // 0x1b3810: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E40u;
    if (runtime->hasFunction(0x1B0E40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3814u; }
        if (ctx->pc != 0x1B3814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0E40_0x1b0e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3814u; }
        if (ctx->pc != 0x1B3814u) { return; }
    }
    ctx->pc = 0x1B3814u;
    // 0x1b3814: 0x8e62cb88  lw          $v0, -0x3478($s3)
    ctx->pc = 0x1b3814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953864)));
    // 0x1b3818: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B3818u;
    {
        const bool branch_taken_0x1b3818 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3818u;
            // 0x1b381c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3818) {
            ctx->pc = 0x1B3888u;
            goto label_1b3888;
        }
    }
    ctx->pc = 0x1B3820u;
    // 0x1b3820: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1b3820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1b3824: 0x0  nop
    ctx->pc = 0x1b3824u;
    // NOP
label_1b3828:
    // 0x1b3828: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x1b3828u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1b382c: 0x261052a8  addiu       $s0, $s0, 0x52A8
    ctx->pc = 0x1b382cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21160));
    // 0x1b3830: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b3830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b3834: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3834u;
    SET_GPR_U32(ctx, 31, 0x1B383Cu);
    ctx->pc = 0x1B3838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3834u;
            // 0x1b3838: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B383Cu; }
        if (ctx->pc != 0x1B383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B383Cu; }
        if (ctx->pc != 0x1B383Cu) { return; }
    }
    ctx->pc = 0x1B383Cu;
    // 0x1b383c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b383cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b3840: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1b3840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1b3844: 0xc08b516  jal         func_22D458
    ctx->pc = 0x1B3844u;
    SET_GPR_U32(ctx, 31, 0x1B384Cu);
    ctx->pc = 0x1B3848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3844u;
            // 0x1b3848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D458u;
    if (runtime->hasFunction(0x22D458u)) {
        auto targetFn = runtime->lookupFunction(0x22D458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B384Cu; }
        if (ctx->pc != 0x1B384Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22d458_0x22d488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B384Cu; }
        if (ctx->pc != 0x1B384Cu) { return; }
    }
    ctx->pc = 0x1B384Cu;
    // 0x1b384c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b384cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3850: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3854: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1b3854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x1b3858: 0xc08b422  jal         func_22D088
    ctx->pc = 0x1B3858u;
    SET_GPR_U32(ctx, 31, 0x1B3860u);
    ctx->pc = 0x1B385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3858u;
            // 0x1b385c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D088u;
    if (runtime->hasFunction(0x22D088u)) {
        auto targetFn = runtime->lookupFunction(0x22D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3860u; }
        if (ctx->pc != 0x1B3860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D088_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3860u; }
        if (ctx->pc != 0x1B3860u) { return; }
    }
    ctx->pc = 0x1B3860u;
    // 0x1b3860: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3860u;
    {
        const bool branch_taken_0x1b3860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3860u;
            // 0x1b3864: 0x8e62cb88  lw          $v0, -0x3478($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3860) {
            ctx->pc = 0x1B3874u;
            goto label_1b3874;
        }
    }
    ctx->pc = 0x1B3868u;
    // 0x1b3868: 0xc08b522  jal         func_22D488
    ctx->pc = 0x1B3868u;
    SET_GPR_U32(ctx, 31, 0x1B3870u);
    ctx->pc = 0x1B386Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3868u;
            // 0x1b386c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D488u;
    if (runtime->hasFunction(0x22D488u)) {
        auto targetFn = runtime->lookupFunction(0x22D488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3870u; }
        if (ctx->pc != 0x1B3870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D488_0x22d488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3870u; }
        if (ctx->pc != 0x1B3870u) { return; }
    }
    ctx->pc = 0x1B3870u;
    // 0x1b3870: 0x8e62cb88  lw          $v0, -0x3478($s3)
    ctx->pc = 0x1b3870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953864)));
label_1b3874:
    // 0x1b3874: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b3874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b3878: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b3878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b387c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1B387Cu;
    {
        const bool branch_taken_0x1b387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B387Cu;
            // 0x1b3880: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b387c) {
            ctx->pc = 0x1B3828u;
            runtime->cooperativeGuestYield();
            goto label_1b3828;
        }
    }
    ctx->pc = 0x1B3884u;
    // 0x1b3884: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b3884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b3888:
    // 0x1b3888: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b3888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b388c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b388cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3890: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3894: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b3894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3898: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3898u;
            // 0x1b389c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B37A8u: goto label_1b37a8;
            case 0x1B3800u: goto label_1b3800;
            case 0x1B3828u: goto label_1b3828;
            case 0x1B3874u: goto label_1b3874;
            case 0x1B3888u: goto label_1b3888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B38A0u;
}
