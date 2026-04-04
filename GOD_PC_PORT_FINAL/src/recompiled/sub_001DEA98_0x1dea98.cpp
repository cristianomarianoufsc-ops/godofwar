#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DEA98
// Address: 0x1dea98 - 0x1deaf0
void sub_001DEA98_0x1dea98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEA98_0x1dea98");
#endif

    ctx->pc = 0x1dea98u;

    // 0x1dea98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dea98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dea9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dea9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1deaa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1deaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1deaa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1deaa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deaa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deaac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1deaacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deab0: 0xc061a3c  jal         func_1868F0
    ctx->pc = 0x1DEAB0u;
    SET_GPR_U32(ctx, 31, 0x1DEAB8u);
    ctx->pc = 0x1DEAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAB0u;
            // 0x1deab4: 0x8e2401b4  lw          $a0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1868F0u;
    if (runtime->hasFunction(0x1868F0u)) {
        auto targetFn = runtime->lookupFunction(0x1868F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAB8u; }
        if (ctx->pc != 0x1DEAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001868F0_0x1868f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAB8u; }
        if (ctx->pc != 0x1DEAB8u) { return; }
    }
    ctx->pc = 0x1DEAB8u;
    // 0x1deab8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEAB8u;
    {
        const bool branch_taken_0x1deab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deab8) {
            ctx->pc = 0x1DEABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAB8u;
            // 0x1deabc: 0x8e2401a0  lw          $a0, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEAD4u;
            goto label_1dead4;
        }
    }
    ctx->pc = 0x1DEAC0u;
    // 0x1deac0: 0xc05d49a  jal         func_175268
    ctx->pc = 0x1DEAC0u;
    SET_GPR_U32(ctx, 31, 0x1DEAC8u);
    ctx->pc = 0x1DEAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAC0u;
            // 0x1deac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175268u;
    if (runtime->hasFunction(0x175268u)) {
        auto targetFn = runtime->lookupFunction(0x175268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAC8u; }
        if (ctx->pc != 0x1DEAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175268_0x175268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAC8u; }
        if (ctx->pc != 0x1DEAC8u) { return; }
    }
    ctx->pc = 0x1DEAC8u;
    // 0x1deac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEAC8u;
    {
        const bool branch_taken_0x1deac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAC8u;
            // 0x1deacc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deac8) {
            ctx->pc = 0x1DEAE0u;
            goto label_1deae0;
        }
    }
    ctx->pc = 0x1DEAD0u;
    // 0x1dead0: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x1dead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_1dead4:
    // 0x1dead4: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1DEAD4u;
    SET_GPR_U32(ctx, 31, 0x1DEADCu);
    ctx->pc = 0x1DEAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAD4u;
            // 0x1dead8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEADCu; }
        if (ctx->pc != 0x1DEADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEADCu; }
        if (ctx->pc != 0x1DEADCu) { return; }
    }
    ctx->pc = 0x1DEADCu;
    // 0x1deadc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1deadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1deae0:
    // 0x1deae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1deae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAE8u;
            // 0x1deaec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEAD4u: goto label_1dead4;
            case 0x1DEAE0u: goto label_1deae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEAF0u;
}
