#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b54a0
// Address: 0x1b54a0 - 0x1b54d8
void entry_1b54a0_0x1b54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b54a0_0x1b54d8");
#endif

    ctx->pc = 0x1b54a0u;

    // 0x1b54a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b54a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b54a4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1b54a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b54a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b54a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b54ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b54acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b54b0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1B54B0u;
    SET_GPR_U32(ctx, 31, 0x1B54B8u);
    ctx->pc = 0x1B54B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54B0u;
            // 0x1b54b4: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54B8u; }
        if (ctx->pc != 0x1B54B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54B8u; }
        if (ctx->pc != 0x1B54B8u) { return; }
    }
    ctx->pc = 0x1B54B8u;
    // 0x1b54b8: 0xc06d4f8  jal         func_1B53E0
    ctx->pc = 0x1B54B8u;
    SET_GPR_U32(ctx, 31, 0x1B54C0u);
    ctx->pc = 0x1B54BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54B8u;
            // 0x1b54bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B53E0u;
    if (runtime->hasFunction(0x1B53E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B53E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54C0u; }
        if (ctx->pc != 0x1B54C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B53E0_0x1b53e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B54C0u; }
        if (ctx->pc != 0x1B54C0u) { return; }
    }
    ctx->pc = 0x1B54C0u;
    // 0x1b54c0: 0xae02cb90  sw          $v0, -0x3470($s0)
    ctx->pc = 0x1b54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953872), GPR_U32(ctx, 2));
    // 0x1b54c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b54c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b54c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b54c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b54cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B54CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B54D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54CCu;
            // 0x1b54d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B54D4u;
    // 0x1b54d4: 0x0  nop
    ctx->pc = 0x1b54d4u;
    // NOP
}
