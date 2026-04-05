#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4B50
// Address: 0x1b4b50 - 0x1b4ba8
void sub_001B4B50_0x1b4b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4B50_0x1b4b50");
#endif

    ctx->pc = 0x1b4b50u;

    // 0x1b4b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4b54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b4b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b4b58: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1b4b58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1b4b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4b60: 0x8e02cb8c  lw          $v0, -0x3474($s0)
    ctx->pc = 0x1b4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953868)));
    // 0x1b4b64: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4B64u;
    {
        const bool branch_taken_0x1b4b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b64) {
            ctx->pc = 0x1B4B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B64u;
            // 0x1b4b68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4B94u;
            goto label_1b4b94;
        }
    }
    ctx->pc = 0x1B4B6Cu;
    // 0x1b4b6c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1B4B6Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B74u);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B74u; }
        if (ctx->pc != 0x1B4B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B74u; }
        if (ctx->pc != 0x1B4B74u) { return; }
    }
    ctx->pc = 0x1B4B74u;
    // 0x1b4b74: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1b4b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1b4b78: 0x240501b0  addiu       $a1, $zero, 0x1B0
    ctx->pc = 0x1b4b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    // 0x1b4b7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b4b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b80: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1b4b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4b84: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1B4B84u;
    SET_GPR_U32(ctx, 31, 0x1B4B8Cu);
    ctx->pc = 0x1B4B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B84u;
            // 0x1b4b88: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B8Cu; }
        if (ctx->pc != 0x1B4B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B8Cu; }
        if (ctx->pc != 0x1B4B8Cu) { return; }
    }
    ctx->pc = 0x1B4B8Cu;
    // 0x1b4b8c: 0xae02cb8c  sw          $v0, -0x3474($s0)
    ctx->pc = 0x1b4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953868), GPR_U32(ctx, 2));
    // 0x1b4b90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b4b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4b94:
    // 0x1b4b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B98u;
            // 0x1b4b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4B94u: goto label_1b4b94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4BA0u;
    // 0x1b4ba0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4ba4: 0x0  nop
    ctx->pc = 0x1b4ba4u;
    // NOP
}
