#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC9F8
// Address: 0x1ac9f8 - 0x1acb68
void sub_001AC9F8_0x1ac9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC9F8_0x1ac9f8");
#endif

    ctx->pc = 0x1ac9f8u;

    // 0x1ac9f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ac9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ac9fc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ac9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1aca00: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1aca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1aca04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1aca04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca08: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1aca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1aca0c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1aca0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1aca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1aca14: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1aca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1aca18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aca1c: 0x12800047  beqz        $s4, . + 4 + (0x47 << 2)
    ctx->pc = 0x1ACA1Cu;
    {
        const bool branch_taken_0x1aca1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA1Cu;
            // 0x1aca20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca1c) {
            ctx->pc = 0x1ACB3Cu;
            goto label_1acb3c;
        }
    }
    ctx->pc = 0x1ACA24u;
    // 0x1aca24: 0x12a00046  beqz        $s5, . + 4 + (0x46 << 2)
    ctx->pc = 0x1ACA24u;
    {
        const bool branch_taken_0x1aca24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA24u;
            // 0x1aca28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca24) {
            ctx->pc = 0x1ACB40u;
            goto label_1acb40;
        }
    }
    ctx->pc = 0x1ACA2Cu;
    // 0x1aca2c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1aca2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1aca30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACA30u;
    {
        const bool branch_taken_0x1aca30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA30u;
            // 0x1aca34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca30) {
            ctx->pc = 0x1ACA48u;
            goto label_1aca48;
        }
    }
    ctx->pc = 0x1ACA38u;
    // 0x1aca38: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1ACA38u;
    {
        const bool branch_taken_0x1aca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA38u;
            // 0x1aca3c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca38) {
            ctx->pc = 0x1ACB44u;
            goto label_1acb44;
        }
    }
    ctx->pc = 0x1ACA40u;
label_1aca40:
    // 0x1aca40: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1ACA40u;
    {
        const bool branch_taken_0x1aca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA40u;
            // 0x1aca44: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca40) {
            ctx->pc = 0x1ACB40u;
            goto label_1acb40;
        }
    }
    ctx->pc = 0x1ACA48u;
label_1aca48:
    // 0x1aca48: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1ACA48u;
    {
        const bool branch_taken_0x1aca48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA48u;
            // 0x1aca4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca48) {
            ctx->pc = 0x1ACAC0u;
            goto label_1acac0;
        }
    }
    ctx->pc = 0x1ACA50u;
    // 0x1aca50: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x1aca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1aca54: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1ACA54u;
    SET_GPR_U32(ctx, 31, 0x1ACA5Cu);
    ctx->pc = 0x1ACA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA54u;
            // 0x1aca58: 0x24840038  addiu       $a0, $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA5Cu; }
        if (ctx->pc != 0x1ACA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA5Cu; }
        if (ctx->pc != 0x1ACA5Cu) { return; }
    }
    ctx->pc = 0x1ACA5Cu;
    // 0x1aca5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aca5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca60: 0xc045ada  jal         func_116B68
    ctx->pc = 0x1ACA60u;
    SET_GPR_U32(ctx, 31, 0x1ACA68u);
    ctx->pc = 0x1ACA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA60u;
            // 0x1aca64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B68u;
    if (runtime->hasFunction(0x116B68u)) {
        auto targetFn = runtime->lookupFunction(0x116B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA68u; }
        if (ctx->pc != 0x1ACA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116b68_0x116bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA68u; }
        if (ctx->pc != 0x1ACA68u) { return; }
    }
    ctx->pc = 0x1ACA68u;
    // 0x1aca68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aca68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca6c: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ACA6Cu;
    {
        const bool branch_taken_0x1aca6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca6c) {
            ctx->pc = 0x1ACA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA6Cu;
            // 0x1aca70: 0x96820012  lhu         $v0, 0x12($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACAC4u;
            goto label_1acac4;
        }
    }
    ctx->pc = 0x1ACA74u;
    // 0x1aca74: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1aca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1aca78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ACA78u;
    {
        const bool branch_taken_0x1aca78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA78u;
            // 0x1aca7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca78) {
            ctx->pc = 0x1ACAC0u;
            goto label_1acac0;
        }
    }
    ctx->pc = 0x1ACA80u;
    // 0x1aca80: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1aca80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1aca84: 0x0  nop
    ctx->pc = 0x1aca84u;
    // NOP
