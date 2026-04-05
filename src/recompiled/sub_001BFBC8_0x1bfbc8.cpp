#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFBC8
// Address: 0x1bfbc8 - 0x1bfc40
void sub_001BFBC8_0x1bfbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFBC8_0x1bfbc8");
#endif

    ctx->pc = 0x1bfbc8u;

    // 0x1bfbc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bfbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bfbcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bfbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bfbd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bfbd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bfbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfbdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bfbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbe0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1bfbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bfbe4: 0x0  nop
    ctx->pc = 0x1bfbe4u;
    // NOP
label_1bfbe8:
    // 0x1bfbe8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1bfbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1bfbec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bfbecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bfbf0: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1BFBF0u;
    SET_GPR_U32(ctx, 31, 0x1BFBF8u);
    ctx->pc = 0x1BFBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBF0u;
            // 0x1bfbf4: 0x8c440394  lw          $a0, 0x394($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBF8u; }
        if (ctx->pc != 0x1BFBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBF8u; }
        if (ctx->pc != 0x1BFBF8u) { return; }
    }
    ctx->pc = 0x1BFBF8u;
    // 0x1bfbf8: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1bfbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bfbfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BFBFCu;
    {
        const bool branch_taken_0x1bfbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBFCu;
            // 0x1bfc00: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbfc) {
            ctx->pc = 0x1BFBE8u;
            runtime->cooperativeGuestYield();
            goto label_1bfbe8;
        }
    }
    ctx->pc = 0x1BFC04u;
    // 0x1bfc04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bfc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1bfc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bfc0c: 0x0  nop
    ctx->pc = 0x1bfc0cu;
    // NOP
label_1bfc10:
    // 0x1bfc10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1bfc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1bfc14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bfc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bfc18: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1BFC18u;
    SET_GPR_U32(ctx, 31, 0x1BFC20u);
    ctx->pc = 0x1BFC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC18u;
            // 0x1bfc1c: 0x8c4403c4  lw          $a0, 0x3C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC20u; }
        if (ctx->pc != 0x1BFC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFC20u; }
        if (ctx->pc != 0x1BFC20u) { return; }
    }
    ctx->pc = 0x1BFC20u;
    // 0x1bfc20: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1bfc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bfc24: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BFC24u;
    {
        const bool branch_taken_0x1bfc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc24) {
            ctx->pc = 0x1BFC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC24u;
            // 0x1bfc28: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BFC10u;
            runtime->cooperativeGuestYield();
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFC2Cu;
    // 0x1bfc2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bfc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfc30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfc38: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC38u;
            // 0x1bfc3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFBE8u: goto label_1bfbe8;
            case 0x1BFC10u: goto label_1bfc10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFC40u;
}
