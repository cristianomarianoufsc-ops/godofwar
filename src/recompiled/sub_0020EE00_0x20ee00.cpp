#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020EE00
// Address: 0x20ee00 - 0x20ee58
void sub_0020EE00_0x20ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EE00_0x20ee00");
#endif

    ctx->pc = 0x20ee00u;

    // 0x20ee00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ee04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20ee04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20ee08: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x20ee0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ee10: 0x8e02e460  lw          $v0, -0x1BA0($s0)
    ctx->pc = 0x20ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960224)));
    // 0x20ee14: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20EE14u;
    {
        const bool branch_taken_0x20ee14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ee14) {
            ctx->pc = 0x20EE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20EE14u;
            // 0x20ee18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20EE44u;
            goto label_20ee44;
        }
    }
    ctx->pc = 0x20EE1Cu;
    // 0x20ee1c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x20EE1Cu;
    SET_GPR_U32(ctx, 31, 0x20EE24u);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE24u; }
        if (ctx->pc != 0x20EE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE24u; }
        if (ctx->pc != 0x20EE24u) { return; }
    }
    ctx->pc = 0x20EE24u;
    // 0x20ee24: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x20ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x20ee28: 0x240502a0  addiu       $a1, $zero, 0x2A0
    ctx->pc = 0x20ee28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x20ee2c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20ee2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ee30: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x20ee30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ee34: 0xc04f644  jal         func_13D910
    ctx->pc = 0x20EE34u;
    SET_GPR_U32(ctx, 31, 0x20EE3Cu);
    ctx->pc = 0x20EE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EE34u;
            // 0x20ee38: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE3Cu; }
        if (ctx->pc != 0x20EE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE3Cu; }
        if (ctx->pc != 0x20EE3Cu) { return; }
    }
    ctx->pc = 0x20EE3Cu;
    // 0x20ee3c: 0xae02e460  sw          $v0, -0x1BA0($s0)
    ctx->pc = 0x20ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960224), GPR_U32(ctx, 2));
    // 0x20ee40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20ee40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ee44:
    // 0x20ee44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ee44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ee48: 0x3e00008  jr          $ra
    ctx->pc = 0x20EE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EE48u;
            // 0x20ee4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EE44u: goto label_20ee44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20EE50u;
    // 0x20ee50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20ee54: 0x0  nop
    ctx->pc = 0x20ee54u;
    // NOP
}
