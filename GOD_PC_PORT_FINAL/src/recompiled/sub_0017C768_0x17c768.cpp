#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C768
// Address: 0x17c768 - 0x17c790
void sub_0017C768_0x17c768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C768_0x17c768");
#endif

    ctx->pc = 0x17c768u;

    // 0x17c768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c770: 0xc05f1bc  jal         func_17C6F0
    ctx->pc = 0x17C770u;
    SET_GPR_U32(ctx, 31, 0x17C778u);
    ctx->pc = 0x17C6F0u;
    if (runtime->hasFunction(0x17C6F0u)) {
        auto targetFn = runtime->lookupFunction(0x17C6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C778u; }
        if (ctx->pc != 0x17C778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C6F0_0x17c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C778u; }
        if (ctx->pc != 0x17C778u) { return; }
    }
    ctx->pc = 0x17C778u;
    // 0x17c778: 0xc05f202  jal         func_17C808
    ctx->pc = 0x17C778u;
    SET_GPR_U32(ctx, 31, 0x17C780u);
    ctx->pc = 0x17C808u;
    if (runtime->hasFunction(0x17C808u)) {
        auto targetFn = runtime->lookupFunction(0x17C808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C780u; }
        if (ctx->pc != 0x17C780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17c808_0x17c860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C780u; }
        if (ctx->pc != 0x17C780u) { return; }
    }
    ctx->pc = 0x17C780u;
    // 0x17c780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c784: 0x3e00008  jr          $ra
    ctx->pc = 0x17C784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C784u;
            // 0x17c788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C78Cu;
    // 0x17c78c: 0x0  nop
    ctx->pc = 0x17c78cu;
    // NOP
}
