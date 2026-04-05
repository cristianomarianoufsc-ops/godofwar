#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138F78
// Address: 0x138f78 - 0x138fd8
void sub_00138F78_0x138f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138F78_0x138f78");
#endif

    ctx->pc = 0x138f78u;

    // 0x138f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x138f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x138f7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x138f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x138f80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x138f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x138f84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x138f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138f8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x138f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x138f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x138f94: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138F94u;
    SET_GPR_U32(ctx, 31, 0x138F9Cu);
    ctx->pc = 0x138F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F94u;
            // 0x138f98: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F9Cu; }
        if (ctx->pc != 0x138F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F9Cu; }
        if (ctx->pc != 0x138F9Cu) { return; }
    }
    ctx->pc = 0x138F9Cu;
    // 0x138f9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fa4: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x138FA4u;
    SET_GPR_U32(ctx, 31, 0x138FACu);
    ctx->pc = 0x138FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138FA4u;
            // 0x138fa8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FACu; }
        if (ctx->pc != 0x138FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FACu; }
        if (ctx->pc != 0x138FACu) { return; }
    }
    ctx->pc = 0x138FACu;
    // 0x138fac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fb4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x138fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x138fb8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x138FB8u;
    SET_GPR_U32(ctx, 31, 0x138FC0u);
    ctx->pc = 0x138FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138FB8u;
            // 0x138fbc: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FC0u; }
        if (ctx->pc != 0x138FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138FC0u; }
        if (ctx->pc != 0x138FC0u) { return; }
    }
    ctx->pc = 0x138FC0u;
    // 0x138fc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x138fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138fc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x138fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138fc8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x138fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x138FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138FD0u;
            // 0x138fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138FD8u;
}
