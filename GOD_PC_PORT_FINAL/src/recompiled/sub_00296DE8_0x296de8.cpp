#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296DE8
// Address: 0x296de8 - 0x296e10
void sub_00296DE8_0x296de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296DE8_0x296de8");
#endif

    ctx->pc = 0x296de8u;

    // 0x296de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296df0: 0xc0a59e6  jal         func_296798
    ctx->pc = 0x296DF0u;
    SET_GPR_U32(ctx, 31, 0x296DF8u);
    ctx->pc = 0x296798u;
    if (runtime->hasFunction(0x296798u)) {
        auto targetFn = runtime->lookupFunction(0x296798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DF8u; }
        if (ctx->pc != 0x296DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296798_0x296798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DF8u; }
        if (ctx->pc != 0x296DF8u) { return; }
    }
    ctx->pc = 0x296DF8u;
    // 0x296df8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x296df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x296dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296e00: 0xac404abc  sw          $zero, 0x4ABC($v0)
    ctx->pc = 0x296e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19132), GPR_U32(ctx, 0));
    // 0x296e04: 0x3e00008  jr          $ra
    ctx->pc = 0x296E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296E04u;
            // 0x296e08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296E0Cu;
    // 0x296e0c: 0x0  nop
    ctx->pc = 0x296e0cu;
    // NOP
}
