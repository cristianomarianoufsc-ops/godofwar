#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00120888
// Address: 0x120888 - 0x1208c8
void sub_00120888_0x120888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120888_0x120888");
#endif

    ctx->pc = 0x120888u;

    // 0x120888: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x12088c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12088cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x120890: 0x2443dd58  addiu       $v1, $v0, -0x22A8
    ctx->pc = 0x120890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x120894: 0x8c46dd58  lw          $a2, -0x22A8($v0)
    ctx->pc = 0x120894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x120898: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12089c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x12089cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1208a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1208a4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1208a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1208a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1208a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208ac: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1208acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1208b0: 0xc0481d0  jal         func_120740
    ctx->pc = 0x1208B0u;
    SET_GPR_U32(ctx, 31, 0x1208B8u);
    ctx->pc = 0x1208B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1208B0u;
            // 0x1208b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120740u;
    if (runtime->hasFunction(0x120740u)) {
        auto targetFn = runtime->lookupFunction(0x120740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1208B8u; }
        if (ctx->pc != 0x1208B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_120740_0x120800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1208B8u; }
        if (ctx->pc != 0x1208B8u) { return; }
    }
    ctx->pc = 0x1208B8u;
    // 0x1208b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1208b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1208BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1208C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1208BCu;
            // 0x1208c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1208C4u;
    // 0x1208c4: 0x0  nop
    ctx->pc = 0x1208c4u;
    // NOP
}
