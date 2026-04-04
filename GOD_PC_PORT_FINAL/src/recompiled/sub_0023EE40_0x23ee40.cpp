#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023EE40
// Address: 0x23ee40 - 0x23ee78
void sub_0023EE40_0x23ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EE40_0x23ee40");
#endif

    ctx->pc = 0x23ee40u;

    // 0x23ee40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ee44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23ee48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ee4c: 0xc0964e8  jal         func_2593A0
    ctx->pc = 0x23EE4Cu;
    SET_GPR_U32(ctx, 31, 0x23EE54u);
    ctx->pc = 0x23EE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE4Cu;
            // 0x23ee50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2593A0u;
    if (runtime->hasFunction(0x2593A0u)) {
        auto targetFn = runtime->lookupFunction(0x2593A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EE54u; }
        if (ctx->pc != 0x23EE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2593a0_0x2593c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EE54u; }
        if (ctx->pc != 0x23EE54u) { return; }
    }
    ctx->pc = 0x23EE54u;
    // 0x23ee54: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23ee58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ee58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee5c: 0x24632850  addiu       $v1, $v1, 0x2850
    ctx->pc = 0x23ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10320));
    // 0x23ee60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ee60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ee64: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23ee68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23ee68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ee6c: 0x3e00008  jr          $ra
    ctx->pc = 0x23EE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EE6Cu;
            // 0x23ee70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EE74u;
    // 0x23ee74: 0x0  nop
    ctx->pc = 0x23ee74u;
    // NOP
}
