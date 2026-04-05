#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E3B0
// Address: 0x14e3b0 - 0x14e570
void sub_0014E3B0_0x14e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E3B0_0x14e3b0");
#endif

    ctx->pc = 0x14e3b0u;

label_14e3b0:
    // 0x14e3b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_14e3b4:
    // 0x14e3b4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x14e3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_14e3b8:
    // 0x14e3b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_14e3bc:
    // 0x14e3bc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x14e3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_14e3c0:
    // 0x14e3c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_14e3c4:
    // 0x14e3c4: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x14e3c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_14e3c8:
    // 0x14e3c8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x14e3c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14e3cc:
    // 0x14e3cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_14e3d0:
    // 0x14e3d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_14e3d4:
    // 0x14e3d4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x14e3d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_14e3d8:
    // 0x14e3d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14e3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14e3dc:
    // 0x14e3dc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x14e3dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_14e3e0:
    // 0x14e3e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14e3e4:
    // 0x14e3e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e3e8:
    // 0x14e3e8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x14e3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14e3ec:
    // 0x14e3ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14e3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e3f0:
    // 0x14e3f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x14e3f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e3f4:
    // 0x14e3f4: 0xc0534de  jal         func_14D378
label_14e3f8:
    if (ctx->pc == 0x14E3F8u) {
        ctx->pc = 0x14E3F8u;
            // 0x14e3f8: 0x2e53003b  sltiu       $s3, $s2, 0x3B (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
        ctx->pc = 0x14E3FCu;
        goto label_14e3fc;
    }
    ctx->pc = 0x14E3F4u;
    SET_GPR_U32(ctx, 31, 0x14E3FCu);
    ctx->pc = 0x14E3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3F4u;
            // 0x14e3f8: 0x2e53003b  sltiu       $s3, $s2, 0x3B (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D378u;
    if (runtime->hasFunction(0x14D378u)) {
        auto targetFn = runtime->lookupFunction(0x14D378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E3FCu; }
        if (ctx->pc != 0x14E3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D378_0x14d378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E3FCu; }
        if (ctx->pc != 0x14E3FCu) { return; }
    }
    ctx->pc = 0x14E3FCu;
label_14e3fc:
    // 0x14e3fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14e3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e400:
    // 0x14e400: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
label_14e404:
    if (ctx->pc == 0x14E404u) {
        ctx->pc = 0x14E404u;
            // 0x14e404: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E408u;
        goto label_14e408;
    }
    ctx->pc = 0x14E400u;
    {
        const bool branch_taken_0x14e400 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E400u;
            // 0x14e404: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e400) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E408u;
label_14e408:
    // 0x14e408: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x14e408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_14e40c:
    // 0x14e40c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_14e410:
    // 0x14e410: 0x24421ee0  addiu       $v0, $v0, 0x1EE0
    ctx->pc = 0x14e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7904));
label_14e414:
    // 0x14e414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14e418:
    // 0x14e418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e41c:
    // 0x14e41c: 0x400008  jr          $v0
label_14e420:
    if (ctx->pc == 0x14E420u) {
        ctx->pc = 0x14E424u;
        goto label_14e424;
    }
    ctx->pc = 0x14E41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E424u: goto label_14e424;
            case 0x14E438u: goto label_14e438;
            case 0x14E44Cu: goto label_14e44c;
            case 0x14E464u: goto label_14e464;
            case 0x14E47Cu: goto label_14e47c;
            case 0x14E490u: goto label_14e490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E424u;
label_14e424:
    // 0x14e424: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14e424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e428:
    // 0x14e428: 0xc0537d6  jal         func_14DF58
