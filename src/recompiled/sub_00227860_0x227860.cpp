#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227860
// Address: 0x227860 - 0x2278b8
void sub_00227860_0x227860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227860_0x227860");
#endif

    ctx->pc = 0x227860u;

    // 0x227860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227864: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22786c: 0xc089af0  jal         func_226BC0
    ctx->pc = 0x22786Cu;
    SET_GPR_U32(ctx, 31, 0x227874u);
    ctx->pc = 0x227870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22786Cu;
            // 0x227870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    if (runtime->hasFunction(0x226BC0u)) {
        auto targetFn = runtime->lookupFunction(0x226BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227874u; }
        if (ctx->pc != 0x227874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226BC0_0x226bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227874u; }
        if (ctx->pc != 0x227874u) { return; }
    }
    ctx->pc = 0x227874u;
    // 0x227874: 0xc08eb96  jal         func_23AE58
    ctx->pc = 0x227874u;
    SET_GPR_U32(ctx, 31, 0x22787Cu);
    ctx->pc = 0x227878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227874u;
            // 0x227878: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE58u;
    if (runtime->hasFunction(0x23AE58u)) {
        auto targetFn = runtime->lookupFunction(0x23AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22787Cu; }
        if (ctx->pc != 0x22787Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae58_0x23ae70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22787Cu; }
        if (ctx->pc != 0x22787Cu) { return; }
    }
    ctx->pc = 0x22787Cu;
    // 0x22787c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x227880: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x227880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x227884: 0x2442a308  addiu       $v0, $v0, -0x5CF8
    ctx->pc = 0x227884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943496));
    // 0x227888: 0x2463a2d8  addiu       $v1, $v1, -0x5D28
    ctx->pc = 0x227888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943448));
    // 0x22788c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x22788cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x227890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227894: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x227894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x227898: 0xc089d92  jal         func_227648
    ctx->pc = 0x227898u;
    SET_GPR_U32(ctx, 31, 0x2278A0u);
    ctx->pc = 0x22789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227898u;
            // 0x22789c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227648u;
    if (runtime->hasFunction(0x227648u)) {
        auto targetFn = runtime->lookupFunction(0x227648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278A0u; }
        if (ctx->pc != 0x2278A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227648_0x227648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278A0u; }
        if (ctx->pc != 0x2278A0u) { return; }
    }
    ctx->pc = 0x2278A0u;
    // 0x2278a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2278a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2278a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2278a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2278a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2278ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2278ACu;
            // 0x2278b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2278B4u;
    // 0x2278b4: 0x0  nop
    ctx->pc = 0x2278b4u;
    // NOP
}
