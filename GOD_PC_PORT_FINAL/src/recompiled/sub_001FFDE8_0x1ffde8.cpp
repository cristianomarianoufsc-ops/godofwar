#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFDE8
// Address: 0x1ffde8 - 0x1ffe28
void sub_001FFDE8_0x1ffde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFDE8_0x1ffde8");
#endif

    ctx->pc = 0x1ffde8u;

    // 0x1ffde8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffdec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ffdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ffdf0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1ffdf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1ffdf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffdf8: 0x8e02e41c  lw          $v0, -0x1BE4($s0)
    ctx->pc = 0x1ffdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960156)));
    // 0x1ffdfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDFCu;
    {
        const bool branch_taken_0x1ffdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdfc) {
            ctx->pc = 0x1FFE0Cu;
            goto label_1ffe0c;
        }
    }
    ctx->pc = 0x1FFE04u;
    // 0x1ffe04: 0xc07ff94  jal         func_1FFE50
    ctx->pc = 0x1FFE04u;
    SET_GPR_U32(ctx, 31, 0x1FFE0Cu);
    ctx->pc = 0x1FFE50u;
    if (runtime->hasFunction(0x1FFE50u)) {
        auto targetFn = runtime->lookupFunction(0x1FFE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE0Cu; }
        if (ctx->pc != 0x1FFE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFE50_0x1ffe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE0Cu; }
        if (ctx->pc != 0x1FFE0Cu) { return; }
    }
    ctx->pc = 0x1FFE0Cu;
label_1ffe0c:
    // 0x1ffe0c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1FFE0Cu;
    SET_GPR_U32(ctx, 31, 0x1FFE14u);
    ctx->pc = 0x1FFE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE0Cu;
            // 0x1ffe10: 0x8e04e41c  lw          $a0, -0x1BE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE14u; }
        if (ctx->pc != 0x1FFE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE14u; }
        if (ctx->pc != 0x1FFE14u) { return; }
    }
    ctx->pc = 0x1FFE14u;
    // 0x1ffe14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ffe14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffe18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffe1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFE1Cu;
            // 0x1ffe20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FFE0Cu: goto label_1ffe0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FFE24u;
    // 0x1ffe24: 0x0  nop
    ctx->pc = 0x1ffe24u;
    // NOP
}