label_14e42c:
    if (ctx->pc == 0x14E42Cu) {
        ctx->pc = 0x14E42Cu;
            // 0x14e42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E430u;
        goto label_14e430;
    }
    ctx->pc = 0x14E428u;
    SET_GPR_U32(ctx, 31, 0x14E430u);
    ctx->pc = 0x14E42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E428u;
            // 0x14e42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DF58u;
    if (runtime->hasFunction(0x14DF58u)) {
        auto targetFn = runtime->lookupFunction(0x14DF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E430u; }
        if (ctx->pc != 0x14E430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14df58_0x14e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E430u; }
        if (ctx->pc != 0x14E430u) { return; }
    }
    ctx->pc = 0x14E430u;
label_14e430:
    // 0x14e430: 0x10000017  b           . + 4 + (0x17 << 2)
label_14e434:
    if (ctx->pc == 0x14E434u) {
        ctx->pc = 0x14E434u;
            // 0x14e434: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E438u;
        goto label_14e438;
    }
    ctx->pc = 0x14E430u;
    {
        const bool branch_taken_0x14e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E430u;
            // 0x14e434: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e430) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E438u;
label_14e438:
    // 0x14e438: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14e438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e43c:
    // 0x14e43c: 0xc053820  jal         func_14E080
label_14e440:
    if (ctx->pc == 0x14E440u) {
        ctx->pc = 0x14E440u;
            // 0x14e440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E444u;
        goto label_14e444;
    }
    ctx->pc = 0x14E43Cu;
    SET_GPR_U32(ctx, 31, 0x14E444u);
    ctx->pc = 0x14E440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E43Cu;
            // 0x14e440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E080u;
    if (runtime->hasFunction(0x14E080u)) {
        auto targetFn = runtime->lookupFunction(0x14E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E444u; }
        if (ctx->pc != 0x14E444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14e080_0x14e1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E444u; }
        if (ctx->pc != 0x14E444u) { return; }
    }
    ctx->pc = 0x14E444u;
label_14e444:
    // 0x14e444: 0x10000012  b           . + 4 + (0x12 << 2)
label_14e448:
    if (ctx->pc == 0x14E448u) {
        ctx->pc = 0x14E448u;
            // 0x14e448: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E44Cu;
        goto label_14e44c;
    }
    ctx->pc = 0x14E444u;
    {
        const bool branch_taken_0x14e444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E444u;
            // 0x14e448: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e444) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E44Cu;
label_14e44c:
    // 0x14e44c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14e44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e450:
    // 0x14e450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e454:
    // 0x14e454: 0xc053876  jal         func_14E1D8
label_14e458:
    if (ctx->pc == 0x14E458u) {
        ctx->pc = 0x14E458u;
            // 0x14e458: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14E45Cu;
        goto label_14e45c;
    }
    ctx->pc = 0x14E454u;
    SET_GPR_U32(ctx, 31, 0x14E45Cu);
    ctx->pc = 0x14E458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E454u;
            // 0x14e458: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E1D8u;
    if (runtime->hasFunction(0x14E1D8u)) {
        auto targetFn = runtime->lookupFunction(0x14E1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E45Cu; }
        if (ctx->pc != 0x14E45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14e1d8_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E45Cu; }
        if (ctx->pc != 0x14E45Cu) { return; }
    }
    ctx->pc = 0x14E45Cu;
label_14e45c:
    // 0x14e45c: 0x1000000c  b           . + 4 + (0xC << 2)
label_14e460:
    if (ctx->pc == 0x14E460u) {
        ctx->pc = 0x14E460u;
            // 0x14e460: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E464u;
        goto label_14e464;
    }
    ctx->pc = 0x14E45Cu;
    {
        const bool branch_taken_0x14e45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E45Cu;
            // 0x14e460: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e45c) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E464u;
label_14e464:
    // 0x14e464: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14e464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e468:
    // 0x14e468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e46c:
    // 0x14e46c: 0xc053876  jal         func_14E1D8
label_14e470:
    if (ctx->pc == 0x14E470u) {
        ctx->pc = 0x14E470u;
            // 0x14e470: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x14E474u;
        goto label_14e474;
    }
    ctx->pc = 0x14E46Cu;
    SET_GPR_U32(ctx, 31, 0x14E474u);
    ctx->pc = 0x14E470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E46Cu;
            // 0x14e470: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E1D8u;
    if (runtime->hasFunction(0x14E1D8u)) {
        auto targetFn = runtime->lookupFunction(0x14E1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E474u; }
        if (ctx->pc != 0x14E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14e1d8_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E474u; }
        if (ctx->pc != 0x14E474u) { return; }
    }
    ctx->pc = 0x14E474u;
label_14e474:
    // 0x14e474: 0x10000006  b           . + 4 + (0x6 << 2)
label_14e478:
    if (ctx->pc == 0x14E478u) {
        ctx->pc = 0x14E478u;
            // 0x14e478: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E47Cu;
        goto label_14e47c;
    }
    ctx->pc = 0x14E474u;
    {
        const bool branch_taken_0x14e474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E474u;
            // 0x14e478: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e474) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E47Cu;
label_14e47c:
    // 0x14e47c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e480:
    // 0x14e480: 0xc05371c  jal         func_14DC70
label_14e484:
    if (ctx->pc == 0x14E484u) {
        ctx->pc = 0x14E484u;
            // 0x14e484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E488u;
        goto label_14e488;
    }
    ctx->pc = 0x14E480u;
    SET_GPR_U32(ctx, 31, 0x14E488u);
    ctx->pc = 0x14E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E480u;
            // 0x14e484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC70u;
    if (runtime->hasFunction(0x14DC70u)) {
        auto targetFn = runtime->lookupFunction(0x14DC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E488u; }
        if (ctx->pc != 0x14E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DC70_0x14dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E488u; }
        if (ctx->pc != 0x14E488u) { return; }
    }
    ctx->pc = 0x14E488u;
label_14e488:
    // 0x14e488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14e488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e48c:
    // 0x14e48c: 0x0  nop
    ctx->pc = 0x14e48cu;
    // NOP
label_14e490:
    // 0x14e490: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e494:
    // 0x14e494: 0x12220028  beq         $s1, $v0, . + 4 + (0x28 << 2)
label_14e498:
    if (ctx->pc == 0x14E498u) {
        ctx->pc = 0x14E49Cu;
        goto label_14e49c;
    }
    ctx->pc = 0x14E494u;
    {
        const bool branch_taken_0x14e494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e494) {
            ctx->pc = 0x14E538u;
            goto label_14e538;
        }
    }
    ctx->pc = 0x14E49Cu;
label_14e49c:
    // 0x14e49c: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
label_14e4a0:
    if (ctx->pc == 0x14E4A0u) {
        ctx->pc = 0x14E4A0u;
            // 0x14e4a0: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->pc = 0x14E4A4u;
        goto label_14e4a4;
    }
    ctx->pc = 0x14E49Cu;
    {
        const bool branch_taken_0x14e49c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E49Cu;
            // 0x14e4a0: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e49c) {
            ctx->pc = 0x14E538u;
            goto label_14e538;
        }
    }
    ctx->pc = 0x14E4A4u;
label_14e4a4:
    // 0x14e4a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_14e4a8:
    // 0x14e4a8: 0x24421fd0  addiu       $v0, $v0, 0x1FD0
    ctx->pc = 0x14e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8144));
