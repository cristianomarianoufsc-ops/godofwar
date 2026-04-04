#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185698
// Address: 0x185698 - 0x185848
void sub_00185698_0x185698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185698_0x185698");
#endif

    ctx->pc = 0x185698u;

    // 0x185698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x185698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18569c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1856a0: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1856a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1856a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1856a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1856a8: 0x8e44f198  lw          $a0, -0xE68($s2)
    ctx->pc = 0x1856a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963608)));
    // 0x1856ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1856acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1856b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1856b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1856b4: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1856B4u;
    SET_GPR_U32(ctx, 31, 0x1856BCu);
    ctx->pc = 0x1856B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1856B4u;
            // 0x1856b8: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856BCu; }
        if (ctx->pc != 0x1856BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856BCu; }
        if (ctx->pc != 0x1856BCu) { return; }
    }
    ctx->pc = 0x1856BCu;
    // 0x1856bc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1856BCu;
    SET_GPR_U32(ctx, 31, 0x1856C4u);
    ctx->pc = 0x1856C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1856BCu;
            // 0x1856c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856C4u; }
        if (ctx->pc != 0x1856C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856C4u; }
        if (ctx->pc != 0x1856C4u) { return; }
    }
    ctx->pc = 0x1856C4u;
    // 0x1856c4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x1856c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x1856c8: 0xc05abd4  jal         func_16AF50
    ctx->pc = 0x1856C8u;
    SET_GPR_U32(ctx, 31, 0x1856D0u);
    ctx->pc = 0x1856CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1856C8u;
            // 0x1856cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AF50u;
    if (runtime->hasFunction(0x16AF50u)) {
        auto targetFn = runtime->lookupFunction(0x16AF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856D0u; }
        if (ctx->pc != 0x1856D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AF50_0x16af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856D0u; }
        if (ctx->pc != 0x1856D0u) { return; }
    }
    ctx->pc = 0x1856D0u;
    // 0x1856d0: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1856D0u;
    SET_GPR_U32(ctx, 31, 0x1856D8u);
    ctx->pc = 0x1856D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1856D0u;
            // 0x1856d4: 0xae02c810  sw          $v0, -0x37F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856D8u; }
        if (ctx->pc != 0x1856D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856D8u; }
        if (ctx->pc != 0x1856D8u) { return; }
    }
    ctx->pc = 0x1856D8u;
    // 0x1856d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1856d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856dc: 0x0  nop
    ctx->pc = 0x1856dcu;
    // NOP
