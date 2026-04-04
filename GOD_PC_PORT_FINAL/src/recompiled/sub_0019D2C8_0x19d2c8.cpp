#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D2C8
// Address: 0x19d2c8 - 0x19d2f0
void sub_0019D2C8_0x19d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D2C8_0x19d2c8");
#endif

    ctx->pc = 0x19d2c8u;

    // 0x19d2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d2cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19d2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d2d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D2D4u;
    {
        const bool branch_taken_0x19d2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2D4u;
            // 0x19d2d8: 0xac44c9c0  sw          $a0, -0x3640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2d4) {
            ctx->pc = 0x19D2E4u;
            goto label_19d2e4;
        }
    }
    ctx->pc = 0x19D2DCu;
    // 0x19d2dc: 0xc0674bc  jal         func_19D2F0
    ctx->pc = 0x19D2DCu;
    SET_GPR_U32(ctx, 31, 0x19D2E4u);
    ctx->pc = 0x19D2F0u;
    if (runtime->hasFunction(0x19D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x19D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2E4u; }
        if (ctx->pc != 0x19D2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D2F0_0x19d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2E4u; }
        if (ctx->pc != 0x19D2E4u) { return; }
    }
    ctx->pc = 0x19D2E4u;
label_19d2e4:
    // 0x19d2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D2E8u;
            // 0x19d2ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D2E4u: goto label_19d2e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D2F0u;
}
