#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BA98
// Address: 0x18ba98 - 0x18bad8
void sub_0018BA98_0x18ba98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BA98_0x18ba98");
#endif

    ctx->pc = 0x18ba98u;

    // 0x18ba98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ba98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ba9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18baa0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18baa0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x18baa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18baa8: 0x8e02de40  lw          $v0, -0x21C0($s0)
    ctx->pc = 0x18baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958656)));
    // 0x18baac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BAACu;
    {
        const bool branch_taken_0x18baac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18baac) {
            ctx->pc = 0x18BAC0u;
            goto label_18bac0;
        }
    }
    ctx->pc = 0x18BAB4u;
    // 0x18bab4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18BAB4u;
    SET_GPR_U32(ctx, 31, 0x18BABCu);
    ctx->pc = 0x18BAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAB4u;
            // 0x18bab8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BABCu; }
        if (ctx->pc != 0x18BABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BABCu; }
        if (ctx->pc != 0x18BABCu) { return; }
    }
    ctx->pc = 0x18BABCu;
    // 0x18babc: 0xae02de40  sw          $v0, -0x21C0($s0)
    ctx->pc = 0x18babcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958656), GPR_U32(ctx, 2));
label_18bac0:
    // 0x18bac0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18BAC0u;
    SET_GPR_U32(ctx, 31, 0x18BAC8u);
    ctx->pc = 0x18BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAC0u;
            // 0x18bac4: 0x8e04de40  lw          $a0, -0x21C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAC8u; }
        if (ctx->pc != 0x18BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAC8u; }
        if (ctx->pc != 0x18BAC8u) { return; }
    }
    ctx->pc = 0x18BAC8u;
    // 0x18bac8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18bac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18baccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bad0: 0x3e00008  jr          $ra
    ctx->pc = 0x18BAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAD0u;
            // 0x18bad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BAC0u: goto label_18bac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BAD8u;
}
