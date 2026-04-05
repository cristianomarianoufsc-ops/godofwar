#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECEE0
// Address: 0x1ecee0 - 0x1ecf58
void sub_001ECEE0_0x1ecee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECEE0_0x1ecee0");
#endif

    ctx->pc = 0x1ecee0u;

    // 0x1ecee0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ecee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ecee4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ecee8: 0x8c44ec4c  lw          $a0, -0x13B4($v0)
    ctx->pc = 0x1ecee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962252)));
    // 0x1eceec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1eceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ecef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ecef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecef8: 0xc04f856  jal         func_13E158
    ctx->pc = 0x1ECEF8u;
    SET_GPR_U32(ctx, 31, 0x1ECF00u);
    ctx->pc = 0x1ECEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEF8u;
            // 0x1ecefc: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF00u; }
        if (ctx->pc != 0x1ECF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF00u; }
        if (ctx->pc != 0x1ECF00u) { return; }
    }
    ctx->pc = 0x1ECF00u;
    // 0x1ecf00: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1ECF00u;
    SET_GPR_U32(ctx, 31, 0x1ECF08u);
    ctx->pc = 0x1ECF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF00u;
            // 0x1ecf04: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF08u; }
        if (ctx->pc != 0x1ECF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF08u; }
        if (ctx->pc != 0x1ECF08u) { return; }
    }
    ctx->pc = 0x1ECF08u;
    // 0x1ecf08: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1ECF08u;
    SET_GPR_U32(ctx, 31, 0x1ECF10u);
    ctx->pc = 0x1ECF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF08u;
            // 0x1ecf0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF10u; }
        if (ctx->pc != 0x1ECF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF10u; }
        if (ctx->pc != 0x1ECF10u) { return; }
    }
    ctx->pc = 0x1ECF10u;
    // 0x1ecf10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ecf10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf14: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1ecf14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1ecf18: 0x24a56f78  addiu       $a1, $a1, 0x6F78
    ctx->pc = 0x1ecf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28536));
    // 0x1ecf1c: 0xc060978  jal         func_1825E0
    ctx->pc = 0x1ECF1Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF24u);
    ctx->pc = 0x1ECF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF1Cu;
            // 0x1ecf20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1825E0u;
    if (runtime->hasFunction(0x1825E0u)) {
        auto targetFn = runtime->lookupFunction(0x1825E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF24u; }
        if (ctx->pc != 0x1ECF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001825E0_0x1825e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF24u; }
        if (ctx->pc != 0x1ECF24u) { return; }
    }
    ctx->pc = 0x1ECF24u;
    // 0x1ecf24: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1ecf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1ecf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf2c: 0x2442a630  addiu       $v0, $v0, -0x59D0
    ctx->pc = 0x1ecf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x1ecf30: 0xc060b5a  jal         func_182D68
    ctx->pc = 0x1ECF30u;
    SET_GPR_U32(ctx, 31, 0x1ECF38u);
    ctx->pc = 0x1ECF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF30u;
            // 0x1ecf34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182D68u;
    if (runtime->hasFunction(0x182D68u)) {
        auto targetFn = runtime->lookupFunction(0x182D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF38u; }
        if (ctx->pc != 0x1ECF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182D68_0x182d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF38u; }
        if (ctx->pc != 0x1ECF38u) { return; }
    }
    ctx->pc = 0x1ECF38u;
    // 0x1ecf38: 0xc04f860  jal         func_13E180
    ctx->pc = 0x1ECF38u;
    SET_GPR_U32(ctx, 31, 0x1ECF40u);
    ctx->pc = 0x1ECF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF38u;
            // 0x1ecf3c: 0xae30e208  sw          $s0, -0x1DF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294959624), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF40u; }
        if (ctx->pc != 0x1ECF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF40u; }
        if (ctx->pc != 0x1ECF40u) { return; }
    }
    ctx->pc = 0x1ECF40u;
    // 0x1ecf40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ecf40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecf44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecf44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecf48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF4Cu;
            // 0x1ecf50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECF54u;
    // 0x1ecf54: 0x0  nop
    ctx->pc = 0x1ecf54u;
    // NOP
}
