#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125888
// Address: 0x125888 - 0x125970
void sub_00125888_0x125888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125888_0x125888");
#endif

    ctx->pc = 0x125888u;

    // 0x125888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12588c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x125890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125894: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x125894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125898: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12589c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1258a0: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1258A0u;
    SET_GPR_U32(ctx, 31, 0x1258A8u);
    ctx->pc = 0x1258A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258A0u;
            // 0x1258a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258A8u; }
        if (ctx->pc != 0x1258A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258A8u; }
        if (ctx->pc != 0x1258A8u) { return; }
    }
    ctx->pc = 0x1258A8u;
    // 0x1258a8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1258a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1258ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1258acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258b0: 0x24a51488  addiu       $a1, $a1, 0x1488
    ctx->pc = 0x1258b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5256));
    // 0x1258b4: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1258B4u;
    SET_GPR_U32(ctx, 31, 0x1258BCu);
    ctx->pc = 0x1258B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258B4u;
            // 0x1258b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258BCu; }
        if (ctx->pc != 0x1258BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258BCu; }
        if (ctx->pc != 0x1258BCu) { return; }
    }
    ctx->pc = 0x1258BCu;
    // 0x1258bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1258bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1258c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1258c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258c4: 0x24a51490  addiu       $a1, $a1, 0x1490
    ctx->pc = 0x1258c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5264));
    // 0x1258c8: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1258C8u;
    SET_GPR_U32(ctx, 31, 0x1258D0u);
    ctx->pc = 0x1258CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258C8u;
            // 0x1258cc: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258D0u; }
        if (ctx->pc != 0x1258D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258D0u; }
        if (ctx->pc != 0x1258D0u) { return; }
    }
    ctx->pc = 0x1258D0u;
    // 0x1258d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1258d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1258d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1258d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258d8: 0x24a51498  addiu       $a1, $a1, 0x1498
    ctx->pc = 0x1258d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5272));
    // 0x1258dc: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1258DCu;
    SET_GPR_U32(ctx, 31, 0x1258E4u);
    ctx->pc = 0x1258E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258DCu;
            // 0x1258e0: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258E4u; }
        if (ctx->pc != 0x1258E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258E4u; }
        if (ctx->pc != 0x1258E4u) { return; }
    }
    ctx->pc = 0x1258E4u;
    // 0x1258e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1258e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1258e8: 0x2626000c  addiu       $a2, $s1, 0xC
    ctx->pc = 0x1258e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1258ec: 0x24a514a0  addiu       $a1, $a1, 0x14A0
    ctx->pc = 0x1258ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5280));
    // 0x1258f0: 0xc05f6cc  jal         func_17DB30
    ctx->pc = 0x1258F0u;
    SET_GPR_U32(ctx, 31, 0x1258F8u);
    ctx->pc = 0x1258F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258F0u;
            // 0x1258f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DB30u;
    if (runtime->hasFunction(0x17DB30u)) {
        auto targetFn = runtime->lookupFunction(0x17DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258F8u; }
        if (ctx->pc != 0x1258F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17db30_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258F8u; }
        if (ctx->pc != 0x1258F8u) { return; }
    }
    ctx->pc = 0x1258F8u;
    // 0x1258f8: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x1258F8u;
    SET_GPR_U32(ctx, 31, 0x125900u);
    ctx->pc = 0x1258FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258F8u;
            // 0x1258fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125900u; }
        if (ctx->pc != 0x125900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125900u; }
        if (ctx->pc != 0x125900u) { return; }
    }
    ctx->pc = 0x125900u;
    // 0x125900: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x125900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x125904: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x125904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x125908: 0x24a514a8  addiu       $a1, $a1, 0x14A8
    ctx->pc = 0x125908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5288));
    // 0x12590c: 0xc05f744  jal         func_17DD10
    ctx->pc = 0x12590Cu;
    SET_GPR_U32(ctx, 31, 0x125914u);
    ctx->pc = 0x125910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12590Cu;
            // 0x125910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DD10u;
    if (runtime->hasFunction(0x17DD10u)) {
        auto targetFn = runtime->lookupFunction(0x17DD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125914u; }
        if (ctx->pc != 0x125914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DD10_0x17dd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125914u; }
        if (ctx->pc != 0x125914u) { return; }
    }
    ctx->pc = 0x125914u;
    // 0x125914: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x125914u;
    SET_GPR_U32(ctx, 31, 0x12591Cu);
    ctx->pc = 0x125918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125914u;
            // 0x125918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12591Cu; }
        if (ctx->pc != 0x12591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12591Cu; }
        if (ctx->pc != 0x12591Cu) { return; }
    }
    ctx->pc = 0x12591Cu;
    // 0x12591c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x12591cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x125920: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x125924: 0x24a514b0  addiu       $a1, $a1, 0x14B0
    ctx->pc = 0x125924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5296));
    // 0x125928: 0x26260034  addiu       $a2, $s1, 0x34
    ctx->pc = 0x125928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x12592c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12592cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125930: 0x24e74648  addiu       $a3, $a3, 0x4648
    ctx->pc = 0x125930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17992));
    // 0x125934: 0xc05f91e  jal         func_17E478
    ctx->pc = 0x125934u;
    SET_GPR_U32(ctx, 31, 0x12593Cu);
    ctx->pc = 0x125938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125934u;
            // 0x125938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E478u;
    if (runtime->hasFunction(0x17E478u)) {
        auto targetFn = runtime->lookupFunction(0x17E478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12593Cu; }
        if (ctx->pc != 0x12593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E478_0x17e478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12593Cu; }
        if (ctx->pc != 0x12593Cu) { return; }
    }
    ctx->pc = 0x12593Cu;
    // 0x12593c: 0xc05f94a  jal         func_17E528
    ctx->pc = 0x12593Cu;
    SET_GPR_U32(ctx, 31, 0x125944u);
    ctx->pc = 0x125940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12593Cu;
            // 0x125940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E528u;
    if (runtime->hasFunction(0x17E528u)) {
        auto targetFn = runtime->lookupFunction(0x17E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125944u; }
        if (ctx->pc != 0x125944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e528_0x17e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125944u; }
        if (ctx->pc != 0x125944u) { return; }
    }
    ctx->pc = 0x125944u;
    // 0x125944: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x125944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x125948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12594c: 0x26260038  addiu       $a2, $s1, 0x38
    ctx->pc = 0x12594cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x125950: 0xc05f76c  jal         func_17DDB0
    ctx->pc = 0x125950u;
    SET_GPR_U32(ctx, 31, 0x125958u);
    ctx->pc = 0x125954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125950u;
            // 0x125954: 0x24a514c0  addiu       $a1, $a1, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDB0u;
    if (runtime->hasFunction(0x17DDB0u)) {
        auto targetFn = runtime->lookupFunction(0x17DDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125958u; }
        if (ctx->pc != 0x125958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDB0_0x17ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125958u; }
        if (ctx->pc != 0x125958u) { return; }
    }
    ctx->pc = 0x125958u;
    // 0x125958: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x125958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12595c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12595cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125964: 0x3e00008  jr          $ra
    ctx->pc = 0x125964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125964u;
            // 0x125968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12596Cu;
    // 0x12596c: 0x0  nop
    ctx->pc = 0x12596cu;
    // NOP
}
