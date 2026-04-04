#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029AE40
// Address: 0x29ae40 - 0x29af38
void sub_0029AE40_0x29ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AE40_0x29ae40");
#endif

    ctx->pc = 0x29ae40u;

    // 0x29ae40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ae44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ae44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29ae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29ae4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29ae4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29ae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29ae54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29ae58: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x29AE58u;
    SET_GPR_U32(ctx, 31, 0x29AE60u);
    ctx->pc = 0x29AE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE58u;
            // 0x29ae5c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE60u; }
        if (ctx->pc != 0x29AE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE60u; }
        if (ctx->pc != 0x29AE60u) { return; }
    }
    ctx->pc = 0x29AE60u;
    // 0x29ae60: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x29AE60u;
    {
        const bool branch_taken_0x29ae60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29AE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE60u;
            // 0x29ae64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae60) {
            ctx->pc = 0x29AF14u;
            goto label_29af14;
        }
    }
    ctx->pc = 0x29AE68u;
    // 0x29ae68: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x29ae68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x29ae6c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x29ae6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x29ae70: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x29AE70u;
    SET_GPR_U32(ctx, 31, 0x29AE78u);
    ctx->pc = 0x29AE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE70u;
            // 0x29ae74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE78u; }
        if (ctx->pc != 0x29AE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE78u; }
        if (ctx->pc != 0x29AE78u) { return; }
    }
    ctx->pc = 0x29AE78u;
    // 0x29ae78: 0xc0a1420  jal         func_285080
    ctx->pc = 0x29AE78u;
    SET_GPR_U32(ctx, 31, 0x29AE80u);
    ctx->pc = 0x29AE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE78u;
            // 0x29ae7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285080u;
    if (runtime->hasFunction(0x285080u)) {
        auto targetFn = runtime->lookupFunction(0x285080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE80u; }
        if (ctx->pc != 0x29AE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285080_0x285080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE80u; }
        if (ctx->pc != 0x29AE80u) { return; }
    }
    ctx->pc = 0x29AE80u;
    // 0x29ae80: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x29ae80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29ae84: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AE84u;
    {
        const bool branch_taken_0x29ae84 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x29AE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE84u;
            // 0x29ae88: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae84) {
            ctx->pc = 0x29AE9Cu;
            goto label_29ae9c;
        }
    }
    ctx->pc = 0x29AE8Cu;
    // 0x29ae8c: 0xc0a6bce  jal         func_29AF38
    ctx->pc = 0x29AE8Cu;
    SET_GPR_U32(ctx, 31, 0x29AE94u);
    ctx->pc = 0x29AE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE8Cu;
            // 0x29ae90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF38u;
    if (runtime->hasFunction(0x29AF38u)) {
        auto targetFn = runtime->lookupFunction(0x29AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE94u; }
        if (ctx->pc != 0x29AE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29af38_0x29afd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE94u; }
        if (ctx->pc != 0x29AE94u) { return; }
    }
    ctx->pc = 0x29AE94u;
    // 0x29ae94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AE94u;
    {
        const bool branch_taken_0x29ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AE94u;
            // 0x29ae98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae94) {
            ctx->pc = 0x29AEB8u;
            goto label_29aeb8;
        }
    }
    ctx->pc = 0x29AE9Cu;
