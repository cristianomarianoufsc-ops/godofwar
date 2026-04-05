#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BB30
// Address: 0x26bb30 - 0x26bb68
void sub_0026BB30_0x26bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BB30_0x26bb30");
#endif

    ctx->pc = 0x26bb30u;

    // 0x26bb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bb34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bb3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26bb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb40: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x26BB40u;
    SET_GPR_U32(ctx, 31, 0x26BB48u);
    ctx->pc = 0x26BB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB40u;
            // 0x26bb44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF28u;
    if (runtime->hasFunction(0x26BF28u)) {
        auto targetFn = runtime->lookupFunction(0x26BF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB48u; }
        if (ctx->pc != 0x26BB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF28_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB48u; }
        if (ctx->pc != 0x26BB48u) { return; }
    }
    ctx->pc = 0x26BB48u;
    // 0x26bb48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26bb4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bb50: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x26bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
    // 0x26bb54: 0x3e00008  jr          $ra
    ctx->pc = 0x26BB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB54u;
            // 0x26bb58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BB5Cu;
    // 0x26bb5c: 0x0  nop
    ctx->pc = 0x26bb5cu;
    // NOP
    // 0x26bb60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26bb64: 0x0  nop
    ctx->pc = 0x26bb64u;
    // NOP
}
