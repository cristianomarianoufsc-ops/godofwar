#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014EF00
// Address: 0x14ef00 - 0x14ef60
void sub_0014EF00_0x14ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EF00_0x14ef00");
#endif

    ctx->pc = 0x14ef00u;

    // 0x14ef00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ef04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14ef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14ef08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14ef0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14ef0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ef14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14ef14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14ef18: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x14ef18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14ef1c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EF1Cu;
    {
        const bool branch_taken_0x14ef1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF1Cu;
            // 0x14ef20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef1c) {
            ctx->pc = 0x14EF44u;
            goto label_14ef44;
        }
    }
    ctx->pc = 0x14EF24u;
    // 0x14ef24: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x14ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_14ef28:
    // 0x14ef28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ef28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef2c: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x14ef2cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x14ef30: 0xc05337e  jal         func_14CDF8
    ctx->pc = 0x14EF30u;
    SET_GPR_U32(ctx, 31, 0x14EF38u);
    ctx->pc = 0x14EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF30u;
            // 0x14ef34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CDF8u;
    if (runtime->hasFunction(0x14CDF8u)) {
        auto targetFn = runtime->lookupFunction(0x14CDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF38u; }
        if (ctx->pc != 0x14EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CDF8_0x14cdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF38u; }
        if (ctx->pc != 0x14EF38u) { return; }
    }
    ctx->pc = 0x14EF38u;
    // 0x14ef38: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14ef38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ef3c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EF3Cu;
    {
        const bool branch_taken_0x14ef3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF3Cu;
            // 0x14ef40: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef3c) {
            ctx->pc = 0x14EF28u;
            runtime->cooperativeGuestYield();
            goto label_14ef28;
        }
    }
    ctx->pc = 0x14EF44u;
label_14ef44:
    // 0x14ef44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14ef44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ef48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ef48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ef4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14ef4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ef50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ef50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ef54: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF54u;
            // 0x14ef58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EF28u: goto label_14ef28;
            case 0x14EF44u: goto label_14ef44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EF5Cu;
    // 0x14ef5c: 0x0  nop
    ctx->pc = 0x14ef5cu;
    // NOP
}
