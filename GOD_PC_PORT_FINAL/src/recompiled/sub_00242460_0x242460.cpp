#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242460
// Address: 0x242460 - 0x242710
void sub_00242460_0x242460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242460_0x242460");
#endif

    ctx->pc = 0x242460u;

    // 0x242460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242464: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x242464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x242468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24246c: 0x24422338  addiu       $v0, $v0, 0x2338
    ctx->pc = 0x24246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9016));
    // 0x242470: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x242470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x242474: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x242474u;
    {
        const bool branch_taken_0x242474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242474u;
            // 0x242478: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242474) {
            ctx->pc = 0x242484u;
            goto label_242484;
        }
    }
    ctx->pc = 0x24247Cu;
    // 0x24247c: 0xc069424  jal         func_1A5090
    ctx->pc = 0x24247Cu;
    SET_GPR_U32(ctx, 31, 0x242484u);
    ctx->pc = 0x1A5090u;
    if (runtime->hasFunction(0x1A5090u)) {
        auto targetFn = runtime->lookupFunction(0x1A5090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242484u; }
        if (ctx->pc != 0x242484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5090_0x1a50b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242484u; }
        if (ctx->pc != 0x242484u) { return; }
    }
    ctx->pc = 0x242484u;
label_242484:
    // 0x242484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242488: 0x3e00008  jr          $ra
    ctx->pc = 0x242488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242488u;
            // 0x24248c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242490u;
    // 0x242490: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242494: 0x0  nop
    ctx->pc = 0x242494u;
    // NOP
    // 0x242498: 0x3e00008  jr          $ra
    ctx->pc = 0x242498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242498u;
            // 0x24249c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2424A0u;
    // 0x2424a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2424A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2424A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424A0u;
            // 0x2424a4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2424A8u;
    // 0x2424a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2424A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2424ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424A8u;
            // 0x2424ac: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2424B0u;
    // 0x2424b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2424b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2424b4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2424b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2424b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2424b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2424bc: 0x24422338  addiu       $v0, $v0, 0x2338
    ctx->pc = 0x2424bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9016));
    // 0x2424c0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2424c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2424c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2424C4u;
    {
        const bool branch_taken_0x2424c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2424C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424C4u;
            // 0x2424c8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424c4) {
            ctx->pc = 0x2424D4u;
            goto label_2424d4;
        }
    }
    ctx->pc = 0x2424CCu;
    // 0x2424cc: 0xc069474  jal         func_1A51D0
    ctx->pc = 0x2424CCu;
    SET_GPR_U32(ctx, 31, 0x2424D4u);
    ctx->pc = 0x1A51D0u;
    if (runtime->hasFunction(0x1A51D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A51D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424D4u; }
        if (ctx->pc != 0x2424D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a51d0_0x1a51f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424D4u; }
        if (ctx->pc != 0x2424D4u) { return; }
    }
    ctx->pc = 0x2424D4u;
label_2424d4:
    // 0x2424d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2424d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2424d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2424D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2424DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424D8u;
            // 0x2424dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2424E0u;
    // 0x2424e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2424E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2424E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424E0u;
            // 0x2424e4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2424E8u;
    // 0x2424e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2424E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2424ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424E8u;
            // 0x2424ec: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2424F0u;
    // 0x2424f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2424F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2424F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424F0u;
            // 0x2424f4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2424F8u;
    // 0x2424f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2424f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2424fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2424fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x242500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242504: 0x24422338  addiu       $v0, $v0, 0x2338
    ctx->pc = 0x242504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9016));
    // 0x242508: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x242508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x24250c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24250Cu;
    {
        const bool branch_taken_0x24250c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24250Cu;
            // 0x242510: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24250c) {
            ctx->pc = 0x24251Cu;
            goto label_24251c;
        }
    }
    ctx->pc = 0x242514u;
    // 0x242514: 0xc0694a6  jal         func_1A5298
    ctx->pc = 0x242514u;
    SET_GPR_U32(ctx, 31, 0x24251Cu);
    ctx->pc = 0x1A5298u;
    if (runtime->hasFunction(0x1A5298u)) {
        auto targetFn = runtime->lookupFunction(0x1A5298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24251Cu; }
        if (ctx->pc != 0x24251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5298_0x1a52c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24251Cu; }
        if (ctx->pc != 0x24251Cu) { return; }
    }
    ctx->pc = 0x24251Cu;
