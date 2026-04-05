#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ACBE0
// Address: 0x1acbe0 - 0x1acc38
void sub_001ACBE0_0x1acbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACBE0_0x1acbe0");
#endif

    ctx->pc = 0x1acbe0u;

    // 0x1acbe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1acbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1acbe4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1acbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1acbe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1acbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acbec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1acbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1acbf0: 0xc06b30e  jal         func_1ACC38
    ctx->pc = 0x1ACBF0u;
    SET_GPR_U32(ctx, 31, 0x1ACBF8u);
    ctx->pc = 0x1ACBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBF0u;
            // 0x1acbf4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACC38u;
    if (runtime->hasFunction(0x1ACC38u)) {
        auto targetFn = runtime->lookupFunction(0x1ACC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBF8u; }
        if (ctx->pc != 0x1ACBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACC38_0x1acc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBF8u; }
        if (ctx->pc != 0x1ACBF8u) { return; }
    }
    ctx->pc = 0x1ACBF8u;
    // 0x1acbf8: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x1acbf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1acbfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1acbfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1acc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc08: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1ACC08u;
    SET_GPR_U32(ctx, 31, 0x1ACC10u);
    ctx->pc = 0x1ACC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC08u;
            // 0x1acc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC10u; }
        if (ctx->pc != 0x1ACC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC10u; }
        if (ctx->pc != 0x1ACC10u) { return; }
    }
    ctx->pc = 0x1ACC10u;
    // 0x1acc10: 0xc06b634  jal         func_1AD8D0
    ctx->pc = 0x1ACC10u;
    SET_GPR_U32(ctx, 31, 0x1ACC18u);
    ctx->pc = 0x1ACC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC10u;
            // 0x1acc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8D0u;
    if (runtime->hasFunction(0x1AD8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC18u; }
        if (ctx->pc != 0x1ACC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD8D0_0x1ad8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC18u; }
        if (ctx->pc != 0x1ACC18u) { return; }
    }
    ctx->pc = 0x1ACC18u;
    // 0x1acc18: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1ACC18u;
    SET_GPR_U32(ctx, 31, 0x1ACC20u);
    ctx->pc = 0x1ACC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC18u;
            // 0x1acc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC20u; }
        if (ctx->pc != 0x1ACC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC20u; }
        if (ctx->pc != 0x1ACC20u) { return; }
    }
    ctx->pc = 0x1ACC20u;
    // 0x1acc20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1acc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1acc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1acc28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1acc28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acc2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acc30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC30u;
            // 0x1acc34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACC38u;
}
