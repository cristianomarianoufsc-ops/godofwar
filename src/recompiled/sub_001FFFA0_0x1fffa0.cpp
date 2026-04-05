#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFFA0
// Address: 0x1fffa0 - 0x1fffe0
void sub_001FFFA0_0x1fffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFFA0_0x1fffa0");
#endif

    ctx->pc = 0x1fffa0u;

    // 0x1fffa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fffa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fffa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fffa8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1fffac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fffacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fffb0: 0x8e02e420  lw          $v0, -0x1BE0($s0)
    ctx->pc = 0x1fffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960160)));
    // 0x1fffb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFFB4u;
    {
        const bool branch_taken_0x1fffb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fffb4) {
            ctx->pc = 0x1FFFC4u;
            goto label_1fffc4;
        }
    }
    ctx->pc = 0x1FFFBCu;
    // 0x1fffbc: 0xc080002  jal         func_200008
    ctx->pc = 0x1FFFBCu;
    SET_GPR_U32(ctx, 31, 0x1FFFC4u);
    ctx->pc = 0x200008u;
    if (runtime->hasFunction(0x200008u)) {
        auto targetFn = runtime->lookupFunction(0x200008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFFC4u; }
        if (ctx->pc != 0x1FFFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200008_0x200008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFFC4u; }
        if (ctx->pc != 0x1FFFC4u) { return; }
    }
    ctx->pc = 0x1FFFC4u;
label_1fffc4:
    // 0x1fffc4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1FFFC4u;
    SET_GPR_U32(ctx, 31, 0x1FFFCCu);
    ctx->pc = 0x1FFFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFFC4u;
            // 0x1fffc8: 0x8e04e420  lw          $a0, -0x1BE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFFCCu; }
        if (ctx->pc != 0x1FFFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFFCCu; }
        if (ctx->pc != 0x1FFFCCu) { return; }
    }
    ctx->pc = 0x1FFFCCu;
    // 0x1fffcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fffccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fffd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fffd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFFD4u;
            // 0x1fffd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FFFC4u: goto label_1fffc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FFFDCu;
    // 0x1fffdc: 0x0  nop
    ctx->pc = 0x1fffdcu;
    // NOP
}
