#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDD20
// Address: 0x1bdd20 - 0x1bddb0
void sub_001BDD20_0x1bdd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDD20_0x1bdd20");
#endif

    ctx->pc = 0x1bdd20u;

    // 0x1bdd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdd24: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bdd28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdd2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1bdd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bdd30: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x1bdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1bdd34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bdd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bdd38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdd3c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1bdd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1bdd40: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1bdd40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdd44: 0x8c84cb94  lw          $a0, -0x346C($a0)
    ctx->pc = 0x1bdd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953876)));
    // 0x1bdd48: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1bdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1bdd4c: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1bdd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1bdd50: 0xc06df7c  jal         func_1B7DF0
    ctx->pc = 0x1BDD50u;
    SET_GPR_U32(ctx, 31, 0x1BDD58u);
    ctx->pc = 0x1BDD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD50u;
            // 0x1bdd54: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF0u;
    if (runtime->hasFunction(0x1B7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD58u; }
        if (ctx->pc != 0x1BDD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7DF0_0x1b7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD58u; }
        if (ctx->pc != 0x1BDD58u) { return; }
    }
    ctx->pc = 0x1BDD58u;
    // 0x1bdd58: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1bdd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bdd5c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BDD5Cu;
    {
        const bool branch_taken_0x1bdd5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD5Cu;
            // 0x1bdd60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd5c) {
            ctx->pc = 0x1BDDA0u;
            goto label_1bdda0;
        }
    }
    ctx->pc = 0x1BDD64u;
    // 0x1bdd64: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1bdd64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bdd68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1bdd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1bdd6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BDD6Cu;
    {
        const bool branch_taken_0x1bdd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD6Cu;
            // 0x1bdd70: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd6c) {
            ctx->pc = 0x1BDDA0u;
            goto label_1bdda0;
        }
    }
    ctx->pc = 0x1BDD74u;
    // 0x1bdd74: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1bdd74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdd78: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1bdd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1bdd7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdd80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdd84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bdd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdd88: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bdd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bdd8c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1bdd8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1bdd90: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1bdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1bdd94: 0x40f809  jalr        $v0
    ctx->pc = 0x1BDD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDD9Cu);
        ctx->pc = 0x1BDD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDD94u;
            // 0x1bdd98: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BDD9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDDA0u: goto label_1bdda0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BDD9Cu; }
            if (ctx->pc != 0x1BDD9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BDD9Cu;
    // 0x1bdd9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bdd9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bdda0:
    // 0x1bdda0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdda4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDDA4u;
            // 0x1bdda8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BDDA0u: goto label_1bdda0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BDDACu;
    // 0x1bddac: 0x0  nop
    ctx->pc = 0x1bddacu;
    // NOP
}
