#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE9D0
// Address: 0x1be9d0 - 0x1be9f8
void sub_001BE9D0_0x1be9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE9D0_0x1be9d0");
#endif

    ctx->pc = 0x1be9d0u;

    // 0x1be9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be9d4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1be9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1be9d8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE9D8u;
    {
        const bool branch_taken_0x1be9d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9D8u;
            // 0x1be9dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9d8) {
            ctx->pc = 0x1BE9E8u;
            goto label_1be9e8;
        }
    }
    ctx->pc = 0x1BE9E0u;
    // 0x1be9e0: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1BE9E0u;
    SET_GPR_U32(ctx, 31, 0x1BE9E8u);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9E8u; }
        if (ctx->pc != 0x1BE9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE9E8u; }
        if (ctx->pc != 0x1BE9E8u) { return; }
    }
    ctx->pc = 0x1BE9E8u;
label_1be9e8:
    // 0x1be9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9ECu;
            // 0x1be9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE9E8u: goto label_1be9e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BE9F4u;
    // 0x1be9f4: 0x0  nop
    ctx->pc = 0x1be9f4u;
    // NOP
}
