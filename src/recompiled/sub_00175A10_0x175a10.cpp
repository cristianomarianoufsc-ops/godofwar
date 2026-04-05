#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175A10
// Address: 0x175a10 - 0x175a60
void sub_00175A10_0x175a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175A10_0x175a10");
#endif

    ctx->pc = 0x175a10u;

    // 0x175a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x175a14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x175a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x175a18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x175a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x175a20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x175a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x175a28: 0xc05d5f6  jal         func_1757D8
    ctx->pc = 0x175A28u;
    SET_GPR_U32(ctx, 31, 0x175A30u);
    ctx->pc = 0x175A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A28u;
            // 0x175a2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1757D8u;
    if (runtime->hasFunction(0x1757D8u)) {
        auto targetFn = runtime->lookupFunction(0x1757D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A30u; }
        if (ctx->pc != 0x175A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1757d8_0x175828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A30u; }
        if (ctx->pc != 0x175A30u) { return; }
    }
    ctx->pc = 0x175A30u;
    // 0x175a30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a34: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x175A34u;
    SET_GPR_U32(ctx, 31, 0x175A3Cu);
    ctx->pc = 0x175A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A34u;
            // 0x175a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A3Cu; }
        if (ctx->pc != 0x175A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A3Cu; }
        if (ctx->pc != 0x175A3Cu) { return; }
    }
    ctx->pc = 0x175A3Cu;
    // 0x175a3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x175a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x175a40: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x175a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x175a44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x175a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175a4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x175a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175a50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175a54: 0x3e00008  jr          $ra
    ctx->pc = 0x175A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175A54u;
            // 0x175a58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175A5Cu;
    // 0x175a5c: 0x0  nop
    ctx->pc = 0x175a5cu;
    // NOP
}
