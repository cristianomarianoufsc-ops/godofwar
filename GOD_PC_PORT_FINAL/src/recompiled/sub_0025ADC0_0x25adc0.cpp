#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025ADC0
// Address: 0x25adc0 - 0x25ae28
void sub_0025ADC0_0x25adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ADC0_0x25adc0");
#endif

    ctx->pc = 0x25adc0u;

    // 0x25adc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25adc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25adc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25adc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25adccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25add0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25add4: 0xc096402  jal         func_259008
    ctx->pc = 0x25ADD4u;
    SET_GPR_U32(ctx, 31, 0x25ADDCu);
    ctx->pc = 0x25ADD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ADD4u;
            // 0x25add8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ADDCu; }
        if (ctx->pc != 0x25ADDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ADDCu; }
        if (ctx->pc != 0x25ADDCu) { return; }
    }
    ctx->pc = 0x25ADDCu;
    // 0x25addc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25ade0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x25ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x25ade4: 0x244236b8  addiu       $v0, $v0, 0x36B8
    ctx->pc = 0x25ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14008));
    // 0x25ade8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x25ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25adec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25adecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adf0: 0xc099280  jal         func_264A00
    ctx->pc = 0x25ADF0u;
    SET_GPR_U32(ctx, 31, 0x25ADF8u);
    ctx->pc = 0x25ADF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ADF0u;
            // 0x25adf4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264A00u;
    if (runtime->hasFunction(0x264A00u)) {
        auto targetFn = runtime->lookupFunction(0x264A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ADF8u; }
        if (ctx->pc != 0x25ADF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264A00_0x264a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ADF8u; }
        if (ctx->pc != 0x25ADF8u) { return; }
    }
    ctx->pc = 0x25ADF8u;
    // 0x25adf8: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x25adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x25adfc: 0xc099292  jal         func_264A48
    ctx->pc = 0x25ADFCu;
    SET_GPR_U32(ctx, 31, 0x25AE04u);
    ctx->pc = 0x25AE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ADFCu;
            // 0x25ae00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264A48u;
    if (runtime->hasFunction(0x264A48u)) {
        auto targetFn = runtime->lookupFunction(0x264A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE04u; }
        if (ctx->pc != 0x25AE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264A48_0x264a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE04u; }
        if (ctx->pc != 0x25AE04u) { return; }
    }
    ctx->pc = 0x25AE04u;
    // 0x25ae04: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x25ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x25ae08: 0xc0992ac  jal         func_264AB0
    ctx->pc = 0x25AE08u;
    SET_GPR_U32(ctx, 31, 0x25AE10u);
    ctx->pc = 0x25AE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE08u;
            // 0x25ae0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264AB0u;
    if (runtime->hasFunction(0x264AB0u)) {
        auto targetFn = runtime->lookupFunction(0x264AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE10u; }
        if (ctx->pc != 0x25AE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264AB0_0x264ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE10u; }
        if (ctx->pc != 0x25AE10u) { return; }
    }
    ctx->pc = 0x25AE10u;
    // 0x25ae10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25ae10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ae14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ae18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25ae18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ae1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ae1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x25AE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE20u;
            // 0x25ae24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AE28u;
}
