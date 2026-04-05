#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175B38
// Address: 0x175b38 - 0x175ba0
void sub_00175B38_0x175b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175B38_0x175b38");
#endif

    ctx->pc = 0x175b38u;

    // 0x175b38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175b3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x175b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x175b40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x175b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x175b44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x175b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x175b4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x175b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175b58: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x175B58u;
    SET_GPR_U32(ctx, 31, 0x175B60u);
    ctx->pc = 0x175B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B58u;
            // 0x175b5c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B60u; }
        if (ctx->pc != 0x175B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B60u; }
        if (ctx->pc != 0x175B60u) { return; }
    }
    ctx->pc = 0x175B60u;
    // 0x175b60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x175b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b68: 0xc05d684  jal         func_175A10
    ctx->pc = 0x175B68u;
    SET_GPR_U32(ctx, 31, 0x175B70u);
    ctx->pc = 0x175B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B68u;
            // 0x175b6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A10u;
    if (runtime->hasFunction(0x175A10u)) {
        auto targetFn = runtime->lookupFunction(0x175A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B70u; }
        if (ctx->pc != 0x175B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A10_0x175a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B70u; }
        if (ctx->pc != 0x175B70u) { return; }
    }
    ctx->pc = 0x175B70u;
    // 0x175b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b74: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x175b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x175b78: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x175b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175b7c: 0xc05db16  jal         func_176C58
    ctx->pc = 0x175B7Cu;
    SET_GPR_U32(ctx, 31, 0x175B84u);
    ctx->pc = 0x175B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B7Cu;
            // 0x175b80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176C58u;
    if (runtime->hasFunction(0x176C58u)) {
        auto targetFn = runtime->lookupFunction(0x176C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B84u; }
        if (ctx->pc != 0x175B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176C58_0x176c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B84u; }
        if (ctx->pc != 0x175B84u) { return; }
    }
    ctx->pc = 0x175B84u;
    // 0x175b84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175b88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x175b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175b8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x175b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175b90: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x175b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b98: 0x3e00008  jr          $ra
    ctx->pc = 0x175B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B98u;
            // 0x175b9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175BA0u;
}
