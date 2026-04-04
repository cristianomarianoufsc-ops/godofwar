#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027AD00
// Address: 0x27ad00 - 0x27afa0
void sub_0027AD00_0x27ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AD00_0x27ad00");
#endif

    ctx->pc = 0x27ad00u;

    // 0x27ad00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x27ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x27ad04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ad08: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x27ad08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x27ad0c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x27ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x27ad10: 0x3c1e002a  lui         $fp, 0x2A
    ctx->pc = 0x27ad10u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
    // 0x27ad14: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x27ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x27ad18: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x27ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x27ad1c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x27ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x27ad20: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x27ad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x27ad24: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x27ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x27ad28: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27ad2c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x27ad2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27ad30: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x27ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27ad34: 0x8fc232c8  lw          $v0, 0x32C8($fp)
    ctx->pc = 0x27ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 13000)));
    // 0x27ad38: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AD38u;
    {
        const bool branch_taken_0x27ad38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27AD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD38u;
            // 0x27ad3c: 0x3c170031  lui         $s7, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad38) {
            ctx->pc = 0x27AD48u;
            goto label_27ad48;
        }
    }
    ctx->pc = 0x27AD40u;
    // 0x27ad40: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x27AD40u;
    {
        const bool branch_taken_0x27ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD40u;
            // 0x27ad44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad40) {
            ctx->pc = 0x27AF70u;
            goto label_27af70;
        }
    }
    ctx->pc = 0x27AD48u;
label_27ad48:
    // 0x27ad48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27ad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad4c: 0xc0a5b12  jal         func_296C48
    ctx->pc = 0x27AD4Cu;
    SET_GPR_U32(ctx, 31, 0x27AD54u);
    ctx->pc = 0x27AD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD4Cu;
            // 0x27ad50: 0xaee0d000  sw          $zero, -0x3000($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294955008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C48u;
    if (runtime->hasFunction(0x296C48u)) {
        auto targetFn = runtime->lookupFunction(0x296C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD54u; }
        if (ctx->pc != 0x27AD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296c48_0x296de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD54u; }
        if (ctx->pc != 0x27AD54u) { return; }
    }
    ctx->pc = 0x27AD54u;
    // 0x27ad54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27AD54u;
    {
        const bool branch_taken_0x27ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD54u;
            // 0x27ad58: 0x3c110031  lui         $s1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad54) {
            ctx->pc = 0x27AD84u;
            goto label_27ad84;
        }
    }
    ctx->pc = 0x27AD5Cu;
    // 0x27ad5c: 0x0  nop
    ctx->pc = 0x27ad5cu;
    // NOP
label_27ad60:
    // 0x27ad60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ad64: 0x0  nop
    ctx->pc = 0x27ad64u;
    // NOP
label_27ad68:
    // 0x27ad68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27ad6c: 0x0  nop
    ctx->pc = 0x27ad6cu;
    // NOP
    // 0x27ad70: 0x0  nop
    ctx->pc = 0x27ad70u;
    // NOP
    // 0x27ad74: 0x0  nop
    ctx->pc = 0x27ad74u;
    // NOP
    // 0x27ad78: 0x0  nop
    ctx->pc = 0x27ad78u;
    // NOP
    // 0x27ad7c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27AD7Cu;
    {
        const bool branch_taken_0x27ad7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ad7c) {
            ctx->pc = 0x27AD68u;
            runtime->cooperativeGuestYield();
            goto label_27ad68;
        }
    }
    ctx->pc = 0x27AD84u;
