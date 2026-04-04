#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C26D0
// Address: 0x1c26d0 - 0x1c2858
void sub_001C26D0_0x1c26d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C26D0_0x1c26d0");
#endif

    ctx->pc = 0x1c26d0u;

label_1c26d0:
    // 0x1c26d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c26d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c26d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c26d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c26d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c26dc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1c26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1c26e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c26e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c26e4: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1c26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1c26e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c26e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c26ec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1c26ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c26f0: 0x8465cd28  lh          $a1, -0x32D8($v1)
    ctx->pc = 0x1c26f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294954280)));
    // 0x1c26f4: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1c26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c26f8: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x1c26f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1c26fc: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C26FCu;
    {
        const bool branch_taken_0x1c26fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C2700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26FCu;
            // 0x1c2700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26fc) {
            ctx->pc = 0x1C2720u;
            goto label_1c2720;
        }
    }
    ctx->pc = 0x1C2704u;
    // 0x1c2704: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c2704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c2708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c270c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1C270Cu;
    SET_GPR_U32(ctx, 31, 0x1C2714u);
    ctx->pc = 0x1C2710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C270Cu;
            // 0x1c2710: 0x8c44e208  lw          $a0, -0x1DF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959624)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2714u; }
        if (ctx->pc != 0x1C2714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2714u; }
        if (ctx->pc != 0x1C2714u) { return; }
    }
    ctx->pc = 0x1C2714u;
    // 0x1c2714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2718: 0xc07b390  jal         func_1ECE40
    ctx->pc = 0x1C2718u;
    SET_GPR_U32(ctx, 31, 0x1C2720u);
    ctx->pc = 0x1C271Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2718u;
            // 0x1c271c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE40u;
    if (runtime->hasFunction(0x1ECE40u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2720u; }
        if (ctx->pc != 0x1C2720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECE40_0x1ece40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2720u; }
        if (ctx->pc != 0x1C2720u) { return; }
    }
    ctx->pc = 0x1C2720u;
label_1c2720:
    // 0x1c2720: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x1c2720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x1c2724: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c2724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c2728: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C2728u;
    {
        const bool branch_taken_0x1c2728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C272Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2728u;
            // 0x1c272c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2728) {
            ctx->pc = 0x1C2768u;
            goto label_1c2768;
        }
    }
    ctx->pc = 0x1C2730u;
    // 0x1c2730: 0x8c42cd24  lw          $v0, -0x32DC($v0)
    ctx->pc = 0x1c2730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954276)));
    // 0x1c2734: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C2734u;
    {
        const bool branch_taken_0x1c2734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2734) {
            ctx->pc = 0x1C2738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2734u;
            // 0x1c2738: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2798u;
            goto label_1c2798;
        }
    }
    ctx->pc = 0x1C273Cu;
    // 0x1c273c: 0xc600017c  lwc1        $f0, 0x17C($s0)
    ctx->pc = 0x1c273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2744: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x1c2744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x1c2748: 0xc600017c  lwc1        $f0, 0x17C($s0)
    ctx->pc = 0x1c2748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c274c: 0xc60c0178  lwc1        $f12, 0x178($s0)
    ctx->pc = 0x1c274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2750: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1C2750u;
    SET_GPR_U32(ctx, 31, 0x1C2758u);
    ctx->pc = 0x1C2754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2750u;
            // 0x1c2754: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2758u; }
        if (ctx->pc != 0x1C2758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2758u; }
        if (ctx->pc != 0x1C2758u) { return; }
    }
    ctx->pc = 0x1C2758u;
    // 0x1c2758: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x1c2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x1c275c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1c275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c2760: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c2760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c2764: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x1c2764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
label_1c2768:
    // 0x1c2768: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c2768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c276c: 0x8c42cd24  lw          $v0, -0x32DC($v0)
    ctx->pc = 0x1c276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954276)));
    // 0x1c2770: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2770u;
    {
        const bool branch_taken_0x1c2770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2770) {
            ctx->pc = 0x1C2774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2770u;
            // 0x1c2774: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2798u;
            goto label_1c2798;
        }
    }
    ctx->pc = 0x1C2778u;
    // 0x1c2778: 0xc6200178  lwc1        $f0, 0x178($s1)
    ctx->pc = 0x1c2778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c277c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2780: 0xc62c017c  lwc1        $f12, 0x17C($s1)
    ctx->pc = 0x1c2780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2784: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1C2784u;
    SET_GPR_U32(ctx, 31, 0x1C278Cu);
    ctx->pc = 0x1C2788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2784u;
            // 0x1c2788: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C278Cu; }
        if (ctx->pc != 0x1C278Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C278Cu; }
        if (ctx->pc != 0x1C278Cu) { return; }
    }
    ctx->pc = 0x1C278Cu;
    // 0x1c278c: 0xc07094e  jal         func_1C2538
    ctx->pc = 0x1C278Cu;
    SET_GPR_U32(ctx, 31, 0x1C2794u);
    ctx->pc = 0x1C2790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C278Cu;
            // 0x1c2790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2538u;
    if (runtime->hasFunction(0x1C2538u)) {
        auto targetFn = runtime->lookupFunction(0x1C2538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2794u; }
        if (ctx->pc != 0x1C2794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2538_0x1c2538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2794u; }
        if (ctx->pc != 0x1C2794u) { return; }
    }
    ctx->pc = 0x1C2794u;
    // 0x1c2794: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2798:
    // 0x1c2798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c279c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c279cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c27a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C27A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27A0u;
            // 0x1c27a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C26D0u: goto label_1c26d0;
            case 0x1C2720u: goto label_1c2720;
            case 0x1C2768u: goto label_1c2768;
            case 0x1C2798u: goto label_1c2798;
            case 0x1C27C4u: goto label_1c27c4;
            case 0x1C283Cu: goto label_1c283c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C27A8u;
    // 0x1c27a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c27a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c27ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c27acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c27b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c27b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c27b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c27b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c27b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c27bc: 0xc0709b4  jal         func_1C26D0
    ctx->pc = 0x1C27BCu;
    SET_GPR_U32(ctx, 31, 0x1C27C4u);
    ctx->pc = 0x1C27C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27BCu;
            // 0x1c27c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C26D0u;
    runtime->cooperativeGuestYield();
    goto label_1c26d0;
    ctx->pc = 0x1C27C4u;
