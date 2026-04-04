#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196AB0
// Address: 0x196ab0 - 0x196ae8
void sub_00196AB0_0x196ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196AB0_0x196ab0");
#endif

    ctx->pc = 0x196ab0u;

    // 0x196ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196ab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196ab8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x196ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x196abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196ac0: 0x8e04c994  lw          $a0, -0x366C($s0)
    ctx->pc = 0x196ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953364)));
    // 0x196ac4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x196AC4u;
    {
        const bool branch_taken_0x196ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ac4) {
            ctx->pc = 0x196AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196AC4u;
            // 0x196ac8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196ADCu;
            goto label_196adc;
        }
    }
    ctx->pc = 0x196ACCu;
    // 0x196acc: 0xc04c9da  jal         func_132768
    ctx->pc = 0x196ACCu;
    SET_GPR_U32(ctx, 31, 0x196AD4u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196AD4u; }
        if (ctx->pc != 0x196AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196AD4u; }
        if (ctx->pc != 0x196AD4u) { return; }
    }
    ctx->pc = 0x196AD4u;
    // 0x196ad4: 0xae00c994  sw          $zero, -0x366C($s0)
    ctx->pc = 0x196ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953364), GPR_U32(ctx, 0));
    // 0x196ad8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196adc:
    // 0x196adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x196AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196AE0u;
            // 0x196ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196ADCu: goto label_196adc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196AE8u;
}
