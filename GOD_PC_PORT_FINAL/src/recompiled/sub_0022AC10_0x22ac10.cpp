#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022AC10
// Address: 0x22ac10 - 0x22ad68
void sub_0022AC10_0x22ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AC10_0x22ac10");
#endif

    ctx->pc = 0x22ac10u;

    // 0x22ac10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22ac14: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22ac14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x22ac18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x22ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x22ac1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ac1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x22ac20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x22ac24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22ac24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac28: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22ac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x22ac2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22ac30: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x22ac34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ac38: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x22ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x22ac3c: 0x14540042  bne         $v0, $s4, . + 4 + (0x42 << 2)
    ctx->pc = 0x22AC3Cu;
    {
        const bool branch_taken_0x22ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x22AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC3Cu;
            // 0x22ac40: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac3c) {
            ctx->pc = 0x22AD48u;
            goto label_22ad48;
        }
    }
    ctx->pc = 0x22AC44u;
    // 0x22ac44: 0x2633003c  addiu       $s3, $s1, 0x3C
    ctx->pc = 0x22ac44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x22ac48: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x22ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x22ac4c: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x22ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    // 0x22ac50: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x22AC50u;
    SET_GPR_U32(ctx, 31, 0x22AC58u);
    ctx->pc = 0x22AC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC50u;
            // 0x22ac54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AC58u; }
        if (ctx->pc != 0x22AC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AC58u; }
        if (ctx->pc != 0x22AC58u) { return; }
    }
    ctx->pc = 0x22AC58u;
    // 0x22ac58: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x22AC58u;
    {
        const bool branch_taken_0x22ac58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC58u;
            // 0x22ac5c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac58) {
            ctx->pc = 0x22AD48u;
            goto label_22ad48;
        }
    }
    ctx->pc = 0x22AC60u;
    // 0x22ac60: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x22ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x22ac64: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x22AC64u;
    {
        const bool branch_taken_0x22ac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ac64) {
            ctx->pc = 0x22AC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC64u;
            // 0x22ac68: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22AD4Cu;
            goto label_22ad4c;
        }
    }
    ctx->pc = 0x22AC6Cu;
    // 0x22ac6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22ac6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac70: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x22ac70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x22ac74: 0x26a2e848  addiu       $v0, $s5, -0x17B8
    ctx->pc = 0x22ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x22ac78: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x22ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x22ac7c: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x22ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x22ac80: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x22ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x22ac84: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ac88: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x22ac88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22ac8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22ac90: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x22ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x22ac94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22ac98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ac9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22aca0: 0xc061e82  jal         func_187A08
    ctx->pc = 0x22ACA0u;
    SET_GPR_U32(ctx, 31, 0x22ACA8u);
    ctx->pc = 0x22ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACA0u;
            // 0x22aca4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187A08u;
    if (runtime->hasFunction(0x187A08u)) {
        auto targetFn = runtime->lookupFunction(0x187A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ACA8u; }
        if (ctx->pc != 0x22ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187a08_0x187a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ACA8u; }
        if (ctx->pc != 0x22ACA8u) { return; }
    }
    ctx->pc = 0x22ACA8u;
    // 0x22aca8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22ACA8u;
    {
        const bool branch_taken_0x22aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACA8u;
            // 0x22acac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aca8) {
            ctx->pc = 0x22ACE8u;
            goto label_22ace8;
        }
    }
    ctx->pc = 0x22ACB0u;
label_22acb0:
    // 0x22acb0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x22acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x22acb4: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x22acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x22acb8: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x22acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x22acbc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22acc0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x22acc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22acc4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x22acc8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x22acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x22accc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22acd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22acd4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22acd8: 0xc061e8a  jal         func_187A28
    ctx->pc = 0x22ACD8u;
    SET_GPR_U32(ctx, 31, 0x22ACE0u);
    ctx->pc = 0x22ACDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACD8u;
            // 0x22acdc: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187A28u;
    if (runtime->hasFunction(0x187A28u)) {
        auto targetFn = runtime->lookupFunction(0x187A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ACE0u; }
        if (ctx->pc != 0x22ACE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187a28_0x187a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ACE0u; }
        if (ctx->pc != 0x22ACE0u) { return; }
    }
    ctx->pc = 0x22ACE0u;
    // 0x22ace0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ace0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ace4: 0x0  nop
    ctx->pc = 0x22ace4u;
    // NOP
