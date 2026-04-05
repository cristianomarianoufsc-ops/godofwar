#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EB08
// Address: 0x19eb08 - 0x19eb48
void sub_0019EB08_0x19eb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EB08_0x19eb08");
#endif

    ctx->pc = 0x19eb08u;

    // 0x19eb08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19eb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19eb0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19eb10: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x19eb10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x19eb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19eb18: 0x8e02e438  lw          $v0, -0x1BC8($s0)
    ctx->pc = 0x19eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960184)));
    // 0x19eb1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EB1Cu;
    {
        const bool branch_taken_0x19eb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eb1c) {
            ctx->pc = 0x19EB30u;
            goto label_19eb30;
        }
    }
    ctx->pc = 0x19EB24u;
    // 0x19eb24: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19EB24u;
    SET_GPR_U32(ctx, 31, 0x19EB2Cu);
    ctx->pc = 0x19EB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB24u;
            // 0x19eb28: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB2Cu; }
        if (ctx->pc != 0x19EB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB2Cu; }
        if (ctx->pc != 0x19EB2Cu) { return; }
    }
    ctx->pc = 0x19EB2Cu;
    // 0x19eb2c: 0xae02e438  sw          $v0, -0x1BC8($s0)
    ctx->pc = 0x19eb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960184), GPR_U32(ctx, 2));
label_19eb30:
    // 0x19eb30: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x19EB30u;
    SET_GPR_U32(ctx, 31, 0x19EB38u);
    ctx->pc = 0x19EB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB30u;
            // 0x19eb34: 0x8e04e438  lw          $a0, -0x1BC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB38u; }
        if (ctx->pc != 0x19EB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EB38u; }
        if (ctx->pc != 0x19EB38u) { return; }
    }
    ctx->pc = 0x19EB38u;
    // 0x19eb38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19eb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eb3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19eb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eb40: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB40u;
            // 0x19eb44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EB30u: goto label_19eb30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EB48u;
}