label_14e4ac:
    // 0x14e4ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14e4b0:
    // 0x14e4b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e4b4:
    // 0x14e4b4: 0x400008  jr          $v0
label_14e4b8:
    if (ctx->pc == 0x14E4B8u) {
        ctx->pc = 0x14E4BCu;
        goto label_14e4bc;
    }
    ctx->pc = 0x14E4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E3B0u: goto label_14e3b0;
            case 0x14E3B4u: goto label_14e3b4;
            case 0x14E3B8u: goto label_14e3b8;
            case 0x14E3BCu: goto label_14e3bc;
            case 0x14E3C0u: goto label_14e3c0;
            case 0x14E3C4u: goto label_14e3c4;
            case 0x14E3C8u: goto label_14e3c8;
            case 0x14E3CCu: goto label_14e3cc;
            case 0x14E3D0u: goto label_14e3d0;
            case 0x14E3D4u: goto label_14e3d4;
            case 0x14E3D8u: goto label_14e3d8;
            case 0x14E3DCu: goto label_14e3dc;
            case 0x14E3E0u: goto label_14e3e0;
            case 0x14E3E4u: goto label_14e3e4;
            case 0x14E3E8u: goto label_14e3e8;
            case 0x14E3ECu: goto label_14e3ec;
            case 0x14E3F0u: goto label_14e3f0;
            case 0x14E3F4u: goto label_14e3f4;
            case 0x14E3F8u: goto label_14e3f8;
            case 0x14E3FCu: goto label_14e3fc;
            case 0x14E400u: goto label_14e400;
            case 0x14E404u: goto label_14e404;
            case 0x14E408u: goto label_14e408;
            case 0x14E40Cu: goto label_14e40c;
            case 0x14E410u: goto label_14e410;
            case 0x14E414u: goto label_14e414;
            case 0x14E418u: goto label_14e418;
            case 0x14E41Cu: goto label_14e41c;
            case 0x14E420u: goto label_14e420;
            case 0x14E424u: goto label_14e424;
            case 0x14E428u: goto label_14e428;
            case 0x14E42Cu: goto label_14e42c;
            case 0x14E430u: goto label_14e430;
            case 0x14E434u: goto label_14e434;
            case 0x14E438u: goto label_14e438;
            case 0x14E43Cu: goto label_14e43c;
            case 0x14E440u: goto label_14e440;
            case 0x14E444u: goto label_14e444;
            case 0x14E448u: goto label_14e448;
            case 0x14E44Cu: goto label_14e44c;
            case 0x14E450u: goto label_14e450;
            case 0x14E454u: goto label_14e454;
            case 0x14E458u: goto label_14e458;
            case 0x14E45Cu: goto label_14e45c;
            case 0x14E460u: goto label_14e460;
            case 0x14E464u: goto label_14e464;
            case 0x14E468u: goto label_14e468;
            case 0x14E46Cu: goto label_14e46c;
            case 0x14E470u: goto label_14e470;
            case 0x14E474u: goto label_14e474;
            case 0x14E478u: goto label_14e478;
            case 0x14E47Cu: goto label_14e47c;
            case 0x14E480u: goto label_14e480;
            case 0x14E484u: goto label_14e484;
            case 0x14E488u: goto label_14e488;
            case 0x14E48Cu: goto label_14e48c;
            case 0x14E490u: goto label_14e490;
            case 0x14E494u: goto label_14e494;
            case 0x14E498u: goto label_14e498;
            case 0x14E49Cu: goto label_14e49c;
            case 0x14E4A0u: goto label_14e4a0;
            case 0x14E4A4u: goto label_14e4a4;
            case 0x14E4A8u: goto label_14e4a8;
            case 0x14E4ACu: goto label_14e4ac;
            case 0x14E4B0u: goto label_14e4b0;
            case 0x14E4B4u: goto label_14e4b4;
            case 0x14E4B8u: goto label_14e4b8;
            case 0x14E4BCu: goto label_14e4bc;
            case 0x14E4C0u: goto label_14e4c0;
            case 0x14E4C4u: goto label_14e4c4;
            case 0x14E4C8u: goto label_14e4c8;
            case 0x14E4CCu: goto label_14e4cc;
            case 0x14E4D0u: goto label_14e4d0;
            case 0x14E4D4u: goto label_14e4d4;
            case 0x14E4D8u: goto label_14e4d8;
            case 0x14E4DCu: goto label_14e4dc;
            case 0x14E4E0u: goto label_14e4e0;
            case 0x14E4E4u: goto label_14e4e4;
            case 0x14E4E8u: goto label_14e4e8;
            case 0x14E4ECu: goto label_14e4ec;
            case 0x14E4F0u: goto label_14e4f0;
            case 0x14E4F4u: goto label_14e4f4;
            case 0x14E4F8u: goto label_14e4f8;
            case 0x14E4FCu: goto label_14e4fc;
            case 0x14E500u: goto label_14e500;
            case 0x14E504u: goto label_14e504;
            case 0x14E508u: goto label_14e508;
            case 0x14E50Cu: goto label_14e50c;
            case 0x14E510u: goto label_14e510;
            case 0x14E514u: goto label_14e514;
            case 0x14E518u: goto label_14e518;
            case 0x14E51Cu: goto label_14e51c;
            case 0x14E520u: goto label_14e520;
            case 0x14E524u: goto label_14e524;
            case 0x14E528u: goto label_14e528;
            case 0x14E52Cu: goto label_14e52c;
            case 0x14E530u: goto label_14e530;
            case 0x14E534u: goto label_14e534;
            case 0x14E538u: goto label_14e538;
            case 0x14E53Cu: goto label_14e53c;
            case 0x14E540u: goto label_14e540;
            case 0x14E544u: goto label_14e544;
            case 0x14E548u: goto label_14e548;
            case 0x14E54Cu: goto label_14e54c;
            case 0x14E550u: goto label_14e550;
            case 0x14E554u: goto label_14e554;
            case 0x14E558u: goto label_14e558;
            case 0x14E55Cu: goto label_14e55c;
            case 0x14E560u: goto label_14e560;
            case 0x14E564u: goto label_14e564;
            case 0x14E568u: goto label_14e568;
            case 0x14E56Cu: goto label_14e56c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E4BCu;
