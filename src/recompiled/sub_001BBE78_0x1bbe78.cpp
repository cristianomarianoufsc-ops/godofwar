#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBE78
// Address: 0x1bbe78 - 0x1bbec0
void sub_001BBE78_0x1bbe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBE78_0x1bbe78");
#endif

    ctx->pc = 0x1bbe78u;

    // 0x1bbe78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bbe7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bbe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bbe80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbe84: 0x3c10002b  lui         $s0, 0x2B
    ctx->pc = 0x1bbe84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)43 << 16));
    // 0x1bbe88: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1bbe88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1bbe8c: 0x26105a20  addiu       $s0, $s0, 0x5A20
    ctx->pc = 0x1bbe8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23072));
    // 0x1bbe90: 0x8e24cb94  lw          $a0, -0x346C($s1)
    ctx->pc = 0x1bbe90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x1bbe94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbe98: 0xc06df38  jal         func_1B7CE0
    ctx->pc = 0x1BBE98u;
    SET_GPR_U32(ctx, 31, 0x1BBEA0u);
    ctx->pc = 0x1BBE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE98u;
            // 0x1bbe9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7CE0u;
    if (runtime->hasFunction(0x1B7CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEA0u; }
        if (ctx->pc != 0x1BBEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7CE0_0x1b7ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEA0u; }
        if (ctx->pc != 0x1BBEA0u) { return; }
    }
    ctx->pc = 0x1BBEA0u;
    // 0x1bbea0: 0x8e24cb94  lw          $a0, -0x346C($s1)
    ctx->pc = 0x1bbea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953876)));
    // 0x1bbea4: 0xc06defc  jal         func_1B7BF0
    ctx->pc = 0x1BBEA4u;
    SET_GPR_U32(ctx, 31, 0x1BBEACu);
    ctx->pc = 0x1BBEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEA4u;
            // 0x1bbea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BF0u;
    if (runtime->hasFunction(0x1B7BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEACu; }
        if (ctx->pc != 0x1BBEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7BF0_0x1b7bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEACu; }
        if (ctx->pc != 0x1BBEACu) { return; }
    }
    ctx->pc = 0x1BBEACu;
    // 0x1bbeac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bbeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbeb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEB8u;
            // 0x1bbebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBEC0u;
}
