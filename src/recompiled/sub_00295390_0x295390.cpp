#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295390
// Address: 0x295390 - 0x295568
void sub_00295390_0x295390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295390_0x295390");
#endif

    ctx->pc = 0x295390u;

    // 0x295390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x295390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x295394: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x295394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x295398: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x295398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29539c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x29539cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2953a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2953a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2953a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2953a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2953ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2953acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2953b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2953b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2953b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2953b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2953bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2953bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2953c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2953c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2953c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2953c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2953c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2953cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2953CCu;
    {
        const bool branch_taken_0x2953cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2953D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2953CCu;
            // 0x2953d0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953cc) {
            ctx->pc = 0x2953DCu;
            goto label_2953dc;
        }
    }
    ctx->pc = 0x2953D4u;
    // 0x2953d4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2953D4u;
    {
        const bool branch_taken_0x2953d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2953D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2953D4u;
            // 0x2953d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953d4) {
            ctx->pc = 0x295540u;
            goto label_295540;
        }
    }
    ctx->pc = 0x2953DCu;
label_2953dc:
    // 0x2953dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2953dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2953e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953e4: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x2953E4u;
    SET_GPR_U32(ctx, 31, 0x2953ECu);
    ctx->pc = 0x2953E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2953E4u;
            // 0x2953e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953ECu; }
        if (ctx->pc != 0x2953ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953ECu; }
        if (ctx->pc != 0x2953ECu) { return; }
    }
    ctx->pc = 0x2953ECu;
    // 0x2953ec: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2953ECu;
    {
        const bool branch_taken_0x2953ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2953F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2953ECu;
            // 0x2953f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953ec) {
            ctx->pc = 0x295420u;
            goto label_295420;
        }
    }
    ctx->pc = 0x2953F4u;
    // 0x2953f4: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2953F4u;
    SET_GPR_U32(ctx, 31, 0x2953FCu);
    ctx->pc = 0x2953F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2953F4u;
            // 0x2953f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953FCu; }
        if (ctx->pc != 0x2953FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2953FCu; }
        if (ctx->pc != 0x2953FCu) { return; }
    }
    ctx->pc = 0x2953FCu;
    // 0x2953fc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2953fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295404: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x295404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295408: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29540c: 0x2a0f809  jalr        $s5
    ctx->pc = 0x29540Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x295414u);
        ctx->pc = 0x295410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29540Cu;
            // 0x295410: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x295414u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2953DCu: goto label_2953dc;
            case 0x295420u: goto label_295420;
            case 0x295440u: goto label_295440;
            case 0x295454u: goto label_295454;
            case 0x295474u: goto label_295474;
            case 0x295498u: goto label_295498;
            case 0x2954ACu: goto label_2954ac;
            case 0x2954C4u: goto label_2954c4;
            case 0x29551Cu: goto label_29551c;
            case 0x295530u: goto label_295530;
            case 0x295540u: goto label_295540;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295414u; }
            if (ctx->pc != 0x295414u) { return; }
        }
        }
    }
    ctx->pc = 0x295414u;
    // 0x295414: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x295414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295418: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x295418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29541c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x29541cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_295420:
    // 0x295420: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x295420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x295424: 0xdc256898  ld          $a1, 0x6898($at)
    ctx->pc = 0x295424u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x295428: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x295428u;
    SET_GPR_U32(ctx, 31, 0x295430u);
    ctx->pc = 0x29542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295428u;
            // 0x29542c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295430u; }
        if (ctx->pc != 0x295430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295430u; }
        if (ctx->pc != 0x295430u) { return; }
    }
    ctx->pc = 0x295430u;
    // 0x295430: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x295430u;
    {
        const bool branch_taken_0x295430 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x295434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295430u;
            // 0x295434: 0x3c13002c  lui         $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295430) {
            ctx->pc = 0x295474u;
            goto label_295474;
        }
    }
    ctx->pc = 0x295438u;
    // 0x295438: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x295438u;
    {
        const bool branch_taken_0x295438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295438) {
            ctx->pc = 0x295454u;
            goto label_295454;
        }
    }
    ctx->pc = 0x295440u;
