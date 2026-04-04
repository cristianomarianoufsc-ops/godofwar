#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027ABD0
// Address: 0x27abd0 - 0x27aca8
void sub_0027ABD0_0x27abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027ABD0_0x27abd0");
#endif

    ctx->pc = 0x27abd0u;

    // 0x27abd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27abd4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27abd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27abd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27abdc: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x27abdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x27abe0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27abe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27abe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27abe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27abec: 0x26322d40  addiu       $s2, $s1, 0x2D40
    ctx->pc = 0x27abecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 11584));
    // 0x27abf0: 0xc09e9ae  jal         func_27A6B8
    ctx->pc = 0x27ABF0u;
    SET_GPR_U32(ctx, 31, 0x27ABF8u);
    ctx->pc = 0x27ABF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ABF0u;
            // 0x27abf4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A6B8u;
    if (runtime->hasFunction(0x27A6B8u)) {
        auto targetFn = runtime->lookupFunction(0x27A6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABF8u; }
        if (ctx->pc != 0x27ABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A6B8_0x27a6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABF8u; }
        if (ctx->pc != 0x27ABF8u) { return; }
    }
    ctx->pc = 0x27ABF8u;
    // 0x27abf8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x27ABF8u;
    {
        const bool branch_taken_0x27abf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27abf8) {
            ctx->pc = 0x27ABFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27ABF8u;
            // 0x27abfc: 0xae302d40  sw          $s0, 0x2D40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11584), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27AC08u;
            goto label_27ac08;
        }
    }
    ctx->pc = 0x27AC00u;
    // 0x27ac00: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27AC00u;
    {
        const bool branch_taken_0x27ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC00u;
            // 0x27ac04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac00) {
            ctx->pc = 0x27AC88u;
            goto label_27ac88;
        }
    }
    ctx->pc = 0x27AC08u;
label_27ac08:
    // 0x27ac08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27ac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac0c: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x27AC0Cu;
    SET_GPR_U32(ctx, 31, 0x27AC14u);
    ctx->pc = 0x27AC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC0Cu;
            // 0x27ac10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC14u; }
        if (ctx->pc != 0x27AC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC14u; }
        if (ctx->pc != 0x27AC14u) { return; }
    }
    ctx->pc = 0x27AC14u;
    // 0x27ac14: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x27ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x27ac18: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x27ac18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x27ac1c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x27ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x27ac20: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27ac24: 0x8c8832ac  lw          $t0, 0x32AC($a0)
    ctx->pc = 0x27ac24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12972)));
    // 0x27ac28: 0x24502900  addiu       $s0, $v0, 0x2900
    ctx->pc = 0x27ac28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10496));
    // 0x27ac2c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x27ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x27ac30: 0x8cca32b0  lw          $t2, 0x32B0($a2)
    ctx->pc = 0x27ac30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12976)));
    // 0x27ac34: 0x8c6532a8  lw          $a1, 0x32A8($v1)
    ctx->pc = 0x27ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12968)));
    // 0x27ac38: 0x24843280  addiu       $a0, $a0, 0x3280
    ctx->pc = 0x27ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12928));
    // 0x27ac3c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27ac3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27ac44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27ac44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac48: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x27ac48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac4c: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27AC4Cu;
    SET_GPR_U32(ctx, 31, 0x27AC54u);
    ctx->pc = 0x27AC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC4Cu;
            // 0x27ac50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC54u; }
        if (ctx->pc != 0x27AC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC54u; }
        if (ctx->pc != 0x27AC54u) { return; }
    }
    ctx->pc = 0x27AC54u;
    // 0x27ac54: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AC54u;
    {
        const bool branch_taken_0x27ac54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27AC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC54u;
            // 0x27ac58: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac54) {
            ctx->pc = 0x27AC70u;
            goto label_27ac70;
        }
    }
    ctx->pc = 0x27AC5Cu;
    // 0x27ac5c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27ac60: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27AC60u;
    SET_GPR_U32(ctx, 31, 0x27AC68u);
    ctx->pc = 0x27AC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC60u;
            // 0x27ac64: 0x8c44172c  lw          $a0, 0x172C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5932)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC68u; }
        if (ctx->pc != 0x27AC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC68u; }
        if (ctx->pc != 0x27AC68u) { return; }
    }
    ctx->pc = 0x27AC68u;
    // 0x27ac68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27AC68u;
    {
        const bool branch_taken_0x27ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC68u;
            // 0x27ac6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac68) {
            ctx->pc = 0x27AC88u;
            goto label_27ac88;
        }
    }
    ctx->pc = 0x27AC70u;
label_27ac70:
    // 0x27ac70: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x27ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x27ac74: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x27ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x27ac78: 0x8c64172c  lw          $a0, 0x172C($v1)
    ctx->pc = 0x27ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5932)));
    // 0x27ac7c: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27AC7Cu;
    SET_GPR_U32(ctx, 31, 0x27AC84u);
    ctx->pc = 0x27AC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC7Cu;
            // 0x27ac80: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC84u; }
        if (ctx->pc != 0x27AC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AC84u; }
        if (ctx->pc != 0x27AC84u) { return; }
    }
    ctx->pc = 0x27AC84u;
    // 0x27ac84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ac84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ac88:
    // 0x27ac88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27ac88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ac8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27ac8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ac90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27ac90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ac94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27ac94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ac98: 0x3e00008  jr          $ra
    ctx->pc = 0x27AC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AC98u;
            // 0x27ac9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27AC08u: goto label_27ac08;
            case 0x27AC70u: goto label_27ac70;
            case 0x27AC88u: goto label_27ac88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27ACA0u;
    // 0x27aca0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27aca4: 0x0  nop
    ctx->pc = 0x27aca4u;
    // NOP
}
