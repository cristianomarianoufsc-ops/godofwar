#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228E68
// Address: 0x228e68 - 0x228ea8
void sub_00228E68_0x228e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228E68_0x228e68");
#endif

    ctx->pc = 0x228e68u;

    // 0x228e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x228e6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x228e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x228e70: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x228e70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x228e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228e78: 0x8e023528  lw          $v0, 0x3528($s0)
    ctx->pc = 0x228e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13608)));
    // 0x228e7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228E7Cu;
    {
        const bool branch_taken_0x228e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228e7c) {
            ctx->pc = 0x228E90u;
            goto label_228e90;
        }
    }
    ctx->pc = 0x228E84u;
    // 0x228e84: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x228E84u;
    SET_GPR_U32(ctx, 31, 0x228E8Cu);
    ctx->pc = 0x228E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228E84u;
            // 0x228e88: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E8Cu; }
        if (ctx->pc != 0x228E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E8Cu; }
        if (ctx->pc != 0x228E8Cu) { return; }
    }
    ctx->pc = 0x228E8Cu;
    // 0x228e8c: 0xae023528  sw          $v0, 0x3528($s0)
    ctx->pc = 0x228e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13608), GPR_U32(ctx, 2));
label_228e90:
    // 0x228e90: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x228E90u;
    SET_GPR_U32(ctx, 31, 0x228E98u);
    ctx->pc = 0x228E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228E90u;
            // 0x228e94: 0x8e043528  lw          $a0, 0x3528($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E98u; }
        if (ctx->pc != 0x228E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E98u; }
        if (ctx->pc != 0x228E98u) { return; }
    }
    ctx->pc = 0x228E98u;
    // 0x228e98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x228e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x228EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228EA0u;
            // 0x228ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228E90u: goto label_228e90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228EA8u;
}
