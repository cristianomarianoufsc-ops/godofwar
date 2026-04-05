#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1e60e0
// Address: 0x1e60e0 - 0x1e6120
void entry_1e60e0_0x1e6120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1e60e0_0x1e6120");
#endif

    ctx->pc = 0x1e60e0u;

    // 0x1e60e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e60e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e60e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e60e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e60e8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1e60e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1e60ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e60ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e60f0: 0x8e02d2b4  lw          $v0, -0x2D4C($s0)
    ctx->pc = 0x1e60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955700)));
    // 0x1e60f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E60F4u;
    {
        const bool branch_taken_0x1e60f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e60f4) {
            ctx->pc = 0x1E6104u;
            goto label_1e6104;
        }
    }
    ctx->pc = 0x1E60FCu;
    // 0x1e60fc: 0xc079852  jal         func_1E6148
    ctx->pc = 0x1E60FCu;
    SET_GPR_U32(ctx, 31, 0x1E6104u);
    ctx->pc = 0x1E6148u;
    if (runtime->hasFunction(0x1E6148u)) {
        auto targetFn = runtime->lookupFunction(0x1E6148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6104u; }
        if (ctx->pc != 0x1E6104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6148_0x1e6148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6104u; }
        if (ctx->pc != 0x1E6104u) { return; }
    }
    ctx->pc = 0x1E6104u;
label_1e6104:
    // 0x1e6104: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1E6104u;
    SET_GPR_U32(ctx, 31, 0x1E610Cu);
    ctx->pc = 0x1E6108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6104u;
            // 0x1e6108: 0x8e04d2b4  lw          $a0, -0x2D4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955700)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E610Cu; }
        if (ctx->pc != 0x1E610Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E610Cu; }
        if (ctx->pc != 0x1E610Cu) { return; }
    }
    ctx->pc = 0x1E610Cu;
    // 0x1e610c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e610cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6114: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6114u;
            // 0x1e6118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6104u: goto label_1e6104;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E611Cu;
    // 0x1e611c: 0x0  nop
    ctx->pc = 0x1e611cu;
    // NOP
}
