#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018FC30
// Address: 0x18fc30 - 0x18fc88
void sub_0018FC30_0x18fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FC30_0x18fc30");
#endif

    ctx->pc = 0x18fc30u;

    // 0x18fc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18fc34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18fc38: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x18fc38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x18fc3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fc40: 0x8e02c8dc  lw          $v0, -0x3724($s0)
    ctx->pc = 0x18fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953180)));
    // 0x18fc44: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18FC44u;
    {
        const bool branch_taken_0x18fc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fc44) {
            ctx->pc = 0x18FC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC44u;
            // 0x18fc48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18FC74u;
            goto label_18fc74;
        }
    }
    ctx->pc = 0x18FC4Cu;
    // 0x18fc4c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x18FC4Cu;
    SET_GPR_U32(ctx, 31, 0x18FC54u);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC54u; }
        if (ctx->pc != 0x18FC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC54u; }
        if (ctx->pc != 0x18FC54u) { return; }
    }
    ctx->pc = 0x18FC54u;
    // 0x18fc54: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x18fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x18fc58: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x18fc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18fc5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18fc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18fc60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18fc60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18fc64: 0xc04f644  jal         func_13D910
    ctx->pc = 0x18FC64u;
    SET_GPR_U32(ctx, 31, 0x18FC6Cu);
    ctx->pc = 0x18FC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC64u;
            // 0x18fc68: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC6Cu; }
        if (ctx->pc != 0x18FC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC6Cu; }
        if (ctx->pc != 0x18FC6Cu) { return; }
    }
    ctx->pc = 0x18FC6Cu;
    // 0x18fc6c: 0xae02c8dc  sw          $v0, -0x3724($s0)
    ctx->pc = 0x18fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953180), GPR_U32(ctx, 2));
    // 0x18fc70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18fc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18fc74:
    // 0x18fc74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fc78: 0x3e00008  jr          $ra
    ctx->pc = 0x18FC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC78u;
            // 0x18fc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FC74u: goto label_18fc74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FC80u;
    // 0x18fc80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18fc84: 0x0  nop
    ctx->pc = 0x18fc84u;
    // NOP
}