label_295440:
    // 0x295440: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x295440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x295444: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x295444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x295448: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x295448u;
    SET_GPR_U32(ctx, 31, 0x295450u);
    ctx->pc = 0x29544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295448u;
            // 0x29544c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295450u; }
        if (ctx->pc != 0x295450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295450u; }
        if (ctx->pc != 0x295450u) { return; }
    }
    ctx->pc = 0x295450u;
    // 0x295450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295454:
    // 0x295454: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x295454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x295458: 0xdc2568a0  ld          $a1, 0x68A0($at)
    ctx->pc = 0x295458u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 26784)));
    // 0x29545c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x29545Cu;
    SET_GPR_U32(ctx, 31, 0x295464u);
    ctx->pc = 0x295460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29545Cu;
            // 0x295460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295464u; }
        if (ctx->pc != 0x295464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295464u; }
        if (ctx->pc != 0x295464u) { return; }
    }
    ctx->pc = 0x295464u;
    // 0x295464: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x295464u;
    {
        const bool branch_taken_0x295464 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x295468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295464u;
            // 0x295468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295464) {
            ctx->pc = 0x295440u;
            runtime->cooperativeGuestYield();
            goto label_295440;
        }
    }
    ctx->pc = 0x29546Cu;
    // 0x29546c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29546Cu;
    {
        const bool branch_taken_0x29546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29546c) {
            ctx->pc = 0x2954C4u;
            goto label_2954c4;
        }
    }
    ctx->pc = 0x295474u;
label_295474:
    // 0x295474: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x295474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x295478: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x295478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x29547c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x29547Cu;
    SET_GPR_U32(ctx, 31, 0x295484u);
    ctx->pc = 0x295480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29547Cu;
            // 0x295480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295484u; }
        if (ctx->pc != 0x295484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295484u; }
        if (ctx->pc != 0x295484u) { return; }
    }
    ctx->pc = 0x295484u;
    // 0x295484: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x295484u;
    {
        const bool branch_taken_0x295484 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x295488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295484u;
            // 0x295488: 0x3c13002c  lui         $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295484) {
            ctx->pc = 0x2954C4u;
            goto label_2954c4;
        }
    }
    ctx->pc = 0x29548Cu;
    // 0x29548c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29548Cu;
    {
        const bool branch_taken_0x29548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29548c) {
            ctx->pc = 0x2954ACu;
            goto label_2954ac;
        }
    }
    ctx->pc = 0x295494u;
    // 0x295494: 0x0  nop
    ctx->pc = 0x295494u;
    // NOP
label_295498:
    // 0x295498: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x295498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x29549c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x29549cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2954a0: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x2954A0u;
    SET_GPR_U32(ctx, 31, 0x2954A8u);
    ctx->pc = 0x2954A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954A0u;
            // 0x2954a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954A8u; }
        if (ctx->pc != 0x2954A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954A8u; }
        if (ctx->pc != 0x2954A8u) { return; }
    }
    ctx->pc = 0x2954A8u;
    // 0x2954a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2954a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2954ac:
    // 0x2954ac: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2954acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2954b0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2954b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2954b4: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x2954B4u;
    SET_GPR_U32(ctx, 31, 0x2954BCu);
    ctx->pc = 0x2954B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954B4u;
            // 0x2954b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954BCu; }
        if (ctx->pc != 0x2954BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954BCu; }
        if (ctx->pc != 0x2954BCu) { return; }
    }
    ctx->pc = 0x2954BCu;
    // 0x2954bc: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2954BCu;
    {
        const bool branch_taken_0x2954bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2954C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2954BCu;
            // 0x2954c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954bc) {
            ctx->pc = 0x295498u;
            runtime->cooperativeGuestYield();
            goto label_295498;
        }
    }
    ctx->pc = 0x2954C4u;
