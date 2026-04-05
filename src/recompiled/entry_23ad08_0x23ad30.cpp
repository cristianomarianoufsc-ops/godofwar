#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ad08
// Address: 0x23ad08 - 0x23ad30
void entry_23ad08_0x23ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ad08_0x23ad30");
#endif

    ctx->pc = 0x23ad08u;

    // 0x23ad08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ad08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ad0c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23ad10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ad10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ad14: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23ad14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad18: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x23ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
    // 0x23ad1c: 0xc08e330  jal         func_238CC0
    ctx->pc = 0x23AD1Cu;
    SET_GPR_U32(ctx, 31, 0x23AD24u);
    ctx->pc = 0x23AD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD1Cu;
            // 0x23ad20: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CC0u;
    if (runtime->hasFunction(0x238CC0u)) {
        auto targetFn = runtime->lookupFunction(0x238CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD24u; }
        if (ctx->pc != 0x23AD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CC0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD24u; }
        if (ctx->pc != 0x23AD24u) { return; }
    }
    ctx->pc = 0x23AD24u;
    // 0x23ad24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ad24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ad28: 0x3e00008  jr          $ra
    ctx->pc = 0x23AD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD28u;
            // 0x23ad2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23AD30u;
}
