#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E998
// Address: 0x17e998 - 0x17e9b8
void sub_0017E998_0x17e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E998_0x17e998");
#endif

    ctx->pc = 0x17e998u;

    // 0x17e998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e9a0: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x17E9A0u;
    SET_GPR_U32(ctx, 31, 0x17E9A8u);
    ctx->pc = 0x17E9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9A0u;
            // 0x17e9a4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9A8u; }
        if (ctx->pc != 0x17E9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9A8u; }
        if (ctx->pc != 0x17E9A8u) { return; }
    }
    ctx->pc = 0x17E9A8u;
    // 0x17e9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17E9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9ACu;
            // 0x17e9b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E9B4u;
    // 0x17e9b4: 0x0  nop
    ctx->pc = 0x17e9b4u;
    // NOP
}
