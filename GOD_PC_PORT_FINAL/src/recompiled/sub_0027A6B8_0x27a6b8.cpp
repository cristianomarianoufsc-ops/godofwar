#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027A6B8
// Address: 0x27a6b8 - 0x27a810
void sub_0027A6B8_0x27a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A6B8_0x27a6b8");
#endif

    ctx->pc = 0x27a6b8u;
    std::cerr << "[sub_0027A6B8] START a0=0x" << std::hex << GPR_U32(ctx, 4) << std::dec << "\n";

    // 0x27a6b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a6bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27a6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a6c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a6c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27a6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27a6cc: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x27a6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x27a6d0: 0xc09e8d0  jal         func_27A340
    ctx->pc = 0x27A6D0u;
    SET_GPR_U32(ctx, 31, 0x27A6D8u);
    ctx->pc = 0x27A6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6D0u;
            // 0x27a6d4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A340u;
    if (runtime->hasFunction(0x27A340u)) {
        auto targetFn = runtime->lookupFunction(0x27A340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6D8u; }
        if (ctx->pc != 0x27A6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27a340_0x27a428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6D8u; }
        if (ctx->pc != 0x27A6D8u) { return; }
    }
    ctx->pc = 0x27A6D8u;
    // 0x27a6d8: 0x8e04172c  lw          $a0, 0x172C($s0)
    ctx->pc = 0x27a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5932)));
    // 0x27a6dc: 0xc0a4f1c  jal         func_293C70
    ctx->pc = 0x27A6DCu;
    SET_GPR_U32(ctx, 31, 0x27A6E4u);
    ctx->pc = 0x293C70u;
    if (runtime->hasFunction(0x293C70u)) {
        auto targetFn = runtime->lookupFunction(0x293C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6E4u; }
        if (ctx->pc != 0x27A6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c70_0x293cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A6E4u; }
        if (ctx->pc != 0x27A6E4u) { return; }
    }
    ctx->pc = 0x27A6E4u;
    // 0x27a6e4: 0x8e03172c  lw          $v1, 0x172C($s0)
    ctx->pc = 0x27a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5932)));
    // 0x27a6e8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27A6E8u;
    {
        const bool branch_taken_0x27a6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6E8u;
            // 0x27a6ec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6e8) {
            ctx->pc = 0x27A718u;
            goto label_27a718;
        }
    }
    ctx->pc = 0x27A6F0u;
    // 0x27a6f0: 0x8c431710  lw          $v1, 0x1710($v0)
    ctx->pc = 0x27a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5904)));
    // 0x27a6f4: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x27A6F4u;
    {
        const bool branch_taken_0x27a6f4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27A6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A6F4u;
            // 0x27a6f8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6f4) {
            ctx->pc = 0x27A73Cu;
            goto label_27a73c;
        }
    }
    ctx->pc = 0x27A6FCu;
    // 0x27a6fc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27a700: 0x8c461718  lw          $a2, 0x1718($v0)
    ctx->pc = 0x27a700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5912)));
    // 0x27a704: 0x24844be0  addiu       $a0, $a0, 0x4BE0
    ctx->pc = 0x27a704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19424));
    // 0x27a708: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27A708u;
    SET_GPR_U32(ctx, 31, 0x27A710u);
    ctx->pc = 0x27A70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A708u;
            // 0x27a70c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A710u; }
        if (ctx->pc != 0x27A710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A710u; }
        if (ctx->pc != 0x27A710u) { return; }
    }
    ctx->pc = 0x27A710u;
    // 0x27a710: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x27A710u;
    {
        const bool branch_taken_0x27a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A710u;
            // 0x27a714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a710) {
            ctx->pc = 0x27A7F8u;
            goto label_27a7f8;
        }
    }
    ctx->pc = 0x27A718u;
