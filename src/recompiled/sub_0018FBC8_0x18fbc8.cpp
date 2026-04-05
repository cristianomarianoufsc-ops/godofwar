#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018FBC8
// Address: 0x18fbc8 - 0x18fc08
void sub_0018FBC8_0x18fbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FBC8_0x18fbc8");
#endif

    ctx->pc = 0x18fbc8u;

    // 0x18fbc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18fbcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18fbd0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x18fbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x18fbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fbd8: 0x8e02c8dc  lw          $v0, -0x3724($s0)
    ctx->pc = 0x18fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953180)));
    // 0x18fbdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FBDCu;
    {
        const bool branch_taken_0x18fbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fbdc) {
            ctx->pc = 0x18FBECu;
            goto label_18fbec;
        }
    }
    ctx->pc = 0x18FBE4u;
    // 0x18fbe4: 0xc063f0c  jal         func_18FC30
    ctx->pc = 0x18FBE4u;
    SET_GPR_U32(ctx, 31, 0x18FBECu);
    ctx->pc = 0x18FC30u;
    if (runtime->hasFunction(0x18FC30u)) {
        auto targetFn = runtime->lookupFunction(0x18FC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBECu; }
        if (ctx->pc != 0x18FBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FC30_0x18fc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBECu; }
        if (ctx->pc != 0x18FBECu) { return; }
    }
    ctx->pc = 0x18FBECu;
label_18fbec:
    // 0x18fbec: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18FBECu;
    SET_GPR_U32(ctx, 31, 0x18FBF4u);
    ctx->pc = 0x18FBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FBECu;
            // 0x18fbf0: 0x8e04c8dc  lw          $a0, -0x3724($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBF4u; }
        if (ctx->pc != 0x18FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBF4u; }
        if (ctx->pc != 0x18FBF4u) { return; }
    }
    ctx->pc = 0x18FBF4u;
    // 0x18fbf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18fbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fbf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x18FBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FBFCu;
            // 0x18fc00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FBECu: goto label_18fbec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FC04u;
    // 0x18fc04: 0x0  nop
    ctx->pc = 0x18fc04u;
    // NOP
}
