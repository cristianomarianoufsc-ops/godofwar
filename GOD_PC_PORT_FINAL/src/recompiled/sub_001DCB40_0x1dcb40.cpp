#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCB40
// Address: 0x1dcb40 - 0x1dcb80
void sub_001DCB40_0x1dcb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCB40_0x1dcb40");
#endif

    ctx->pc = 0x1dcb40u;

    // 0x1dcb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcb44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dcb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dcb48: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1dcb48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1dcb4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcb50: 0x8e022fe0  lw          $v0, 0x2FE0($s0)
    ctx->pc = 0x1dcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12256)));
    // 0x1dcb54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCB54u;
    {
        const bool branch_taken_0x1dcb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb54) {
            ctx->pc = 0x1DCB68u;
            goto label_1dcb68;
        }
    }
    ctx->pc = 0x1DCB5Cu;
    // 0x1dcb5c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1DCB5Cu;
    SET_GPR_U32(ctx, 31, 0x1DCB64u);
    ctx->pc = 0x1DCB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB5Cu;
            // 0x1dcb60: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB64u; }
        if (ctx->pc != 0x1DCB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB64u; }
        if (ctx->pc != 0x1DCB64u) { return; }
    }
    ctx->pc = 0x1DCB64u;
    // 0x1dcb64: 0xae022fe0  sw          $v0, 0x2FE0($s0)
    ctx->pc = 0x1dcb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12256), GPR_U32(ctx, 2));
label_1dcb68:
    // 0x1dcb68: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1DCB68u;
    SET_GPR_U32(ctx, 31, 0x1DCB70u);
    ctx->pc = 0x1DCB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB68u;
            // 0x1dcb6c: 0x8e042fe0  lw          $a0, 0x2FE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB70u; }
        if (ctx->pc != 0x1DCB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB70u; }
        if (ctx->pc != 0x1DCB70u) { return; }
    }
    ctx->pc = 0x1DCB70u;
    // 0x1dcb70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dcb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcb78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB78u;
            // 0x1dcb7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DCB68u: goto label_1dcb68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DCB80u;
}
