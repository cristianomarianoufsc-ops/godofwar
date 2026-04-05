#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023CB50
// Address: 0x23cb50 - 0x23cb88
void sub_0023CB50_0x23cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CB50_0x23cb50");
#endif

    ctx->pc = 0x23cb50u;

    // 0x23cb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23cb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23cb54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23cb58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23cb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cb60: 0xc08eb96  jal         func_23AE58
    ctx->pc = 0x23CB60u;
    SET_GPR_U32(ctx, 31, 0x23CB68u);
    ctx->pc = 0x23CB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB60u;
            // 0x23cb64: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE58u;
    if (runtime->hasFunction(0x23AE58u)) {
        auto targetFn = runtime->lookupFunction(0x23AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB68u; }
        if (ctx->pc != 0x23CB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae58_0x23ae70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB68u; }
        if (ctx->pc != 0x23CB68u) { return; }
    }
    ctx->pc = 0x23CB68u;
    // 0x23cb68: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23cb6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23cb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb70: 0x2463e940  addiu       $v1, $v1, -0x16C0
    ctx->pc = 0x23cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961472));
    // 0x23cb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cb78: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x23cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x23cb7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23cb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cb80: 0x3e00008  jr          $ra
    ctx->pc = 0x23CB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB80u;
            // 0x23cb84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CB88u;
}
