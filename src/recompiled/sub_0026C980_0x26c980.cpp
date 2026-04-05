#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C980
// Address: 0x26c980 - 0x26c9c8
void sub_0026C980_0x26c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C980_0x26c980");
#endif

    ctx->pc = 0x26c980u;

    // 0x26c980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c984: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26c984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26c988: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x26c988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x26c98c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x26c98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x26c990: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26c990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26c994: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c998: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26c998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26c99c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x26c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26c9a0: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x26c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x26c9a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26c9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c9ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9b0: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x26c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x26c9b4: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26C9B4u;
    SET_GPR_U32(ctx, 31, 0x26C9BCu);
    ctx->pc = 0x26C9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9B4u;
            // 0x26c9b8: 0xafaa0018  sw          $t2, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C9BCu; }
        if (ctx->pc != 0x26C9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C9BCu; }
        if (ctx->pc != 0x26C9BCu) { return; }
    }
    ctx->pc = 0x26C9BCu;
    // 0x26c9bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x26C9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C9C0u;
            // 0x26c9c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C9C8u;
}