label_14e4bc:
    // 0x14e4bc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e4c0:
    // 0x14e4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e4c4:
    // 0x14e4c4: 0xc053668  jal         func_14D9A0
label_14e4c8:
    if (ctx->pc == 0x14E4C8u) {
        ctx->pc = 0x14E4C8u;
            // 0x14e4c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E4CCu;
        goto label_14e4cc;
    }
    ctx->pc = 0x14E4C4u;
    SET_GPR_U32(ctx, 31, 0x14E4CCu);
    ctx->pc = 0x14E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E4C4u;
            // 0x14e4c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D9A0u;
    if (runtime->hasFunction(0x14D9A0u)) {
        auto targetFn = runtime->lookupFunction(0x14D9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4CCu; }
        if (ctx->pc != 0x14E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14d9a0_0x14da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4CCu; }
        if (ctx->pc != 0x14E4CCu) { return; }
    }
    ctx->pc = 0x14E4CCu;
label_14e4cc:
    // 0x14e4cc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_14e4d0:
    if (ctx->pc == 0x14E4D0u) {
        ctx->pc = 0x14E4D4u;
        goto label_14e4d4;
    }
    ctx->pc = 0x14E4CCu;
    {
        const bool branch_taken_0x14e4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4cc) {
            ctx->pc = 0x14E538u;
            goto label_14e538;
        }
    }
    ctx->pc = 0x14E4D4u;
