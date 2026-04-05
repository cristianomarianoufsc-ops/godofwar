#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225270
// Address: 0x225270 - 0x225588
void sub_00225270_0x225270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225270_0x225270");
#endif

    ctx->pc = 0x225270u;

    // 0x225270: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x225270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x225274: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x225274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x225278: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x225278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x22527c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x22527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x225280: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x225280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x225284: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x225284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x225288: 0xc04f856  jal         func_13E158
    ctx->pc = 0x225288u;
    SET_GPR_U32(ctx, 31, 0x225290u);
    ctx->pc = 0x22528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225288u;
            // 0x22528c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225290u; }
        if (ctx->pc != 0x225290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225290u; }
        if (ctx->pc != 0x225290u) { return; }
    }
    ctx->pc = 0x225290u;
    // 0x225290: 0xc090f34  jal         func_243CD0
    ctx->pc = 0x225290u;
    SET_GPR_U32(ctx, 31, 0x225298u);
    ctx->pc = 0x225294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225290u;
            // 0x225294: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243CD0u;
    if (runtime->hasFunction(0x243CD0u)) {
        auto targetFn = runtime->lookupFunction(0x243CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225298u; }
        if (ctx->pc != 0x225298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243cd0_0x243d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225298u; }
        if (ctx->pc != 0x225298u) { return; }
    }
    ctx->pc = 0x225298u;
    // 0x225298: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x225298u;
    SET_GPR_U32(ctx, 31, 0x2252A0u);
    ctx->pc = 0x22529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225298u;
            // 0x22529c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252A0u; }
        if (ctx->pc != 0x2252A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252A0u; }
        if (ctx->pc != 0x2252A0u) { return; }
    }
    ctx->pc = 0x2252A0u;
    // 0x2252a0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2252A0u;
    SET_GPR_U32(ctx, 31, 0x2252A8u);
    ctx->pc = 0x2252A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2252A0u;
            // 0x2252a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252A8u; }
        if (ctx->pc != 0x2252A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252A8u; }
        if (ctx->pc != 0x2252A8u) { return; }
    }
    ctx->pc = 0x2252A8u;
    // 0x2252a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2252a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252ac: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2252acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2252b0: 0x24a58068  addiu       $a1, $a1, -0x7F98
    ctx->pc = 0x2252b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934632));
    // 0x2252b4: 0xc060978  jal         func_1825E0
    ctx->pc = 0x2252B4u;
    SET_GPR_U32(ctx, 31, 0x2252BCu);
    ctx->pc = 0x2252B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2252B4u;
            // 0x2252b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252BCu; }
        if (ctx->pc != 0x2252BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252BCu; }
        if (ctx->pc != 0x2252BCu) { return; }
    }
    ctx->pc = 0x2252BCu;
    // 0x2252bc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2252bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2252c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2252c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252c4: 0x24429980  addiu       $v0, $v0, -0x6680
    ctx->pc = 0x2252c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941056));
    // 0x2252c8: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x2252C8u;
    SET_GPR_U32(ctx, 31, 0x2252D0u);
    ctx->pc = 0x2252CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2252C8u;
            // 0x2252cc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252D0u; }
        if (ctx->pc != 0x2252D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252D0u; }
        if (ctx->pc != 0x2252D0u) { return; }
    }
    ctx->pc = 0x2252D0u;
    // 0x2252d0: 0x3c05e019  lui         $a1, 0xE019
    ctx->pc = 0x2252d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57369 << 16));
    // 0x2252d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2252d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252d8: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x2252d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2252dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2252dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252e0: 0x34a5d6fe  ori         $a1, $a1, 0xD6FE
    ctx->pc = 0x2252e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55038);
    // 0x2252e4: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x2252E4u;
    SET_GPR_U32(ctx, 31, 0x2252ECu);
    ctx->pc = 0x2252E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2252E4u;
            // 0x2252e8: 0xae301198  sw          $s0, 0x1198($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4504), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252ECu; }
        if (ctx->pc != 0x2252ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252ECu; }
        if (ctx->pc != 0x2252ECu) { return; }
    }
    ctx->pc = 0x2252ECu;
    // 0x2252ec: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x2252ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x2252f0: 0x3c0576df  lui         $a1, 0x76DF
    ctx->pc = 0x2252f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30431 << 16));
    // 0x2252f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2252f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252f8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2252f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2252fc: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x2252FCu;
    SET_GPR_U32(ctx, 31, 0x225304u);
    ctx->pc = 0x225300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2252FCu;
            // 0x225300: 0x34a537cd  ori         $a1, $a1, 0x37CD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14285);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225304u; }
        if (ctx->pc != 0x225304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225304u; }
        if (ctx->pc != 0x225304u) { return; }
    }
    ctx->pc = 0x225304u;
    // 0x225304: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225308: 0x3c0522c9  lui         $a1, 0x22C9
    ctx->pc = 0x225308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8905 << 16));
    // 0x22530c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22530cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225310: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x225310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x225314: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x225314u;
    SET_GPR_U32(ctx, 31, 0x22531Cu);
    ctx->pc = 0x225318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225314u;
            // 0x225318: 0x34a5b7fe  ori         $a1, $a1, 0xB7FE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47102);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22531Cu; }
        if (ctx->pc != 0x22531Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22531Cu; }
        if (ctx->pc != 0x22531Cu) { return; }
    }
    ctx->pc = 0x22531Cu;
    // 0x22531c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x22531Cu;
    SET_GPR_U32(ctx, 31, 0x225324u);
    ctx->pc = 0x225320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22531Cu;
            // 0x225320: 0x8e241198  lw          $a0, 0x1198($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225324u; }
        if (ctx->pc != 0x225324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225324u; }
        if (ctx->pc != 0x225324u) { return; }
    }
    ctx->pc = 0x225324u;
    // 0x225324: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225328: 0x3c05bd2b  lui         $a1, 0xBD2B
    ctx->pc = 0x225328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48427 << 16));
    // 0x22532c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22532cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225330: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x225330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x225334: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x225334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x225338: 0xc06081c  jal         func_182070
    ctx->pc = 0x225338u;
    SET_GPR_U32(ctx, 31, 0x225340u);
    ctx->pc = 0x22533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225338u;
            // 0x22533c: 0x34a562f8  ori         $a1, $a1, 0x62F8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25336);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225340u; }
        if (ctx->pc != 0x225340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225340u; }
        if (ctx->pc != 0x225340u) { return; }
    }
    ctx->pc = 0x225340u;
    // 0x225340: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225344: 0x3c0588bf  lui         $a1, 0x88BF
    ctx->pc = 0x225344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35007 << 16));
    // 0x225348: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22534c: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x22534cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x225350: 0xc060570  jal         func_1815C0
    ctx->pc = 0x225350u;
    SET_GPR_U32(ctx, 31, 0x225358u);
    ctx->pc = 0x225354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225350u;
            // 0x225354: 0x34a5c764  ori         $a1, $a1, 0xC764 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51044);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225358u; }
        if (ctx->pc != 0x225358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225358u; }
        if (ctx->pc != 0x225358u) { return; }
    }
    ctx->pc = 0x225358u;
    // 0x225358: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x22535c: 0x3c058856  lui         $a1, 0x8856
    ctx->pc = 0x22535cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34902 << 16));
    // 0x225360: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225364: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x225364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x225368: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x225368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22536c: 0xc06081c  jal         func_182070
    ctx->pc = 0x22536Cu;
    SET_GPR_U32(ctx, 31, 0x225374u);
    ctx->pc = 0x225370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22536Cu;
            // 0x225370: 0x34a5843b  ori         $a1, $a1, 0x843B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33851);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182070u;
    if (runtime->hasFunction(0x182070u)) {
        auto targetFn = runtime->lookupFunction(0x182070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225374u; }
        if (ctx->pc != 0x225374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182070_0x182070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225374u; }
        if (ctx->pc != 0x225374u) { return; }
    }
    ctx->pc = 0x225374u;
    // 0x225374: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225378: 0x3c055325  lui         $a1, 0x5325
    ctx->pc = 0x225378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21285 << 16));
    // 0x22537c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22537cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225380: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x225380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x225384: 0xc060570  jal         func_1815C0
    ctx->pc = 0x225384u;
    SET_GPR_U32(ctx, 31, 0x22538Cu);
    ctx->pc = 0x225388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225384u;
            // 0x225388: 0x34a547a1  ori         $a1, $a1, 0x47A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18337);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22538Cu; }
        if (ctx->pc != 0x22538Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22538Cu; }
        if (ctx->pc != 0x22538Cu) { return; }
    }
    ctx->pc = 0x22538Cu;
    // 0x22538c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x22538Cu;
    SET_GPR_U32(ctx, 31, 0x225394u);
    ctx->pc = 0x225390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22538Cu;
            // 0x225390: 0x8e241198  lw          $a0, 0x1198($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225394u; }
        if (ctx->pc != 0x225394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225394u; }
        if (ctx->pc != 0x225394u) { return; }
    }
    ctx->pc = 0x225394u;
    // 0x225394: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225398: 0x3c057d4c  lui         $a1, 0x7D4C
    ctx->pc = 0x225398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32076 << 16));
    // 0x22539c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22539cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253a0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2253a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2253a4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2253A4u;
    SET_GPR_U32(ctx, 31, 0x2253ACu);
    ctx->pc = 0x2253A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2253A4u;
            // 0x2253a8: 0x34a553a0  ori         $a1, $a1, 0x53A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21408);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253ACu; }
        if (ctx->pc != 0x2253ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253ACu; }
        if (ctx->pc != 0x2253ACu) { return; }
    }
    ctx->pc = 0x2253ACu;
    // 0x2253ac: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x2253acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x2253b0: 0x3c057ff9  lui         $a1, 0x7FF9
    ctx->pc = 0x2253b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32761 << 16));
    // 0x2253b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2253b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253b8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2253b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2253bc: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x2253BCu;
    SET_GPR_U32(ctx, 31, 0x2253C4u);
    ctx->pc = 0x2253C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2253BCu;
            // 0x2253c0: 0x34a5cc47  ori         $a1, $a1, 0xCC47 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52295);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253C4u; }
        if (ctx->pc != 0x2253C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253C4u; }
        if (ctx->pc != 0x2253C4u) { return; }
    }
    ctx->pc = 0x2253C4u;
    // 0x2253c4: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x2253c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x2253c8: 0x3c057ff9  lui         $a1, 0x7FF9
    ctx->pc = 0x2253c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32761 << 16));
    // 0x2253cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2253ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253d0: 0x27a70062  addiu       $a3, $sp, 0x62
    ctx->pc = 0x2253d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 98));
    // 0x2253d4: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x2253D4u;
    SET_GPR_U32(ctx, 31, 0x2253DCu);
    ctx->pc = 0x2253D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2253D4u;
            // 0x2253d8: 0x34a5c859  ori         $a1, $a1, 0xC859 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51289);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253DCu; }
        if (ctx->pc != 0x2253DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253DCu; }
        if (ctx->pc != 0x2253DCu) { return; }
    }
    ctx->pc = 0x2253DCu;
    // 0x2253dc: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x2253dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x2253e0: 0x3c05062a  lui         $a1, 0x62A
    ctx->pc = 0x2253e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1578 << 16));
    // 0x2253e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2253e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253e8: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x2253e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2253ec: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2253ECu;
    SET_GPR_U32(ctx, 31, 0x2253F4u);
    ctx->pc = 0x2253F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2253ECu;
            // 0x2253f0: 0x34a59be1  ori         $a1, $a1, 0x9BE1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39905);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253F4u; }
        if (ctx->pc != 0x2253F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253F4u; }
        if (ctx->pc != 0x2253F4u) { return; }
    }
    ctx->pc = 0x2253F4u;
    // 0x2253f4: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x2253f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x2253f8: 0x3c05ddc7  lui         $a1, 0xDDC7
    ctx->pc = 0x2253f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56775 << 16));
    // 0x2253fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2253fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225400: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x225400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x225404: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x225404u;
    SET_GPR_U32(ctx, 31, 0x22540Cu);
    ctx->pc = 0x225408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225404u;
            // 0x225408: 0x34a52386  ori         $a1, $a1, 0x2386 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9094);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22540Cu; }
        if (ctx->pc != 0x22540Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22540Cu; }
        if (ctx->pc != 0x22540Cu) { return; }
    }
    ctx->pc = 0x22540Cu;
    // 0x22540c: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x22540cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225410: 0x3c05ddc7  lui         $a1, 0xDDC7
    ctx->pc = 0x225410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56775 << 16));
    // 0x225414: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225418: 0x27a7006a  addiu       $a3, $sp, 0x6A
    ctx->pc = 0x225418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 106));
    // 0x22541c: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x22541Cu;
    SET_GPR_U32(ctx, 31, 0x225424u);
    ctx->pc = 0x225420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22541Cu;
            // 0x225420: 0x34a51f98  ori         $a1, $a1, 0x1F98 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8088);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225424u; }
        if (ctx->pc != 0x225424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225424u; }
        if (ctx->pc != 0x225424u) { return; }
    }
    ctx->pc = 0x225424u;
    // 0x225424: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225428: 0x3c05523e  lui         $a1, 0x523E
    ctx->pc = 0x225428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21054 << 16));
    // 0x22542c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22542cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225430: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x225430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x225434: 0xc060570  jal         func_1815C0
    ctx->pc = 0x225434u;
    SET_GPR_U32(ctx, 31, 0x22543Cu);
    ctx->pc = 0x225438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225434u;
            // 0x225438: 0x34a534a0  ori         $a1, $a1, 0x34A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13472);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22543Cu; }
        if (ctx->pc != 0x22543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22543Cu; }
        if (ctx->pc != 0x22543Cu) { return; }
    }
    ctx->pc = 0x22543Cu;
    // 0x22543c: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x22543cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225440: 0x3c0599d7  lui         $a1, 0x99D7
    ctx->pc = 0x225440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39383 << 16));
    // 0x225444: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225448: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x225448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22544c: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x22544Cu;
    SET_GPR_U32(ctx, 31, 0x225454u);
    ctx->pc = 0x225450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22544Cu;
            // 0x225450: 0x34a56b47  ori         $a1, $a1, 0x6B47 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27463);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225454u; }
        if (ctx->pc != 0x225454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225454u; }
        if (ctx->pc != 0x225454u) { return; }
    }
    ctx->pc = 0x225454u;
    // 0x225454: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225458: 0x3c0599d7  lui         $a1, 0x99D7
    ctx->pc = 0x225458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39383 << 16));
    // 0x22545c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22545cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225460: 0x27a70072  addiu       $a3, $sp, 0x72
    ctx->pc = 0x225460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 114));
    // 0x225464: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x225464u;
    SET_GPR_U32(ctx, 31, 0x22546Cu);
    ctx->pc = 0x225468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225464u;
            // 0x225468: 0x34a56759  ori         $a1, $a1, 0x6759 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26457);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22546Cu; }
        if (ctx->pc != 0x22546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22546Cu; }
        if (ctx->pc != 0x22546Cu) { return; }
    }
    ctx->pc = 0x22546Cu;
    // 0x22546c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x22546Cu;
    SET_GPR_U32(ctx, 31, 0x225474u);
    ctx->pc = 0x225470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22546Cu;
            // 0x225470: 0x8e241198  lw          $a0, 0x1198($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225474u; }
        if (ctx->pc != 0x225474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225474u; }
        if (ctx->pc != 0x225474u) { return; }
    }
    ctx->pc = 0x225474u;
    // 0x225474: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225478: 0x3c051d34  lui         $a1, 0x1D34
    ctx->pc = 0x225478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7476 << 16));
    // 0x22547c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22547cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225480: 0x27a70074  addiu       $a3, $sp, 0x74
    ctx->pc = 0x225480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x225484: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x225484u;
    SET_GPR_U32(ctx, 31, 0x22548Cu);
    ctx->pc = 0x225488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225484u;
            // 0x225488: 0x34a50d67  ori         $a1, $a1, 0xD67 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3431);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22548Cu; }
        if (ctx->pc != 0x22548Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22548Cu; }
        if (ctx->pc != 0x22548Cu) { return; }
    }
    ctx->pc = 0x22548Cu;
    // 0x22548c: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x22548Cu;
    SET_GPR_U32(ctx, 31, 0x225494u);
    ctx->pc = 0x225490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22548Cu;
            // 0x225490: 0x8e241198  lw          $a0, 0x1198($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225494u; }
        if (ctx->pc != 0x225494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225494u; }
        if (ctx->pc != 0x225494u) { return; }
    }
    ctx->pc = 0x225494u;
    // 0x225494: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225498: 0x3c0546cb  lui         $a1, 0x46CB
    ctx->pc = 0x225498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18123 << 16));
    // 0x22549c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22549cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254a0: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x2254a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2254a4: 0xc060570  jal         func_1815C0
    ctx->pc = 0x2254A4u;
    SET_GPR_U32(ctx, 31, 0x2254ACu);
    ctx->pc = 0x2254A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254A4u;
            // 0x2254a8: 0x34a51dcd  ori         $a1, $a1, 0x1DCD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7629);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254ACu; }
        if (ctx->pc != 0x2254ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254ACu; }
        if (ctx->pc != 0x2254ACu) { return; }
    }
    ctx->pc = 0x2254ACu;
    // 0x2254ac: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x2254acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x2254b0: 0x3c052eea  lui         $a1, 0x2EEA
    ctx->pc = 0x2254b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12010 << 16));
    // 0x2254b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2254b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254b8: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x2254b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2254bc: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x2254BCu;
    SET_GPR_U32(ctx, 31, 0x2254C4u);
    ctx->pc = 0x2254C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254BCu;
            // 0x2254c0: 0x34a5ab9a  ori         $a1, $a1, 0xAB9A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43930);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254C4u; }
        if (ctx->pc != 0x2254C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254C4u; }
        if (ctx->pc != 0x2254C4u) { return; }
    }
    ctx->pc = 0x2254C4u;
    // 0x2254c4: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x2254c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x2254c8: 0x3c052eea  lui         $a1, 0x2EEA
    ctx->pc = 0x2254c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12010 << 16));
    // 0x2254cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2254ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254d0: 0x27a7007e  addiu       $a3, $sp, 0x7E
    ctx->pc = 0x2254d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    // 0x2254d4: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x2254D4u;
    SET_GPR_U32(ctx, 31, 0x2254DCu);
    ctx->pc = 0x2254D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254D4u;
            // 0x2254d8: 0x34a5a7ac  ori         $a1, $a1, 0xA7AC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42924);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254DCu; }
        if (ctx->pc != 0x2254DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254DCu; }
        if (ctx->pc != 0x2254DCu) { return; }
    }
    ctx->pc = 0x2254DCu;
    // 0x2254dc: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2254DCu;
    SET_GPR_U32(ctx, 31, 0x2254E4u);
    ctx->pc = 0x2254E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254DCu;
            // 0x2254e0: 0x8e241198  lw          $a0, 0x1198($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254E4u; }
        if (ctx->pc != 0x2254E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254E4u; }
        if (ctx->pc != 0x2254E4u) { return; }
    }
    ctx->pc = 0x2254E4u;
    // 0x2254e4: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x2254e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x2254e8: 0x3c05e91f  lui         $a1, 0xE91F
    ctx->pc = 0x2254e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59679 << 16));
    // 0x2254ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2254ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254f0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2254f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2254f4: 0xc0605f6  jal         func_1817D8
    ctx->pc = 0x2254F4u;
    SET_GPR_U32(ctx, 31, 0x2254FCu);
    ctx->pc = 0x2254F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254F4u;
            // 0x2254f8: 0x34a51418  ori         $a1, $a1, 0x1418 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5144);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1817D8u;
    if (runtime->hasFunction(0x1817D8u)) {
        auto targetFn = runtime->lookupFunction(0x1817D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254FCu; }
        if (ctx->pc != 0x2254FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001817D8_0x1817d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254FCu; }
        if (ctx->pc != 0x2254FCu) { return; }
    }
    ctx->pc = 0x2254FCu;
    // 0x2254fc: 0xc0604ea  jal         func_1813A8
    ctx->pc = 0x2254FCu;
    SET_GPR_U32(ctx, 31, 0x225504u);
    ctx->pc = 0x225500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2254FCu;
            // 0x225500: 0x8e241198  lw          $a0, 0x1198($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813A8u;
    if (runtime->hasFunction(0x1813A8u)) {
        auto targetFn = runtime->lookupFunction(0x1813A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225504u; }
        if (ctx->pc != 0x225504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1813a8_0x1813b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225504u; }
        if (ctx->pc != 0x225504u) { return; }
    }
    ctx->pc = 0x225504u;
    // 0x225504: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225508: 0x3c05b51b  lui         $a1, 0xB51B
    ctx->pc = 0x225508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46363 << 16));
    // 0x22550c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22550cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225510: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x225510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x225514: 0xc060570  jal         func_1815C0
    ctx->pc = 0x225514u;
    SET_GPR_U32(ctx, 31, 0x22551Cu);
    ctx->pc = 0x225518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225514u;
            // 0x225518: 0x34a57b34  ori         $a1, $a1, 0x7B34 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31540);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22551Cu; }
        if (ctx->pc != 0x22551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22551Cu; }
        if (ctx->pc != 0x22551Cu) { return; }
    }
    ctx->pc = 0x22551Cu;
    // 0x22551c: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x22551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225520: 0x3c056431  lui         $a1, 0x6431
    ctx->pc = 0x225520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25649 << 16));
    // 0x225524: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225528: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x225528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22552c: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x22552Cu;
    SET_GPR_U32(ctx, 31, 0x225534u);
    ctx->pc = 0x225530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22552Cu;
            // 0x225530: 0x34a5dab3  ori         $a1, $a1, 0xDAB3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55987);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225534u; }
        if (ctx->pc != 0x225534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225534u; }
        if (ctx->pc != 0x225534u) { return; }
    }
    ctx->pc = 0x225534u;
    // 0x225534: 0x8e241198  lw          $a0, 0x1198($s1)
    ctx->pc = 0x225534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4504)));
    // 0x225538: 0x3c056431  lui         $a1, 0x6431
    ctx->pc = 0x225538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25649 << 16));
    // 0x22553c: 0x34a5d6c5  ori         $a1, $a1, 0xD6C5
    ctx->pc = 0x22553cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54981);
    // 0x225540: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x225540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225544: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x225544u;
    SET_GPR_U32(ctx, 31, 0x22554Cu);
    ctx->pc = 0x225548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225544u;
            // 0x225548: 0x27a700a2  addiu       $a3, $sp, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (runtime->hasFunction(0x1819F8u)) {
        auto targetFn = runtime->lookupFunction(0x1819F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22554Cu; }
        if (ctx->pc != 0x22554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001819F8_0x1819f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22554Cu; }
        if (ctx->pc != 0x22554Cu) { return; }
    }
    ctx->pc = 0x22554Cu;
    // 0x22554c: 0xc04f860  jal         func_13E180
    ctx->pc = 0x22554Cu;
    SET_GPR_U32(ctx, 31, 0x225554u);
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225554u; }
        if (ctx->pc != 0x225554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225554u; }
        if (ctx->pc != 0x225554u) { return; }
    }
    ctx->pc = 0x225554u;
    // 0x225554: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x225554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x225558: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x225558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22555c: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x22555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x225560: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x225560u;
    {
        const bool branch_taken_0x225560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x225564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225560u;
            // 0x225564: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225560) {
            ctx->pc = 0x225570u;
            goto label_225570;
        }
    }
    ctx->pc = 0x225568u;
    // 0x225568: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x225568u;
    SET_GPR_U32(ctx, 31, 0x225570u);
    ctx->pc = 0x22556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225568u;
            // 0x22556c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225570u; }
        if (ctx->pc != 0x225570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225570u; }
        if (ctx->pc != 0x225570u) { return; }
    }
    ctx->pc = 0x225570u;
label_225570:
    // 0x225570: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x225570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x225574: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x225574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x225578: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x225578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22557c: 0x3e00008  jr          $ra
    ctx->pc = 0x22557Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22557Cu;
            // 0x225580: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225570u: goto label_225570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225584u;
    // 0x225584: 0x0  nop
    ctx->pc = 0x225584u;
    // NOP
}
