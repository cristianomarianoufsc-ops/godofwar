#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C9C8
// Address: 0x26c9c8 - 0x26ca18
void sub_0026C9C8_0x26c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C9C8_0x26c9c8");
#endif

    ctx->pc = 0x26c9c8u;

    // 0x26c9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c9cc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x26c9ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9d0: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x26c9d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c9d4: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x26c9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26c9dc: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x26c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x26c9e0: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x26c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x26c9e4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26c9e8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x26c9e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9ec: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26c9f0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x26c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26c9f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c9f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26c9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c9fc: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x26c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x26ca00: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x26ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x26ca04: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26CA04u;
    SET_GPR_U32(ctx, 31, 0x26CA0Cu);
    ctx->pc = 0x26CA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA04u;
            // 0x26ca08: 0xafaa0018  sw          $t2, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA0Cu; }
        if (ctx->pc != 0x26CA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA0Cu; }
        if (ctx->pc != 0x26CA0Cu) { return; }
    }
    ctx->pc = 0x26CA0Cu;
    // 0x26ca0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ca10: 0x3e00008  jr          $ra
    ctx->pc = 0x26CA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CA10u;
            // 0x26ca14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CA18u;
}
