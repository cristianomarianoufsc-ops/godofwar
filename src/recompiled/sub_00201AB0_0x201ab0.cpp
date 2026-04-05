#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201AB0
// Address: 0x201ab0 - 0x201af0
void sub_00201AB0_0x201ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201AB0_0x201ab0");
#endif

    ctx->pc = 0x201ab0u;

    // 0x201ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201ab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201ab8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x201ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x201abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201ac0: 0x8e02e428  lw          $v0, -0x1BD8($s0)
    ctx->pc = 0x201ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960168)));
    // 0x201ac4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201AC4u;
    {
        const bool branch_taken_0x201ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201ac4) {
            ctx->pc = 0x201AD4u;
            goto label_201ad4;
        }
    }
    ctx->pc = 0x201ACCu;
    // 0x201acc: 0xc0806c6  jal         func_201B18
    ctx->pc = 0x201ACCu;
    SET_GPR_U32(ctx, 31, 0x201AD4u);
    ctx->pc = 0x201B18u;
    if (runtime->hasFunction(0x201B18u)) {
        auto targetFn = runtime->lookupFunction(0x201B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201AD4u; }
        if (ctx->pc != 0x201AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201B18_0x201b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201AD4u; }
        if (ctx->pc != 0x201AD4u) { return; }
    }
    ctx->pc = 0x201AD4u;
label_201ad4:
    // 0x201ad4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x201AD4u;
    SET_GPR_U32(ctx, 31, 0x201ADCu);
    ctx->pc = 0x201AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201AD4u;
            // 0x201ad8: 0x8e04e428  lw          $a0, -0x1BD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ADCu; }
        if (ctx->pc != 0x201ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ADCu; }
        if (ctx->pc != 0x201ADCu) { return; }
    }
    ctx->pc = 0x201ADCu;
    // 0x201adc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x201AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201AE4u;
            // 0x201ae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201AD4u: goto label_201ad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201AECu;
    // 0x201aec: 0x0  nop
    ctx->pc = 0x201aecu;
    // NOP
}
