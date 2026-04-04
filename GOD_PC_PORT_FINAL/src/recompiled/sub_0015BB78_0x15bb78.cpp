#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BB78
// Address: 0x15bb78 - 0x15bbc8
void sub_0015BB78_0x15bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BB78_0x15bb78");
#endif

    ctx->pc = 0x15bb78u;

    // 0x15bb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bb7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bb80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15bb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15bb84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15bb84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bb8c: 0xc056ec6  jal         func_15BB18
    ctx->pc = 0x15BB8Cu;
    SET_GPR_U32(ctx, 31, 0x15BB94u);
    ctx->pc = 0x15BB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB8Cu;
            // 0x15bb90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BB18u;
    if (runtime->hasFunction(0x15BB18u)) {
        auto targetFn = runtime->lookupFunction(0x15BB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB94u; }
        if (ctx->pc != 0x15BB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BB18_0x15bb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB94u; }
        if (ctx->pc != 0x15BB94u) { return; }
    }
    ctx->pc = 0x15BB94u;
    // 0x15bb94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb98: 0xc08e4b2  jal         func_2392C8
    ctx->pc = 0x15BB98u;
    SET_GPR_U32(ctx, 31, 0x15BBA0u);
    ctx->pc = 0x15BB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB98u;
            // 0x15bb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2392C8u;
    if (runtime->hasFunction(0x2392C8u)) {
        auto targetFn = runtime->lookupFunction(0x2392C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BBA0u; }
        if (ctx->pc != 0x15BBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002392C8_0x2392c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BBA0u; }
        if (ctx->pc != 0x15BBA0u) { return; }
    }
    ctx->pc = 0x15BBA0u;
    // 0x15bba0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x15bba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x15bba4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BBA4u;
    {
        const bool branch_taken_0x15bba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBA4u;
            // 0x15bba8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bba4) {
            ctx->pc = 0x15BBB8u;
            goto label_15bbb8;
        }
    }
    ctx->pc = 0x15BBACu;
    // 0x15bbac: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x15BBACu;
    SET_GPR_U32(ctx, 31, 0x15BBB4u);
    ctx->pc = 0x15BBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBACu;
            // 0x15bbb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BBB4u; }
        if (ctx->pc != 0x15BBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BBB4u; }
        if (ctx->pc != 0x15BBB4u) { return; }
    }
    ctx->pc = 0x15BBB4u;
    // 0x15bbb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15bbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15bbb8:
    // 0x15bbb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bbb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bbbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBC0u;
            // 0x15bbc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BBB8u: goto label_15bbb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BBC8u;
}
