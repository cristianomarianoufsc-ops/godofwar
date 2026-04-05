#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023EF20
// Address: 0x23ef20 - 0x23ef58
void sub_0023EF20_0x23ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EF20_0x23ef20");
#endif

    ctx->pc = 0x23ef20u;

    // 0x23ef20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ef24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23ef28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ef2c: 0xc0964e8  jal         func_2593A0
    ctx->pc = 0x23EF2Cu;
    SET_GPR_U32(ctx, 31, 0x23EF34u);
    ctx->pc = 0x23EF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF2Cu;
            // 0x23ef30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2593A0u;
    if (runtime->hasFunction(0x2593A0u)) {
        auto targetFn = runtime->lookupFunction(0x2593A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EF34u; }
        if (ctx->pc != 0x23EF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2593a0_0x2593c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EF34u; }
        if (ctx->pc != 0x23EF34u) { return; }
    }
    ctx->pc = 0x23EF34u;
    // 0x23ef34: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23ef38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ef38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef3c: 0x246327f0  addiu       $v1, $v1, 0x27F0
    ctx->pc = 0x23ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10224));
    // 0x23ef40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ef40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ef44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23ef48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23ef48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ef4c: 0x3e00008  jr          $ra
    ctx->pc = 0x23EF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF4Cu;
            // 0x23ef50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EF54u;
    // 0x23ef54: 0x0  nop
    ctx->pc = 0x23ef54u;
    // NOP
}