label_29ae9c:
    // 0x29ae9c: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x29ae9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x29aea0: 0xc0a6bce  jal         func_29AF38
    ctx->pc = 0x29AEA0u;
    SET_GPR_U32(ctx, 31, 0x29AEA8u);
    ctx->pc = 0x29AEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEA0u;
            // 0x29aea4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF38u;
    if (runtime->hasFunction(0x29AF38u)) {
        auto targetFn = runtime->lookupFunction(0x29AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEA8u; }
        if (ctx->pc != 0x29AEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29af38_0x29afd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEA8u; }
        if (ctx->pc != 0x29AEA8u) { return; }
    }
    ctx->pc = 0x29AEA8u;
    // 0x29aea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29aea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aeac: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x29AEACu;
    SET_GPR_U32(ctx, 31, 0x29AEB4u);
    ctx->pc = 0x29AEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEACu;
            // 0x29aeb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEB4u; }
        if (ctx->pc != 0x29AEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEB4u; }
        if (ctx->pc != 0x29AEB4u) { return; }
    }
    ctx->pc = 0x29AEB4u;
    // 0x29aeb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29aeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29aeb8:
    // 0x29aeb8: 0xc0a1254  jal         func_284950
    ctx->pc = 0x29AEB8u;
    SET_GPR_U32(ctx, 31, 0x29AEC0u);
    ctx->pc = 0x29AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEB8u;
            // 0x29aebc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEC0u; }
        if (ctx->pc != 0x29AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEC0u; }
        if (ctx->pc != 0x29AEC0u) { return; }
    }
    ctx->pc = 0x29AEC0u;
    // 0x29aec0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29aec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29aec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29aec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aecc: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x29AECCu;
    SET_GPR_U32(ctx, 31, 0x29AED4u);
    ctx->pc = 0x29AED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AECCu;
            // 0x29aed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AED4u; }
        if (ctx->pc != 0x29AED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AED4u; }
        if (ctx->pc != 0x29AED4u) { return; }
    }
    ctx->pc = 0x29AED4u;
    // 0x29aed4: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AED4u;
    {
        const bool branch_taken_0x29aed4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29AED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AED4u;
            // 0x29aed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aed4) {
            ctx->pc = 0x29AEFCu;
            goto label_29aefc;
        }
    }
    ctx->pc = 0x29AEDCu;
    // 0x29aedc: 0xc0a1254  jal         func_284950
    ctx->pc = 0x29AEDCu;
    SET_GPR_U32(ctx, 31, 0x29AEE4u);
    ctx->pc = 0x29AEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEDCu;
            // 0x29aee0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEE4u; }
        if (ctx->pc != 0x29AEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEE4u; }
        if (ctx->pc != 0x29AEE4u) { return; }
    }
    ctx->pc = 0x29AEE4u;
    // 0x29aee4: 0xc0a1420  jal         func_285080
    ctx->pc = 0x29AEE4u;
    SET_GPR_U32(ctx, 31, 0x29AEECu);
    ctx->pc = 0x29AEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEE4u;
            // 0x29aee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285080u;
    if (runtime->hasFunction(0x285080u)) {
        auto targetFn = runtime->lookupFunction(0x285080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEECu; }
        if (ctx->pc != 0x29AEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285080_0x285080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AEECu; }
        if (ctx->pc != 0x29AEECu) { return; }
    }
    ctx->pc = 0x29AEECu;
    // 0x29aeec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29aeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29aef0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29aef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29aef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29AEF4u;
    {
        const bool branch_taken_0x29aef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEF4u;
            // 0x29aef8: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aef4) {
            ctx->pc = 0x29AF10u;
            goto label_29af10;
        }
    }
    ctx->pc = 0x29AEFCu;
label_29aefc:
    // 0x29aefc: 0xc0a1420  jal         func_285080
    ctx->pc = 0x29AEFCu;
    SET_GPR_U32(ctx, 31, 0x29AF04u);
    ctx->pc = 0x29AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEFCu;
            // 0x29af00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285080u;
    if (runtime->hasFunction(0x285080u)) {
        auto targetFn = runtime->lookupFunction(0x285080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF04u; }
        if (ctx->pc != 0x29AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285080_0x285080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AF04u; }
        if (ctx->pc != 0x29AF04u) { return; }
    }
    ctx->pc = 0x29AF04u;
    // 0x29af04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29af04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29af08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29af0c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x29af0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_29af10:
    // 0x29af10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29af10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29af14:
    // 0x29af14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29af14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29af18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29af18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29af1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29af1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29af20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29af20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29af24: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AF24u;
            // 0x29af28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AE9Cu: goto label_29ae9c;
            case 0x29AEB8u: goto label_29aeb8;
            case 0x29AEFCu: goto label_29aefc;
            case 0x29AF10u: goto label_29af10;
            case 0x29AF14u: goto label_29af14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AF2Cu;
    // 0x29af2c: 0x0  nop
    ctx->pc = 0x29af2cu;
    // NOP
    // 0x29af30: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29af34: 0x0  nop
    ctx->pc = 0x29af34u;
    // NOP
}
