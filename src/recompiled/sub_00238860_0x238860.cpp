#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238860
// Address: 0x238860 - 0x238888
void sub_00238860_0x238860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238860_0x238860");
#endif

    ctx->pc = 0x238860u;

    // 0x238860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238864: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x238864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x238868: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x238868u;
    {
        const bool branch_taken_0x238868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238868u;
            // 0x23886c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238868) {
            ctx->pc = 0x238878u;
            goto label_238878;
        }
    }
    ctx->pc = 0x238870u;
    // 0x238870: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x238870u;
    SET_GPR_U32(ctx, 31, 0x238878u);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238878u; }
        if (ctx->pc != 0x238878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238878u; }
        if (ctx->pc != 0x238878u) { return; }
    }
    ctx->pc = 0x238878u;
label_238878:
    // 0x238878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23887c: 0x3e00008  jr          $ra
    ctx->pc = 0x23887Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23887Cu;
            // 0x238880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238878u: goto label_238878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238884u;
    // 0x238884: 0x0  nop
    ctx->pc = 0x238884u;
    // NOP
}