label_27ad84:
    // 0x27ad84: 0x2630ab48  addiu       $s0, $s1, -0x54B8
    ctx->pc = 0x27ad84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945608));
    // 0x27ad88: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27ad8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad90: 0x34a51300  ori         $a1, $a1, 0x1300
    ctx->pc = 0x27ad90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4864);
    // 0x27ad94: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x27AD94u;
    SET_GPR_U32(ctx, 31, 0x27AD9Cu);
    ctx->pc = 0x27AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD94u;
            // 0x27ad98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD9Cu; }
        if (ctx->pc != 0x27AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD9Cu; }
        if (ctx->pc != 0x27AD9Cu) { return; }
    }
    ctx->pc = 0x27AD9Cu;
    // 0x27ad9c: 0x440005a  bltz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x27AD9Cu;
    {
        const bool branch_taken_0x27ad9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27ADA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AD9Cu;
            // 0x27ada0: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad9c) {
            ctx->pc = 0x27AF08u;
            goto label_27af08;
        }
    }
    ctx->pc = 0x27ADA4u;
    // 0x27ada4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x27ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x27ada8: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x27ADA8u;
    {
        const bool branch_taken_0x27ada8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADA8u;
            // 0x27adac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ada8) {
            ctx->pc = 0x27AD60u;
            runtime->cooperativeGuestYield();
            goto label_27ad60;
        }
    }
    ctx->pc = 0x27ADB0u;
    // 0x27adb0: 0xc09eb2a  jal         func_27ACA8
    ctx->pc = 0x27ADB0u;
    SET_GPR_U32(ctx, 31, 0x27ADB8u);
    ctx->pc = 0x27ACA8u;
    if (runtime->hasFunction(0x27ACA8u)) {
        auto targetFn = runtime->lookupFunction(0x27ACA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADB8u; }
        if (ctx->pc != 0x27ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27aca8_0x27ad00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADB8u; }
        if (ctx->pc != 0x27ADB8u) { return; }
    }
    ctx->pc = 0x27ADB8u;
    // 0x27adb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27adb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27adbc: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x27adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x27adc0: 0x101103  sra         $v0, $s0, 4
    ctx->pc = 0x27adc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
    // 0x27adc4: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x27ADC4u;
    {
        const bool branch_taken_0x27adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27ADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADC4u;
            // 0x27adc8: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adc4) {
            ctx->pc = 0x27ADF8u;
            goto label_27adf8;
        }
    }
    ctx->pc = 0x27ADCCu;
    // 0x27adcc: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27ADCCu;
    SET_GPR_U32(ctx, 31, 0x27ADD4u);
    ctx->pc = 0x27ADD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADCCu;
            // 0x27add0: 0x24844d20  addiu       $a0, $a0, 0x4D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADD4u; }
        if (ctx->pc != 0x27ADD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADD4u; }
        if (ctx->pc != 0x27ADD4u) { return; }
    }
    ctx->pc = 0x27ADD4u;
    // 0x27add4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27add4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27add8: 0x320800ff  andi        $t0, $s0, 0xFF
    ctx->pc = 0x27add8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x27addc: 0x24844d48  addiu       $a0, $a0, 0x4D48
    ctx->pc = 0x27addcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19784));
    // 0x27ade0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ade4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x27ade4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27ade8: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x27ADE8u;
    SET_GPR_U32(ctx, 31, 0x27ADF0u);
    ctx->pc = 0x27ADECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADE8u;
            // 0x27adec: 0x103a03  sra         $a3, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADF0u; }
        if (ctx->pc != 0x27ADF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ADF0u; }
        if (ctx->pc != 0x27ADF0u) { return; }
    }
    ctx->pc = 0x27ADF0u;
    // 0x27adf0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x27ADF0u;
    {
        const bool branch_taken_0x27adf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADF0u;
            // 0x27adf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adf0) {
            ctx->pc = 0x27AF70u;
            goto label_27af70;
        }
    }
    ctx->pc = 0x27ADF8u;
label_27adf8:
    // 0x27adf8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27ADF8u;
    {
        const bool branch_taken_0x27adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ADF8u;
            // 0x27adfc: 0x3c110031  lui         $s1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27adf8) {
            ctx->pc = 0x27AE24u;
            goto label_27ae24;
        }
    }
    ctx->pc = 0x27AE00u;
label_27ae00:
    // 0x27ae00: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x27ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x27ae04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27ae08:
    // 0x27ae08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27ae0c: 0x0  nop
    ctx->pc = 0x27ae0cu;
    // NOP
    // 0x27ae10: 0x0  nop
    ctx->pc = 0x27ae10u;
    // NOP
    // 0x27ae14: 0x0  nop
    ctx->pc = 0x27ae14u;
    // NOP
    // 0x27ae18: 0x0  nop
    ctx->pc = 0x27ae18u;
    // NOP
    // 0x27ae1c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27AE1Cu;
    {
        const bool branch_taken_0x27ae1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ae1c) {
            ctx->pc = 0x27AE08u;
            runtime->cooperativeGuestYield();
            goto label_27ae08;
        }
    }
    ctx->pc = 0x27AE24u;
