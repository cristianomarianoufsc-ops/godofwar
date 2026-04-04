#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_175db0
// Address: 0x175db0 - 0x175dd8
void entry_175db0_0x175dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_175db0_0x175dd8");
#endif

    ctx->pc = 0x175db0u;

    // 0x175db0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x175db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175db4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x175db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x175db8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175dbc: 0x8c44c4b8  lw          $a0, -0x3B48($v0)
    ctx->pc = 0x175dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952120)));
    // 0x175dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175dc4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x175DC4u;
    SET_GPR_U32(ctx, 31, 0x175DCCu);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DCCu; }
        if (ctx->pc != 0x175DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DCCu; }
        if (ctx->pc != 0x175DCCu) { return; }
    }
    ctx->pc = 0x175DCCu;
    // 0x175dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x175DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175DD0u;
            // 0x175dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175DD8u;
}
