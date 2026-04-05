#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AC88
// Address: 0x17ac88 - 0x17acb8
void sub_0017AC88_0x17ac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AC88_0x17ac88");
#endif

    ctx->pc = 0x17ac88u;

    // 0x17ac88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ac88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ac8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ac8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ac94: 0xc05eaca  jal         func_17AB28
    ctx->pc = 0x17AC94u;
    SET_GPR_U32(ctx, 31, 0x17AC9Cu);
    ctx->pc = 0x17AC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC94u;
            // 0x17ac98: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AB28u;
    if (runtime->hasFunction(0x17AB28u)) {
        auto targetFn = runtime->lookupFunction(0x17AB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC9Cu; }
        if (ctx->pc != 0x17AC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AB28_0x17ab28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC9Cu; }
        if (ctx->pc != 0x17AC9Cu) { return; }
    }
    ctx->pc = 0x17AC9Cu;
    // 0x17ac9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ac9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x17ACA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ACA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ACA0u;
            // 0x17aca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17ACA8u;
    // 0x17aca8: 0x8c4208e8  lw          $v0, 0x8E8($v0)
    ctx->pc = 0x17aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2280)));
    // 0x17acac: 0x0  nop
    ctx->pc = 0x17acacu;
    // NOP
    // 0x17acb0: 0xac4408e8  sw          $a0, 0x8E8($v0)
    ctx->pc = 0x17acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2280), GPR_U32(ctx, 4));
    // 0x17acb4: 0x0  nop
    ctx->pc = 0x17acb4u;
    // NOP
}
