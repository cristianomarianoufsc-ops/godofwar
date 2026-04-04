#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E708
// Address: 0x17e708 - 0x17e770
void sub_0017E708_0x17e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E708_0x17e708");
#endif

    ctx->pc = 0x17e708u;

    // 0x17e708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e70c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17e70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17e710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17e710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17e714: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x17e714u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x17e718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e71c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e720: 0x8e02c744  lw          $v0, -0x38BC($s0)
    ctx->pc = 0x17e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952772)));
    // 0x17e724: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17e724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e728: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17e72c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x17e72cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e730: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x17E730u;
    SET_GPR_U32(ctx, 31, 0x17E738u);
    ctx->pc = 0x17E734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E730u;
            // 0x17e734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E738u; }
        if (ctx->pc != 0x17E738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180df0_0x180e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E738u; }
        if (ctx->pc != 0x17E738u) { return; }
    }
    ctx->pc = 0x17E738u;
    // 0x17e738: 0x8e02c744  lw          $v0, -0x38BC($s0)
    ctx->pc = 0x17e738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952772)));
    // 0x17e73c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e740: 0xc05fd12  jal         func_17F448
    ctx->pc = 0x17E740u;
    SET_GPR_U32(ctx, 31, 0x17E748u);
    ctx->pc = 0x17E744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E740u;
            // 0x17e744: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F448u;
    if (runtime->hasFunction(0x17F448u)) {
        auto targetFn = runtime->lookupFunction(0x17F448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E748u; }
        if (ctx->pc != 0x17E748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F448_0x17f448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E748u; }
        if (ctx->pc != 0x17E748u) { return; }
    }
    ctx->pc = 0x17E748u;
    // 0x17e748: 0x8e04c744  lw          $a0, -0x38BC($s0)
    ctx->pc = 0x17e748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952772)));
    // 0x17e74c: 0xc060342  jal         func_180D08
    ctx->pc = 0x17E74Cu;
    SET_GPR_U32(ctx, 31, 0x17E754u);
    ctx->pc = 0x17E750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E74Cu;
            // 0x17e750: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E754u; }
        if (ctx->pc != 0x17E754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E754u; }
        if (ctx->pc != 0x17E754u) { return; }
    }
    ctx->pc = 0x17E754u;
    // 0x17e754: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17e754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e758: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e75c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17e75cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e764: 0x3e00008  jr          $ra
    ctx->pc = 0x17E764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E764u;
            // 0x17e768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E76Cu;
    // 0x17e76c: 0x0  nop
    ctx->pc = 0x17e76cu;
    // NOP
}
