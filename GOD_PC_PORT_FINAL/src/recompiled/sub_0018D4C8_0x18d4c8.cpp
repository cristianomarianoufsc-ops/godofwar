#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D4C8
// Address: 0x18d4c8 - 0x18d508
void sub_0018D4C8_0x18d4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D4C8_0x18d4c8");
#endif

    ctx->pc = 0x18d4c8u;

    // 0x18d4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d4cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18d4d0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18d4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x18d4d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d4d8: 0x8e02de54  lw          $v0, -0x21AC($s0)
    ctx->pc = 0x18d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958676)));
    // 0x18d4dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D4DCu;
    {
        const bool branch_taken_0x18d4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d4dc) {
            ctx->pc = 0x18D4F0u;
            goto label_18d4f0;
        }
    }
    ctx->pc = 0x18D4E4u;
    // 0x18d4e4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18D4E4u;
    SET_GPR_U32(ctx, 31, 0x18D4ECu);
    ctx->pc = 0x18D4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4E4u;
            // 0x18d4e8: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4ECu; }
        if (ctx->pc != 0x18D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4ECu; }
        if (ctx->pc != 0x18D4ECu) { return; }
    }
    ctx->pc = 0x18D4ECu;
    // 0x18d4ec: 0xae02de54  sw          $v0, -0x21AC($s0)
    ctx->pc = 0x18d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958676), GPR_U32(ctx, 2));
label_18d4f0:
    // 0x18d4f0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18D4F0u;
    SET_GPR_U32(ctx, 31, 0x18D4F8u);
    ctx->pc = 0x18D4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4F0u;
            // 0x18d4f4: 0x8e04de54  lw          $a0, -0x21AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958676)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4F8u; }
        if (ctx->pc != 0x18D4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4F8u; }
        if (ctx->pc != 0x18D4F8u) { return; }
    }
    ctx->pc = 0x18D4F8u;
    // 0x18d4f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18d4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d500: 0x3e00008  jr          $ra
    ctx->pc = 0x18D500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D500u;
            // 0x18d504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D4F0u: goto label_18d4f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D508u;
}