label_27a718:
    // 0x27a718: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27a71c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a720: 0xc09e992  jal         func_27A648
    ctx->pc = 0x27A720u;
    SET_GPR_U32(ctx, 31, 0x27A728u);
    ctx->pc = 0x27A724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A720u;
            // 0x27a724: 0xac511718  sw          $s1, 0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5912), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A648u;
    if (runtime->hasFunction(0x27A648u)) {
        auto targetFn = runtime->lookupFunction(0x27A648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A728u; }
        if (ctx->pc != 0x27A728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A648_0x27a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A728u; }
        if (ctx->pc != 0x27A728u) { return; }
    }
    ctx->pc = 0x27A728u;
    // 0x27a728: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27A728u;
    {
        const bool branch_taken_0x27a728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A728u;
            // 0x27a72c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a728) {
            ctx->pc = 0x27A744u;
            goto label_27a744;
        }
    }
    ctx->pc = 0x27A730u;
    // 0x27a730: 0x8e04172c  lw          $a0, 0x172C($s0)
    ctx->pc = 0x27a730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5932)));
    // 0x27a734: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27A734u;
    SET_GPR_U32(ctx, 31, 0x27A73Cu);
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A73Cu; }
        if (ctx->pc != 0x27A73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A73Cu; }
        if (ctx->pc != 0x27A73Cu) { return; }
    }
    ctx->pc = 0x27A73Cu;
label_27a73c:
    // 0x27a73c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x27A73Cu;
    {
        const bool branch_taken_0x27a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A73Cu;
            // 0x27a740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a73c) {
            ctx->pc = 0x27A7F8u;
            goto label_27a7f8;
        }
    }
    ctx->pc = 0x27A744u;
label_27a744:
    // 0x27a744: 0xc0a5b12  jal         func_296C48
    ctx->pc = 0x27A744u;
    SET_GPR_U32(ctx, 31, 0x27A74Cu);
    ctx->pc = 0x27A748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A744u;
            // 0x27a748: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C48u;
    if (runtime->hasFunction(0x296C48u)) {
        auto targetFn = runtime->lookupFunction(0x296C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A74Cu; }
        if (ctx->pc != 0x27A74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296c48_0x296de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A74Cu; }
        if (ctx->pc != 0x27A74Cu) { return; }
    }
    ctx->pc = 0x27A74Cu;
    // 0x27a74c: 0x8e421754  lw          $v0, 0x1754($s2)
    ctx->pc = 0x27a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5972)));
    // 0x27a750: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27A750u;
    {
        const bool branch_taken_0x27a750 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A750u;
            // 0x27a754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a750) {
            ctx->pc = 0x27A7F8u;
            goto label_27a7f8;
        }
    }
    ctx->pc = 0x27A758u;
    // 0x27a758: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27A758u;
    {
        const bool branch_taken_0x27a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A758u;
            // 0x27a75c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a758) {
            ctx->pc = 0x27A784u;
            goto label_27a784;
        }
    }
    ctx->pc = 0x27A760u;
label_27a760:
    // 0x27a760: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x27a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x27a764: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27a764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27a768:
    // 0x27a768: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27a76c: 0x0  nop
    ctx->pc = 0x27a76cu;
    // NOP
    // 0x27a770: 0x0  nop
    ctx->pc = 0x27a770u;
    // NOP
    // 0x27a774: 0x0  nop
    ctx->pc = 0x27a774u;
    // NOP
    // 0x27a778: 0x0  nop
    ctx->pc = 0x27a778u;
    // NOP
    // 0x27a77c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27A77Cu;
    {
        const bool branch_taken_0x27a77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27a77c) {
            ctx->pc = 0x27A768u;
            runtime->cooperativeGuestYield();
            goto label_27a768;
        }
    }
    ctx->pc = 0x27A784u;
label_27a784:
    // 0x27a784: 0x26303280  addiu       $s0, $s1, 0x3280
    ctx->pc = 0x27a784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12928));
