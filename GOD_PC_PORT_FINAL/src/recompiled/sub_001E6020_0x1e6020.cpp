#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6020
// Address: 0x1e6020 - 0x1e6060
void sub_001E6020_0x1e6020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6020_0x1e6020");
#endif

    ctx->pc = 0x1e6020u;

    // 0x1e6020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6024: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6028: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1e6028u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1e602c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6030: 0x8e02d2b0  lw          $v0, -0x2D50($s0)
    ctx->pc = 0x1e6030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955696)));
    // 0x1e6034: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6034u;
    {
        const bool branch_taken_0x1e6034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6034) {
            ctx->pc = 0x1E6044u;
            goto label_1e6044;
        }
    }
    ctx->pc = 0x1E603Cu;
    // 0x1e603c: 0xc079822  jal         func_1E6088
    ctx->pc = 0x1E603Cu;
    SET_GPR_U32(ctx, 31, 0x1E6044u);
    ctx->pc = 0x1E6088u;
    if (runtime->hasFunction(0x1E6088u)) {
        auto targetFn = runtime->lookupFunction(0x1E6088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6044u; }
        if (ctx->pc != 0x1E6044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6088_0x1e6088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6044u; }
        if (ctx->pc != 0x1E6044u) { return; }
    }
    ctx->pc = 0x1E6044u;
label_1e6044:
    // 0x1e6044: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1E6044u;
    SET_GPR_U32(ctx, 31, 0x1E604Cu);
    ctx->pc = 0x1E6048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6044u;
            // 0x1e6048: 0x8e04d2b0  lw          $a0, -0x2D50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955696)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E604Cu; }
        if (ctx->pc != 0x1E604Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E604Cu; }
        if (ctx->pc != 0x1E604Cu) { return; }
    }
    ctx->pc = 0x1E604Cu;
    // 0x1e604c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e604cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6054: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6054u;
            // 0x1e6058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6044u: goto label_1e6044;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E605Cu;
    // 0x1e605c: 0x0  nop
    ctx->pc = 0x1e605cu;
    // NOP
}
