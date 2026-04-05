#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2070
// Address: 0x1c2070 - 0x1c20b0
void sub_001C2070_0x1c2070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2070_0x1c2070");
#endif

    ctx->pc = 0x1c2070u;

    // 0x1c2070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2074: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2078: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1c2078u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1c207c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c207cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2080: 0x8e02cd20  lw          $v0, -0x32E0($s0)
    ctx->pc = 0x1c2080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954272)));
    // 0x1c2084: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2084u;
    {
        const bool branch_taken_0x1c2084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2084) {
            ctx->pc = 0x1C2094u;
            goto label_1c2094;
        }
    }
    ctx->pc = 0x1C208Cu;
    // 0x1c208c: 0xc070836  jal         func_1C20D8
    ctx->pc = 0x1C208Cu;
    SET_GPR_U32(ctx, 31, 0x1C2094u);
    ctx->pc = 0x1C20D8u;
    if (runtime->hasFunction(0x1C20D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C20D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2094u; }
        if (ctx->pc != 0x1C2094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C20D8_0x1c20d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2094u; }
        if (ctx->pc != 0x1C2094u) { return; }
    }
    ctx->pc = 0x1C2094u;
label_1c2094:
    // 0x1c2094: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1C2094u;
    SET_GPR_U32(ctx, 31, 0x1C209Cu);
    ctx->pc = 0x1C2098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2094u;
            // 0x1c2098: 0x8e04cd20  lw          $a0, -0x32E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C209Cu; }
        if (ctx->pc != 0x1C209Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C209Cu; }
        if (ctx->pc != 0x1C209Cu) { return; }
    }
    ctx->pc = 0x1C209Cu;
    // 0x1c209c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c209cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c20a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c20a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20A4u;
            // 0x1c20a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2094u: goto label_1c2094;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C20ACu;
    // 0x1c20ac: 0x0  nop
    ctx->pc = 0x1c20acu;
    // NOP
}
