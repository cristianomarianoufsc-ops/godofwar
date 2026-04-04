#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DDFC0
// Address: 0x1ddfc0 - 0x1ddfe8
void sub_001DDFC0_0x1ddfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDFC0_0x1ddfc0");
#endif

    ctx->pc = 0x1ddfc0u;

    // 0x1ddfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddfc4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1ddfc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1ddfc8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDFC8u;
    {
        const bool branch_taken_0x1ddfc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFC8u;
            // 0x1ddfcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddfc8) {
            ctx->pc = 0x1DDFD8u;
            goto label_1ddfd8;
        }
    }
    ctx->pc = 0x1DDFD0u;
    // 0x1ddfd0: 0xc0772ae  jal         func_1DCAB8
    ctx->pc = 0x1DDFD0u;
    SET_GPR_U32(ctx, 31, 0x1DDFD8u);
    ctx->pc = 0x1DCAB8u;
    if (runtime->hasFunction(0x1DCAB8u)) {
        auto targetFn = runtime->lookupFunction(0x1DCAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFD8u; }
        if (ctx->pc != 0x1DDFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dcab8_0x1dcae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFD8u; }
        if (ctx->pc != 0x1DDFD8u) { return; }
    }
    ctx->pc = 0x1DDFD8u;
label_1ddfd8:
    // 0x1ddfd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFDCu;
            // 0x1ddfe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDFD8u: goto label_1ddfd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDFE4u;
    // 0x1ddfe4: 0x0  nop
    ctx->pc = 0x1ddfe4u;
    // NOP
}