label_1c27c4:
    // 0x1c27c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c27c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c27c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c27c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27cc: 0xc07b6a8  jal         func_1EDAA0
    ctx->pc = 0x1C27CCu;
    SET_GPR_U32(ctx, 31, 0x1C27D4u);
    ctx->pc = 0x1C27D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27CCu;
            // 0x1c27d0: 0x8c44e2cc  lw          $a0, -0x1D34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDAA0u;
    if (runtime->hasFunction(0x1EDAA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EDAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27D4u; }
        if (ctx->pc != 0x1C27D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EDAA0_0x1edaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27D4u; }
        if (ctx->pc != 0x1C27D4u) { return; }
    }
    ctx->pc = 0x1C27D4u;
    // 0x1c27d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c27d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27d8: 0xc07ac70  jal         func_1EB1C0
    ctx->pc = 0x1C27D8u;
    SET_GPR_U32(ctx, 31, 0x1C27E0u);
    ctx->pc = 0x1C27DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27D8u;
            // 0x1c27dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB1C0u;
    if (runtime->hasFunction(0x1EB1C0u)) {
        auto targetFn = runtime->lookupFunction(0x1EB1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27E0u; }
        if (ctx->pc != 0x1C27E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB1C0_0x1eb1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27E0u; }
        if (ctx->pc != 0x1C27E0u) { return; }
    }
    ctx->pc = 0x1C27E0u;
    // 0x1c27e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c27e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c27e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c27e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c27e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c27e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c27ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C27F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27ECu;
            // 0x1c27f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C26D0u: goto label_1c26d0;
            case 0x1C2720u: goto label_1c2720;
            case 0x1C2768u: goto label_1c2768;
            case 0x1C2798u: goto label_1c2798;
            case 0x1C27C4u: goto label_1c27c4;
            case 0x1C283Cu: goto label_1c283c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C27F4u;
    // 0x1c27f4: 0x0  nop
    ctx->pc = 0x1c27f4u;
    // NOP
    // 0x1c27f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c27f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c27fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c27fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2808: 0xc0782a6  jal         func_1E0A98
    ctx->pc = 0x1C2808u;
    SET_GPR_U32(ctx, 31, 0x1C2810u);
    ctx->pc = 0x1C280Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2808u;
            // 0x1c280c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A98u;
    if (runtime->hasFunction(0x1E0A98u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2810u; }
        if (ctx->pc != 0x1C2810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A98_0x1e0a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2810u; }
        if (ctx->pc != 0x1C2810u) { return; }
    }
    ctx->pc = 0x1C2810u;
    // 0x1c2810: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c2810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2814: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c2814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c2818: 0x8c42cd24  lw          $v0, -0x32DC($v0)
    ctx->pc = 0x1c2818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954276)));
    // 0x1c281c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C281Cu;
    {
        const bool branch_taken_0x1c281c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C281Cu;
            // 0x1c2820: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c281c) {
            ctx->pc = 0x1C283Cu;
            goto label_1c283c;
        }
    }
    ctx->pc = 0x1C2824u;
    // 0x1c2824: 0xc6000178  lwc1        $f0, 0x178($s0)
    ctx->pc = 0x1c2824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2828: 0xc60c017c  lwc1        $f12, 0x17C($s0)
    ctx->pc = 0x1c2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c282c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1c282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1c2830: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1c2830u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1c2834: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1C2834u;
    SET_GPR_U32(ctx, 31, 0x1C283Cu);
    ctx->pc = 0x1C2838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2834u;
            // 0x1c2838: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C283Cu; }
        if (ctx->pc != 0x1C283Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C283Cu; }
        if (ctx->pc != 0x1C283Cu) { return; }
    }
    ctx->pc = 0x1C283Cu;
label_1c283c:
    // 0x1c283c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c283cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2840: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c284c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C284Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C284Cu;
            // 0x1c2850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C26D0u: goto label_1c26d0;
            case 0x1C2720u: goto label_1c2720;
            case 0x1C2768u: goto label_1c2768;
            case 0x1C2798u: goto label_1c2798;
            case 0x1C27C4u: goto label_1c27c4;
            case 0x1C283Cu: goto label_1c283c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2854u;
    // 0x1c2854: 0x0  nop
    ctx->pc = 0x1c2854u;
    // NOP
}
