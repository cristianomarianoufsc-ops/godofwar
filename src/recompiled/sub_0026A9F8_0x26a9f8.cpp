#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A9F8
// Address: 0x26a9f8 - 0x26aa40
void sub_0026A9F8_0x26a9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A9F8_0x26a9f8");
#endif

    ctx->pc = 0x26a9f8u;

    // 0x26a9f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a9fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26a9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26aa00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26aa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26aa08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26aa08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26aa10: 0xc08b1d6  jal         func_22C758
    ctx->pc = 0x26AA10u;
    SET_GPR_U32(ctx, 31, 0x26AA18u);
    ctx->pc = 0x26AA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA10u;
            // 0x26aa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C758u;
    if (runtime->hasFunction(0x22C758u)) {
        auto targetFn = runtime->lookupFunction(0x22C758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA18u; }
        if (ctx->pc != 0x26AA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22c758_0x22c768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA18u; }
        if (ctx->pc != 0x26AA18u) { return; }
    }
    ctx->pc = 0x26AA18u;
    // 0x26aa18: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26aa18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26aa1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26aa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa20: 0xc0773c0  jal         func_1DCF00
    ctx->pc = 0x26AA20u;
    SET_GPR_U32(ctx, 31, 0x26AA28u);
    ctx->pc = 0x26AA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA20u;
            // 0x26aa24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF00u;
    if (runtime->hasFunction(0x1DCF00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA28u; }
        if (ctx->pc != 0x26AA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCF00_0x1dcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA28u; }
        if (ctx->pc != 0x26AA28u) { return; }
    }
    ctx->pc = 0x26AA28u;
    // 0x26aa28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26aa28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26aa2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26aa2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26aa30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26aa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26aa34: 0x3e00008  jr          $ra
    ctx->pc = 0x26AA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA34u;
            // 0x26aa38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AA3Cu;
    // 0x26aa3c: 0x0  nop
    ctx->pc = 0x26aa3cu;
    // NOP
}
