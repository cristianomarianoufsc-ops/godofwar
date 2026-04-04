#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117C80
// Address: 0x117c80 - 0x117d10
void sub_00117C80_0x117c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117C80_0x117c80");
#endif

    ctx->pc = 0x117c80u;

    // 0x117c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117c84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x117c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x117c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117c94: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x117c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x117c98: 0x8c46e854  lw          $a2, -0x17AC($v0)
    ctx->pc = 0x117c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x117c9c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x117c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x117ca0: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x117ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x117ca4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x117ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x117ca8: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x117ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x117cac: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x117cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x117cb0: 0x40f809  jalr        $v0
    ctx->pc = 0x117CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117CB8u);
        ctx->pc = 0x117CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CB0u;
            // 0x117cb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117CB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117CF0u: goto label_117cf0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117CB8u; }
            if (ctx->pc != 0x117CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x117CB8u;
    // 0x117cb8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x117cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x117cbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cc0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x117cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x117cc4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x117cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x117cc8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x117cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x117ccc: 0x40f809  jalr        $v0
    ctx->pc = 0x117CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117CD4u);
        ctx->pc = 0x117CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CCCu;
            // 0x117cd0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117CD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117CF0u: goto label_117cf0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117CD4u; }
            if (ctx->pc != 0x117CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x117CD4u;
    // 0x117cd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cd8: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x117cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x117cdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117CDCu;
    {
        const bool branch_taken_0x117cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CDCu;
            // 0x117ce0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cdc) {
            ctx->pc = 0x117CF0u;
            goto label_117cf0;
        }
    }
    ctx->pc = 0x117CE4u;
    // 0x117ce4: 0xc046044  jal         func_118110
    ctx->pc = 0x117CE4u;
    SET_GPR_U32(ctx, 31, 0x117CECu);
    ctx->pc = 0x117CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117CE4u;
            // 0x117ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (runtime->hasFunction(0x118110u)) {
        auto targetFn = runtime->lookupFunction(0x118110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CECu; }
        if (ctx->pc != 0x117CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118110_0x118110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CECu; }
        if (ctx->pc != 0x117CECu) { return; }
    }
    ctx->pc = 0x117CECu;
    // 0x117cec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x117cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_117cf0:
    // 0x117cf0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x117cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x117cf4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x117CF4u;
    SET_GPR_U32(ctx, 31, 0x117CFCu);
    ctx->pc = 0x117CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117CF4u;
            // 0x117cf8: 0x8c440084  lw          $a0, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CFCu; }
        if (ctx->pc != 0x117CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CFCu; }
        if (ctx->pc != 0x117CFCu) { return; }
    }
    ctx->pc = 0x117CFCu;
    // 0x117cfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x117cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117d08: 0x3e00008  jr          $ra
    ctx->pc = 0x117D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D08u;
            // 0x117d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117CF0u: goto label_117cf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117D10u;
}
