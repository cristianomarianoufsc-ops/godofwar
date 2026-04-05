#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22b210
// Address: 0x22b210 - 0x22b238
void entry_22b210_0x22b238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22b210_0x22b238");
#endif

    ctx->pc = 0x22b210u;

    // 0x22b210: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22b210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b214: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22b214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22b218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b21c: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x22b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x22b220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b224: 0xc08ab96  jal         func_22AE58
    ctx->pc = 0x22B224u;
    SET_GPR_U32(ctx, 31, 0x22B22Cu);
    ctx->pc = 0x22AE58u;
    if (runtime->hasFunction(0x22AE58u)) {
        auto targetFn = runtime->lookupFunction(0x22AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B22Cu; }
        if (ctx->pc != 0x22B22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AE58_0x22ae58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B22Cu; }
        if (ctx->pc != 0x22B22Cu) { return; }
    }
    ctx->pc = 0x22B22Cu;
    // 0x22b22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b230: 0x3e00008  jr          $ra
    ctx->pc = 0x22B230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B230u;
            // 0x22b234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B238u;
}
