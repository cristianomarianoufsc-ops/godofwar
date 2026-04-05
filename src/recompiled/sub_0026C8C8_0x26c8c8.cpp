#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026C8C8
// Address: 0x26c8c8 - 0x26c900
void sub_0026C8C8_0x26c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C8C8_0x26c8c8");
#endif

    ctx->pc = 0x26c8c8u;

    // 0x26c8c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c8cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26c8d0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26c8d4: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x26c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x26c8d8: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26c8dc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x26c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26c8e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c8e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26c8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c8e8: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x26c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x26c8ec: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x26C8ECu;
    SET_GPR_U32(ctx, 31, 0x26C8F4u);
    ctx->pc = 0x26C8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8ECu;
            // 0x26c8f0: 0xafa80010  sw          $t0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF28u;
    if (runtime->hasFunction(0x26BF28u)) {
        auto targetFn = runtime->lookupFunction(0x26BF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8F4u; }
        if (ctx->pc != 0x26C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF28_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8F4u; }
        if (ctx->pc != 0x26C8F4u) { return; }
    }
    ctx->pc = 0x26C8F4u;
    // 0x26c8f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x26C8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8F8u;
            // 0x26c8fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C900u;
}
