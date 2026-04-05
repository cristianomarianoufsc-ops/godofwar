#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BD28
// Address: 0x26bd28 - 0x26bd58
void sub_0026BD28_0x26bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BD28_0x26bd28");
#endif

    ctx->pc = 0x26bd28u;

    // 0x26bd28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bd2c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26bd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26bd30: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26bd34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26bd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bd3c: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x26BD3Cu;
    SET_GPR_U32(ctx, 31, 0x26BD44u);
    ctx->pc = 0x26BD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD3Cu;
            // 0x26bd40: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BF28u;
    if (runtime->hasFunction(0x26BF28u)) {
        auto targetFn = runtime->lookupFunction(0x26BF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD44u; }
        if (ctx->pc != 0x26BD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF28_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD44u; }
        if (ctx->pc != 0x26BD44u) { return; }
    }
    ctx->pc = 0x26BD44u;
    // 0x26bd44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bd48: 0x3e00008  jr          $ra
    ctx->pc = 0x26BD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD48u;
            // 0x26bd4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BD50u;
    // 0x26bd50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26bd54: 0x0  nop
    ctx->pc = 0x26bd54u;
    // NOP
}
