#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192B90
// Address: 0x192b90 - 0x192bd0
void sub_00192B90_0x192b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192B90_0x192b90");
#endif

    ctx->pc = 0x192b90u;

    // 0x192b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192b94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192b98: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x192b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192ba0: 0x8e02deb0  lw          $v0, -0x2150($s0)
    ctx->pc = 0x192ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958768)));
    // 0x192ba4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192BA4u;
    {
        const bool branch_taken_0x192ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192ba4) {
            ctx->pc = 0x192BB8u;
            goto label_192bb8;
        }
    }
    ctx->pc = 0x192BACu;
    // 0x192bac: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x192BACu;
    SET_GPR_U32(ctx, 31, 0x192BB4u);
    ctx->pc = 0x192BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BACu;
            // 0x192bb0: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BB4u; }
        if (ctx->pc != 0x192BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BB4u; }
        if (ctx->pc != 0x192BB4u) { return; }
    }
    ctx->pc = 0x192BB4u;
    // 0x192bb4: 0xae02deb0  sw          $v0, -0x2150($s0)
    ctx->pc = 0x192bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958768), GPR_U32(ctx, 2));
label_192bb8:
    // 0x192bb8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x192BB8u;
    SET_GPR_U32(ctx, 31, 0x192BC0u);
    ctx->pc = 0x192BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BB8u;
            // 0x192bbc: 0x8e04deb0  lw          $a0, -0x2150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958768)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC0u; }
        if (ctx->pc != 0x192BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC0u; }
        if (ctx->pc != 0x192BC0u) { return; }
    }
    ctx->pc = 0x192BC0u;
    // 0x192bc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x192BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192BC8u;
            // 0x192bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192BB8u: goto label_192bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192BD0u;
}
