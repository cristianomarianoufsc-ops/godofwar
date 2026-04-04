#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178D60
// Address: 0x178d60 - 0x178da8
void sub_00178D60_0x178d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178D60_0x178d60");
#endif

    ctx->pc = 0x178d60u;

    // 0x178d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178d64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x178d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x178d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178d74: 0xc04f824  jal         func_13E090
    ctx->pc = 0x178D74u;
    SET_GPR_U32(ctx, 31, 0x178D7Cu);
    ctx->pc = 0x178D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178D74u;
            // 0x178d78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D7Cu; }
        if (ctx->pc != 0x178D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D7Cu; }
        if (ctx->pc != 0x178D7Cu) { return; }
    }
    ctx->pc = 0x178D7Cu;
    // 0x178d7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x178d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x178d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d88: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x178d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x178d8c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x178D8Cu;
    SET_GPR_U32(ctx, 31, 0x178D94u);
    ctx->pc = 0x178D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178D8Cu;
            // 0x178d90: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D94u; }
        if (ctx->pc != 0x178D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178D94u; }
        if (ctx->pc != 0x178D94u) { return; }
    }
    ctx->pc = 0x178D94u;
    // 0x178d94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x178d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178d98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178da0: 0x3e00008  jr          $ra
    ctx->pc = 0x178DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178DA0u;
            // 0x178da4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178DA8u;
}
