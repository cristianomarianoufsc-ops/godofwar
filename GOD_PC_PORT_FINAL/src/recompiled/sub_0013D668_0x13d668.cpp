#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D668
// Address: 0x13d668 - 0x13d688
void sub_0013D668_0x13d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D668_0x13d668");
#endif

    ctx->pc = 0x13d668u;

    // 0x13d668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d66c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D66Cu;
    {
        const bool branch_taken_0x13d66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D66Cu;
            // 0x13d670: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d66c) {
            ctx->pc = 0x13D67Cu;
            goto label_13d67c;
        }
    }
    ctx->pc = 0x13D674u;
    // 0x13d674: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x13D674u;
    SET_GPR_U32(ctx, 31, 0x13D67Cu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D67Cu; }
        if (ctx->pc != 0x13D67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D67Cu; }
        if (ctx->pc != 0x13D67Cu) { return; }
    }
    ctx->pc = 0x13D67Cu;
label_13d67c:
    // 0x13d67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d680: 0x3e00008  jr          $ra
    ctx->pc = 0x13D680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D680u;
            // 0x13d684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D67Cu: goto label_13d67c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D688u;
}
