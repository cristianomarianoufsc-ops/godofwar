#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D6C0
// Address: 0x13d6c0 - 0x13d6e0
void sub_0013D6C0_0x13d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D6C0_0x13d6c0");
#endif

    ctx->pc = 0x13d6c0u;

    // 0x13d6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d6c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D6C4u;
    {
        const bool branch_taken_0x13d6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6C4u;
            // 0x13d6c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6c4) {
            ctx->pc = 0x13D6D4u;
            goto label_13d6d4;
        }
    }
    ctx->pc = 0x13D6CCu;
    // 0x13d6cc: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x13D6CCu;
    SET_GPR_U32(ctx, 31, 0x13D6D4u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D6D4u; }
        if (ctx->pc != 0x13D6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D6D4u; }
        if (ctx->pc != 0x13D6D4u) { return; }
    }
    ctx->pc = 0x13D6D4u;
label_13d6d4:
    // 0x13d6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6D8u;
            // 0x13d6dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D6D4u: goto label_13d6d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D6E0u;
}
