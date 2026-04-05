#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B92B8
// Address: 0x1b92b8 - 0x1b9338
void sub_001B92B8_0x1b92b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B92B8_0x1b92b8");
#endif

    ctx->pc = 0x1b92b8u;

    // 0x1b92b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b92b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b92bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b92bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b92c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b92c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b92c4: 0x3c11002b  lui         $s1, 0x2B
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)43 << 16));
    // 0x1b92c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b92c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b92cc: 0x3c12002c  lui         $s2, 0x2C
    ctx->pc = 0x1b92ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
    // 0x1b92d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b92d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b92d4: 0x26527478  addiu       $s2, $s2, 0x7478
    ctx->pc = 0x1b92d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 29816));
    // 0x1b92d8: 0x263156b8  addiu       $s1, $s1, 0x56B8
    ctx->pc = 0x1b92d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22200));
    // 0x1b92dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b92dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b92e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b92e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b92e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b92e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b92e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b92e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b92ec: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1B92ECu;
    SET_GPR_U32(ctx, 31, 0x1B92F4u);
    ctx->pc = 0x1B92F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92ECu;
            // 0x1b92f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92F4u; }
        if (ctx->pc != 0x1B92F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92F4u; }
        if (ctx->pc != 0x1B92F4u) { return; }
    }
    ctx->pc = 0x1B92F4u;
    // 0x1b92f4: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1b92f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1b92f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b92f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b92fc: 0x26107498  addiu       $s0, $s0, 0x7498
    ctx->pc = 0x1b92fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29848));
    // 0x1b9300: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b9300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9304: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1B9304u;
    SET_GPR_U32(ctx, 31, 0x1B930Cu);
    ctx->pc = 0x1B9308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9304u;
            // 0x1b9308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B930Cu; }
        if (ctx->pc != 0x1B930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B930Cu; }
        if (ctx->pc != 0x1B930Cu) { return; }
    }
    ctx->pc = 0x1B930Cu;
    // 0x1b930c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9310: 0xc0520d8  jal         func_148360
    ctx->pc = 0x1B9310u;
    SET_GPR_U32(ctx, 31, 0x1B9318u);
    ctx->pc = 0x1B9314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9310u;
            // 0x1b9314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148360u;
    if (runtime->hasFunction(0x148360u)) {
        auto targetFn = runtime->lookupFunction(0x148360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9318u; }
        if (ctx->pc != 0x1B9318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_148360_0x1483a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9318u; }
        if (ctx->pc != 0x1B9318u) { return; }
    }
    ctx->pc = 0x1B9318u;
    // 0x1b9318: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b9318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b931c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b931cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9324: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b9324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b932c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B932Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B932Cu;
            // 0x1b9330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9334u;
    // 0x1b9334: 0x0  nop
    ctx->pc = 0x1b9334u;
    // NOP
}
