#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFE50
// Address: 0x1ffe50 - 0x1ffea8
void sub_001FFE50_0x1ffe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFE50_0x1ffe50");
#endif

    ctx->pc = 0x1ffe50u;

    // 0x1ffe50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffe54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ffe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ffe58: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1ffe58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1ffe5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffe60: 0x8e02e41c  lw          $v0, -0x1BE4($s0)
    ctx->pc = 0x1ffe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960156)));
    // 0x1ffe64: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1FFE64u;
    {
        const bool branch_taken_0x1ffe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe64) {
            ctx->pc = 0x1FFE68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE64u;
            // 0x1ffe68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE94u;
            goto label_1ffe94;
        }
    }
    ctx->pc = 0x1FFE6Cu;
    // 0x1ffe6c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1FFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1FFE74u);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE74u; }
        if (ctx->pc != 0x1FFE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE74u; }
        if (ctx->pc != 0x1FFE74u) { return; }
    }
    ctx->pc = 0x1FFE74u;
    // 0x1ffe74: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1ffe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1ffe78: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1ffe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ffe7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ffe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ffe80: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ffe80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ffe84: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1FFE84u;
    SET_GPR_U32(ctx, 31, 0x1FFE8Cu);
    ctx->pc = 0x1FFE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE84u;
            // 0x1ffe88: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE8Cu; }
        if (ctx->pc != 0x1FFE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE8Cu; }
        if (ctx->pc != 0x1FFE8Cu) { return; }
    }
    ctx->pc = 0x1FFE8Cu;
    // 0x1ffe8c: 0xae02e41c  sw          $v0, -0x1BE4($s0)
    ctx->pc = 0x1ffe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960156), GPR_U32(ctx, 2));
    // 0x1ffe90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ffe90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ffe94:
    // 0x1ffe94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffe98: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE98u;
            // 0x1ffe9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FFE94u: goto label_1ffe94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FFEA0u;
    // 0x1ffea0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ffea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ffea4: 0x0  nop
    ctx->pc = 0x1ffea4u;
    // NOP
}
