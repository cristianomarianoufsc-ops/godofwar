#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBB30
// Address: 0x1bbb30 - 0x1bbba0
void sub_001BBB30_0x1bbb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBB30_0x1bbb30");
#endif

    ctx->pc = 0x1bbb30u;

    // 0x1bbb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbb34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bbb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bbb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbb3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bbb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bbb44: 0x0  nop
    ctx->pc = 0x1bbb44u;
    // NOP
label_1bbb48:
    // 0x1bbb48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bbb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bbb4c: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x1bbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x1bbb50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bbb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbb58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bbb58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bbb5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bbb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbb60: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1bbb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bbb64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb68: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bbb6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bbb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bbb70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBB70u;
    {
        const bool branch_taken_0x1bbb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB70u;
            // 0x1bbb74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb70) {
            ctx->pc = 0x1BBB80u;
            goto label_1bbb80;
        }
    }
    ctx->pc = 0x1BBB78u;
    // 0x1bbb78: 0xc06ec3e  jal         func_1BB0F8
    ctx->pc = 0x1BBB78u;
    SET_GPR_U32(ctx, 31, 0x1BBB80u);
    ctx->pc = 0x1BB0F8u;
    if (runtime->hasFunction(0x1BB0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB80u; }
        if (ctx->pc != 0x1BBB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0f8_0x1bb1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBB80u; }
        if (ctx->pc != 0x1BBB80u) { return; }
    }
    ctx->pc = 0x1BBB80u;
label_1bbb80:
    // 0x1bbb80: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1bbb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bbb84: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1BBB84u;
    {
        const bool branch_taken_0x1bbb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb84) {
            ctx->pc = 0x1BBB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB84u;
            // 0x1bbb88: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBB48u;
            runtime->cooperativeGuestYield();
            goto label_1bbb48;
        }
    }
    ctx->pc = 0x1BBB8Cu;
    // 0x1bbb8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bbb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbb94: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB94u;
            // 0x1bbb98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BBB48u: goto label_1bbb48;
            case 0x1BBB80u: goto label_1bbb80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBB9Cu;
    // 0x1bbb9c: 0x0  nop
    ctx->pc = 0x1bbb9cu;
    // NOP
}