label_2954c4:
    // 0x2954c4: 0x3c01002c  lui         $at, 0x2C
    ctx->pc = 0x2954c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44 << 16));
    // 0x2954c8: 0xdc2568a8  ld          $a1, 0x68A8($at)
    ctx->pc = 0x2954c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 26792)));
    // 0x2954cc: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2954CCu;
    SET_GPR_U32(ctx, 31, 0x2954D4u);
    ctx->pc = 0x2954D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954CCu;
            // 0x2954d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954D4u; }
        if (ctx->pc != 0x2954D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954D4u; }
        if (ctx->pc != 0x2954D4u) { return; }
    }
    ctx->pc = 0x2954D4u;
    // 0x2954d4: 0xc0a6b90  jal         func_29AE40
    ctx->pc = 0x2954D4u;
    SET_GPR_U32(ctx, 31, 0x2954DCu);
    ctx->pc = 0x2954D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954D4u;
            // 0x2954d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AE40u;
    if (runtime->hasFunction(0x29AE40u)) {
        auto targetFn = runtime->lookupFunction(0x29AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954DCu; }
        if (ctx->pc != 0x2954DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AE40_0x29ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954DCu; }
        if (ctx->pc != 0x2954DCu) { return; }
    }
    ctx->pc = 0x2954DCu;
    // 0x2954dc: 0xc0a54c0  jal         func_295300
    ctx->pc = 0x2954DCu;
    SET_GPR_U32(ctx, 31, 0x2954E4u);
    ctx->pc = 0x2954E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954DCu;
            // 0x2954e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295300u;
    if (runtime->hasFunction(0x295300u)) {
        auto targetFn = runtime->lookupFunction(0x295300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954E4u; }
        if (ctx->pc != 0x2954E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_295300_0x295390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954E4u; }
        if (ctx->pc != 0x2954E4u) { return; }
    }
    ctx->pc = 0x2954E4u;
    // 0x2954e4: 0x26676880  addiu       $a3, $s3, 0x6880
    ctx->pc = 0x2954e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 26752));
    // 0x2954e8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2954e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2954ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2954ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2954f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2954f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2954f4: 0xc0a58ca  jal         func_296328
    ctx->pc = 0x2954F4u;
    SET_GPR_U32(ctx, 31, 0x2954FCu);
    ctx->pc = 0x2954F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2954F4u;
            // 0x2954f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296328u;
    if (runtime->hasFunction(0x296328u)) {
        auto targetFn = runtime->lookupFunction(0x296328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954FCu; }
        if (ctx->pc != 0x2954FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296328_0x296328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2954FCu; }
        if (ctx->pc != 0x2954FCu) { return; }
    }
    ctx->pc = 0x2954FCu;
    // 0x2954fc: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2954FCu;
    {
        const bool branch_taken_0x2954fc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x295500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2954FCu;
            // 0x295500: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954fc) {
            ctx->pc = 0x29551Cu;
            goto label_29551c;
        }
    }
    ctx->pc = 0x295504u;
    // 0x295504: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x295504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x295508: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x295508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29550c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295510: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295514: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x295514u;
    {
        const bool branch_taken_0x295514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295514u;
            // 0x295518: 0x24e76888  addiu       $a3, $a3, 0x6888 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295514) {
            ctx->pc = 0x295530u;
            goto label_295530;
        }
    }
    ctx->pc = 0x29551Cu;
label_29551c:
    // 0x29551c: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x29551cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x295520: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x295520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295524: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x295524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295528: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29552c: 0x24e76890  addiu       $a3, $a3, 0x6890
    ctx->pc = 0x29552cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26768));
label_295530:
    // 0x295530: 0xc0a58ca  jal         func_296328
    ctx->pc = 0x295530u;
    SET_GPR_U32(ctx, 31, 0x295538u);
    ctx->pc = 0x295534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295530u;
            // 0x295534: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296328u;
    if (runtime->hasFunction(0x296328u)) {
        auto targetFn = runtime->lookupFunction(0x296328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295538u; }
        if (ctx->pc != 0x295538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296328_0x296328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295538u; }
        if (ctx->pc != 0x295538u) { return; }
    }
    ctx->pc = 0x295538u;
    // 0x295538: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x295538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29553c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x29553cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_295540:
    // 0x295540: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x295540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295544: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x295544u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295548: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x295548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29554c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29554cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295550: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x295550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295554: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x295554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295558: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29555c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29555cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295560: 0x3e00008  jr          $ra
    ctx->pc = 0x295560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295560u;
            // 0x295564: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2953DCu: goto label_2953dc;
            case 0x295420u: goto label_295420;
            case 0x295440u: goto label_295440;
            case 0x295454u: goto label_295454;
            case 0x295474u: goto label_295474;
            case 0x295498u: goto label_295498;
            case 0x2954ACu: goto label_2954ac;
            case 0x2954C4u: goto label_2954c4;
            case 0x29551Cu: goto label_29551c;
            case 0x295530u: goto label_295530;
            case 0x295540u: goto label_295540;
            default: break;
        }
        return;
    }
    ctx->pc = 0x295568u;
}