label_22ace8:
    // 0x22ace8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x22ACE8u;
    {
        const bool branch_taken_0x22ace8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ace8) {
            ctx->pc = 0x22AD18u;
            goto label_22ad18;
        }
    }
    ctx->pc = 0x22ACF0u;
    // 0x22acf0: 0x1214ffef  beq         $s0, $s4, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22ACF0u;
    {
        const bool branch_taken_0x22acf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x22ACF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACF0u;
            // 0x22acf4: 0x26a2e848  addiu       $v0, $s5, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acf0) {
            ctx->pc = 0x22ACB0u;
            runtime->cooperativeGuestYield();
            goto label_22acb0;
        }
    }
    ctx->pc = 0x22ACF8u;
    // 0x22acf8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x22acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x22acfc: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x22ACFCu;
    SET_GPR_U32(ctx, 31, 0x22AD04u);
    ctx->pc = 0x22AD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACFCu;
            // 0x22ad00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD04u; }
        if (ctx->pc != 0x22AD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD04u; }
        if (ctx->pc != 0x22AD04u) { return; }
    }
    ctx->pc = 0x22AD04u;
    // 0x22ad04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22ad04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ad08: 0x1240ffe9  beqz        $s2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x22AD08u;
    {
        const bool branch_taken_0x22ad08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD08u;
            // 0x22ad0c: 0x26a2e848  addiu       $v0, $s5, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad08) {
            ctx->pc = 0x22ACB0u;
            runtime->cooperativeGuestYield();
            goto label_22acb0;
        }
    }
    ctx->pc = 0x22AD10u;
    // 0x22ad10: 0xae30005c  sw          $s0, 0x5C($s1)
    ctx->pc = 0x22ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 16));
    // 0x22ad14: 0xae320058  sw          $s2, 0x58($s1)
    ctx->pc = 0x22ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 18));
label_22ad18:
    // 0x22ad18: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22AD18u;
    {
        const bool branch_taken_0x22ad18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ad18) {
            ctx->pc = 0x22AD38u;
            goto label_22ad38;
        }
    }
    ctx->pc = 0x22AD20u;
    // 0x22ad20: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22ad24: 0xc05c294  jal         func_170A50
    ctx->pc = 0x22AD24u;
    SET_GPR_U32(ctx, 31, 0x22AD2Cu);
    ctx->pc = 0x22AD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD24u;
            // 0x22ad28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD2Cu; }
        if (ctx->pc != 0x22AD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD2Cu; }
        if (ctx->pc != 0x22AD2Cu) { return; }
    }
    ctx->pc = 0x22AD2Cu;
    // 0x22ad2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22AD2Cu;
    {
        const bool branch_taken_0x22ad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD2Cu;
            // 0x22ad30: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad2c) {
            ctx->pc = 0x22AD48u;
            goto label_22ad48;
        }
    }
    ctx->pc = 0x22AD34u;
    // 0x22ad34: 0x0  nop
    ctx->pc = 0x22ad34u;
    // NOP
label_22ad38:
    // 0x22ad38: 0xc08aab2  jal         func_22AAC8
    ctx->pc = 0x22AD38u;
    SET_GPR_U32(ctx, 31, 0x22AD40u);
    ctx->pc = 0x22AD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD38u;
            // 0x22ad3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AAC8u;
    if (runtime->hasFunction(0x22AAC8u)) {
        auto targetFn = runtime->lookupFunction(0x22AAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD40u; }
        if (ctx->pc != 0x22AD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22aac8_0x22aae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD40u; }
        if (ctx->pc != 0x22AD40u) { return; }
    }
    ctx->pc = 0x22AD40u;
    // 0x22ad40: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x22ad40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ad44: 0x0  nop
    ctx->pc = 0x22ad44u;
    // NOP
label_22ad48:
    // 0x22ad48: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x22ad48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22ad4c:
    // 0x22ad4c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22ad4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ad50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ad50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ad54: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x22ad54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ad58: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x22ad58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ad5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ad5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ad60: 0x3e00008  jr          $ra
    ctx->pc = 0x22AD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD60u;
            // 0x22ad64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22ACB0u: goto label_22acb0;
            case 0x22ACE8u: goto label_22ace8;
            case 0x22AD18u: goto label_22ad18;
            case 0x22AD38u: goto label_22ad38;
            case 0x22AD48u: goto label_22ad48;
            case 0x22AD4Cu: goto label_22ad4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22AD68u;
}
