#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209EC0
// Address: 0x209ec0 - 0x209f00
void sub_00209EC0_0x209ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209EC0_0x209ec0");
#endif

    ctx->pc = 0x209ec0u;

    // 0x209ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209ec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x209ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x209ec8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x209ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x209ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209ed0: 0x8e02349c  lw          $v0, 0x349C($s0)
    ctx->pc = 0x209ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13468)));
    // 0x209ed4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209ED4u;
    {
        const bool branch_taken_0x209ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209ed4) {
            ctx->pc = 0x209EE8u;
            goto label_209ee8;
        }
    }
    ctx->pc = 0x209EDCu;
    // 0x209edc: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x209EDCu;
    SET_GPR_U32(ctx, 31, 0x209EE4u);
    ctx->pc = 0x209EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209EDCu;
            // 0x209ee0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EE4u; }
        if (ctx->pc != 0x209EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EE4u; }
        if (ctx->pc != 0x209EE4u) { return; }
    }
    ctx->pc = 0x209EE4u;
    // 0x209ee4: 0xae02349c  sw          $v0, 0x349C($s0)
    ctx->pc = 0x209ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13468), GPR_U32(ctx, 2));
label_209ee8:
    // 0x209ee8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x209EE8u;
    SET_GPR_U32(ctx, 31, 0x209EF0u);
    ctx->pc = 0x209EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209EE8u;
            // 0x209eec: 0x8e04349c  lw          $a0, 0x349C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13468)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EF0u; }
        if (ctx->pc != 0x209EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EF0u; }
        if (ctx->pc != 0x209EF0u) { return; }
    }
    ctx->pc = 0x209EF0u;
    // 0x209ef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x209ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x209EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209EF8u;
            // 0x209efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209EE8u: goto label_209ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209F00u;
}
