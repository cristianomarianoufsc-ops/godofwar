#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_172cc8
// Address: 0x172cc8 - 0x172d08
void entry_172cc8_0x172d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_172cc8_0x172d08");
#endif

    ctx->pc = 0x172cc8u;

    // 0x172cc8: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x172cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x172ccc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x172cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x172cd0: 0x8ce2c804  lw          $v0, -0x37FC($a3)
    ctx->pc = 0x172cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294952964)));
    // 0x172cd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172cd8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x172cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x172cdc: 0xac64c388  sw          $a0, -0x3C78($v1)
    ctx->pc = 0x172cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951816), GPR_U32(ctx, 4));
    // 0x172ce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172ce8: 0xacc5c38c  sw          $a1, -0x3C74($a2)
    ctx->pc = 0x172ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294951820), GPR_U32(ctx, 5));
    // 0x172cec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cf0: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x172CF0u;
    SET_GPR_U32(ctx, 31, 0x172CF8u);
    ctx->pc = 0x172CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172CF0u;
            // 0x172cf4: 0xace2c804  sw          $v0, -0x37FC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294952964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CF8u; }
        if (ctx->pc != 0x172CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CF8u; }
        if (ctx->pc != 0x172CF8u) { return; }
    }
    ctx->pc = 0x172CF8u;
    // 0x172cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x172CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172CFCu;
            // 0x172d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172D04u;
    // 0x172d04: 0x0  nop
    ctx->pc = 0x172d04u;
    // NOP
}