label_14e4d4:
    // 0x14e4d4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e4d8:
    // 0x14e4d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e4dc:
    // 0x14e4dc: 0xc05369e  jal         func_14DA78
label_14e4e0:
    if (ctx->pc == 0x14E4E0u) {
        ctx->pc = 0x14E4E0u;
            // 0x14e4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E4E4u;
        goto label_14e4e4;
    }
    ctx->pc = 0x14E4DCu;
    SET_GPR_U32(ctx, 31, 0x14E4E4u);
    ctx->pc = 0x14E4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E4DCu;
            // 0x14e4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DA78u;
    if (runtime->hasFunction(0x14DA78u)) {
        auto targetFn = runtime->lookupFunction(0x14DA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4E4u; }
        if (ctx->pc != 0x14E4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14da78_0x14db88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4E4u; }
        if (ctx->pc != 0x14E4E4u) { return; }
    }
    ctx->pc = 0x14E4E4u;
label_14e4e4:
    // 0x14e4e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_14e4e8:
    if (ctx->pc == 0x14E4E8u) {
        ctx->pc = 0x14E4ECu;
        goto label_14e4ec;
    }
    ctx->pc = 0x14E4E4u;
    {
        const bool branch_taken_0x14e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4e4) {
            ctx->pc = 0x14E538u;
            goto label_14e538;
        }
    }
    ctx->pc = 0x14E4ECu;
