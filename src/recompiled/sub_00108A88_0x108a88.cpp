#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108A88
// Address: 0x108a88 - 0x108af8
void sub_00108A88_0x108a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108A88_0x108a88");
#endif

    ctx->pc = 0x108a88u;

    // 0x108a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x108a90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x108a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x108a94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x108a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108a9c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x108a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x108aa0: 0x8c43e854  lw          $v1, -0x17AC($v0)
    ctx->pc = 0x108aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x108aa4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x108aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108aa8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x108aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x108aac: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x108aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x108ab0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x108ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x108ab4: 0x40f809  jalr        $v0
    ctx->pc = 0x108AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108ABCu);
        ctx->pc = 0x108AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108AB4u;
            // 0x108ab8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x108ABCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108AD8u: goto label_108ad8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x108ABCu; }
            if (ctx->pc != 0x108ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x108ABCu;
    // 0x108abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ac0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x108ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x108ac4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108AC4u;
    {
        const bool branch_taken_0x108ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108AC4u;
            // 0x108ac8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ac4) {
            ctx->pc = 0x108AD8u;
            goto label_108ad8;
        }
    }
    ctx->pc = 0x108ACCu;
    // 0x108acc: 0xc046044  jal         func_118110
    ctx->pc = 0x108ACCu;
    SET_GPR_U32(ctx, 31, 0x108AD4u);
    ctx->pc = 0x108AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108ACCu;
            // 0x108ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (runtime->hasFunction(0x118110u)) {
        auto targetFn = runtime->lookupFunction(0x118110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AD4u; }
        if (ctx->pc != 0x108AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118110_0x118110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AD4u; }
        if (ctx->pc != 0x108AD4u) { return; }
    }
    ctx->pc = 0x108AD4u;
    // 0x108ad4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x108ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_108ad8:
    // 0x108ad8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x108ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108adc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x108ADCu;
    SET_GPR_U32(ctx, 31, 0x108AE4u);
    ctx->pc = 0x108AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108ADCu;
            // 0x108ae0: 0x8c4400c0  lw          $a0, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AE4u; }
        if (ctx->pc != 0x108AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AE4u; }
        if (ctx->pc != 0x108AE4u) { return; }
    }
    ctx->pc = 0x108AE4u;
    // 0x108ae4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x108ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108af0: 0x3e00008  jr          $ra
    ctx->pc = 0x108AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108AF0u;
            // 0x108af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108AD8u: goto label_108ad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108AF8u;
}
