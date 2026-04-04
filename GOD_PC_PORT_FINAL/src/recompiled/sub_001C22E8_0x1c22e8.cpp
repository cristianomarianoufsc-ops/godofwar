#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C22E8
// Address: 0x1c22e8 - 0x1c2428
void sub_001C22E8_0x1c22e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C22E8_0x1c22e8");
#endif

    ctx->pc = 0x1c22e8u;

    // 0x1c22e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c22e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c22ec: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1c22ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1c22f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c22f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22f4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1c22f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1c22f8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1c22f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1c22fc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c22fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c2300: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c2300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c2304: 0x248462b8  addiu       $a0, $a0, 0x62B8
    ctx->pc = 0x1c2304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25272));
    // 0x1c2308: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c2308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c230c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c2310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2314: 0xc04c992  jal         func_132648
    ctx->pc = 0x1C2314u;
    SET_GPR_U32(ctx, 31, 0x1C231Cu);
    ctx->pc = 0x1C2318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2314u;
            // 0x1c2318: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C231Cu; }
        if (ctx->pc != 0x1C231Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C231Cu; }
        if (ctx->pc != 0x1C231Cu) { return; }
    }
    ctx->pc = 0x1C231Cu;
    // 0x1c231c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C231Cu;
    {
        const bool branch_taken_0x1c231c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C231Cu;
            // 0x1c2320: 0xae82cd24  sw          $v0, -0x32DC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294954276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c231c) {
            ctx->pc = 0x1C2400u;
            goto label_1c2400;
        }
    }
    ctx->pc = 0x1C2324u;
    // 0x1c2324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2328: 0xc066ed2  jal         func_19BB48
    ctx->pc = 0x1C2328u;
    SET_GPR_U32(ctx, 31, 0x1C2330u);
    ctx->pc = 0x1C232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2328u;
            // 0x1c232c: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BB48u;
    if (runtime->hasFunction(0x19BB48u)) {
        auto targetFn = runtime->lookupFunction(0x19BB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2330u; }
        if (ctx->pc != 0x1C2330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BB48_0x19bb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2330u; }
        if (ctx->pc != 0x1C2330u) { return; }
    }
    ctx->pc = 0x1C2330u;
    // 0x1c2330: 0x8e64cd58  lw          $a0, -0x32A8($s3)
    ctx->pc = 0x1c2330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954328)));
    // 0x1c2334: 0xc076856  jal         func_1DA158
    ctx->pc = 0x1C2334u;
    SET_GPR_U32(ctx, 31, 0x1C233Cu);
    ctx->pc = 0x1C2338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2334u;
            // 0x1c2338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA158u;
    if (runtime->hasFunction(0x1DA158u)) {
        auto targetFn = runtime->lookupFunction(0x1DA158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C233Cu; }
        if (ctx->pc != 0x1C233Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA158_0x1da158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C233Cu; }
        if (ctx->pc != 0x1C233Cu) { return; }
    }
    ctx->pc = 0x1C233Cu;
    // 0x1c233c: 0x8e62cd58  lw          $v0, -0x32A8($s3)
    ctx->pc = 0x1c233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954328)));
    // 0x1c2340: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1c2340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1c2344: 0x24843ae0  addiu       $a0, $a0, 0x3AE0
    ctx->pc = 0x1c2344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15072));
    // 0x1c2348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c234c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1c234cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2350: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1c2350u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c2354: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1C2354u;
    SET_GPR_U32(ctx, 31, 0x1C235Cu);
    ctx->pc = 0x1C2358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2354u;
            // 0x1c2358: 0x8e500104  lw          $s0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C235Cu; }
        if (ctx->pc != 0x1C235Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C235Cu; }
        if (ctx->pc != 0x1C235Cu) { return; }
    }
    ctx->pc = 0x1C235Cu;
    // 0x1c235c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c235cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2360: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1C2360u;
    SET_GPR_U32(ctx, 31, 0x1C2368u);
    ctx->pc = 0x1C2364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2360u;
            // 0x1c2364: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2368u; }
        if (ctx->pc != 0x1C2368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2368u; }
        if (ctx->pc != 0x1C2368u) { return; }
    }
    ctx->pc = 0x1C2368u;
    // 0x1c2368: 0x8e85cd24  lw          $a1, -0x32DC($s4)
    ctx->pc = 0x1c2368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954276)));
    // 0x1c236c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1c236cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1c2370: 0xc04c518  jal         func_131460
    ctx->pc = 0x1C2370u;
    SET_GPR_U32(ctx, 31, 0x1C2378u);
    ctx->pc = 0x1C2374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2370u;
            // 0x1c2374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2378u; }
        if (ctx->pc != 0x1C2378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2378u; }
        if (ctx->pc != 0x1C2378u) { return; }
    }
    ctx->pc = 0x1C2378u;
    // 0x1c2378: 0x8e84cd24  lw          $a0, -0x32DC($s4)
    ctx->pc = 0x1c2378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954276)));
    // 0x1c237c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1c237cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c2380: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x1c2380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1c2384: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x1c2384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x1c2388: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1c2388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1c238c: 0xac8300f4  sw          $v1, 0xF4($a0)
    ctx->pc = 0x1c238cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 3));
    // 0x1c2390: 0x84a40058  lh          $a0, 0x58($a1)
    ctx->pc = 0x1c2390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1c2394: 0x40f809  jalr        $v0
    ctx->pc = 0x1C2394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C239Cu);
        ctx->pc = 0x1C2398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2394u;
            // 0x1c2398: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C239Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2400u: goto label_1c2400;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C239Cu; }
            if (ctx->pc != 0x1C239Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C239Cu;
    // 0x1c239c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c23a0: 0xa44300a8  sh          $v1, 0xA8($v0)
    ctx->pc = 0x1c23a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c23a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c23a8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1c23a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1c23ac: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1c23acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1c23b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1C23B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C23B8u);
        ctx->pc = 0x1C23B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23B0u;
            // 0x1c23b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C23B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2400u: goto label_1c2400;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C23B8u; }
            if (ctx->pc != 0x1C23B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1C23B8u;
    // 0x1c23b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c23b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c23bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23c0: 0xc080362  jal         func_200D88
    ctx->pc = 0x1C23C0u;
    SET_GPR_U32(ctx, 31, 0x1C23C8u);
    ctx->pc = 0x1C23C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23C0u;
            // 0x1c23c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23C8u; }
        if (ctx->pc != 0x1C23C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23C8u; }
        if (ctx->pc != 0x1C23C8u) { return; }
    }
    ctx->pc = 0x1C23C8u;
    // 0x1c23c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23cc: 0xc080362  jal         func_200D88
    ctx->pc = 0x1C23CCu;
    SET_GPR_U32(ctx, 31, 0x1C23D4u);
    ctx->pc = 0x1C23D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23CCu;
            // 0x1c23d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23D4u; }
        if (ctx->pc != 0x1C23D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23D4u; }
        if (ctx->pc != 0x1C23D4u) { return; }
    }
    ctx->pc = 0x1C23D4u;
    // 0x1c23d4: 0x8e63cd58  lw          $v1, -0x32A8($s3)
    ctx->pc = 0x1c23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954328)));
    // 0x1c23d8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1c23d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1c23dc: 0x248462c8  addiu       $a0, $a0, 0x62C8
    ctx->pc = 0x1c23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25288));
    // 0x1c23e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c23e4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1c23e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1c23e8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1C23E8u;
    SET_GPR_U32(ctx, 31, 0x1C23F0u);
    ctx->pc = 0x1C23ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23E8u;
            // 0x1c23ec: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23F0u; }
        if (ctx->pc != 0x1C23F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23F0u; }
        if (ctx->pc != 0x1C23F0u) { return; }
    }
    ctx->pc = 0x1C23F0u;
    // 0x1c23f0: 0xaea20364  sw          $v0, 0x364($s5)
    ctx->pc = 0x1c23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 868), GPR_U32(ctx, 2));
    // 0x1c23f4: 0xc07089e  jal         func_1C2278
    ctx->pc = 0x1C23F4u;
    SET_GPR_U32(ctx, 31, 0x1C23FCu);
    ctx->pc = 0x1C23F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23F4u;
            // 0x1c23f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2278u;
    if (runtime->hasFunction(0x1C2278u)) {
        auto targetFn = runtime->lookupFunction(0x1C2278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23FCu; }
        if (ctx->pc != 0x1C23FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2278_0x1c2278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23FCu; }
        if (ctx->pc != 0x1C23FCu) { return; }
    }
    ctx->pc = 0x1C23FCu;
    // 0x1c23fc: 0x0  nop
    ctx->pc = 0x1c23fcu;
    // NOP
label_1c2400:
    // 0x1c2400: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c2400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2404: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c2404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2408: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c2408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c240c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c240cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2410: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1c2410u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2414: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1c2414u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c241c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C241Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C241Cu;
            // 0x1c2420: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2400u: goto label_1c2400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2424u;
    // 0x1c2424: 0x0  nop
    ctx->pc = 0x1c2424u;
    // NOP
}