label_14e4ec:
    // 0x14e4ec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e4f0:
    // 0x14e4f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e4f4:
    // 0x14e4f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e4f8:
    // 0x14e4f8: 0xc0536e2  jal         func_14DB88
label_14e4fc:
    if (ctx->pc == 0x14E4FCu) {
        ctx->pc = 0x14E4FCu;
            // 0x14e4fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14E500u;
        goto label_14e500;
    }
    ctx->pc = 0x14E4F8u;
    SET_GPR_U32(ctx, 31, 0x14E500u);
    ctx->pc = 0x14E4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E4F8u;
            // 0x14e4fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB88u;
    if (runtime->hasFunction(0x14DB88u)) {
        auto targetFn = runtime->lookupFunction(0x14DB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E500u; }
        if (ctx->pc != 0x14E500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14db88_0x14dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E500u; }
        if (ctx->pc != 0x14E500u) { return; }
    }
    ctx->pc = 0x14E500u;
label_14e500:
    // 0x14e500: 0x1000000d  b           . + 4 + (0xD << 2)
label_14e504:
    if (ctx->pc == 0x14E504u) {
        ctx->pc = 0x14E508u;
        goto label_14e508;
    }
    ctx->pc = 0x14E500u;
    {
        const bool branch_taken_0x14e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e500) {
            ctx->pc = 0x14E538u;
            goto label_14e538;
        }
    }
    ctx->pc = 0x14E508u;
label_14e508:
    // 0x14e508: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e50c:
    // 0x14e50c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e510:
    // 0x14e510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e514:
    // 0x14e514: 0xc0536e2  jal         func_14DB88
label_14e518:
    if (ctx->pc == 0x14E518u) {
        ctx->pc = 0x14E518u;
            // 0x14e518: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x14E51Cu;
        goto label_14e51c;
    }
    ctx->pc = 0x14E514u;
    SET_GPR_U32(ctx, 31, 0x14E51Cu);
    ctx->pc = 0x14E518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E514u;
            // 0x14e518: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB88u;
    if (runtime->hasFunction(0x14DB88u)) {
        auto targetFn = runtime->lookupFunction(0x14DB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E51Cu; }
        if (ctx->pc != 0x14E51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14db88_0x14dc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E51Cu; }
        if (ctx->pc != 0x14E51Cu) { return; }
    }
    ctx->pc = 0x14E51Cu;
label_14e51c:
    // 0x14e51c: 0x10000006  b           . + 4 + (0x6 << 2)
label_14e520:
    if (ctx->pc == 0x14E520u) {
        ctx->pc = 0x14E524u;
        goto label_14e524;
    }
    ctx->pc = 0x14E51Cu;
    {
        const bool branch_taken_0x14e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e51c) {
            ctx->pc = 0x14E538u;
            goto label_14e538;
        }
    }
    ctx->pc = 0x14E524u;
label_14e524:
    // 0x14e524: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x14e524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14e528:
    // 0x14e528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e52c:
    // 0x14e52c: 0xc053618  jal         func_14D860
label_14e530:
    if (ctx->pc == 0x14E530u) {
        ctx->pc = 0x14E530u;
            // 0x14e530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14E534u;
        goto label_14e534;
    }
    ctx->pc = 0x14E52Cu;
    SET_GPR_U32(ctx, 31, 0x14E534u);
    ctx->pc = 0x14E530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E52Cu;
            // 0x14e530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D860u;
    if (runtime->hasFunction(0x14D860u)) {
        auto targetFn = runtime->lookupFunction(0x14D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E534u; }
        if (ctx->pc != 0x14E534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14d860_0x14d9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E534u; }
        if (ctx->pc != 0x14E534u) { return; }
    }
    ctx->pc = 0x14E534u;