label_27ae24:
    // 0x27ae24: 0x2630ab98  addiu       $s0, $s1, -0x5468
    ctx->pc = 0x27ae24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945688));
    // 0x27ae28: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27ae2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ae2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ae30: 0x34a5131c  ori         $a1, $a1, 0x131C
    ctx->pc = 0x27ae30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4892);
    // 0x27ae34: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x27AE34u;
    SET_GPR_U32(ctx, 31, 0x27AE3Cu);
    ctx->pc = 0x27AE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE34u;
            // 0x27ae38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE3Cu; }
        if (ctx->pc != 0x27AE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE3Cu; }
        if (ctx->pc != 0x27AE3Cu) { return; }
    }
    ctx->pc = 0x27AE3Cu;
    // 0x27ae3c: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x27AE3Cu;
    {
        const bool branch_taken_0x27ae3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27AE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE3Cu;
            // 0x27ae40: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae3c) {
            ctx->pc = 0x27AF08u;
            goto label_27af08;
        }
    }
    ctx->pc = 0x27AE44u;
    // 0x27ae44: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x27ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x27ae48: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x27AE48u;
    {
        const bool branch_taken_0x27ae48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE48u;
            // 0x27ae4c: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae48) {
            ctx->pc = 0x27AE00u;
            runtime->cooperativeGuestYield();
            goto label_27ae00;
        }
    }
    ctx->pc = 0x27AE50u;
    // 0x27ae50: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x27ae50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x27ae54: 0x2456abc0  addiu       $s6, $v0, -0x5440
    ctx->pc = 0x27ae54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945728));
    // 0x27ae58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27ae58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ae5c: 0x3673131e  ori         $s3, $s3, 0x131E
    ctx->pc = 0x27ae5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4894);
    // 0x27ae60: 0x26d50024  addiu       $s5, $s6, 0x24
    ctx->pc = 0x27ae60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
    // 0x27ae64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27ae64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ae68:
    // 0x27ae68: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x27ae68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ae6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27AE6Cu;
    {
        const bool branch_taken_0x27ae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE6Cu;
            // 0x27ae70: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae6c) {
            ctx->pc = 0x27AE9Cu;
            goto label_27ae9c;
        }
    }
    ctx->pc = 0x27AE74u;
    // 0x27ae74: 0x0  nop
    ctx->pc = 0x27ae74u;
    // NOP
label_27ae78:
    // 0x27ae78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27ae7c: 0x0  nop
    ctx->pc = 0x27ae7cu;
    // NOP
label_27ae80:
    // 0x27ae80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27ae84: 0x0  nop
    ctx->pc = 0x27ae84u;
    // NOP
    // 0x27ae88: 0x0  nop
    ctx->pc = 0x27ae88u;
    // NOP
    // 0x27ae8c: 0x0  nop
    ctx->pc = 0x27ae8cu;
    // NOP
    // 0x27ae90: 0x0  nop
    ctx->pc = 0x27ae90u;
    // NOP
    // 0x27ae94: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27AE94u;
    {
        const bool branch_taken_0x27ae94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ae94) {
            ctx->pc = 0x27AE80u;
            runtime->cooperativeGuestYield();
            goto label_27ae80;
        }
    }
    ctx->pc = 0x27AE9Cu;
label_27ae9c:
    // 0x27ae9c: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x27ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x27aea0: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x27aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x27aea4: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x27AEA4u;
    SET_GPR_U32(ctx, 31, 0x27AEACu);
    ctx->pc = 0x27AEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEA4u;
            // 0x27aea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEACu; }
        if (ctx->pc != 0x27AEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEACu; }
        if (ctx->pc != 0x27AEACu) { return; }
    }
    ctx->pc = 0x27AEACu;
    // 0x27aeac: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27AEACu;
    {
        const bool branch_taken_0x27aeac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27AEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEACu;
            // 0x27aeb0: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aeac) {
            ctx->pc = 0x27AF08u;
            goto label_27af08;
        }
    }
    ctx->pc = 0x27AEB4u;
    // 0x27aeb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27aeb8: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x27AEB8u;
    {
        const bool branch_taken_0x27aeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEB8u;
            // 0x27aebc: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aeb8) {
            ctx->pc = 0x27AE78u;
            runtime->cooperativeGuestYield();
            goto label_27ae78;
        }
    }
    ctx->pc = 0x27AEC0u;
    // 0x27aec0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27aec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27aec4: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x27aec4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x27aec8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x27aec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27aecc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x27AECCu;
    {
        const bool branch_taken_0x27aecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AECCu;
            // 0x27aed0: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aecc) {
            ctx->pc = 0x27AE68u;
            runtime->cooperativeGuestYield();
            goto label_27ae68;
        }
    }
    ctx->pc = 0x27AED4u;
    // 0x27aed4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x27aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x27aed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aedc: 0x24424d78  addiu       $v0, $v0, 0x4D78
    ctx->pc = 0x27aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19832));
    // 0x27aee0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x27aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x27aee4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x27aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x27aee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27aee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aeec: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x27aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x27aef0: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x27AEF0u;
    SET_GPR_U32(ctx, 31, 0x27AEF8u);
    ctx->pc = 0x27AEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEF0u;
            // 0x27aef4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEF8u; }
        if (ctx->pc != 0x27AEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AEF8u; }
        if (ctx->pc != 0x27AEF8u) { return; }
    }
    ctx->pc = 0x27AEF8u;
    // 0x27aef8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27AEF8u;
    {
        const bool branch_taken_0x27aef8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27AEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AEF8u;
            // 0x27aefc: 0xaee2d000  sw          $v0, -0x3000($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294955008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aef8) {
            ctx->pc = 0x27AF18u;
            goto label_27af18;
        }
    }
    ctx->pc = 0x27AF00u;
    // 0x27af00: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27AF00u;
    {
        const bool branch_taken_0x27af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF00u;
            // 0x27af04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af00) {
            ctx->pc = 0x27AF70u;
            goto label_27af70;
        }
    }
    ctx->pc = 0x27AF08u;
