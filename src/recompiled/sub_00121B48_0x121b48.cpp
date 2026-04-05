#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00121B48
// Address: 0x121b48 - 0x121ba8
void sub_00121B48_0x121b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121B48_0x121b48");
#endif

    ctx->pc = 0x121b48u;

    // 0x121b48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121b4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x121b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x121b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x121b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x121b5c: 0xc04c012  jal         func_130048
    ctx->pc = 0x121B5Cu;
    SET_GPR_U32(ctx, 31, 0x121B64u);
    ctx->pc = 0x121B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121B5Cu;
            // 0x121b60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130048u;
    if (runtime->hasFunction(0x130048u)) {
        auto targetFn = runtime->lookupFunction(0x130048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121B64u; }
        if (ctx->pc != 0x121B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130048_0x130048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121B64u; }
        if (ctx->pc != 0x121B64u) { return; }
    }
    ctx->pc = 0x121B64u;
    // 0x121b64: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x121b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x121b68: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x121b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x121b6c: 0x2463c548  addiu       $v1, $v1, -0x3AB8
    ctx->pc = 0x121b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952264));
    // 0x121b70: 0xae110080  sw          $s1, 0x80($s0)
    ctx->pc = 0x121b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
    // 0x121b74: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x121b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x121b78: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x121b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x121b7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x121b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b80: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x121b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x121b84: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x121b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x121b88: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x121b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x121b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121b90: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x121b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x121b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121b98: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x121b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x121b9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x121b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x121BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121BA0u;
            // 0x121ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x121BA8u;
}