label_14e534:
    // 0x14e534: 0x0  nop
    ctx->pc = 0x14e534u;
    // NOP
label_14e538:
    // 0x14e538: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_14e53c:
    if (ctx->pc == 0x14E53Cu) {
        ctx->pc = 0x14E53Cu;
            // 0x14e53c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x14E540u;
        goto label_14e540;
    }
    ctx->pc = 0x14E538u;
    {
        const bool branch_taken_0x14e538 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E538u;
            // 0x14e53c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e538) {
            ctx->pc = 0x14E54Cu;
            goto label_14e54c;
        }
    }
    ctx->pc = 0x14E540u;
label_14e540:
    // 0x14e540: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14e540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_14e544:
    // 0x14e544: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x14e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_14e548:
    // 0x14e548: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x14e548u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_14e54c:
    // 0x14e54c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14e54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e550:
    // 0x14e550: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14e550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14e554:
    // 0x14e554: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14e554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14e558:
    // 0x14e558: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14e558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14e55c:
    // 0x14e55c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e55cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14e560:
    // 0x14e560: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14e560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14e564:
    // 0x14e564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14e568:
    // 0x14e568: 0x3e00008  jr          $ra
label_14e56c:
    if (ctx->pc == 0x14E56Cu) {
        ctx->pc = 0x14E56Cu;
            // 0x14e56c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x14E570u;
        goto label_fallthrough_0x14e568;
    }
    ctx->pc = 0x14E568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E568u;
            // 0x14e56c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E3B0u: goto label_14e3b0;
            case 0x14E3B4u: goto label_14e3b4;
            case 0x14E3B8u: goto label_14e3b8;
            case 0x14E3BCu: goto label_14e3bc;
            case 0x14E3C0u: goto label_14e3c0;
            case 0x14E3C4u: goto label_14e3c4;
            case 0x14E3C8u: goto label_14e3c8;
            case 0x14E3CCu: goto label_14e3cc;
            case 0x14E3D0u: goto label_14e3d0;
            case 0x14E3D4u: goto label_14e3d4;
            case 0x14E3D8u: goto label_14e3d8;
            case 0x14E3DCu: goto label_14e3dc;
            case 0x14E3E0u: goto label_14e3e0;
            case 0x14E3E4u: goto label_14e3e4;
            case 0x14E3E8u: goto label_14e3e8;
            case 0x14E3ECu: goto label_14e3ec;
            case 0x14E3F0u: goto label_14e3f0;
            case 0x14E3F4u: goto label_14e3f4;
            case 0x14E3F8u: goto label_14e3f8;
            case 0x14E3FCu: goto label_14e3fc;
            case 0x14E400u: goto label_14e400;
            case 0x14E404u: goto label_14e404;
            case 0x14E408u: goto label_14e408;
            case 0x14E40Cu: goto label_14e40c;
            case 0x14E410u: goto label_14e410;
            case 0x14E414u: goto label_14e414;
            case 0x14E418u: goto label_14e418;
            case 0x14E41Cu: goto label_14e41c;
            case 0x14E420u: goto label_14e420;
            case 0x14E424u: goto label_14e424;
            case 0x14E428u: goto label_14e428;
            case 0x14E42Cu: goto label_14e42c;
            case 0x14E430u: goto label_14e430;
            case 0x14E434u: goto label_14e434;
            case 0x14E438u: goto label_14e438;
            case 0x14E43Cu: goto label_14e43c;
            case 0x14E440u: goto label_14e440;
            case 0x14E444u: goto label_14e444;
            case 0x14E448u: goto label_14e448;
            case 0x14E44Cu: goto label_14e44c;
            case 0x14E450u: goto label_14e450;
            case 0x14E454u: goto label_14e454;
            case 0x14E458u: goto label_14e458;
            case 0x14E45Cu: goto label_14e45c;
            case 0x14E460u: goto label_14e460;
            case 0x14E464u: goto label_14e464;
            case 0x14E468u: goto label_14e468;
            case 0x14E46Cu: goto label_14e46c;
            case 0x14E470u: goto label_14e470;
            case 0x14E474u: goto label_14e474;
            case 0x14E478u: goto label_14e478;
            case 0x14E47Cu: goto label_14e47c;
            case 0x14E480u: goto label_14e480;
            case 0x14E484u: goto label_14e484;
            case 0x14E488u: goto label_14e488;
            case 0x14E48Cu: goto label_14e48c;
            case 0x14E490u: goto label_14e490;
            case 0x14E494u: goto label_14e494;
            case 0x14E498u: goto label_14e498;
            case 0x14E49Cu: goto label_14e49c;
            case 0x14E4A0u: goto label_14e4a0;
            case 0x14E4A4u: goto label_14e4a4;
            case 0x14E4A8u: goto label_14e4a8;
            case 0x14E4ACu: goto label_14e4ac;
            case 0x14E4B0u: goto label_14e4b0;
            case 0x14E4B4u: goto label_14e4b4;
            case 0x14E4B8u: goto label_14e4b8;
            case 0x14E4BCu: goto label_14e4bc;
            case 0x14E4C0u: goto label_14e4c0;
            case 0x14E4C4u: goto label_14e4c4;
            case 0x14E4C8u: goto label_14e4c8;
            case 0x14E4CCu: goto label_14e4cc;
            case 0x14E4D0u: goto label_14e4d0;
            case 0x14E4D4u: goto label_14e4d4;
            case 0x14E4D8u: goto label_14e4d8;
            case 0x14E4DCu: goto label_14e4dc;
            case 0x14E4E0u: goto label_14e4e0;
            case 0x14E4E4u: goto label_14e4e4;
            case 0x14E4E8u: goto label_14e4e8;
            case 0x14E4ECu: goto label_14e4ec;
            case 0x14E4F0u: goto label_14e4f0;
            case 0x14E4F4u: goto label_14e4f4;
            case 0x14E4F8u: goto label_14e4f8;
            case 0x14E4FCu: goto label_14e4fc;
            case 0x14E500u: goto label_14e500;
            case 0x14E504u: goto label_14e504;
            case 0x14E508u: goto label_14e508;
            case 0x14E50Cu: goto label_14e50c;
            case 0x14E510u: goto label_14e510;
            case 0x14E514u: goto label_14e514;
            case 0x14E518u: goto label_14e518;
            case 0x14E51Cu: goto label_14e51c;
            case 0x14E520u: goto label_14e520;
            case 0x14E524u: goto label_14e524;
            case 0x14E528u: goto label_14e528;
            case 0x14E52Cu: goto label_14e52c;
            case 0x14E530u: goto label_14e530;
            case 0x14E534u: goto label_14e534;
            case 0x14E538u: goto label_14e538;
            case 0x14E53Cu: goto label_14e53c;
            case 0x14E540u: goto label_14e540;
            case 0x14E544u: goto label_14e544;
            case 0x14E548u: goto label_14e548;
            case 0x14E54Cu: goto label_14e54c;
            case 0x14E550u: goto label_14e550;
            case 0x14E554u: goto label_14e554;
            case 0x14E558u: goto label_14e558;
            case 0x14E55Cu: goto label_14e55c;
            case 0x14E560u: goto label_14e560;
            case 0x14E564u: goto label_14e564;
            case 0x14E568u: goto label_14e568;
            case 0x14E56Cu: goto label_14e56c;
            default: break;
        }
        return;
    }
label_fallthrough_0x14e568:
    ctx->pc = 0x14E570u;
}
