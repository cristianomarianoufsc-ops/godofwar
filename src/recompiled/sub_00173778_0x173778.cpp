#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173778
// Address: 0x173778 - 0x173798
void sub_00173778_0x173778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173778_0x173778");
#endif

    ctx->pc = 0x173778u;

    // 0x173778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17377c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173780: 0xc05cdc6  jal         func_173718
    ctx->pc = 0x173780u;
    SET_GPR_U32(ctx, 31, 0x173788u);
    ctx->pc = 0x173784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173780u;
            // 0x173784: 0xac85001c  sw          $a1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173718u;
    if (runtime->hasFunction(0x173718u)) {
        auto targetFn = runtime->lookupFunction(0x173718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173788u; }
        if (ctx->pc != 0x173788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173718_0x173718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173788u; }
        if (ctx->pc != 0x173788u) { return; }
    }
    ctx->pc = 0x173788u;
    // 0x173788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17378c: 0x3e00008  jr          $ra
    ctx->pc = 0x17378Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17378Cu;
            // 0x173790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173794u;
    // 0x173794: 0x0  nop
    ctx->pc = 0x173794u;
    // NOP
}
