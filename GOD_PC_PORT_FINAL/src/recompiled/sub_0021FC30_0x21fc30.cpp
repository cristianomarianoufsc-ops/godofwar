#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FC30
// Address: 0x21fc30 - 0x21fc68
void sub_0021FC30_0x21fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FC30_0x21fc30");
#endif

    ctx->pc = 0x21fc30u;

    // 0x21fc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fc34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fc38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21fc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21fc3c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21fc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21fc40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fc44: 0xc06e25a  jal         func_1B8968
    ctx->pc = 0x21FC44u;
    SET_GPR_U32(ctx, 31, 0x21FC4Cu);
    ctx->pc = 0x21FC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC44u;
            // 0x21fc48: 0x8e04cb94  lw          $a0, -0x346C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8968u;
    if (runtime->hasFunction(0x1B8968u)) {
        auto targetFn = runtime->lookupFunction(0x1B8968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC4Cu; }
        if (ctx->pc != 0x21FC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8968_0x1b8968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC4Cu; }
        if (ctx->pc != 0x21FC4Cu) { return; }
    }
    ctx->pc = 0x21FC4Cu;
    // 0x21fc4c: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x21fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21fc50: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x21FC50u;
    SET_GPR_U32(ctx, 31, 0x21FC58u);
    ctx->pc = 0x21FC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC50u;
            // 0x21fc54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC58u; }
        if (ctx->pc != 0x21FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC58u; }
        if (ctx->pc != 0x21FC58u) { return; }
    }
    ctx->pc = 0x21FC58u;
    // 0x21fc58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21fc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fc5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fc60: 0x3e00008  jr          $ra
    ctx->pc = 0x21FC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC60u;
            // 0x21fc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FC68u;
}
