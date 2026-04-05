#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020C220
// Address: 0x20c220 - 0x20c248
void sub_0020C220_0x20c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C220_0x20c220");
#endif

    ctx->pc = 0x20c220u;

    // 0x20c220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c224: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x20c224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x20c228: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C228u;
    {
        const bool branch_taken_0x20c228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C228u;
            // 0x20c22c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c228) {
            ctx->pc = 0x20C238u;
            goto label_20c238;
        }
    }
    ctx->pc = 0x20C230u;
    // 0x20c230: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x20C230u;
    SET_GPR_U32(ctx, 31, 0x20C238u);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C238u; }
        if (ctx->pc != 0x20C238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C238u; }
        if (ctx->pc != 0x20C238u) { return; }
    }
    ctx->pc = 0x20C238u;
label_20c238:
    // 0x20c238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c23c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C23Cu;
            // 0x20c240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C238u: goto label_20c238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C244u;
    // 0x20c244: 0x0  nop
    ctx->pc = 0x20c244u;
    // NOP
}
