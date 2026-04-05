#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172778
// Address: 0x172778 - 0x172870
void sub_00172778_0x172778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172778_0x172778");
#endif

    ctx->pc = 0x172778u;

    // 0x172778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17277c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17277cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x172780: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x172780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x172784: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x172784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x172788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17278c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172794: 0x24a525e8  addiu       $a1, $a1, 0x25E8
    ctx->pc = 0x172794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9704));
    // 0x172798: 0xc05f82a  jal         func_17E0A8
    ctx->pc = 0x172798u;
    SET_GPR_U32(ctx, 31, 0x1727A0u);
    ctx->pc = 0x17279Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172798u;
            // 0x17279c: 0x24c6c378  addiu       $a2, $a2, -0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0A8u;
    if (runtime->hasFunction(0x17E0A8u)) {
        auto targetFn = runtime->lookupFunction(0x17E0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727A0u; }
        if (ctx->pc != 0x1727A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E0A8_0x17e0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727A0u; }
        if (ctx->pc != 0x1727A0u) { return; }
    }
    ctx->pc = 0x1727A0u;
    // 0x1727a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1727a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1727a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1727a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1727a8:
    // 0x1727a8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1727a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1727ac: 0x2442c328  addiu       $v0, $v0, -0x3CD8
    ctx->pc = 0x1727acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951720));
    // 0x1727b0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1727b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1727b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1727b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1727b8: 0x24c6c350  addiu       $a2, $a2, -0x3CB0
    ctx->pc = 0x1727b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951760));
    // 0x1727bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1727bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1727c0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1727c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1727c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1727c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727c8: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x1727C8u;
    SET_GPR_U32(ctx, 31, 0x1727D0u);
    ctx->pc = 0x1727CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1727C8u;
            // 0x1727cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727D0u; }
        if (ctx->pc != 0x1727D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727D0u; }
        if (ctx->pc != 0x1727D0u) { return; }
    }
    ctx->pc = 0x1727D0u;
    // 0x1727d0: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1727d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1727d4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1727D4u;
    {
        const bool branch_taken_0x1727d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1727D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727D4u;
            // 0x1727d8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727d4) {
            ctx->pc = 0x1727A8u;
            runtime->cooperativeGuestYield();
            goto label_1727a8;
        }
    }
    ctx->pc = 0x1727DCu;
    // 0x1727dc: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1727DCu;
    SET_GPR_U32(ctx, 31, 0x1727E4u);
    ctx->pc = 0x1727E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1727DCu;
            // 0x1727e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727E4u; }
        if (ctx->pc != 0x1727E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727E4u; }
        if (ctx->pc != 0x1727E4u) { return; }
    }
    ctx->pc = 0x1727E4u;
    // 0x1727e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1727e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1727e8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1727e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1727ec: 0x24a525f8  addiu       $a1, $a1, 0x25F8
    ctx->pc = 0x1727ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9720));
    // 0x1727f0: 0x24c6c304  addiu       $a2, $a2, -0x3CFC
    ctx->pc = 0x1727f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951684));
    // 0x1727f4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1727F4u;
    SET_GPR_U32(ctx, 31, 0x1727FCu);
    ctx->pc = 0x1727F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1727F4u;
            // 0x1727f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727FCu; }
        if (ctx->pc != 0x1727FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727FCu; }
        if (ctx->pc != 0x1727FCu) { return; }
    }
    ctx->pc = 0x1727FCu;
    // 0x1727fc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1727fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x172800: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x172800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x172804: 0x24a52600  addiu       $a1, $a1, 0x2600
    ctx->pc = 0x172804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    // 0x172808: 0x24c6c308  addiu       $a2, $a2, -0x3CF8
    ctx->pc = 0x172808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951688));
    // 0x17280c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x17280Cu;
    SET_GPR_U32(ctx, 31, 0x172814u);
    ctx->pc = 0x172810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17280Cu;
            // 0x172810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172814u; }
        if (ctx->pc != 0x172814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172814u; }
        if (ctx->pc != 0x172814u) { return; }
    }
    ctx->pc = 0x172814u;
    // 0x172814: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x172814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x172818: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x172818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x17281c: 0x24a52610  addiu       $a1, $a1, 0x2610
    ctx->pc = 0x17281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    // 0x172820: 0x24c6c30c  addiu       $a2, $a2, -0x3CF4
    ctx->pc = 0x172820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951692));
    // 0x172824: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x172824u;
    SET_GPR_U32(ctx, 31, 0x17282Cu);
    ctx->pc = 0x172828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172824u;
            // 0x172828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17282Cu; }
        if (ctx->pc != 0x17282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17282Cu; }
        if (ctx->pc != 0x17282Cu) { return; }
    }
    ctx->pc = 0x17282Cu;
    // 0x17282c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17282cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x172830: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x172830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x172834: 0x24a52620  addiu       $a1, $a1, 0x2620
    ctx->pc = 0x172834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9760));
    // 0x172838: 0x24c6c37c  addiu       $a2, $a2, -0x3C84
    ctx->pc = 0x172838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951804));
    // 0x17283c: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x17283Cu;
    SET_GPR_U32(ctx, 31, 0x172844u);
    ctx->pc = 0x172840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17283Cu;
            // 0x172840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172844u; }
        if (ctx->pc != 0x172844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172844u; }
        if (ctx->pc != 0x172844u) { return; }
    }
    ctx->pc = 0x172844u;
    // 0x172844: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x172844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x172848: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x172848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x17284c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172850: 0x24a52630  addiu       $a1, $a1, 0x2630
    ctx->pc = 0x172850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    // 0x172854: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x172854u;
    SET_GPR_U32(ctx, 31, 0x17285Cu);
    ctx->pc = 0x172858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172854u;
            // 0x172858: 0x24c6c380  addiu       $a2, $a2, -0x3C80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17285Cu; }
        if (ctx->pc != 0x17285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17285Cu; }
        if (ctx->pc != 0x17285Cu) { return; }
    }
    ctx->pc = 0x17285Cu;
    // 0x17285c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17285cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172868: 0x3e00008  jr          $ra
    ctx->pc = 0x172868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172868u;
            // 0x17286c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1727A8u: goto label_1727a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172870u;
}
