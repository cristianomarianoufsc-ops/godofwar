#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181130
// Address: 0x181130 - 0x1811a0
void sub_00181130_0x181130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181130_0x181130");
#endif

    ctx->pc = 0x181130u;

    // 0x181130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181134: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x181134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x181138: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x181138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18113c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18113cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181140: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x181140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x181144: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x181144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18114c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x181150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181154: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x181154u;
    SET_GPR_U32(ctx, 31, 0x18115Cu);
    ctx->pc = 0x181158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181154u;
            // 0x181158: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18115Cu; }
        if (ctx->pc != 0x18115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18115Cu; }
        if (ctx->pc != 0x18115Cu) { return; }
    }
    ctx->pc = 0x18115Cu;
    // 0x18115c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18115cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181160: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x181160u;
    SET_GPR_U32(ctx, 31, 0x181168u);
    ctx->pc = 0x181164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181160u;
            // 0x181164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181168u; }
        if (ctx->pc != 0x181168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181168u; }
        if (ctx->pc != 0x181168u) { return; }
    }
    ctx->pc = 0x181168u;
    // 0x181168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x181168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18116c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18116Cu;
    SET_GPR_U32(ctx, 31, 0x181174u);
    ctx->pc = 0x181170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18116Cu;
            // 0x181170: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181174u; }
        if (ctx->pc != 0x181174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181174u; }
        if (ctx->pc != 0x181174u) { return; }
    }
    ctx->pc = 0x181174u;
    // 0x181174: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x181174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181178: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18117c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x18117cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x181180: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x181180u;
    SET_GPR_U32(ctx, 31, 0x181188u);
    ctx->pc = 0x181184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181180u;
            // 0x181184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181188u; }
        if (ctx->pc != 0x181188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181188u; }
        if (ctx->pc != 0x181188u) { return; }
    }
    ctx->pc = 0x181188u;
    // 0x181188: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x181188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18118c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18118cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181190: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x181190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181198: 0x3e00008  jr          $ra
    ctx->pc = 0x181198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18119Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181198u;
            // 0x18119c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1811A0u;
}
