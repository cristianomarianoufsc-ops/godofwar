#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26c940
// Address: 0x26c940 - 0x26c980
void entry_26c940_0x26c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26c940_0x26c980");
#endif

    ctx->pc = 0x26c940u;

    // 0x26c940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c944: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26c944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26c948: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26c948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26c94c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x26c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x26c950: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26c950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26c954: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x26c954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x26c958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c95c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26c95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c960: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x26c960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x26c964: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x26c964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x26c968: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x26c968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x26c96c: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x26C96Cu;
    SET_GPR_U32(ctx, 31, 0x26C974u);
    ctx->pc = 0x26C970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C96Cu;
            // 0x26c970: 0xafaa0018  sw          $t2, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF28u;
    if (runtime->hasFunction(0x26BF28u)) {
        auto targetFn = runtime->lookupFunction(0x26BF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C974u; }
        if (ctx->pc != 0x26C974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF28_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C974u; }
        if (ctx->pc != 0x26C974u) { return; }
    }
    ctx->pc = 0x26C974u;
    // 0x26c974: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c978: 0x3e00008  jr          $ra
    ctx->pc = 0x26C978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C978u;
            // 0x26c97c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C980u;
}