label_1856e0:
    // 0x1856e0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1856e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1856e4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1856e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1856e8: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
    // 0x1856ec: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1856ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1856f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1856f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1856f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1856f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1856f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1856f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1856fc: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x1856fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x185700: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x185700u;
    {
        const bool branch_taken_0x185700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185700u;
            // 0x185704: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185700) {
            ctx->pc = 0x1856E0u;
            runtime->cooperativeGuestYield();
            goto label_1856e0;
        }
    }
    ctx->pc = 0x185708u;
    // 0x185708: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x185708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18570c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x18570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x185710: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185710u;
    SET_GPR_U32(ctx, 31, 0x185718u);
    ctx->pc = 0x185714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185710u;
            // 0x185714: 0x24a56138  addiu       $a1, $a1, 0x6138 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185718u; }
        if (ctx->pc != 0x185718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185718u; }
        if (ctx->pc != 0x185718u) { return; }
    }
    ctx->pc = 0x185718u;
    // 0x185718: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x185718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18571c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x18571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x185720: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185720u;
    SET_GPR_U32(ctx, 31, 0x185728u);
    ctx->pc = 0x185724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185720u;
            // 0x185724: 0x24a589e0  addiu       $a1, $a1, -0x7620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185728u; }
        if (ctx->pc != 0x185728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185728u; }
        if (ctx->pc != 0x185728u) { return; }
    }
    ctx->pc = 0x185728u;
    // 0x185728: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x185728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18572c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x18572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x185730: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185730u;
    SET_GPR_U32(ctx, 31, 0x185738u);
    ctx->pc = 0x185734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185730u;
            // 0x185734: 0x24a58be8  addiu       $a1, $a1, -0x7418 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185738u; }
        if (ctx->pc != 0x185738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185738u; }
        if (ctx->pc != 0x185738u) { return; }
    }
    ctx->pc = 0x185738u;
    // 0x185738: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x185738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18573c: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x18573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x185740: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185740u;
    SET_GPR_U32(ctx, 31, 0x185748u);
    ctx->pc = 0x185744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185740u;
            // 0x185744: 0x24a58bf8  addiu       $a1, $a1, -0x7408 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185748u; }
        if (ctx->pc != 0x185748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185748u; }
        if (ctx->pc != 0x185748u) { return; }
    }
    ctx->pc = 0x185748u;
    // 0x185748: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x185748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18574c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x185750: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185750u;
    SET_GPR_U32(ctx, 31, 0x185758u);
    ctx->pc = 0x185754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185750u;
            // 0x185754: 0x24a558d0  addiu       $a1, $a1, 0x58D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185758u; }
        if (ctx->pc != 0x185758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185758u; }
        if (ctx->pc != 0x185758u) { return; }
    }
    ctx->pc = 0x185758u;
    // 0x185758: 0x3c110018  lui         $s1, 0x18
    ctx->pc = 0x185758u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)24 << 16));
    // 0x18575c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x18575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x185760: 0x26318c70  addiu       $s1, $s1, -0x7390
    ctx->pc = 0x185760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937712));
    // 0x185764: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185764u;
    SET_GPR_U32(ctx, 31, 0x18576Cu);
    ctx->pc = 0x185768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185764u;
            // 0x185768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18576Cu; }
        if (ctx->pc != 0x18576Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18576Cu; }
        if (ctx->pc != 0x18576Cu) { return; }
    }
    ctx->pc = 0x18576Cu;
    // 0x18576c: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x18576cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    // 0x185770: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x185770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x185774: 0x26108cf8  addiu       $s0, $s0, -0x7308
    ctx->pc = 0x185774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937848));
    // 0x185778: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185778u;
    SET_GPR_U32(ctx, 31, 0x185780u);
    ctx->pc = 0x18577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185778u;
            // 0x18577c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185780u; }
        if (ctx->pc != 0x185780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185780u; }
        if (ctx->pc != 0x185780u) { return; }
    }
    ctx->pc = 0x185780u;
    // 0x185780: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185784: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185784u;
    SET_GPR_U32(ctx, 31, 0x18578Cu);
    ctx->pc = 0x185788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185784u;
            // 0x185788: 0x2404029a  addiu       $a0, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18578Cu; }
        if (ctx->pc != 0x18578Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18578Cu; }
        if (ctx->pc != 0x18578Cu) { return; }
    }
    ctx->pc = 0x18578Cu;
    // 0x18578c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18578cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185790: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185790u;
    SET_GPR_U32(ctx, 31, 0x185798u);
    ctx->pc = 0x185794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185790u;
            // 0x185794: 0x24040309  addiu       $a0, $zero, 0x309 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185798u; }
        if (ctx->pc != 0x185798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185798u; }
        if (ctx->pc != 0x185798u) { return; }
    }
    ctx->pc = 0x185798u;
    // 0x185798: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x185798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x18579c: 0x2404006e  addiu       $a0, $zero, 0x6E
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1857a0: 0xc0618c0  jal         func_186300
    ctx->pc = 0x1857A0u;
    SET_GPR_U32(ctx, 31, 0x1857A8u);
    ctx->pc = 0x1857A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857A0u;
            // 0x1857a4: 0x24a56170  addiu       $a1, $a1, 0x6170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857A8u; }
        if (ctx->pc != 0x1857A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857A8u; }
        if (ctx->pc != 0x1857A8u) { return; }
    }
    ctx->pc = 0x1857A8u;
    // 0x1857a8: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1857a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1857ac: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x1857acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1857b0: 0xc0618c0  jal         func_186300
    ctx->pc = 0x1857B0u;
    SET_GPR_U32(ctx, 31, 0x1857B8u);
    ctx->pc = 0x1857B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857B0u;
            // 0x1857b4: 0x24a561e8  addiu       $a1, $a1, 0x61E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857B8u; }
        if (ctx->pc != 0x1857B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857B8u; }
        if (ctx->pc != 0x1857B8u) { return; }
    }
    ctx->pc = 0x1857B8u;
    // 0x1857b8: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1857b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1857bc: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1857bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1857c0: 0xc0618c0  jal         func_186300
    ctx->pc = 0x1857C0u;
    SET_GPR_U32(ctx, 31, 0x1857C8u);
    ctx->pc = 0x1857C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857C0u;
            // 0x1857c4: 0x24a56268  addiu       $a1, $a1, 0x6268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857C8u; }
        if (ctx->pc != 0x1857C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857C8u; }
        if (ctx->pc != 0x1857C8u) { return; }
    }
    ctx->pc = 0x1857C8u;
    // 0x1857c8: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1857c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1857cc: 0x24040071  addiu       $a0, $zero, 0x71
    ctx->pc = 0x1857ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x1857d0: 0xc0618c0  jal         func_186300
    ctx->pc = 0x1857D0u;
    SET_GPR_U32(ctx, 31, 0x1857D8u);
    ctx->pc = 0x1857D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857D0u;
            // 0x1857d4: 0x24a5eb40  addiu       $a1, $a1, -0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857D8u; }
        if (ctx->pc != 0x1857D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857D8u; }
        if (ctx->pc != 0x1857D8u) { return; }
    }
    ctx->pc = 0x1857D8u;
    // 0x1857d8: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1857d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1857dc: 0x24040072  addiu       $a0, $zero, 0x72
    ctx->pc = 0x1857dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1857e0: 0xc0618c0  jal         func_186300
    ctx->pc = 0x1857E0u;
    SET_GPR_U32(ctx, 31, 0x1857E8u);
    ctx->pc = 0x1857E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857E0u;
            // 0x1857e4: 0x24a5ead0  addiu       $a1, $a1, -0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857E8u; }
        if (ctx->pc != 0x1857E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857E8u; }
        if (ctx->pc != 0x1857E8u) { return; }
    }
    ctx->pc = 0x1857E8u;
    // 0x1857e8: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1857e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1857ec: 0x24040378  addiu       $a0, $zero, 0x378
    ctx->pc = 0x1857ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 888));
    // 0x1857f0: 0xc0618c0  jal         func_186300
    ctx->pc = 0x1857F0u;
    SET_GPR_U32(ctx, 31, 0x1857F8u);
    ctx->pc = 0x1857F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1857F0u;
            // 0x1857f4: 0x24a555e8  addiu       $a1, $a1, 0x55E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857F8u; }
        if (ctx->pc != 0x1857F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1857F8u; }
        if (ctx->pc != 0x1857F8u) { return; }
    }
    ctx->pc = 0x1857F8u;
    // 0x1857f8: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1857f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1857fc: 0x240403e7  addiu       $a0, $zero, 0x3E7
    ctx->pc = 0x1857fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x185800: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185800u;
    SET_GPR_U32(ctx, 31, 0x185808u);
    ctx->pc = 0x185804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185800u;
            // 0x185804: 0x24a55678  addiu       $a1, $a1, 0x5678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185808u; }
        if (ctx->pc != 0x185808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185808u; }
        if (ctx->pc != 0x185808u) { return; }
    }
    ctx->pc = 0x185808u;
    // 0x185808: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x185808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x18580c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x18580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x185810: 0xc0618c0  jal         func_186300
    ctx->pc = 0x185810u;
    SET_GPR_U32(ctx, 31, 0x185818u);
    ctx->pc = 0x185814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185810u;
            // 0x185814: 0x24a5c258  addiu       $a1, $a1, -0x3DA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186300u;
    if (runtime->hasFunction(0x186300u)) {
        auto targetFn = runtime->lookupFunction(0x186300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185818u; }
        if (ctx->pc != 0x185818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_186300_0x1863b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185818u; }
        if (ctx->pc != 0x185818u) { return; }
    }
    ctx->pc = 0x185818u;
    // 0x185818: 0x8e45f198  lw          $a1, -0xE68($s2)
    ctx->pc = 0x185818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963608)));
    // 0x18581c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185820: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x185820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x185824: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x185824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x185828: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x185828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18582c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18582cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185830: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x185830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185838: 0xac44c808  sw          $a0, -0x37F8($v0)
    ctx->pc = 0x185838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952968), GPR_U32(ctx, 4));
    // 0x18583c: 0xac65c80c  sw          $a1, -0x37F4($v1)
    ctx->pc = 0x18583cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952972), GPR_U32(ctx, 5));
    // 0x185840: 0x3e00008  jr          $ra
    ctx->pc = 0x185840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185840u;
            // 0x185844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1856E0u: goto label_1856e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185848u;
}