label_24251c:
    // 0x24251c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24251cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242520: 0x3e00008  jr          $ra
    ctx->pc = 0x242520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242520u;
            // 0x242524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242528u;
    // 0x242528: 0x3e00008  jr          $ra
    ctx->pc = 0x242528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242528u;
            // 0x24252c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242530u;
    // 0x242530: 0x3e00008  jr          $ra
    ctx->pc = 0x242530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242530u;
            // 0x242534: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242538u;
    // 0x242538: 0x3e00008  jr          $ra
    ctx->pc = 0x242538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24253Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242538u;
            // 0x24253c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242540u;
    // 0x242540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242544: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x242544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x242548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24254c: 0x24422338  addiu       $v0, $v0, 0x2338
    ctx->pc = 0x24254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9016));
    // 0x242550: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x242550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x242554: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x242554u;
    {
        const bool branch_taken_0x242554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242554u;
            // 0x242558: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242554) {
            ctx->pc = 0x242564u;
            goto label_242564;
        }
    }
    ctx->pc = 0x24255Cu;
    // 0x24255c: 0xc0694d8  jal         func_1A5360
    ctx->pc = 0x24255Cu;
    SET_GPR_U32(ctx, 31, 0x242564u);
    ctx->pc = 0x1A5360u;
    if (runtime->hasFunction(0x1A5360u)) {
        auto targetFn = runtime->lookupFunction(0x1A5360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242564u; }
        if (ctx->pc != 0x242564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5360_0x1a5388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242564u; }
        if (ctx->pc != 0x242564u) { return; }
    }
    ctx->pc = 0x242564u;
label_242564:
    // 0x242564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242568: 0x3e00008  jr          $ra
    ctx->pc = 0x242568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24256Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242568u;
            // 0x24256c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242570u;
    // 0x242570: 0x3e00008  jr          $ra
    ctx->pc = 0x242570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242570u;
            // 0x242574: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242578u;
    // 0x242578: 0x3e00008  jr          $ra
    ctx->pc = 0x242578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24257Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242578u;
            // 0x24257c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242580u;
    // 0x242580: 0x3e00008  jr          $ra
    ctx->pc = 0x242580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242580u;
            // 0x242584: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242588u;
    // 0x242588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24258c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x24258cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x242590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242594: 0x24422338  addiu       $v0, $v0, 0x2338
    ctx->pc = 0x242594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9016));
    // 0x242598: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x242598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x24259c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24259Cu;
    {
        const bool branch_taken_0x24259c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2425A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24259Cu;
            // 0x2425a0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24259c) {
            ctx->pc = 0x2425ACu;
            goto label_2425ac;
        }
    }
    ctx->pc = 0x2425A4u;
    // 0x2425a4: 0xc0694ec  jal         func_1A53B0
    ctx->pc = 0x2425A4u;
    SET_GPR_U32(ctx, 31, 0x2425ACu);
    ctx->pc = 0x1A53B0u;
    if (runtime->hasFunction(0x1A53B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A53B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425ACu; }
        if (ctx->pc != 0x2425ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a53b0_0x1a53d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425ACu; }
        if (ctx->pc != 0x2425ACu) { return; }
    }
    ctx->pc = 0x2425ACu;
