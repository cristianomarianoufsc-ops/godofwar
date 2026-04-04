#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002143B0
// Address: 0x2143b0 - 0x2143f0
void sub_002143B0_0x2143b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002143B0_0x2143b0");
#endif

    ctx->pc = 0x2143b0u;

    // 0x2143b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2143b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2143b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2143b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2143b8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2143b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2143bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2143bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2143c0: 0x8e02e470  lw          $v0, -0x1B90($s0)
    ctx->pc = 0x2143c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960240)));
    // 0x2143c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2143C4u;
    {
        const bool branch_taken_0x2143c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2143c4) {
            ctx->pc = 0x2143D4u;
            goto label_2143d4;
        }
    }
    ctx->pc = 0x2143CCu;
    // 0x2143cc: 0xc085106  jal         func_214418
    ctx->pc = 0x2143CCu;
    SET_GPR_U32(ctx, 31, 0x2143D4u);
    ctx->pc = 0x214418u;
    if (runtime->hasFunction(0x214418u)) {
        auto targetFn = runtime->lookupFunction(0x214418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2143D4u; }
        if (ctx->pc != 0x2143D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214418_0x214418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2143D4u; }
        if (ctx->pc != 0x2143D4u) { return; }
    }
    ctx->pc = 0x2143D4u;
label_2143d4:
    // 0x2143d4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2143D4u;
    SET_GPR_U32(ctx, 31, 0x2143DCu);
    ctx->pc = 0x2143D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2143D4u;
            // 0x2143d8: 0x8e04e470  lw          $a0, -0x1B90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2143DCu; }
        if (ctx->pc != 0x2143DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2143DCu; }
        if (ctx->pc != 0x2143DCu) { return; }
    }
    ctx->pc = 0x2143DCu;
    // 0x2143dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2143dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2143e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2143e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2143e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2143E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2143E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2143E4u;
            // 0x2143e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2143D4u: goto label_2143d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2143ECu;
    // 0x2143ec: 0x0  nop
    ctx->pc = 0x2143ecu;
    // NOP
}
