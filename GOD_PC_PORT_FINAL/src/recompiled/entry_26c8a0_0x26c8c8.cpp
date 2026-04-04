#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26c8a0
// Address: 0x26c8a0 - 0x26c8c8
void entry_26c8a0_0x26c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26c8a0_0x26c8c8");
#endif

    ctx->pc = 0x26c8a0u;

    // 0x26c8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c8a4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x26c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26c8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c8ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c8b0: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x26C8B0u;
    SET_GPR_U32(ctx, 31, 0x26C8B8u);
    ctx->pc = 0x26C8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8B0u;
            // 0x26c8b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF28u;
    if (runtime->hasFunction(0x26BF28u)) {
        auto targetFn = runtime->lookupFunction(0x26BF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8B8u; }
        if (ctx->pc != 0x26C8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF28_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C8B8u; }
        if (ctx->pc != 0x26C8B8u) { return; }
    }
    ctx->pc = 0x26C8B8u;
    // 0x26c8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x26C8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8BCu;
            // 0x26c8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C8C4u;
    // 0x26c8c4: 0x0  nop
    ctx->pc = 0x26c8c4u;
    // NOP
}
