#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCA78
// Address: 0x1dca78 - 0x1dcab8
void sub_001DCA78_0x1dca78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCA78_0x1dca78");
#endif

    ctx->pc = 0x1dca78u;

    // 0x1dca78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dca78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dca7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dca80: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1dca80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1dca84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dca88: 0x8e02d29c  lw          $v0, -0x2D64($s0)
    ctx->pc = 0x1dca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955676)));
    // 0x1dca8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCA8Cu;
    {
        const bool branch_taken_0x1dca8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dca8c) {
            ctx->pc = 0x1DCA9Cu;
            goto label_1dca9c;
        }
    }
    ctx->pc = 0x1DCA94u;
    // 0x1dca94: 0xc0772b8  jal         func_1DCAE0
    ctx->pc = 0x1DCA94u;
    SET_GPR_U32(ctx, 31, 0x1DCA9Cu);
    ctx->pc = 0x1DCAE0u;
    if (runtime->hasFunction(0x1DCAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA9Cu; }
        if (ctx->pc != 0x1DCA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCAE0_0x1dcae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA9Cu; }
        if (ctx->pc != 0x1DCA9Cu) { return; }
    }
    ctx->pc = 0x1DCA9Cu;
label_1dca9c:
    // 0x1dca9c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1DCA9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCAA4u);
    ctx->pc = 0x1DCAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA9Cu;
            // 0x1dcaa0: 0x8e04d29c  lw          $a0, -0x2D64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955676)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAA4u; }
        if (ctx->pc != 0x1DCAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAA4u; }
        if (ctx->pc != 0x1DCAA4u) { return; }
    }
    ctx->pc = 0x1DCAA4u;
    // 0x1dcaa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dcaa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcaa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcaac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCAACu;
            // 0x1dcab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCA9Cu: goto label_1dca9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCAB4u;
    // 0x1dcab4: 0x0  nop
    ctx->pc = 0x1dcab4u;
    // NOP
}
