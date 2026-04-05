#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026ADC0
// Address: 0x26adc0 - 0x26ae10
void sub_0026ADC0_0x26adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026ADC0_0x26adc0");
#endif

    ctx->pc = 0x26adc0u;

    // 0x26adc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26adc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26adc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26adcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26adccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26add0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26add4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26add4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26add8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x26add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x26addc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26addcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ade0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x26ade4: 0xc0742c4  jal         func_1D0B10
    ctx->pc = 0x26ADE4u;
    SET_GPR_U32(ctx, 31, 0x26ADECu);
    ctx->pc = 0x26ADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADE4u;
            // 0x26ade8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B10u;
    if (runtime->hasFunction(0x1D0B10u)) {
        auto targetFn = runtime->lookupFunction(0x1D0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADECu; }
        if (ctx->pc != 0x26ADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0B10_0x1d0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADECu; }
        if (ctx->pc != 0x26ADECu) { return; }
    }
    ctx->pc = 0x26ADECu;
    // 0x26adec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x26adecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26adf0: 0xc074944  jal         func_1D2510
    ctx->pc = 0x26ADF0u;
    SET_GPR_U32(ctx, 31, 0x26ADF8u);
    ctx->pc = 0x26ADF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADF0u;
            // 0x26adf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADF8u; }
        if (ctx->pc != 0x26ADF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADF8u; }
        if (ctx->pc != 0x26ADF8u) { return; }
    }
    ctx->pc = 0x26ADF8u;
    // 0x26adf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26adf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26adfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26adfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ae00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ae04: 0x3e00008  jr          $ra
    ctx->pc = 0x26AE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE04u;
            // 0x26ae08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AE0Cu;
    // 0x26ae0c: 0x0  nop
    ctx->pc = 0x26ae0cu;
    // NOP
}