label_1aca88:
    // 0x1aca88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aca88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1aca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1aca90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aca90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca94: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x1aca94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1aca98: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1ACA98u;
    SET_GPR_U32(ctx, 31, 0x1ACAA0u);
    ctx->pc = 0x1ACA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA98u;
            // 0x1aca9c: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAA0u; }
        if (ctx->pc != 0x1ACAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAA0u; }
        if (ctx->pc != 0x1ACAA0u) { return; }
    }
    ctx->pc = 0x1ACAA0u;
    // 0x1acaa0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1acaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1acaa4: 0x5043ffe6  beql        $v0, $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1ACAA4u;
    {
        const bool branch_taken_0x1acaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1acaa4) {
            ctx->pc = 0x1ACAA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAA4u;
            // 0x1acaa8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA40u;
            runtime->cooperativeGuestYield();
            goto label_1aca40;
        }
    }
    ctx->pc = 0x1ACAACu;
    // 0x1acaac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1acaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1acab0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1acab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1acab4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1acab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1acab8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1ACAB8u;
    {
        const bool branch_taken_0x1acab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAB8u;
            // 0x1acabc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acab8) {
            ctx->pc = 0x1ACA88u;
            runtime->cooperativeGuestYield();
            goto label_1aca88;
        }
    }
    ctx->pc = 0x1ACAC0u;
label_1acac0:
    // 0x1acac0: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x1acac0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_1acac4:
    // 0x1acac4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1ACAC4u;
    {
        const bool branch_taken_0x1acac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAC4u;
            // 0x1acac8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acac4) {
            ctx->pc = 0x1ACB3Cu;
            goto label_1acb3c;
        }
    }
    ctx->pc = 0x1ACACCu;
    // 0x1acacc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1acaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1acad0:
    // 0x1acad0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1acad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1acad4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1acad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1acad8: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x1acad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1acadc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1acadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1acae0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ACAE0u;
    {
        const bool branch_taken_0x1acae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAE0u;
            // 0x1acae4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acae0) {
            ctx->pc = 0x1ACB28u;
            goto label_1acb28;
        }
    }
    ctx->pc = 0x1ACAE8u;
    // 0x1acae8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1acae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1acaec: 0x0  nop
    ctx->pc = 0x1acaecu;
    // NOP
label_1acaf0:
    // 0x1acaf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acaf4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1acaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1acaf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acafc: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x1acafcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1acb00: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1ACB00u;
    SET_GPR_U32(ctx, 31, 0x1ACB08u);
    ctx->pc = 0x1ACB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB00u;
            // 0x1acb04: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB08u; }
        if (ctx->pc != 0x1ACB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB08u; }
        if (ctx->pc != 0x1ACB08u) { return; }
    }
    ctx->pc = 0x1ACB08u;
    // 0x1acb08: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1acb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1acb0c: 0x5043ffcc  beql        $v0, $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1ACB0Cu;
    {
        const bool branch_taken_0x1acb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1acb0c) {
            ctx->pc = 0x1ACB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB0Cu;
            // 0x1acb10: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA40u;
            runtime->cooperativeGuestYield();
            goto label_1aca40;
        }
    }
    ctx->pc = 0x1ACB14u;
    // 0x1acb14: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1acb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1acb18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1acb18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1acb1c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1acb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1acb20: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1ACB20u;
    {
        const bool branch_taken_0x1acb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB20u;
            // 0x1acb24: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb20) {
            ctx->pc = 0x1ACAF0u;
            runtime->cooperativeGuestYield();
            goto label_1acaf0;
        }
    }
    ctx->pc = 0x1ACB28u;
label_1acb28:
    // 0x1acb28: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x1acb28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x1acb2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1acb2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1acb30: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1acb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1acb34: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1ACB34u;
    {
        const bool branch_taken_0x1acb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB34u;
            // 0x1acb38: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb34) {
            ctx->pc = 0x1ACAD0u;
            runtime->cooperativeGuestYield();
            goto label_1acad0;
        }
    }
    ctx->pc = 0x1ACB3Cu;
label_1acb3c:
    // 0x1acb3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1acb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1acb40:
    // 0x1acb40: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1acb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1acb44:
    // 0x1acb44: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1acb44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1acb48: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1acb48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acb4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1acb4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1acb50: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1acb50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1acb54: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1acb54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acb58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB5Cu;
            // 0x1acb60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACA40u: goto label_1aca40;
            case 0x1ACA48u: goto label_1aca48;
            case 0x1ACA88u: goto label_1aca88;
            case 0x1ACAC0u: goto label_1acac0;
            case 0x1ACAC4u: goto label_1acac4;
            case 0x1ACAD0u: goto label_1acad0;
            case 0x1ACAF0u: goto label_1acaf0;
            case 0x1ACB28u: goto label_1acb28;
            case 0x1ACB3Cu: goto label_1acb3c;
            case 0x1ACB40u: goto label_1acb40;
            case 0x1ACB44u: goto label_1acb44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACB64u;
    // 0x1acb64: 0x0  nop
    ctx->pc = 0x1acb64u;
    // NOP
}
