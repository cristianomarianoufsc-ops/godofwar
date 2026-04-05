#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C848
// Address: 0x26c848 - 0x26c8a0
void sub_0026C848_0x26c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C848_0x26c848");
#endif

    ctx->pc = 0x26c848u;

    // 0x26c848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c84c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26c850: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26c850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26c854: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x26c854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x26c858: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26c858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26c85c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x26c85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x26c860: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c864: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26c864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c868: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x26c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x26c86c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x26c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x26c870: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x26C870u;
    SET_GPR_U32(ctx, 31, 0x26C878u);
    ctx->pc = 0x26C874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C870u;
            // 0x26c874: 0xafa90014  sw          $t1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF28u;
    if (runtime->hasFunction(0x26BF28u)) {
        auto targetFn = runtime->lookupFunction(0x26BF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C878u; }
        if (ctx->pc != 0x26C878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF28_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C878u; }
        if (ctx->pc != 0x26C878u) { return; }
    }
    ctx->pc = 0x26C878u;
    // 0x26c878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c87c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C87Cu;
            // 0x26c880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C884u;
    // 0x26c884: 0x0  nop
    ctx->pc = 0x26c884u;
    // NOP
    // 0x26c888: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c88c: 0x0  nop
    ctx->pc = 0x26c88cu;
    // NOP
    // 0x26c890: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26c894: 0x0  nop
    ctx->pc = 0x26c894u;
    // NOP
    // 0x26c898: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26c898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c89c: 0x0  nop
    ctx->pc = 0x26c89cu;
    // NOP
}
