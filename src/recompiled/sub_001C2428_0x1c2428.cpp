#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2428
// Address: 0x1c2428 - 0x1c2538
void sub_001C2428_0x1c2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2428_0x1c2428");
#endif

    ctx->pc = 0x1c2428u;

    // 0x1c2428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c242c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c2430: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c2430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c2434: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1c2434u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1c2438: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c2438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c243c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c2440: 0x8e04cd24  lw          $a0, -0x32DC($s0)
    ctx->pc = 0x1c2440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954276)));
    // 0x1c2444: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C2444u;
    {
        const bool branch_taken_0x1c2444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2444u;
            // 0x1c2448: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2444) {
            ctx->pc = 0x1C2520u;
            goto label_1c2520;
        }
    }
    ctx->pc = 0x1C244Cu;
    // 0x1c244c: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1C244Cu;
    SET_GPR_U32(ctx, 31, 0x1C2454u);
    ctx->pc = 0x1C2450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C244Cu;
            // 0x1c2450: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2454u; }
        if (ctx->pc != 0x1C2454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2454u; }
        if (ctx->pc != 0x1C2454u) { return; }
    }
    ctx->pc = 0x1C2454u;
    // 0x1c2454: 0x8e22cd58  lw          $v0, -0x32A8($s1)
    ctx->pc = 0x1c2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x1c2458: 0xae00cd24  sw          $zero, -0x32DC($s0)
    ctx->pc = 0x1c2458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954276), GPR_U32(ctx, 0));
    // 0x1c245c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c245cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2460: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c2460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c2464: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1c2464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1c2468: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1c2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1c246c: 0x40f809  jalr        $v0
    ctx->pc = 0x1C246Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2474u);
        ctx->pc = 0x1C2470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C246Cu;
            // 0x1c2470: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C2474u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2520u: goto label_1c2520;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C2474u; }
            if (ctx->pc != 0x1C2474u) { return; }
        }
        }
    }
    ctx->pc = 0x1C2474u;
    // 0x1c2474: 0xa44000a8  sh          $zero, 0xA8($v0)
    ctx->pc = 0x1c2474u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c2478: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c2478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c247c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1c247cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1c2480: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1c2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1c2484: 0x40f809  jalr        $v0
    ctx->pc = 0x1C2484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C248Cu);
        ctx->pc = 0x1C2488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2484u;
            // 0x1c2488: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C248Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2520u: goto label_1c2520;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C248Cu; }
            if (ctx->pc != 0x1C248Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C248Cu;
    // 0x1c248c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c248cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2494: 0xc080358  jal         func_200D60
    ctx->pc = 0x1C2494u;
    SET_GPR_U32(ctx, 31, 0x1C249Cu);
    ctx->pc = 0x1C2498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2494u;
            // 0x1c2498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C249Cu; }
        if (ctx->pc != 0x1C249Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C249Cu; }
        if (ctx->pc != 0x1C249Cu) { return; }
    }
    ctx->pc = 0x1C249Cu;
    // 0x1c249c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c249cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24a0: 0xc080358  jal         func_200D60
    ctx->pc = 0x1C24A0u;
    SET_GPR_U32(ctx, 31, 0x1C24A8u);
    ctx->pc = 0x1C24A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24A0u;
            // 0x1c24a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24A8u; }
        if (ctx->pc != 0x1C24A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24A8u; }
        if (ctx->pc != 0x1C24A8u) { return; }
    }
    ctx->pc = 0x1C24A8u;
    // 0x1c24a8: 0x8e30cd58  lw          $s0, -0x32A8($s1)
    ctx->pc = 0x1c24a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x1c24ac: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x1c24acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1c24b0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1c24b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1c24b4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c24b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c24b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c24bc: 0x24842cc0  addiu       $a0, $a0, 0x2CC0
    ctx->pc = 0x1c24bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11456));
    // 0x1c24c0: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x1c24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
    // 0x1c24c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c24c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c24c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1c24c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1c24cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c24ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c24d0: 0x90820077  lbu         $v0, 0x77($a0)
    ctx->pc = 0x1c24d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 119)));
    // 0x1c24d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c24d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c24dc: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1c24dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c24e0: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x1c24e0u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1c24e4: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1c24e4u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1c24e8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1c24e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c24ec: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x1c24ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x1c24f0: 0xc077002  jal         func_1DC008
    ctx->pc = 0x1C24F0u;
    SET_GPR_U32(ctx, 31, 0x1C24F8u);
    ctx->pc = 0x1C24F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24F0u;
            // 0x1c24f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC008u;
    if (runtime->hasFunction(0x1DC008u)) {
        auto targetFn = runtime->lookupFunction(0x1DC008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24F8u; }
        if (ctx->pc != 0x1C24F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc008_0x1dc040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24F8u; }
        if (ctx->pc != 0x1C24F8u) { return; }
    }
    ctx->pc = 0x1C24F8u;
    // 0x1c24f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c24f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24fc: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x1c24fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x1c2500: 0xc077002  jal         func_1DC008
    ctx->pc = 0x1C2500u;
    SET_GPR_U32(ctx, 31, 0x1C2508u);
    ctx->pc = 0x1C2504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2500u;
            // 0x1c2504: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC008u;
    if (runtime->hasFunction(0x1DC008u)) {
        auto targetFn = runtime->lookupFunction(0x1DC008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2508u; }
        if (ctx->pc != 0x1C2508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc008_0x1dc040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2508u; }
        if (ctx->pc != 0x1C2508u) { return; }
    }
    ctx->pc = 0x1C2508u;
    // 0x1c2508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c250c: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1C250Cu;
    SET_GPR_U32(ctx, 31, 0x1C2514u);
    ctx->pc = 0x1C2510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C250Cu;
            // 0x1c2510: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2514u; }
        if (ctx->pc != 0x1C2514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2514u; }
        if (ctx->pc != 0x1C2514u) { return; }
    }
    ctx->pc = 0x1C2514u;
    // 0x1c2514: 0xc07089e  jal         func_1C2278
    ctx->pc = 0x1C2514u;
    SET_GPR_U32(ctx, 31, 0x1C251Cu);
    ctx->pc = 0x1C2518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2514u;
            // 0x1c2518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2278u;
    if (runtime->hasFunction(0x1C2278u)) {
        auto targetFn = runtime->lookupFunction(0x1C2278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C251Cu; }
        if (ctx->pc != 0x1C251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2278_0x1c2278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C251Cu; }
        if (ctx->pc != 0x1C251Cu) { return; }
    }
    ctx->pc = 0x1C251Cu;
    // 0x1c251c: 0x0  nop
    ctx->pc = 0x1c251cu;
    // NOP
label_1c2520:
    // 0x1c2520: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c2520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2524: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c2524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2528: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c2528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c252c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c252cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2530: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2530u;
            // 0x1c2534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2520u: goto label_1c2520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2538u;
}
