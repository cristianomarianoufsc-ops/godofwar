#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DD60
// Address: 0x12dd60 - 0x12ddc0
void sub_0012DD60_0x12dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DD60_0x12dd60");
#endif

    ctx->pc = 0x12dd60u;

    // 0x12dd60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12dd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12dd64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12dd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12dd68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12dd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12dd6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12dd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x12dd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12dd74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12dd74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12dd78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12dd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12dd80: 0xc04bfb8  jal         func_12FEE0
    ctx->pc = 0x12DD80u;
    SET_GPR_U32(ctx, 31, 0x12DD88u);
    ctx->pc = 0x12DD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD80u;
            // 0x12dd84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FEE0u;
    if (runtime->hasFunction(0x12FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD88u; }
        if (ctx->pc != 0x12DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FEE0_0x12fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD88u; }
        if (ctx->pc != 0x12DD88u) { return; }
    }
    ctx->pc = 0x12DD88u;
    // 0x12dd88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12dd8c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x12dd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x12dd90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12dd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd98: 0xc04b6b2  jal         func_12DAC8
    ctx->pc = 0x12DD98u;
    SET_GPR_U32(ctx, 31, 0x12DDA0u);
    ctx->pc = 0x12DD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD98u;
            // 0x12dd9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAC8u;
    if (runtime->hasFunction(0x12DAC8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DDA0u; }
        if (ctx->pc != 0x12DDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DAC8_0x12dac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DDA0u; }
        if (ctx->pc != 0x12DDA0u) { return; }
    }
    ctx->pc = 0x12DDA0u;
    // 0x12dda0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12dda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dda4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12dda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12dda8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12dda8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ddac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12ddacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ddb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ddb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ddb4: 0x3e00008  jr          $ra
    ctx->pc = 0x12DDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DDB4u;
            // 0x12ddb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DDBCu;
    // 0x12ddbc: 0x0  nop
    ctx->pc = 0x12ddbcu;
    // NOP
}