label_2425ac:
    // 0x2425ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2425acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2425b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2425B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2425B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425B0u;
            // 0x2425b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2425B8u;
    // 0x2425b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2425B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2425BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425B8u;
            // 0x2425bc: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2425C0u;
    // 0x2425c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2425C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2425C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425C0u;
            // 0x2425c4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2425C8u;
    // 0x2425c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2425C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2425CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425C8u;
            // 0x2425cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2425D0u;
    // 0x2425d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2425d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2425d4: 0x0  nop
    ctx->pc = 0x2425d4u;
    // NOP
    // 0x2425d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2425d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2425dc: 0x0  nop
    ctx->pc = 0x2425dcu;
    // NOP
    // 0x2425e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2425e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2425e4: 0x0  nop
    ctx->pc = 0x2425e4u;
    // NOP
    // 0x2425e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2425e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2425ec: 0x0  nop
    ctx->pc = 0x2425ecu;
    // NOP
    // 0x2425f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2425F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2425F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425F0u;
            // 0x2425f4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2425F8u;
    // 0x2425f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2425F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2425FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425F8u;
            // 0x2425fc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242600u;
    // 0x242600: 0x3e00008  jr          $ra
    ctx->pc = 0x242600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242600u;
            // 0x242604: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242608u;
    // 0x242608: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24260c: 0x0  nop
    ctx->pc = 0x24260cu;
    // NOP
    // 0x242610: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242614: 0x0  nop
    ctx->pc = 0x242614u;
    // NOP
    // 0x242618: 0x3e00008  jr          $ra
    ctx->pc = 0x242618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242618u;
            // 0x24261c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242620u;
    // 0x242620: 0x3e00008  jr          $ra
    ctx->pc = 0x242620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242620u;
            // 0x242624: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242628u;
    // 0x242628: 0x3e00008  jr          $ra
    ctx->pc = 0x242628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24262Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242628u;
            // 0x24262c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242630u;
    // 0x242630: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242634: 0x0  nop
    ctx->pc = 0x242634u;
    // NOP
    // 0x242638: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x242638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24263c: 0x0  nop
    ctx->pc = 0x24263cu;
    // NOP
    // 0x242640: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x242640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x242644: 0x0  nop
    ctx->pc = 0x242644u;
    // NOP
    // 0x242648: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24264c: 0x0  nop
    ctx->pc = 0x24264cu;
    // NOP
    // 0x242650: 0x3e00008  jr          $ra
    ctx->pc = 0x242650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242650u;
            // 0x242654: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242658u;
    // 0x242658: 0x3e00008  jr          $ra
    ctx->pc = 0x242658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242658u;
            // 0x24265c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242660u;
    // 0x242660: 0x3e00008  jr          $ra
    ctx->pc = 0x242660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242660u;
            // 0x242664: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242668u;
    // 0x242668: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x242668u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x24266c: 0x0  nop
    ctx->pc = 0x24266cu;
    // NOP
    // 0x242670: 0x8c420f08  lw          $v0, 0xF08($v0)
    ctx->pc = 0x242670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x242674: 0x0  nop
    ctx->pc = 0x242674u;
    // NOP
    // 0x242678: 0x8c420eb4  lw          $v0, 0xEB4($v0)
    ctx->pc = 0x242678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3764)));
    // 0x24267c: 0x0  nop
    ctx->pc = 0x24267cu;
    // NOP
    // 0x242680: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242684: 0x0  nop
    ctx->pc = 0x242684u;
    // NOP
    // 0x242688: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24268c: 0x0  nop
    ctx->pc = 0x24268cu;
    // NOP
    // 0x242690: 0x3e00008  jr          $ra
    ctx->pc = 0x242690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242698u;
    // 0x242698: 0x3e00008  jr          $ra
    ctx->pc = 0x242698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2426A0u;
    // 0x2426a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2426A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2426A8u;
    // 0x2426a8: 0xc4400ec0  lwc1        $f0, 0xEC0($v0)
    ctx->pc = 0x2426a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2426ac: 0x0  nop
    ctx->pc = 0x2426acu;
    // NOP
    // 0x2426b0: 0xac440ec8  sw          $a0, 0xEC8($v0)
    ctx->pc = 0x2426b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3784), GPR_U32(ctx, 4));
    // 0x2426b4: 0x0  nop
    ctx->pc = 0x2426b4u;
    // NOP
    // 0x2426b8: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2426b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2426bc: 0x0  nop
    ctx->pc = 0x2426bcu;
    // NOP
    // 0x2426c0: 0xac440ecc  sw          $a0, 0xECC($v0)
    ctx->pc = 0x2426c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3788), GPR_U32(ctx, 4));
    // 0x2426c4: 0x0  nop
    ctx->pc = 0x2426c4u;
    // NOP
    // 0x2426c8: 0x8c420ecc  lw          $v0, 0xECC($v0)
    ctx->pc = 0x2426c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3788)));
    // 0x2426cc: 0x0  nop
    ctx->pc = 0x2426ccu;
    // NOP
    // 0x2426d0: 0xac440ed0  sw          $a0, 0xED0($v0)
    ctx->pc = 0x2426d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3792), GPR_U32(ctx, 4));
    // 0x2426d4: 0x0  nop
    ctx->pc = 0x2426d4u;
    // NOP
    // 0x2426d8: 0x8c420ed0  lw          $v0, 0xED0($v0)
    ctx->pc = 0x2426d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2426dc: 0x0  nop
    ctx->pc = 0x2426dcu;
    // NOP
    // 0x2426e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2426e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2426e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2426e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2426e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2426e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2426ec: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x2426ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x2426f0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2426f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2426f4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2426F4u;
    {
        const bool branch_taken_0x2426f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2426F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2426F4u;
            // 0x2426f8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426f4) {
            ctx->pc = 0x242704u;
            goto label_242704;
        }
    }
    ctx->pc = 0x2426FCu;
    // 0x2426fc: 0xc09662c  jal         func_2598B0
    ctx->pc = 0x2426FCu;
    SET_GPR_U32(ctx, 31, 0x242704u);
    ctx->pc = 0x2598B0u;
    if (runtime->hasFunction(0x2598B0u)) {
        auto targetFn = runtime->lookupFunction(0x2598B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242704u; }
        if (ctx->pc != 0x242704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002598B0_0x2598b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242704u; }
        if (ctx->pc != 0x242704u) { return; }
    }
    ctx->pc = 0x242704u;
label_242704:
    // 0x242704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242708: 0x3e00008  jr          $ra
    ctx->pc = 0x242708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24270Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242708u;
            // 0x24270c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242484u: goto label_242484;
            case 0x2424D4u: goto label_2424d4;
            case 0x24251Cu: goto label_24251c;
            case 0x242564u: goto label_242564;
            case 0x2425ACu: goto label_2425ac;
            case 0x242704u: goto label_242704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242710u;
}