label_27af08:
    // 0x27af08: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27AF08u;
    SET_GPR_U32(ctx, 31, 0x27AF10u);
    ctx->pc = 0x27AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF08u;
            // 0x27af0c: 0x24844d08  addiu       $a0, $a0, 0x4D08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF10u; }
        if (ctx->pc != 0x27AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF10u; }
        if (ctx->pc != 0x27AF10u) { return; }
    }
    ctx->pc = 0x27AF10u;
    // 0x27af10: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27AF10u;
    {
        const bool branch_taken_0x27af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF10u;
            // 0x27af14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af10) {
            ctx->pc = 0x27AF70u;
            goto label_27af70;
        }
    }
    ctx->pc = 0x27AF18u;
label_27af18:
    // 0x27af18: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27af18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27af1c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x27af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27af20: 0x2442cfc0  addiu       $v0, $v0, -0x3040
    ctx->pc = 0x27af20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954944));
    // 0x27af24: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x27af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_27af28:
    // 0x27af28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27af28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x27af2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27af30: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27af34: 0x0  nop
    ctx->pc = 0x27af34u;
    // NOP
    // 0x27af38: 0x0  nop
    ctx->pc = 0x27af38u;
    // NOP
    // 0x27af3c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27AF3Cu;
    {
        const bool branch_taken_0x27af3c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27af3c) {
            ctx->pc = 0x27AF28u;
            runtime->cooperativeGuestYield();
            goto label_27af28;
        }
    }
    ctx->pc = 0x27AF44u;
    // 0x27af44: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x27af44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x27af48: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27af48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27af4c: 0x2610cf40  addiu       $s0, $s0, -0x30C0
    ctx->pc = 0x27af4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954816));
    // 0x27af50: 0x24844d88  addiu       $a0, $a0, 0x4D88
    ctx->pc = 0x27af50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19848));
    // 0x27af54: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27AF54u;
    SET_GPR_U32(ctx, 31, 0x27AF5Cu);
    ctx->pc = 0x27AF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF54u;
            // 0x27af58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF5Cu; }
        if (ctx->pc != 0x27AF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF5Cu; }
        if (ctx->pc != 0x27AF5Cu) { return; }
    }
    ctx->pc = 0x27AF5Cu;
    // 0x27af5c: 0xc09ebe8  jal         func_27AFA0
    ctx->pc = 0x27AF5Cu;
    SET_GPR_U32(ctx, 31, 0x27AF64u);
    ctx->pc = 0x27AF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF5Cu;
            // 0x27af60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27AFA0u;
    if (runtime->hasFunction(0x27AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x27AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF64u; }
        if (ctx->pc != 0x27AF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027AFA0_0x27afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF64u; }
        if (ctx->pc != 0x27AF64u) { return; }
    }
    ctx->pc = 0x27AF64u;
    // 0x27af64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27af64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27af68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27af6c: 0xafc332c8  sw          $v1, 0x32C8($fp)
    ctx->pc = 0x27af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 13000), GPR_U32(ctx, 3));
label_27af70:
    // 0x27af70: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x27af70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27af74: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x27af74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27af78: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x27af78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27af7c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x27af7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27af80: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x27af80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27af84: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x27af84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27af88: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x27af88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27af8c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27af8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27af90: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x27af90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27af94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27af94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27af98: 0x3e00008  jr          $ra
    ctx->pc = 0x27AF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AF98u;
            // 0x27af9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27AD48u: goto label_27ad48;
            case 0x27AD60u: goto label_27ad60;
            case 0x27AD68u: goto label_27ad68;
            case 0x27AD84u: goto label_27ad84;
            case 0x27ADF8u: goto label_27adf8;
            case 0x27AE00u: goto label_27ae00;
            case 0x27AE08u: goto label_27ae08;
            case 0x27AE24u: goto label_27ae24;
            case 0x27AE68u: goto label_27ae68;
            case 0x27AE78u: goto label_27ae78;
            case 0x27AE80u: goto label_27ae80;
            case 0x27AE9Cu: goto label_27ae9c;
            case 0x27AF08u: goto label_27af08;
            case 0x27AF18u: goto label_27af18;
            case 0x27AF28u: goto label_27af28;
            case 0x27AF70u: goto label_27af70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27AFA0u;
}
