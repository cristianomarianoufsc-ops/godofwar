#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E0A8
// Address: 0x17e0a8 - 0x17e0d8
void sub_0017E0A8_0x17e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E0A8_0x17e0a8");
#endif

    ctx->pc = 0x17e0a8u;

    // 0x17e0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e0ac: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x17e0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e0b4: 0x24e7c730  addiu       $a3, $a3, -0x38D0
    ctx->pc = 0x17e0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952752));
    // 0x17e0b8: 0xc05f91e  jal         func_17E478
    ctx->pc = 0x17E0B8u;
    SET_GPR_U32(ctx, 31, 0x17E0C0u);
    ctx->pc = 0x17E0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0B8u;
            // 0x17e0bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E478u;
    if (runtime->hasFunction(0x17E478u)) {
        auto targetFn = runtime->lookupFunction(0x17E478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0C0u; }
        if (ctx->pc != 0x17E0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E478_0x17e478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0C0u; }
        if (ctx->pc != 0x17E0C0u) { return; }
    }
    ctx->pc = 0x17E0C0u;
    // 0x17e0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17E0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0C4u;
            // 0x17e0c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E0CCu;
    // 0x17e0cc: 0x0  nop
    ctx->pc = 0x17e0ccu;
    // NOP
    // 0x17e0d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17e0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17e0d4: 0x0  nop
    ctx->pc = 0x17e0d4u;
    // NOP
}