label_27a788:
    // 0x27a788: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27a788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27a78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a790: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x27a790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    std::cerr << "[sub_0027A6B8] CHAMANDO sub_00297290 s1=0x" << std::hex << GPR_U32(ctx, 17) << " a1=0x" << GPR_U32(ctx, 5) << std::dec << "\n";
    // 0x27a794: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x27A794u;
    SET_GPR_U32(ctx, 31, 0x27A79Cu);
    ctx->pc = 0x27A798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A794u;
            // 0x27a798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A79Cu; }
        if (ctx->pc != 0x27A79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A79Cu; }
        if (ctx->pc != 0x27A79Cu) { return; }
    }
    ctx->pc = 0x27A79Cu;
    // 0x27a79c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27A79Cu;
    {
        const bool branch_taken_0x27a79c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27a79c) {
            ctx->pc = 0x27A7A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A79Cu;
            // 0x27a7a0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27A7ECu;
            goto label_27a7ec;
        }
    }
    ctx->pc = 0x27A7A4u;
    // 0x27a7a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27a7a8: 0x8c431710  lw          $v1, 0x1710($v0)
    ctx->pc = 0x27a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5904)));
    // 0x27a7ac: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A7ACu;
    {
        const bool branch_taken_0x27a7ac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27A7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A7ACu;
            // 0x27a7b0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7ac) {
            ctx->pc = 0x27A7C4u;
            goto label_27a7c4;
        }
    }
    ctx->pc = 0x27A7B4u;
    // 0x27a7b4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27a7b8: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27A7B8u;
    SET_GPR_U32(ctx, 31, 0x27A7C0u);
    ctx->pc = 0x27A7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A7B8u;
            // 0x27a7bc: 0x24844c08  addiu       $a0, $a0, 0x4C08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A7C0u; }
        if (ctx->pc != 0x27A7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A7C0u; }
        if (ctx->pc != 0x27A7C0u) { return; }
    }
    ctx->pc = 0x27A7C0u;
    // 0x27a7c0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x27a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_27a7c4:
    // 0x27a7c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27a7c8:
    // 0x27a7c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27a7cc: 0x0  nop
    ctx->pc = 0x27a7ccu;
    // NOP
    // 0x27a7d0: 0x0  nop
    ctx->pc = 0x27a7d0u;
    // NOP
    // 0x27a7d4: 0x0  nop
    ctx->pc = 0x27a7d4u;
    // NOP
    // 0x27a7d8: 0x0  nop
    ctx->pc = 0x27a7d8u;
    // NOP
    // 0x27a7dc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27A7DCu;
    {
        const bool branch_taken_0x27a7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27a7dc) {
            ctx->pc = 0x27A7C8u;
            runtime->cooperativeGuestYield();
            goto label_27a7c8;
        }
    }
    ctx->pc = 0x27A7E4u;
    // 0x27a7e4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x27A7E4u;
    {
        const bool branch_taken_0x27a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A7E4u;
            // 0x27a7e8: 0x26303280  addiu       $s0, $s1, 0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7e4) {
            ctx->pc = 0x27A788u;
            runtime->cooperativeGuestYield();
            goto label_27a788;
        }
    }
    ctx->pc = 0x27A7ECu;
label_27a7ec:
    // 0x27a7ec: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x27A7ECu;
    {
        const bool branch_taken_0x27a7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A7ECu;
            // 0x27a7f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7ec) {
            ctx->pc = 0x27A760u;
            runtime->cooperativeGuestYield();
            goto label_27a760;
        }
    }
    ctx->pc = 0x27A7F4u;
    // 0x27a7f4: 0xae401754  sw          $zero, 0x1754($s2)
    ctx->pc = 0x27a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5972), GPR_U32(ctx, 0));
label_27a7f8:
    // 0x27a7f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27a7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a7fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27a7fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27a800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a808: 0x3e00008  jr          $ra
    ctx->pc = 0x27A808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A808u;
            // 0x27a80c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A718u: goto label_27a718;
            case 0x27A73Cu: goto label_27a73c;
            case 0x27A744u: goto label_27a744;
            case 0x27A760u: goto label_27a760;
            case 0x27A768u: goto label_27a768;
            case 0x27A784u: goto label_27a784;
            case 0x27A788u: goto label_27a788;
            case 0x27A7C4u: goto label_27a7c4;
            case 0x27A7C8u: goto label_27a7c8;
            case 0x27A7ECu: goto label_27a7ec;
            case 0x27A7F8u: goto label_27a7f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A810u;
}
