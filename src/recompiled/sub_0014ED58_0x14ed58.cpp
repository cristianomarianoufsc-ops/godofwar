#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014ED58
// Address: 0x14ed58 - 0x14ede0
void sub_0014ED58_0x14ed58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ED58_0x14ed58");
#endif

    ctx->pc = 0x14ed58u;

    // 0x14ed58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ed58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ed5c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14ed60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ed64: 0x24631800  addiu       $v1, $v1, 0x1800
    ctx->pc = 0x14ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
    // 0x14ed68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14ed6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ed6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ed70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ed74: 0x96220026  lhu         $v0, 0x26($s1)
    ctx->pc = 0x14ed74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x14ed78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ed7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ed80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ed84: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14ED84u;
    {
        const bool branch_taken_0x14ed84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED84u;
            // 0x14ed88: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed84) {
            ctx->pc = 0x14EDA8u;
            goto label_14eda8;
        }
    }
    ctx->pc = 0x14ED8Cu;
    // 0x14ed8c: 0xc053fb2  jal         func_14FEC8
    ctx->pc = 0x14ED8Cu;
    SET_GPR_U32(ctx, 31, 0x14ED94u);
    ctx->pc = 0x14ED90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED8Cu;
            // 0x14ed90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FEC8u;
    if (runtime->hasFunction(0x14FEC8u)) {
        auto targetFn = runtime->lookupFunction(0x14FEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED94u; }
        if (ctx->pc != 0x14ED94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014FEC8_0x14fec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED94u; }
        if (ctx->pc != 0x14ED94u) { return; }
    }
    ctx->pc = 0x14ED94u;
    // 0x14ed94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ed94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed98: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x14ED98u;
    {
        const bool branch_taken_0x14ed98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14ED9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED98u;
            // 0x14ed9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed98) {
            ctx->pc = 0x14EDCCu;
            goto label_14edcc;
        }
    }
    ctx->pc = 0x14EDA0u;
    // 0x14eda0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14eda4: 0x0  nop
    ctx->pc = 0x14eda4u;
    // NOP
label_14eda8:
    // 0x14eda8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x14EDA8u;
    SET_GPR_U32(ctx, 31, 0x14EDB0u);
    ctx->pc = 0x14EDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EDA8u;
            // 0x14edac: 0x8c4416f8  lw          $a0, 0x16F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5880)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EDB0u; }
        if (ctx->pc != 0x14EDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EDB0u; }
        if (ctx->pc != 0x14EDB0u) { return; }
    }
    ctx->pc = 0x14EDB0u;
    // 0x14edb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14edb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14edb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14edb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14edb8: 0xc053ac0  jal         func_14EB00
    ctx->pc = 0x14EDB8u;
    SET_GPR_U32(ctx, 31, 0x14EDC0u);
    ctx->pc = 0x14EDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EDB8u;
            // 0x14edbc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EB00u;
    if (runtime->hasFunction(0x14EB00u)) {
        auto targetFn = runtime->lookupFunction(0x14EB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EDC0u; }
        if (ctx->pc != 0x14EDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EB00_0x14eb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EDC0u; }
        if (ctx->pc != 0x14EDC0u) { return; }
    }
    ctx->pc = 0x14EDC0u;
    // 0x14edc0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x14edc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14edc4: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x14edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x14edc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14edc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14edcc:
    // 0x14edcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14edccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14edd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14edd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14edd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14edd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14edd8: 0x3e00008  jr          $ra
    ctx->pc = 0x14EDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EDD8u;
            // 0x14eddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EDA8u: goto label_14eda8;
            case 0x14EDCCu: goto label_14edcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EDE0u;
}
