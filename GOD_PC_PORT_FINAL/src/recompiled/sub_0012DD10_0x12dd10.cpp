#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DD10
// Address: 0x12dd10 - 0x12dd60
void sub_0012DD10_0x12dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DD10_0x12dd10");
#endif

    ctx->pc = 0x12dd10u;

    // 0x12dd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12dd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12dd14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12dd14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12dd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12dd1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12dd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12dd20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12dd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12dd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12dd28: 0xc04bfb8  jal         func_12FEE0
    ctx->pc = 0x12DD28u;
    SET_GPR_U32(ctx, 31, 0x12DD30u);
    ctx->pc = 0x12DD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD28u;
            // 0x12dd2c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FEE0u;
    if (runtime->hasFunction(0x12FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD30u; }
        if (ctx->pc != 0x12DD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FEE0_0x12fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD30u; }
        if (ctx->pc != 0x12DD30u) { return; }
    }
    ctx->pc = 0x12DD30u;
    // 0x12dd30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12dd34: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x12dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x12dd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12dd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd40: 0xc04b6b2  jal         func_12DAC8
    ctx->pc = 0x12DD40u;
    SET_GPR_U32(ctx, 31, 0x12DD48u);
    ctx->pc = 0x12DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD40u;
            // 0x12dd44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAC8u;
    if (runtime->hasFunction(0x12DAC8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD48u; }
        if (ctx->pc != 0x12DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DAC8_0x12dac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD48u; }
        if (ctx->pc != 0x12DD48u) { return; }
    }
    ctx->pc = 0x12DD48u;
    // 0x12dd48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12dd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12dd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12dd50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12dd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12dd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dd58: 0x3e00008  jr          $ra
    ctx->pc = 0x12DD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD58u;
            // 0x12dd5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DD60u;
}
